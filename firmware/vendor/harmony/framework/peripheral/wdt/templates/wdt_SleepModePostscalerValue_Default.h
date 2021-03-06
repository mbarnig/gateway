/*******************************************************************************
  WDT Peripheral Library Template Implementation

  File Name:
    wdt_SleepModePostscalerValue_Default.h

  Summary:
    WDT PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : SleepModePostscalerValue
    and its Variant : Default
    For following APIs :
        PLIB_WDT_ExistsSleepModePostscalerValue
        PLIB_WDT_SleepModePostscalerValueGet

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _WDT_SLEEPMODEPOSTSCALERVALUE_DEFAULT_H
#define _WDT_SLEEPMODEPOSTSCALERVALUE_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _WDT_POSTSCALER_VALUE_SLEEP_VREG(index)

  MASKs: 
    _WDT_POSTSCALER_VALUE_SLEEP_MASK(index)

  POSs: 
    _WDT_POSTSCALER_VALUE_SLEEP_POS(index)

  LENs: 
    _WDT_POSTSCALER_VALUE_SLEEP_LEN(index)

*/


//******************************************************************************
/* Function :  WDT_ExistsSleepModePostscalerValue_Default

  Summary:
    Implements Default variant of PLIB_WDT_ExistsSleepModePostscalerValue

  Description:
    This template implements the Default variant of the PLIB_WDT_ExistsSleepModePostscalerValue function.
*/

#define PLIB_WDT_ExistsSleepModePostscalerValue PLIB_WDT_ExistsSleepModePostscalerValue
PLIB_TEMPLATE bool WDT_ExistsSleepModePostscalerValue_Default( WDT_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  WDT_SleepModePostscalerValueGet_Default

  Summary:
    Implements Default variant of PLIB_WDT_SleepModePostscalerValueGet 

  Description:
    This template implements the Default variant of the PLIB_WDT_SleepModePostscalerValueGet function.
*/

PLIB_TEMPLATE char WDT_SleepModePostscalerValueGet_Default( WDT_MODULE_ID index )
{
    return (char)(_SFR_FIELD_READ(_WDT_POSTSCALER_VALUE_SLEEP_VREG(index),
                                _WDT_POSTSCALER_VALUE_SLEEP_MASK(index),
                                _WDT_POSTSCALER_VALUE_SLEEP_POS(index)));
}


#endif /*_WDT_SLEEPMODEPOSTSCALERVALUE_DEFAULT_H*/

/******************************************************************************
 End of File
*/

