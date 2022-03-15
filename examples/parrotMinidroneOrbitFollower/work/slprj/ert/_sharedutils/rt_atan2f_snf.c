/*
 * rt_atan2f_snf.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 3.3
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Tue Nov 30 13:04:26 2021
 * Created for block: flightControlSystem
 */

#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "rt_defines.h"
#include "rt_atan2f_snf.h"

real32_T rt_atan2f_snf(real32_T u0, real32_T u1)
{
  int32_T u0_p;
  int32_T u1_p;
  real32_T y;
  if (rtIsNaNF(u0) || rtIsNaNF(u1)) {
    y = (rtNaNF);
  } else if (rtIsInfF(u0) && rtIsInfF(u1)) {
    if (u0 > 0.0F) {
      u0_p = 1;
    } else {
      u0_p = -1;
    }

    if (u1 > 0.0F) {
      u1_p = 1;
    } else {
      u1_p = -1;
    }

    y = (real32_T)atan2((real32_T)u0_p, (real32_T)u1_p);
  } else if (u1 == 0.0F) {
    if (u0 > 0.0F) {
      y = RT_PIF / 2.0F;
    } else if (u0 < 0.0F) {
      y = -(RT_PIF / 2.0F);
    } else {
      y = 0.0F;
    }
  } else {
    y = (real32_T)atan2(u0, u1);
  }

  return y;
}
