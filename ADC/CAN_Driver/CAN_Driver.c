
#include "Std_Types.h"
#include "Can_GeneralTypes.h"
#include "CAN_Driver.h"

void Can_Init(const Can_ConfigType* Config)
{
    
}

void Can_GetVersionInfo( Std_VersionInfoType* versioninfo )
{

}

void Can_DeInit( void )
{

}

Std_ReturnType Can_SetBaudrate( uint8_t Controller, uint16 BaudRateConfigID )
{

}

Std_ReturnType Can_SetControllerMode( uint8_t Controller, Can_ControllerStateType Transition )
{

}

void Can_DisableControllerInterrupts( uint8_t Controller )
{

}


void Can_EnableControllerInterrupts( uint8_t Controller )
{

}

Std_ReturnType Can_CheckWakeup( uint8_t Controller )
{

}

Std_ReturnType Can_GetControllerErrorState( uint8_t ControllerId, Can_ErrorStateType* ErrorStatePtr )
{

}

Std_ReturnType Can_GetControllerMode( uint8_t Controller, Can_ControllerStateType* ControllerModePtr )
{
    
}

Std_ReturnType Can_GetControllerRxErrorCounter( uint8_t ControllerId, uint8_t* RxErrorCounterPtr )
{

}

Std_ReturnType Can_Write( Can_HwHandleType Hth, const Can_PduType* PduInfo )
{

}

void Can_MainFunction_Write( void )
{

}

void Can_MainFunction_Read( void )
{

}

void Can_MainFunction_BusOff( void )
{

}

void Can_MainFunction_Mode( void )
{

}