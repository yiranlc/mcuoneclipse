/* ###################################################################
**     Filename    : main.c
**     Project     : FRDM-KE06Z
**     Processor   : MKE06Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-11-12, 18:48, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Pins1.h"
#include "LEDR.h"
#include "Inhr1.h"
#include "PwmLdd1.h"
#include "LEDG.h"
#include "Inhr2.h"
#include "PwmLdd2.h"
#include "LEDB.h"
#include "Inhr3.h"
#include "PwmLdd3.h"
#include "WAIT1.h"
#include "TU1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
/* User includes (#include below this line is not maintained by Processor Expert) */

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  for(;;) {
    LEDR_On();
    WAIT1_Waitms(500);
    LEDR_Off();
    WAIT1_Waitms(500);

    LEDG_On();
    WAIT1_Waitms(500);
    LEDG_Off();

    LEDB_On();
    WAIT1_Waitms(500);
    LEDB_Off();

    LEDR_SetRatio16(0xc000);
    WAIT1_Waitms(500);
    LEDR_SetRatio16(0x8000);
    WAIT1_Waitms(500);
    LEDR_SetRatio16(0x4000);
    WAIT1_Waitms(500);
    LEDR_SetRatio16(0x1000);
    WAIT1_Waitms(500);
    LEDR_SetRatio16(0x500);
    WAIT1_Waitms(500);
    LEDR_SetRatio16(0x100);
    WAIT1_Waitms(500);
 }

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.10]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
