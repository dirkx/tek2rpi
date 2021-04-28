//
//  gaen.c
//  en-gen
//
//  Created by Dirk-Willem van Gulik on 19/09/2020.
//

#include "gaen.h"

int main(int argc, char ** argv) {
	if (argc < 2 || argc > 3) {
		fprintf(stderr,"Syntax: %s  <TEK> [interval]\n",argv[0]);
		exit(1);
	};

	char * tek_as_str = argv[1];
	if (strlen(tek_as_str) != 16 * 2) {
		fprintf(stderr,"Not a valid HEX 16 digit tex\n");
		exit(1);
	};

	tek_t tek;
	for(int i = 0;i < 16;i++) {
		char hex[3] = { tek_as_str[i*2], tek_as_str[i*2+1], 0 };
		tek[i] = strtoul(hex,NULL,16);
	};
	printf("TEK     : "); printhex(tek,sizeof(tek)); printf("\n");

	interval_t day_i = time2startinterval(time(NULL));
        if (argc > 2) 
		day_i = atoi(argv[2]);

    	time_t t = interval2time(day_i);
	printf("Period  : %d\n", day_i);

	char buff[256];
	strncpy(buff,asctime(gmtime(&t)),256);
        char * p = strstr(buff,"00:00:00");
	if (p) *p = 0;
	char * q = index(p+1,' ');
	printf("Day     :%s\n", buff);

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
