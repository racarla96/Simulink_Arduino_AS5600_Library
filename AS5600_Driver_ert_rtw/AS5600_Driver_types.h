/*
 * AS5600_Driver_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AS5600_Driver".
 *
 * Model version              : 1.11
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Wed Apr  9 11:48:16 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AS5600_Driver_types_h_
#define RTW_HEADER_AS5600_Driver_types_h_
#include "rtwtypes.h"
#ifndef struct_tag_Bczxg3fpCeFdt7exAohIwC
#define struct_tag_Bczxg3fpCeFdt7exAohIwC

struct tag_Bczxg3fpCeFdt7exAohIwC
{
  int32_T isInitialized;
  real_T SampleTime;
};

#endif                                 /* struct_tag_Bczxg3fpCeFdt7exAohIwC */

#ifndef typedef_AS5600Driver_AS5600_Driver_T
#define typedef_AS5600Driver_AS5600_Driver_T

typedef struct tag_Bczxg3fpCeFdt7exAohIwC AS5600Driver_AS5600_Driver_T;

#endif                                /* typedef_AS5600Driver_AS5600_Driver_T */

/* Parameters (default storage) */
typedef struct P_AS5600_Driver_T_ P_AS5600_Driver_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_AS5600_Driver_T RT_MODEL_AS5600_Driver_T;

#endif                                 /* RTW_HEADER_AS5600_Driver_types_h_ */
