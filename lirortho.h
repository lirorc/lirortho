#pragma once

#include "quantum.h"

#define LAYOUT( \
  k00, k01, k02, k03, k04, k06, k07, k08, k09, k0A,\
  k10, k11, k12, k13, k14, k16, k17, k18, k19, k1A,\
  k20, k21, k22, k23, k24, k26, k27, k28, k29, k2A \
) \
{ \
  { k00, k01, k02, k03, k04, k06, k07, k08, k09, k0A,},\
  { k10, k11, k12, k13, k14, k16, k17, k18, k19, k1A,},\
  { k20, k21, k22, k23, k24, k26, k27, k28, k29, k2A } \
}
