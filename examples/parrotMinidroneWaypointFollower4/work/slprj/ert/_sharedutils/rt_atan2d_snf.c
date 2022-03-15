/*
 * rt_atan2d_snf.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "flightControlSystem".
 *
 * Model version              : 3.1
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Mon Nov 29 15:43:42 2021
 * Created for block: flightControlSystem
 */

#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include <math.h>
#include "rt_defines.h"
#include "rt_atan2d_snf.h"

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_p;
  int32_T u1_p;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_p = 1;
    } else {
      u0_p = -1;
    }

    if (u1 > 0.0) {
      u1_p = 1;
    } else {
      u1_p = -1;
    }

    y = atan2(u0_p, u1_p);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}
