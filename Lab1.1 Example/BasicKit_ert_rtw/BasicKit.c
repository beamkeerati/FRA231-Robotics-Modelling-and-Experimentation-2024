/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BasicKit.c
 *
 * Code generated for Simulink model 'BasicKit'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct  2 20:07:04 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BasicKit.h"
#include "BasicKit_types.h"
#include "rtwtypes.h"
#include "stm_adc_ll.h"
#include <stddef.h>
#include "BasicKit_private.h"

/* Block signals (default storage) */
B_BasicKit_T BasicKit_B;

/* Block states (default storage) */
DW_BasicKit_T BasicKit_DW;

/* Real-time model */
static RT_MODEL_BasicKit_T BasicKit_M_;
RT_MODEL_BasicKit_T *const BasicKit_M = &BasicKit_M_;

/* Forward declaration for local functions */
static void BasicKit_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj);
static void BasicKit_SystemCore_setup(stm32cube_blocks_AnalogInput__T *obj)
{
  ADC_Type_T adcStructLoc;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<S6>/Analog to Digital Converter' */
  obj->isInitialized = 1;
  adcStructLoc.InternalBufferPtr = (void *)(NULL);

  /* Start for MATLABSystem: '<S6>/Analog to Digital Converter' */
  adcStructLoc.InjectedNoOfConversion = 0U;
  adcStructLoc.peripheralPtr = ADC1;
  adcStructLoc.dmaPeripheralPtr = NULL;
  adcStructLoc.dmastream = 0;
  adcStructLoc.DataTransferMode = ADC_DR_TRANSFER;
  adcStructLoc.DmaTransferMode = ADC_DMA_TRANSFER_LIMITED;
  adcStructLoc.InternalBufferSize = 1U;
  adcStructLoc.RegularNoOfConversion = 1U;
  obj->ADCHandle = ADC_Handle_Init(&adcStructLoc, ADC_NORMAL_MODE, 1,
    ADC_TRIGGER_AND_READ, LL_ADC_REG_SEQ_SCAN_DISABLE);
  enableADCAutomaticCalibrationOffset(obj->ADCHandle, 2);
  enableADC(obj->ADCHandle);
  startADCConversionForExternalTrigger(obj->ADCHandle, 1);
  obj->isSetupComplete = true;
}

/* Model step function */
void BasicKit_step(void)
{
  GPIO_TypeDef * portNameLoc;
  uint32_T pinReadLoc;

  /* MATLABSystem: '<S6>/Analog to Digital Converter' */
  regularReadADCNormal(BasicKit_DW.obj.ADCHandle, ADC_TRIGGER_AND_READ,
                       &BasicKit_B.AnalogtoDigitalConverter);

  /* MATLABSystem: '<S12>/Digital Port Write' */
  portNameLoc = GPIOA;
  LL_GPIO_SetOutputPin(portNameLoc, 32U);
  LL_GPIO_ResetOutputPin(portNameLoc, 0U);

  /* MATLABSystem: '<S8>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOA);

  /* MATLABSystem: '<S8>/Digital Port Read' */
  BasicKit_B.DigitalPortRead_f = ((pinReadLoc & 32U) != 0U);

  /* MATLABSystem: '<S10>/Digital Port Read' */
  pinReadLoc = LL_GPIO_ReadInputPort(GPIOC);

  /* MATLABSystem: '<S10>/Digital Port Read' */
  BasicKit_B.DigitalPortRead = ((pinReadLoc & 8192U) != 0U);

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BasicKit_M->Timing.taskTime0 =
    ((time_T)(++BasicKit_M->Timing.clockTick0)) * BasicKit_M->Timing.stepSize0;
}

/* Model initialize function */
void BasicKit_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(BasicKit_M, -1);
  BasicKit_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  BasicKit_M->Sizes.checksums[0] = (3573327334U);
  BasicKit_M->Sizes.checksums[1] = (1288199621U);
  BasicKit_M->Sizes.checksums[2] = (1274653748U);
  BasicKit_M->Sizes.checksums[3] = (142484703U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[5];
    BasicKit_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(BasicKit_M->extModeInfo,
      &BasicKit_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BasicKit_M->extModeInfo, BasicKit_M->Sizes.checksums);
    rteiSetTPtr(BasicKit_M->extModeInfo, rtmGetTPtr(BasicKit_M));
  }

  /* Start for MATLABSystem: '<S6>/Analog to Digital Converter' */
  BasicKit_DW.obj.isInitialized = 0;
  BasicKit_DW.obj.matlabCodegenIsDeleted = false;
  BasicKit_SystemCore_setup(&BasicKit_DW.obj);
}

/* Model terminate function */
void BasicKit_terminate(void)
{
  /* Terminate for MATLABSystem: '<S6>/Analog to Digital Converter' */
  if (!BasicKit_DW.obj.matlabCodegenIsDeleted) {
    BasicKit_DW.obj.matlabCodegenIsDeleted = true;
    if ((BasicKit_DW.obj.isInitialized == 1) && BasicKit_DW.obj.isSetupComplete)
    {
      ADC_Handle_Deinit(BasicKit_DW.obj.ADCHandle, ADC_NORMAL_MODE, 1);
    }
  }

  /* End of Terminate for MATLABSystem: '<S6>/Analog to Digital Converter' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
