/*
 * AS5600_Driver.c
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

#include "AS5600_Driver.h"
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "AS5600_Driver_private.h"
#include <string.h>

/* Block signals (default storage) */
B_AS5600_Driver_T AS5600_Driver_B;

/* Block states (default storage) */
DW_AS5600_Driver_T AS5600_Driver_DW;

/* Real-time model */
static RT_MODEL_AS5600_Driver_T AS5600_Driver_M_;
RT_MODEL_AS5600_Driver_T *const AS5600_Driver_M = &AS5600_Driver_M_;

/* Model step function */
void AS5600_Driver_step(void)
{
  real_T sampleTime;
  boolean_T tmp;

  /* MATLABSystem: '<Root>/MATLAB System1' */
  if (AS5600_Driver_DW.obj.SampleTime !=
      AS5600_Driver_P.MATLABSystem1_SampleTime) {
    /* Start for MATLABSystem: '<Root>/MATLAB System1' */
    tmp = rtIsInf(AS5600_Driver_P.MATLABSystem1_SampleTime);
    if (((!tmp) && (!rtIsNaN(AS5600_Driver_P.MATLABSystem1_SampleTime))) || tmp)
    {
      sampleTime = AS5600_Driver_P.MATLABSystem1_SampleTime;
    }

    AS5600_Driver_DW.obj.SampleTime = sampleTime;
  }

  /* MATLABSystem: '<Root>/MATLAB System1' */
  /*         %% Define output properties */
  /* 'AS5600Driver:51' num = 0; */
  /* 'AS5600Driver:55' num = 1; */
  /* 'AS5600Driver:38' counts = uint16(0); */
  /* 'AS5600Driver:39' if isempty(coder.target) */
  /* 'AS5600Driver:41' else */
  /*  Call C-function implementing device output */
  /* 'AS5600Driver:43' coder.ceval('AS5600Driver_Step', coder.wref(counts)); */
  AS5600Driver_Step(&AS5600_Driver_B.current_mA);

  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AS5600_Driver_M->Timing.clockTick0)) {
    ++AS5600_Driver_M->Timing.clockTickH0;
  }

  AS5600_Driver_M->Timing.taskTime0 = AS5600_Driver_M->Timing.clockTick0 *
    AS5600_Driver_M->Timing.stepSize0 + AS5600_Driver_M->Timing.clockTickH0 *
    AS5600_Driver_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AS5600_Driver_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)AS5600_Driver_M, 0,
                sizeof(RT_MODEL_AS5600_Driver_T));
  rtmSetTFinal(AS5600_Driver_M, 60.0);
  AS5600_Driver_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  AS5600_Driver_M->Sizes.checksums[0] = (4205198272U);
  AS5600_Driver_M->Sizes.checksums[1] = (4164223123U);
  AS5600_Driver_M->Sizes.checksums[2] = (4273457662U);
  AS5600_Driver_M->Sizes.checksums[3] = (3398029660U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    AS5600_Driver_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(AS5600_Driver_M->extModeInfo,
      &AS5600_Driver_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(AS5600_Driver_M->extModeInfo,
                        AS5600_Driver_M->Sizes.checksums);
    rteiSetTPtr(AS5600_Driver_M->extModeInfo, rtmGetTPtr(AS5600_Driver_M));
  }

  /* block I/O */
  (void) memset(((void *) &AS5600_Driver_B), 0,
                sizeof(B_AS5600_Driver_T));

  /* states (dwork) */
  (void) memset((void *)&AS5600_Driver_DW, 0,
                sizeof(DW_AS5600_Driver_T));

  {
    real_T sampleTime;
    boolean_T tmp;

    /* Start for MATLABSystem: '<Root>/MATLAB System1' */
    /*  Constructor */
    /* 'AS5600Driver:1' realtime.internal.SourceSampleTime */
    /* 'AS5600Driver:2' coder.ExternalDependency */
    /*  Support name-value pair arguments when constructing the object. */
    /* 'AS5600Driver:22' setProperties(obj,nargin,varargin{:}); */
    tmp = rtIsInf(AS5600_Driver_P.MATLABSystem1_SampleTime);
    if (((!tmp) && (!rtIsNaN(AS5600_Driver_P.MATLABSystem1_SampleTime))) || tmp)
    {
      sampleTime = AS5600_Driver_P.MATLABSystem1_SampleTime;
    }

    AS5600_Driver_DW.obj.SampleTime = sampleTime;
    AS5600_Driver_DW.obj.isInitialized = 1;

    /*         %% Define output properties */
    /* 'AS5600Driver:51' num = 0; */
    /*         %% Define output properties */
    /* 'AS5600Driver:51' num = 0; */
    /* 'AS5600Driver:28' if isempty(coder.target) */
    /* 'AS5600Driver:30' else */
    /*  Call C-function implementing device initialization */
    /* 'AS5600Driver:32' coder.cinclude('AS5600Driver.h'); */
    /* 'AS5600Driver:33' coder.ceval('AS5600Driver_Init'); */
    AS5600Driver_Init();

    /* End of Start for MATLABSystem: '<Root>/MATLAB System1' */
  }
}

/* Model terminate function */
void AS5600_Driver_terminate(void)
{
  /* (no terminate code required) */
}
