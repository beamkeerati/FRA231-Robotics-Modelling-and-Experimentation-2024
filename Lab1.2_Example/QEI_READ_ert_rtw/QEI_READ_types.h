/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: QEI_READ_types.h
 *
 * Code generated for Simulink model 'QEI_READ'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct 16 15:03:40 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef QEI_READ_types_h_
#define QEI_READ_types_h_
#include "rtwtypes.h"
#include "stm_timer_ll.h"

/* Custom Type definition for MATLABSystem: '<Root>/Encoder' */
#include "stm_timer_ll.h"
#include "stm_timer_ll.h"
#ifndef struct_tag_qYaJQJIsmU5kxDdgK7jtpE
#define struct_tag_qYaJQJIsmU5kxDdgK7jtpE

struct tag_qYaJQJIsmU5kxDdgK7jtpE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  TIM_Type_T* TimerHandle;
};

#endif                                 /* struct_tag_qYaJQJIsmU5kxDdgK7jtpE */

#ifndef typedef_stm32cube_blocks_EncoderBlock_T
#define typedef_stm32cube_blocks_EncoderBlock_T

typedef struct tag_qYaJQJIsmU5kxDdgK7jtpE stm32cube_blocks_EncoderBlock_T;

#endif                             /* typedef_stm32cube_blocks_EncoderBlock_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_QEI_READ_T RT_MODEL_QEI_READ_T;

#endif                                 /* QEI_READ_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
