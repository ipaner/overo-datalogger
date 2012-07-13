/**
 ******************************************************************************
 *
 * @file       uavobjectsinit.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Initialize all objects.
 *             Automatically generated by the UAVObjectGenerator.
 *   
 * @note       This is an automatically generated file.
 *             DO NOT modify manually.
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
#include "accels.h"
#include "accessorydesired.h"
#include "actuatorcommand.h"
#include "actuatordesired.h"
#include "actuatorsettings.h"
#include "altholdsmoothed.h"
#include "altitudeholddesired.h"
#include "altitudeholdsettings.h"
#include "attitudeactual.h"
#include "attitudesettings.h"
#include "baroairspeed.h"
#include "baroaltitude.h"
#include "cameradesired.h"
#include "camerastabsettings.h"
#include "faultsettings.h"
#include "firmwareiapobj.h"
#include "fixedwingpathfollowersettings.h"
#include "fixedwingpathfollowerstatus.h"
#include "flightbatterysettings.h"
#include "flightbatterystate.h"
#include "flightplancontrol.h"
#include "flightplansettings.h"
#include "flightplanstatus.h"
#include "flightstatus.h"
#include "flighttelemetrystats.h"
#include "gcsreceiver.h"
#include "gcstelemetrystats.h"
#include "gpsposition.h"
#include "gpssatellites.h"
#include "gpstime.h"
#include "gpsvelocity.h"
#include "gyros.h"
#include "gyrosbias.h"
#include "homelocation.h"
#include "hwsettings.h"
#include "i2cstats.h"
#include "magnetometer.h"
#include "manualcontrolcommand.h"
#include "manualcontrolsettings.h"
#include "mixersettings.h"
#include "mixerstatus.h"
#include "nedaccel.h"
#include "nedposition.h"
#include "objectpersistence.h"
#include "overosyncstats.h"
#include "pathdesired.h"
#include "pathplannersettings.h"
#include "pipxsettings.h"
#include "pipxstatus.h"
#include "positionactual.h"
#include "ratedesired.h"
#include "receiveractivity.h"
#include "revocalibration.h"
#include "revosettings.h"
#include "sonaraltitude.h"
#include "stabilizationdesired.h"
#include "stabilizationsettings.h"
#include "systemalarms.h"
#include "systemsettings.h"
#include "systemstats.h"
#include "taskinfo.h"
#include "txpidsettings.h"
#include "velocityactual.h"
#include "velocitydesired.h"
#include "vtolpathfollowersettings.h"
#include "watchdogstatus.h"
#include "waypoint.h"
#include "waypointactive.h"


/**
 * Function used to initialize the first instance of each object.
 * This file is automatically updated by the UAVObjectGenerator.
 */
void UAVObjectsInitializeAll()
{
    AccelsInitialize();
    AccessoryDesiredInitialize();
    ActuatorCommandInitialize();
    ActuatorDesiredInitialize();
    ActuatorSettingsInitialize();
    
    AltHoldSmoothedInitialize();
    AltitudeHoldDesiredInitialize();
    AltitudeHoldSettingsInitialize();
    AltHoldSmoothedInitialize();
    AttitudeActualInitialize();
    AttitudeSettingsInitialize();
    BaroAirspeedInitialize();
    BaroAltitudeInitialize();
    CameraDesiredInitialize();
    CameraStabSettingsInitialize();
    FaultSettingsInitialize();
    FirmwareIAPObjInitialize();
    FixedWingPathFollowerSettingsInitialize();
    FixedWingPathFollowerStatusInitialize();
    FlightBatterySettingsInitialize();
    FlightBatteryStateInitialize();
    FlightPlanControlInitialize();
    FlightPlanSettingsInitialize();
    FlightPlanStatusInitialize();
    FlightStatusInitialize();
    FlightTelemetryStatsInitialize();
    GCSReceiverInitialize();
    GCSTelemetryStatsInitialize();
    GPSPositionInitialize();
    GPSSatellitesInitialize();
    GPSTimeInitialize();
    GPSVelocityInitialize();
    GuidanceSettingsInitialize();
    GyrosInitialize();
    GyrosBiasInitialize();
    HomeLocationInitialize();
    HwSettingsInitialize();
    I2CStatsInitialize();
    MagnetometerInitialize();
    ManualControlCommandInitialize();
    ManualControlSettingsInitialize();
    MixerSettingsInitialize();
    MixerStatusInitialize();
    NedAccelInitialize();
    NEDPositionInitialize();
    ObjectPersistenceInitialize();
    OveroSyncStatsInitialize();
    PathDesiredInitialize();
    PathPlannerSettingsInitialize();
    PipXSettingsInitialize();
    PipXStatusInitialize();
    PositionActualInitialize();
    RateDesiredInitialize();
    ReceiverActivityInitialize();
    RevoCalibrationInitialize();
    RevoSettingsInitialize();
    SonarAltitudeInitialize();
    StabilizationDesiredInitialize();
    StabilizationSettingsInitialize();
    SystemAlarmsInitialize();
    SystemSettingsInitialize();
    SystemStatsInitialize();
    TaskInfoInitialize();
    TxPIDSettingsInitialize();
    VelocityActualInitialize();
    VelocityDesiredInitialize();
    VtolPathFollowerSettingsInitialize();
    WatchdogStatusInitialize();
    WaypointInitialize();
    WaypointActiveInitialize();
}
