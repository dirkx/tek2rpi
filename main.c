//
//  gaen.c
//  en-gen
//
//  Created by Dirk-Willem van Gulik on 19/09/2020.
//

#include "gaen.h"
#include "mbedtls/base64.h"

int main(int argc, char ** argv) {
	if (argc < 2 || argc > 3) {
		fprintf(stderr,"Syntax: %s  <TEK as Hex or base64> [interval]\n",argv[0]);
		exit(1);
	};

	const char * tek_as_str = argv[1];
	tek_t tek;
	size_t olen = 0;

	if (strlen(tek_as_str) == 16 * 2) {
	 	for(int i = 0;i < 16;i++) {
			char hex[3] = { tek_as_str[i*2], tek_as_str[i*2+1], 0 };
			tek[i] = strtoul(hex,NULL,16);
		};
	} 
	else if (mbedtls_base64_decode(tek, 16, &olen, (const unsigned char *)tek_as_str, strlen(tek_as_str)) != 0 || olen != 16) {
		fprintf(stderr,"Not a valid HEX 16 digit or base64 tek\n");
		exit(1);
	};

	printf("TEK     : "); printhex(tek,sizeof(tek)); printf("\n");

	interval_t day_i = time2startinterval(time(NULL));
        if (argc > 2) 
		day_i = time2startinterval(interval2time(atoi(argv[2])));

    	time_t t = interval2time(day_i);
	printf("Period  : %d\n", day_i);
	printf("        : %ld Julian Seconds\n", t);

	char buff[256];
	strncpy(buff,asctime(gmtime(&t)),256);
        char * p = strstr(buff,"00:00:00"), *q = 0;
	if (p) { 
		*p = 0;
		q = index(p+1,' ');
	};
	printf("Day     : %s\n", buff);

        printf("RPIs for this day:\n");

	rpik_t rpik;
	fillRpik(rpik, tek);

  	for (int j = 0; j < TEKRollingPeriod; j++) {
		interval_t ii = day_i + j;
    		time_t t = interval2time(ii);

		rpik_t rpikij;
    		fillRpiij(rpikij, rpik, ii);

		printf("  %05d: ",j);
		printhex(rpikij,16); 

		strncpy(buff,asctime(gmtime(&t)),256);
		if (q) *q = 0;
                printf(" -- %s\n",p);
  	};
}
