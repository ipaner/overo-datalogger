/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HwFreedom HwFreedom 
 * @brief Selection of optional hardware configurations.
 *
 * Autogenerated files and functions for HwFreedom Object
 
 * @{ 
 *
 * @file       hwfreedom.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the HwFreedom object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwfreedom.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef HWFREEDOM_H
#define HWFREEDOM_H

// Object constants
#define HWFREEDOM_OBJID 0xC19B79D6
#define HWFREEDOM_ISSINGLEINST 1
#define HWFREEDOM_ISSETTINGS 1
#define HWFREEDOM_NUMBYTES 12

// Generic interface functions
int32_t HwFreedomInitialize();
UAVObjHandle HwFreedomHandle();
void HwFreedomSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t Output;
    uint8_t MainPort;
    uint8_t FlexiPort;
    uint8_t RcvrPort;
    uint8_t RadioPort;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;
    uint8_t DSMxBind;
    uint8_t GyroRange;
    uint8_t AccelRange;
    uint8_t MPU6000Rate;
    uint8_t MPU6000DLPF;

} __attribute__((packed)) __attribute__((aligned(4))) HwFreedomData;

// Typesafe Object access functions
/**
 * @function HwFreedomGet(dataOut)
 * @brief Populate a HwFreedomData object
 * @param[out] dataOut 
 */
static inline int32_t HwFreedomGet(HwFreedomData *dataOut) { return UAVObjGetData(HwFreedomHandle(), dataOut); }

static inline int32_t HwFreedomSet(const HwFreedomData *dataIn) { return UAVObjSetData(HwFreedomHandle(), dataIn); }

static inline int32_t HwFreedomInstGet(uint16_t instId, HwFreedomData *dataOut) { return UAVObjGetInstanceData(HwFreedomHandle(), instId, dataOut); }

static inline int32_t HwFreedomInstSet(uint16_t instId, const HwFreedomData *dataIn) { return UAVObjSetInstanceData(HwFreedomHandle(), instId, dataIn); }

static inline int32_t HwFreedomConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HwFreedomHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwFreedomConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwFreedomHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwFreedomCreateInstance() { return UAVObjCreateInstance(HwFreedomHandle(), &HwFreedomSetDefaults); }

static inline void HwFreedomRequestUpdate() { UAVObjRequestUpdate(HwFreedomHandle()); }

static inline void HwFreedomRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwFreedomHandle(), instId); }

static inline void HwFreedomUpdated() { UAVObjUpdated(HwFreedomHandle()); }

static inline void HwFreedomInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwFreedomHandle(), instId); }

static inline int32_t HwFreedomGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwFreedomHandle(), dataOut); }

static inline int32_t HwFreedomSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwFreedomHandle(), dataIn); }

static inline int8_t HwFreedomReadOnly() { return UAVObjReadOnly(HwFreedomHandle()); }

