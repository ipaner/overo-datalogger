/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup TabletInfo TabletInfo 
 * @brief The information from the tablet to the UAVO.
 *
 * Autogenerated files and functions for TabletInfo Object
 
 * @{ 
 *
 * @file       tabletinfo.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the TabletInfo object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: tabletinfo.xml. 
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

#ifndef TABLETINFO_H
#define TABLETINFO_H

// Object constants
#define TABLETINFO_OBJID 0x56CB5754
#define TABLETINFO_ISSINGLEINST 1
#define TABLETINFO_ISSETTINGS 0
#define TABLETINFO_NUMBYTES 14

// Generic interface functions
int32_t TabletInfoInitialize();
UAVObjHandle TabletInfoHandle();
void TabletInfoSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int32_t Latitude;
    int32_t Longitude;
    float Altitude;
    uint8_t Connected;
    uint8_t TabletModeDesired;

} __attribute__((packed)) __attribute__((aligned(4))) TabletInfoData;

// Typesafe Object access functions
/**
 * @function TabletInfoGet(dataOut)
 * @brief Populate a TabletInfoData object
 * @param[out] dataOut 
 */
static inline int32_t TabletInfoGet(TabletInfoData *dataOut) { return UAVObjGetData(TabletInfoHandle(), dataOut); }

static inline int32_t TabletInfoSet(const TabletInfoData *dataIn) { return UAVObjSetData(TabletInfoHandle(), dataIn); }

static inline int32_t TabletInfoInstGet(uint16_t instId, TabletInfoData *dataOut) { return UAVObjGetInstanceData(TabletInfoHandle(), instId, dataOut); }

static inline int32_t TabletInfoInstSet(uint16_t instId, const TabletInfoData *dataIn) { return UAVObjSetInstanceData(TabletInfoHandle(), instId, dataIn); }

static inline int32_t TabletInfoConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(TabletInfoHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t TabletInfoConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(TabletInfoHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t TabletInfoCreateInstance() { return UAVObjCreateInstance(TabletInfoHandle(), &TabletInfoSetDefaults); }

static inline void TabletInfoRequestUpdate() { UAVObjRequestUpdate(TabletInfoHandle()); }

static inline void TabletInfoRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(TabletInfoHandle(), instId); }

static inline void TabletInfoUpdated() { UAVObjUpdated(TabletInfoHandle()); }

static inline void TabletInfoInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(TabletInfoHandle(), instId); }

static inline int32_t TabletInfoGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(TabletInfoHandle(), dataOut); }

static inline int32_t TabletInfoSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(TabletInfoHandle(), dataIn); }

static inline int8_t TabletInfoReadOnly() { return UAVObjReadOnly(TabletInfoHandle()); }

// Field information
// Field Latitude information
// Field Longitude information
// Field Altitude information
// Field Connected information
/* Enumeration options for field Connected */
typedef enum { TABLETINFO_CONNECTED_FALSE=0, TABLETINFO_CONNECTED_TRUE=1 } TabletInfoConnectedOptions;
// Field TabletModeDesired information
/* Enumeration options for field TabletModeDesired */
typedef enum { TABLETINFO_TABLETMODEDESIRED_POSITIONHOLD=0, TABLETINFO_TABLETMODEDESIRED_RETURNTOHOME=1, TABLETINFO_TABLETMODEDESIRED_RETURNTOTABLET=2, TABLETINFO_TABLETMODEDESIRED_PATHPLANNER=3, TABLETINFO_TABLETMODEDESIRED_FOLLOWME=4, TABLETINFO_TABLETMODEDESIRED_LAND=5, TABLETINFO_TABLETMODEDESIRED_CAMERAPOI=6 } TabletInfoTabletModeDesiredOptions;


// set/Get functions
extern void TabletInfoLatitudeSet( int32_t *NewLatitude );
extern void TabletInfoLatitudeGet( int32_t *NewLatitude );
extern void TabletInfoLongitudeSet( int32_t *NewLongitude );
extern void TabletInfoLongitudeGet( int32_t *NewLongitude );
extern void TabletInfoAltitudeSet( float *NewAltitude );
extern void TabletInfoAltitudeGet( float *NewAltitude );
extern void TabletInfoConnectedSet( uint8_t *NewConnected );
extern void TabletInfoConnectedGet( uint8_t *NewConnected );
extern void TabletInfoTabletModeDesiredSet( uint8_t *NewTabletModeDesired );
extern void TabletInfoTabletModeDesiredGet( uint8_t *NewTabletModeDesired );


#endif // TABLETINFO_H

/**
 * @}
 * @}
 */
