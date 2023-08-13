#pragma once
#include "quantum.h"

#define ___ KC_NO

#define LAYOUT( \
    LA1, LA2, LA3, LA4, LA5, LA6, RA1, RA2, RA3, RA4, RA5, RA6, \
    LB1, LB2, LB3, LB4, LB5, LB6, RB1, RB2, RB3, RB4, RB5, RB6, \
    LC1, LC2, LC3, LC4, LC5, LC6, RC1, RC2, RC3, RC4, RC5, RC6, \
    LD1, LD2, LD3, LD4, LD5, LD6, RD1, RD2, RD3, RD4, RD5, RD6, \
              LE1, LE2, LE3, LE4, RE1, RE2, RE3, RE4            \
) \
{ \
   { LA1, LA2, LA3, LA4, LA5, LA6 }, \
   { LB1, LB2, LB3, LB4, LB5, LB6 }, \
   { LC1, LC2, LC3, LC4, LC5, LC6 }, \
   { LD1, LD2, LD3, LD4, LD5, LD6 }, \
   { ___, ___, LE1, LE2, LE3, LE4 }, \
   { RA1, RA2, RA3, RA4, RA5, RA6 }, \
   { RB1, RB2, RB3, RB4, RB5, RB6 }, \
   { RC1, RC2, RC3, RC4, RC5, RC6 }, \
   { RD1, RD2, RD3, RD4, RD5, RD6 }, \
   { RE1, RE2, RE3, RE4, ___, ___ }  \
 }

