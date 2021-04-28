//
//  gaen.h
//  en-gen
//
//  Created by Dirk-Willem van Gulik on 19/09/2020.
//
#ifndef gaen_h
#define gaen_h

#include <time.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __FreeBSD__
#include <sys/limits.h>
#include <sys/types.h>
#endif

typedef unsigned int    interval_t;

typedef uint8_t         tek_t[16];
typedef uint8_t         rpik_t[16];
typedef uint8_t         rpiij_t[16];
typedef uint8_t         tki_t[16];
typedef uint8_t         aem_t[16];
typedef uint8_t         aemk_t[16];
typedef uint8_t         metadata_t[4];

#define TTL (10 * 60) // 10 minutes
#define TEKRollingPeriod (144)


time_t interval2time(interval_t interval);
interval_t time2interval(time_t t);
interval_t time2startinterval(time_t t);

void HKDF(uint8_t *out,  uint8_t * key, size_t keylen, uint8_t * info, size_t infolen, size_t outlen);

void fillRpik(rpik_t rpik, tek_t tek);
void fillAemk(aemk_t aemk, tek_t tek);
void fillRpiij(rpiij_t rpiij, rpik_t rpik, interval_t ENINj);
void fillMetadata(metadata_t md, uint8_t powerlevel);
void fillAem(aem_t aem, aemk_t aemk, rpik_t rpik, metadata_t metadata);

void fillRpiiDAY(rpiij_t rpiij, tek_t tek, interval_t day);

void printhex(const uint8_t * buff, size_t l);
void snprintfhex(char * out, size_t n, const uint8_t * buff, size_t l);
#endif /* gaen_h */
