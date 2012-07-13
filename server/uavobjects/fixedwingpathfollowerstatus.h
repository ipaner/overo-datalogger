/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingPathFollowerStatus FixedWingPathFollowerStatus 
 * @brief Object Storing Debugging Information on PID internals
 *
 * Autogenerated files and functions for FixedWingPathFollowerStatus Object
 
 * @{ 
 *
 * @file       fixedwingpathfollowerstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FixedWingPathFollowerStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingpathfollowerstatus.xml. 
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

#ifndef FIXEDWINGPATHFOLLOWERSTATUS_H
#define FIXEDWINGPATHFOLLOWERSTATUS_H

// Object constants
#define FIXEDWINGPATHFOLLOWERSTATUS_OBJID 0xA0D6F6D4
#define FIXEDWINGPATHFOLLOWERSTATUS_ISSINGLEINST 1
#define FIXEDWINGPATHFOLLOWERSTATUS_ISSETTINGS 0
#define FIXEDWINGPATHFOLLOWERSTATUS_NUMBYTES sizeof(FixedWingPathFollowerStatusData)

// Object access macros
/**
 * @function FixedWingPathFollowerStatusGet(dataOut)
 * @brief Populate a FixedWingPathFollowerStatusData object
 * @param[out] dataOut 
 */
#define FixedWingPathFollowerStatusGet(dataOut) UAVObjGetData(FixedWingPathFollowerStatusHandle(), dataOut)
#define FixedWingPathFollowerStatusSet(dataIn) UAVObjSetData(FixedWingPathFollowerStatusHandle(), dataIn)
#define FixedWingPathFollowerStatusInstGet(instId, dataOut) UAVObjGetInstanceData(FixedWingPathFollowerStatusHandle(), instId, dataOut)
#define FixedWingPathFollowerStatusInstSet(instId, dataIn) UAVObjSetInstanceData(FixedWingPathFollowerStatusHandle(), instId, dataIn)
#define FixedWingPathFollowerStatusConnectQueue(queue) UAVObjConnectQueue(FixedWingPathFollowerStatusHandle(), queue, EV_MASK_ALL_UPDATES)
#define FixedWingPathFollowerStatusConnectCallback(cb) UAVObjConnectCallback(FixedWingPathFollowerStatusHandle(), cb, EV_MASK_ALL_UPDATES)
#define FixedWingPathFollowerStatusCreateInstance() UAVObjCreateInstance(FixedWingPathFollowerStatusHandle(),&FixedWingPathFollowerStatusSetDefaults)
#define FixedWingPathFollowerStatusRequestUpdate() UAVObjRequestUpdate(FixedWingPathFollowerStatusHandle())
#define FixedWingPathFollowerStatusRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(FixedWingPathFollowerStatusHandle(), instId)
#define FixedWingPathFollowerStatusUpdated() UAVObjUpdated(FixedWingPathFollowerStatusHandle())
#define FixedWingPathFollowerStatusInstUpdated(instId) UAVObjUpdated(FixedWingPathFollowerStatusHandle(), instId)
#define FixedWingPathFollowerStatusGetMetadata(dataOut) UAVObjGetMetadata(FixedWingPathFollowerStatusHandle(), dataOut)
#define FixedWingPathFollowerStatusSetMetadata(dataIn) UAVObjSetMetadata(FixedWingPathFollowerStatusHandle(), dataIn)
#define FixedWingPathFollowerStatusReadOnly() UAVObjReadOnly(FixedWingPathFollowerStatusHandle())

// Object data
typedef struct {
    float E[4];
    float A[4];
    float C[4];
    uint8_t Errors[6];

} __attribute__((packed)) FixedWingPathFollowerStatusData;

// Field information
// Field E information
/* Array element names for field E */
typedef enum { FIXEDWINGPATHFOLLOWERSTATUS_E_COURSE=0, FIXEDWINGPATHFOLLOWERSTATUS_E_SPEED=1, FIXEDWINGPATHFOLLOWERSTATUS_E_ACCEL=2, FIXEDWINGPATHFOLLOWERSTATUS_E_POWER=3 } FixedWingPathFollowerStatusEElem;
/* Number of elements for field E */
#define FIXEDWINGPATHFOLLOWERSTATUS_E_NUMELEM 4
// Field A information
/* Array element names for field A */
typedef enum { FIXEDWINGPATHFOLLOWERSTATUS_A_COURSE=0, FIXEDWINGPATHFOLLOWERSTATUS_A_SPEED=1, FIXEDWINGPATHFOLLOWERSTATUS_A_ACCEL=2, FIXEDWINGPATHFOLLOWERSTATUS_A_POWER=3 } FixedWingPathFollowerStatusAElem;
/* Number of elements for field A */
#define FIXEDWINGPATHFOLLOWERSTATUS_A_NUMELEM 4
// Field C information
/* Array element names for field C */
typedef enum { FIXEDWINGPATHFOLLOWERSTATUS_C_COURSE=0, FIXEDWINGPATHFOLLOWERSTATUS_C_SPEED=1, FIXEDWINGPATHFOLLOWERSTATUS_C_ACCEL=2, FIXEDWINGPATHFOLLOWERSTATUS_C_POWER=3 } FixedWingPathFollowerStatusCElem;
/* Number of elements for field C */
#define FIXEDWINGPATHFOLLOWERSTATUS_C_NUMELEM 4
// Field Errors information
/* Array element names for field Errors */
typedef enum { FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_WIND=0, FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_LOWSPEED=1, FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_HIGHSPEED=2, FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_LOWPOWER=3, FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_HIGHPOWER=4, FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_PITCHCONTROL=5 } FixedWingPathFollowerStatusErrorsElem;
/* Number of elements for field Errors */
#define FIXEDWINGPATHFOLLOWERSTATUS_ERRORS_NUMELEM 6


// Generic interface functions
int32_t FixedWingPathFollowerStatusInitialize();
UAVObjHandle FixedWingPathFollowerStatusHandle();
void FixedWingPathFollowerStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void FixedWingPathFollowerStatusESet( float *NewE );
extern void FixedWingPathFollowerStatusEGet( float *NewE );
extern void FixedWingPathFollowerStatusASet( float *NewA );
extern void FixedWingPathFollowerStatusAGet( float *NewA );
extern void FixedWingPathFollowerStatusCSet( float *NewC );
extern void FixedWingPathFollowerStatusCGet( float *NewC );
extern void FixedWingPathFollowerStatusErrorsSet( uint8_t *NewErrors );
extern void FixedWingPathFollowerStatusErrorsGet( uint8_t *NewErrors );


#endif // FIXEDWINGPATHFOLLOWERSTATUS_H

/**
 * @}
 * @}
 */