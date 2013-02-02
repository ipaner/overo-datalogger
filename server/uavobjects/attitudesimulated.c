/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AttitudeSimulated AttitudeSimulated
 * @brief The simulated Attitude estimation from @ref Sensors.
 *
 * Autogenerated files and functions for AttitudeSimulated Object
 * @{ 
 *
 * @file       attitudesimulated.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the AttitudeSimulated object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: attitudesimulated.xml. 
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

#include "openpilot.h"
#include "attitudesimulated.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t AttitudeSimulatedInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ATTITUDESIMULATED_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ATTITUDESIMULATED_OBJID,
			ATTITUDESIMULATED_ISSINGLEINST, ATTITUDESIMULATED_ISSETTINGS, ATTITUDESIMULATED_NUMBYTES, &AttitudeSimulatedSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void AttitudeSimulatedSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	AttitudeSimulatedData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(AttitudeSimulatedData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 100;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle AttitudeSimulatedHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void AttitudeSimulatedq1Set( float *Newq1 )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)Newq1, offsetof( AttitudeSimulatedData, q1), sizeof(float));
}
void AttitudeSimulatedq1Get( float *Newq1 )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)Newq1, offsetof( AttitudeSimulatedData, q1), sizeof(float));
}
void AttitudeSimulatedq2Set( float *Newq2 )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)Newq2, offsetof( AttitudeSimulatedData, q2), sizeof(float));
}
void AttitudeSimulatedq2Get( float *Newq2 )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)Newq2, offsetof( AttitudeSimulatedData, q2), sizeof(float));
}
void AttitudeSimulatedq3Set( float *Newq3 )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)Newq3, offsetof( AttitudeSimulatedData, q3), sizeof(float));
}
void AttitudeSimulatedq3Get( float *Newq3 )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)Newq3, offsetof( AttitudeSimulatedData, q3), sizeof(float));
}
void AttitudeSimulatedq4Set( float *Newq4 )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)Newq4, offsetof( AttitudeSimulatedData, q4), sizeof(float));
}
void AttitudeSimulatedq4Get( float *Newq4 )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)Newq4, offsetof( AttitudeSimulatedData, q4), sizeof(float));
}
void AttitudeSimulatedRollSet( float *NewRoll )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)NewRoll, offsetof( AttitudeSimulatedData, Roll), sizeof(float));
}
void AttitudeSimulatedRollGet( float *NewRoll )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)NewRoll, offsetof( AttitudeSimulatedData, Roll), sizeof(float));
}
void AttitudeSimulatedPitchSet( float *NewPitch )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)NewPitch, offsetof( AttitudeSimulatedData, Pitch), sizeof(float));
}
void AttitudeSimulatedPitchGet( float *NewPitch )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)NewPitch, offsetof( AttitudeSimulatedData, Pitch), sizeof(float));
}
void AttitudeSimulatedYawSet( float *NewYaw )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)NewYaw, offsetof( AttitudeSimulatedData, Yaw), sizeof(float));
}
void AttitudeSimulatedYawGet( float *NewYaw )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)NewYaw, offsetof( AttitudeSimulatedData, Yaw), sizeof(float));
}
void AttitudeSimulatedVelocitySet( float *NewVelocity )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)NewVelocity, offsetof( AttitudeSimulatedData, Velocity), 3*sizeof(float));
}
void AttitudeSimulatedVelocityGet( float *NewVelocity )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)NewVelocity, offsetof( AttitudeSimulatedData, Velocity), 3*sizeof(float));
}
void AttitudeSimulatedPositionSet( float *NewPosition )
{
	UAVObjSetDataField(AttitudeSimulatedHandle(), (void*)NewPosition, offsetof( AttitudeSimulatedData, Position), 3*sizeof(float));
}
void AttitudeSimulatedPositionGet( float *NewPosition )
{
	UAVObjGetDataField(AttitudeSimulatedHandle(), (void*)NewPosition, offsetof( AttitudeSimulatedData, Position), 3*sizeof(float));
}


/**
 * @}
 */
