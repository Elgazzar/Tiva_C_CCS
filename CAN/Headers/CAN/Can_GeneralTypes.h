
/*Todo To Be mobed to com_Genraltypes.h*/
typedef uint16 PduIdType;
typedef uint16 Can_IdType;
/*States that are used by the several ControllerMode functions*/
typedef enum
{
    CAN_CS_UNINIT = (uint8)(0x0),
    CAN_CS_STARTED = (uint8)(0x1),
    CAN_CS_STOPPED = (uint8)(0x2),
    CAN_CS_SLEEP = (uint8)(0x3)
}Can_ControllerStateType;

/*Error states of a CAN controller*/
typedef enum
{
    CAN_ERRORSTATE_ACTIVE,
    CAN_ERRORSTATE_PASSIVE,
    CAN_ERRORSTATE_BUSOFF,
}Can_ErrorStateType;

/*In case of standard , if Extended uint16 is defined*/
typedef uint8_t Can_HwHandleType;

typedef struct Can_PduType_S
{
   /* data */
    PduIdType swPduHandle;
    uint8 length;
    Can_IdType id;
    uint8* sdu;
}Can_PduType;