// Field information
// Field Output information
/* Enumeration options for field Output */
typedef enum { HWFREEDOM_OUTPUT_DISABLED=0, HWFREEDOM_OUTPUT_PWM=1 } HwFreedomOutputOptions;
// Field MainPort information
/* Enumeration options for field MainPort */
typedef enum { HWFREEDOM_MAINPORT_DISABLED=0, HWFREEDOM_MAINPORT_TELEMETRY=1, HWFREEDOM_MAINPORT_GPS=2, HWFREEDOM_MAINPORT_DSM2=3, HWFREEDOM_MAINPORT_DSMX10BIT=4, HWFREEDOM_MAINPORT_DSMX11BIT=5, HWFREEDOM_MAINPORT_DEBUGCONSOLE=6, HWFREEDOM_MAINPORT_COMBRIDGE=7 } HwFreedomMainPortOptions;
// Field FlexiPort information
/* Enumeration options for field FlexiPort */
typedef enum { HWFREEDOM_FLEXIPORT_DISABLED=0, HWFREEDOM_FLEXIPORT_TELEMETRY=1, HWFREEDOM_FLEXIPORT_GPS=2, HWFREEDOM_FLEXIPORT_I2C=3, HWFREEDOM_FLEXIPORT_DSM2=4, HWFREEDOM_FLEXIPORT_DSMX10BIT=5, HWFREEDOM_FLEXIPORT_DSMX11BIT=6, HWFREEDOM_FLEXIPORT_DEBUGCONSOLE=7, HWFREEDOM_FLEXIPORT_COMBRIDGE=8 } HwFreedomFlexiPortOptions;
// Field RcvrPort information
/* Enumeration options for field RcvrPort */
typedef enum { HWFREEDOM_RCVRPORT_DISABLED=0, HWFREEDOM_RCVRPORT_PPM=1, HWFREEDOM_RCVRPORT_DSM2=2, HWFREEDOM_RCVRPORT_DSMX10BIT=3, HWFREEDOM_RCVRPORT_DSMX11BIT=4, HWFREEDOM_RCVRPORT_SBUS=5 } HwFreedomRcvrPortOptions;
// Field RadioPort information
/* Enumeration options for field RadioPort */
typedef enum { HWFREEDOM_RADIOPORT_DISABLED=0, HWFREEDOM_RADIOPORT_TELEMETRY=1 } HwFreedomRadioPortOptions;
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWFREEDOM_USB_HIDPORT_USBTELEMETRY=0, HWFREEDOM_USB_HIDPORT_RCTRANSMITTER=1, HWFREEDOM_USB_HIDPORT_DISABLED=2 } HwFreedomUSB_HIDPortOptions;
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWFREEDOM_USB_VCPPORT_USBTELEMETRY=0, HWFREEDOM_USB_VCPPORT_COMBRIDGE=1, HWFREEDOM_USB_VCPPORT_DEBUGCONSOLE=2, HWFREEDOM_USB_VCPPORT_DISABLED=3 } HwFreedomUSB_VCPPortOptions;
// Field DSMxBind information
// Field GyroRange information
/* Enumeration options for field GyroRange */
typedef enum { HWFREEDOM_GYRORANGE_250=0, HWFREEDOM_GYRORANGE_500=1, HWFREEDOM_GYRORANGE_1000=2, HWFREEDOM_GYRORANGE_2000=3 } HwFreedomGyroRangeOptions;
// Field AccelRange information
/* Enumeration options for field AccelRange */
typedef enum { HWFREEDOM_ACCELRANGE_2G=0, HWFREEDOM_ACCELRANGE_4G=1, HWFREEDOM_ACCELRANGE_8G=2, HWFREEDOM_ACCELRANGE_16G=3 } HwFreedomAccelRangeOptions;
// Field MPU6000Rate information
/* Enumeration options for field MPU6000Rate */
typedef enum { HWFREEDOM_MPU6000RATE_500=0, HWFREEDOM_MPU6000RATE_666=1, HWFREEDOM_MPU6000RATE_1000=2, HWFREEDOM_MPU6000RATE_2000=3, HWFREEDOM_MPU6000RATE_4000=4, HWFREEDOM_MPU6000RATE_8000=5 } HwFreedomMPU6000RateOptions;
// Field MPU6000DLPF information
/* Enumeration options for field MPU6000DLPF */
typedef enum { HWFREEDOM_MPU6000DLPF_256=0, HWFREEDOM_MPU6000DLPF_188=1, HWFREEDOM_MPU6000DLPF_98=2, HWFREEDOM_MPU6000DLPF_42=3, HWFREEDOM_MPU6000DLPF_20=4, HWFREEDOM_MPU6000DLPF_10=5, HWFREEDOM_MPU6000DLPF_5=6 } HwFreedomMPU6000DLPFOptions;


// set/Get functions
extern void HwFreedomOutputSet( uint8_t *NewOutput );
extern void HwFreedomOutputGet( uint8_t *NewOutput );
extern void HwFreedomMainPortSet( uint8_t *NewMainPort );
extern void HwFreedomMainPortGet( uint8_t *NewMainPort );
extern void HwFreedomFlexiPortSet( uint8_t *NewFlexiPort );
extern void HwFreedomFlexiPortGet( uint8_t *NewFlexiPort );
extern void HwFreedomRcvrPortSet( uint8_t *NewRcvrPort );
extern void HwFreedomRcvrPortGet( uint8_t *NewRcvrPort );
extern void HwFreedomRadioPortSet( uint8_t *NewRadioPort );
extern void HwFreedomRadioPortGet( uint8_t *NewRadioPort );
extern void HwFreedomUSB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwFreedomUSB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwFreedomUSB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwFreedomUSB_VCPPortGet( uint8_t *NewUSB_VCPPort );
extern void HwFreedomDSMxBindSet( uint8_t *NewDSMxBind );
extern void HwFreedomDSMxBindGet( uint8_t *NewDSMxBind );
extern void HwFreedomGyroRangeSet( uint8_t *NewGyroRange );
extern void HwFreedomGyroRangeGet( uint8_t *NewGyroRange );
extern void HwFreedomAccelRangeSet( uint8_t *NewAccelRange );
extern void HwFreedomAccelRangeGet( uint8_t *NewAccelRange );
extern void HwFreedomMPU6000RateSet( uint8_t *NewMPU6000Rate );
extern void HwFreedomMPU6000RateGet( uint8_t *NewMPU6000Rate );
extern void HwFreedomMPU6000DLPFSet( uint8_t *NewMPU6000DLPF );
extern void HwFreedomMPU6000DLPFGet( uint8_t *NewMPU6000DLPF );


#endif // HWFREEDOM_H

/**
 * @}
 * @}
 */
