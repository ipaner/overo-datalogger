/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup I2CVMUserProgram I2CVMUserProgram 
 * @brief Allows GCS to provide a user-defined program to the I2C Virtual Machine
 *
 * Autogenerated files and functions for I2CVMUserProgram Object
 
 * @{ 
 *
 * @file       i2cvmuserprogram.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the I2CVMUserProgram object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: i2cvmuserprogram.xml. 
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

#ifndef I2CVMUSERPROGRAM_H
#define I2CVMUSERPROGRAM_H

// Object constants
#define I2CVMUSERPROGRAM_OBJID 0xED9CC1AC
#define I2CVMUSERPROGRAM_ISSINGLEINST 1
#define I2CVMUSERPROGRAM_ISSETTINGS 1
#define I2CVMUSERPROGRAM_NUMBYTES 80

// Generic interface functions
int32_t I2CVMUserProgramInitialize();
UAVObjHandle I2CVMUserProgramHandle();
void I2CVMUserProgramSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t Program[20];

} __attribute__((packed)) __attribute__((aligned(4))) I2CVMUserProgramData;

// Typesafe Object access functions
/**
 * @function I2CVMUserProgramGet(dataOut)
 * @brief Populate a I2CVMUserProgramData object
 * @param[out] dataOut 
 */
static inline int32_t I2CVMUserProgramGet(I2CVMUserProgramData *dataOut) { return UAVObjGetData(I2CVMUserProgramHandle(), dataOut); }

static inline int32_t I2CVMUserProgramSet(const I2CVMUserProgramData *dataIn) { return UAVObjSetData(I2CVMUserProgramHandle(), dataIn); }

static inline int32_t I2CVMUserProgramInstGet(uint16_t instId, I2CVMUserProgramData *dataOut) { return UAVObjGetInstanceData(I2CVMUserProgramHandle(), instId, dataOut); }

static inline int32_t I2CVMUserProgramInstSet(uint16_t instId, const I2CVMUserProgramData *dataIn) { return UAVObjSetInstanceData(I2CVMUserProgramHandle(), instId, dataIn); }

static inline int32_t I2CVMUserProgramConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(I2CVMUserProgramHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t I2CVMUserProgramConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(I2CVMUserProgramHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t I2CVMUserProgramCreateInstance() { return UAVObjCreateInstance(I2CVMUserProgramHandle(), &I2CVMUserProgramSetDefaults); }

static inline void I2CVMUserProgramRequestUpdate() { UAVObjRequestUpdate(I2CVMUserProgramHandle()); }

static inline void I2CVMUserProgramRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(I2CVMUserProgramHandle(), instId); }

static inline void I2CVMUserProgramUpdated() { UAVObjUpdated(I2CVMUserProgramHandle()); }

static inline void I2CVMUserProgramInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(I2CVMUserProgramHandle(), instId); }

static inline int32_t I2CVMUserProgramGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(I2CVMUserProgramHandle(), dataOut); }

static inline int32_t I2CVMUserProgramSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(I2CVMUserProgramHandle(), dataIn); }

static inline int8_t I2CVMUserProgramReadOnly() { return UAVObjReadOnly(I2CVMUserProgramHandle()); }

// Field information
// Field Program information
/* Number of elements for field Program */
#define I2CVMUSERPROGRAM_PROGRAM_NUMELEM 20


// set/Get functions
extern void I2CVMUserProgramProgramSet( uint32_t *NewProgram );
extern void I2CVMUserProgramProgramGet( uint32_t *NewProgram );


#endif // I2CVMUSERPROGRAM_H

/**
 * @}
 * @}
 */