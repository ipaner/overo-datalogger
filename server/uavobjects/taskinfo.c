/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup TaskInfo TaskInfo
 * @brief Task information
 *
 * Autogenerated files and functions for TaskInfo Object
 * @{ 
 *
 * @file       taskinfo.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the TaskInfo object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: taskinfo.xml. 
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
#include "taskinfo.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t TaskInfoInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(TASKINFO_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(TASKINFO_OBJID,
			TASKINFO_ISSINGLEINST, TASKINFO_ISSETTINGS, TASKINFO_NUMBYTES, &TaskInfoSetDefaults);

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
void TaskInfoSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	TaskInfoData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(TaskInfoData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 10000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 1000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle TaskInfoHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void TaskInfoStackRemainingSet( uint16_t *NewStackRemaining )
{
	UAVObjSetDataField(TaskInfoHandle(), (void*)NewStackRemaining, offsetof( TaskInfoData, StackRemaining), 27*sizeof(uint16_t));
}
void TaskInfoStackRemainingGet( uint16_t *NewStackRemaining )
{
	UAVObjGetDataField(TaskInfoHandle(), (void*)NewStackRemaining, offsetof( TaskInfoData, StackRemaining), 27*sizeof(uint16_t));
}
void TaskInfoRunningSet( uint8_t *NewRunning )
{
	UAVObjSetDataField(TaskInfoHandle(), (void*)NewRunning, offsetof( TaskInfoData, Running), 27*sizeof(uint8_t));
}
void TaskInfoRunningGet( uint8_t *NewRunning )
{
	UAVObjGetDataField(TaskInfoHandle(), (void*)NewRunning, offsetof( TaskInfoData, Running), 27*sizeof(uint8_t));
}
void TaskInfoRunningTimeSet( uint8_t *NewRunningTime )
{
	UAVObjSetDataField(TaskInfoHandle(), (void*)NewRunningTime, offsetof( TaskInfoData, RunningTime), 27*sizeof(uint8_t));
}
void TaskInfoRunningTimeGet( uint8_t *NewRunningTime )
{
	UAVObjGetDataField(TaskInfoHandle(), (void*)NewRunningTime, offsetof( TaskInfoData, RunningTime), 27*sizeof(uint8_t));
}


/**
 * @}
 */

