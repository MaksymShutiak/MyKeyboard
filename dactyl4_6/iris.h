#pragma once
#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6, LA7, RA1, RA2, RA3, RA4, RA5, RA6, RA7, \
    LB1, LB2, LB3, LB4, LB5, LB6, LB7, RB1, RB2, RB3, RB4, RB5, RB6, RB7, \
    LC1, LC2, LC3, LC4, LC5, LC6, LC7, RC1, RC2, RC3, RC4, RC5, RC6, RC7, \
    LD1, LD2, LD3, LD4, LD5, LD6, LD7, RD1, RD2, RD3, RD4, RD5, RD6, RD7 \
) \
{ \
   { LA1, LA2, LA3, LA4, LA5, LA6, LA7 }, \
   { LB1, LB2, LB3, LB4, LB5, LB6, LB7 }, \
   { LC1, LC2, LC3, LC4, LC5, LC6, LC7 }, \
   { LD1, LD2, LD3, LD4, LD5, LD6, LD7 }, \
   { RA1, RA2, RA3, RA4, RA5, RA6, RA7 }, \
   { RB1, RB2, RB3, RB4, RB5, RB6, RB7 }, \
   { RC1, RC2, RC3, RC4, RC5, RC6, RC7 }, \
   { RD1, RD2, RD3, RD4, RD5, RD6, RD7 }, \
 }

