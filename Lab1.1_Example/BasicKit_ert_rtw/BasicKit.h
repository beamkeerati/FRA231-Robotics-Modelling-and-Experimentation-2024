/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BasicKit.h
 *
 * Code generated for Simulink model 'BasicKit'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct  9 20:19:52 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BasicKit_h_
#define BasicKit_h_
#ifndef BasicKit_COMMON_INCLUDES_
#define BasicKit_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#include "main.h"
#endif                                 /* BasicKit_COMMON_INCLUDES_ */

#include "BasicKit_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  uint32_T Encoder_o1;                 /* '<Root>/Encoder' */
  uint16_T AnalogtoDigitalConverter;   /* '<S6>/Analog to Digital Converter' */
  boolean_T Encoder_o2;                /* '<Root>/Encoder' */
  boolean_T DigitalPortRead;           /* '<S10>/Digital Port Read' */
  boolean_T DigitalPortRead_n;         /* '<S8>/Digital Port Read' */
} B_BasicKit_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_AnalogInput__T obj; /* '<S6>/Analog to Digital Converter' */
  stm32cube_blocks_EncoderBlock_T obj_i;/* '<Root>/Encoder' */
} DW_BasicKit_T;

/* Real-time Model Data Structure */
struct tag_RTM_BasicKit_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern B_BasicKit_T BasicKit_B;

/* Block states (default storage) */
extern DW_BasicKit_T BasicKit_DW;

/* Model entry point functions */
extern void BasicKit_initialize(void);
extern void BasicKit_step(void);
extern void BasicKit_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BasicKit_T *const BasicKit_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BasicKit'
 * '<S1>'   : 'BasicKit/Analog to Digital Converter'
 * '<S2>'   : 'BasicKit/Digital Port Read2'
 * '<S3>'   : 'BasicKit/Digital Port Read3'
 * '<S4>'   : 'BasicKit/Digital Port Write'
 * '<S5>'   : 'BasicKit/Analog to Digital Converter/ECSoC'
 * '<S6>'   : 'BasicKit/Analog to Digital Converter/ECSoC/ECSimCodegen'
 * '<S7>'   : 'BasicKit/Digital Port Read2/ECSoC'
 * '<S8>'   : 'BasicKit/Digital Port Read2/ECSoC/ECSimCodegen'
 * '<S9>'   : 'BasicKit/Digital Port Read3/ECSoC'
 * '<S10>'  : 'BasicKit/Digital Port Read3/ECSoC/ECSimCodegen'
 * '<S11>'  : 'BasicKit/Digital Port Write/ECSoC'
 * '<S12>'  : 'BasicKit/Digital Port Write/ECSoC/ECSimCodegen'
 */
#endif                                 /* BasicKit_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
