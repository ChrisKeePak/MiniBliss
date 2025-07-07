
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

/**
* This task:
*
* Populates homing and coupling defaults for each axis
* Instantiates axis control state machines for each axis
* 
*
*/ 

void _INIT ProgramInit(void)
{
	
	gHomingParameters.ServoRam.Mode = mpAXIS_HOME_MODE_BLOCK_DS; //Servo Ram homes to hard stop
	gHomingParameters.ServoRam.BlockDetectionPositionError = 1.5;
	gHomingParameters.ServoRam.PositionErrorStopLimit = 2.0;
	gHomingParameters.ServoRam.StartDirection = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.ServoRam.HomingDirection = mpAXIS_HOME_DIR_POSITIVE;
	gHomingParameters.ServoRam.StartVelocity = 10; 
	gHomingParameters.ServoRam.HomingVelocity = 5;
	gHomingParameters.ServoRam.Position = -12.5;
	gHomingParameters.ServoRam.SensorOffset = 12.5; //back off switch by 12.5 mm and call that position home
	gHomingParameters.ServoRam.TorqueLimit = 8;
	
	gHomingParameters.ServoPnP.Mode = mpAXIS_HOME_MODE_ABS_SWITCH; // Pick and place homes to a switch
	gHomingParameters.ServoPnP.SwitchEdge = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.ServoPnP.StartDirection = mpAXIS_HOME_DIR_POSITIVE;
	gHomingParameters.ServoPnP.HomingDirection = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.ServoPnP.StartVelocity = 5; 
	gHomingParameters.ServoPnP.HomingVelocity = 5;
	gHomingParameters.ServoPnP.Position = 0;
	gHomingParameters.ServoPnP.SensorOffset = 0;
	gHomingParameters.ServoPnP.TorqueLimit = 2.0;
	
	gHomingParameters.ServoFeed.Mode = mpAXIS_HOME_MODE_DIRECT;
	gHomingParameters.ServoFeed.StartDirection = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.ServoFeed.HomingDirection = mpAXIS_HOME_DIR_POSITIVE;
	gHomingParameters.ServoFeed.Position = 0;
	gHomingParameters.ServoFeed.SensorOffset = 0;
	
	
	
	gHomingParameters.BodyHopper.Mode = mpAXIS_HOME_MODE_DIRECT;
	gHomingParameters.BodyHopper.StartDirection = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.BodyHopper.HomingDirection = mpAXIS_HOME_DIR_POSITIVE;
	gHomingParameters.BodyHopper.Position = 0;
	gHomingParameters.BodyHopper.SensorOffset = 0;
	
	gHomingParameters.LeftHopper.Mode = mpAXIS_HOME_MODE_DIRECT;
	gHomingParameters.LeftHopper.StartDirection = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.LeftHopper.HomingDirection = mpAXIS_HOME_DIR_POSITIVE;
	gHomingParameters.LeftHopper.Position = 0;
	gHomingParameters.LeftHopper.SensorOffset = 0;
	
	gHomingParameters.RightHopper.Mode = mpAXIS_HOME_MODE_DIRECT;
	gHomingParameters.RightHopper.StartDirection = mpAXIS_HOME_DIR_NEGATIVE;
	gHomingParameters.RightHopper.HomingDirection = mpAXIS_HOME_DIR_POSITIVE;
	gHomingParameters.RightHopper.Position = 0;
	gHomingParameters.RightHopper.SensorOffset = 0;
	
	ServoRamFirstHomeExecuted = 0; //THIS MUST ALWAYS BE SET TO FALSE. THIS IS A SINGLE TURN ENCODER
	ServoPnPFirstHomeExecuted = 0;
	ServoFeedFirstHomeExecuted = 0; //THIS MUST ALWAYS BE SET TO FALSE. THIS IS A SINGLE TURN ENCODER
	BodyHopperFirstHomeExecuted = 0; //THIS MUST ALWAYS BE SET TO FALSE. THIS IS A SINGLE TURN ENCODER
	LeftHopperFirstHomeExecuted = 0; //THIS MUST ALWAYS BE SET TO FALSE. THIS IS A SINGLE TURN ENCODER
	RightHopperFirstHomeExecuted = 0; //THIS MUST ALWAYS BE SET TO FALSE. THIS IS A SINGLE TURN ENCODER
	
	
	//******* Start Axis and Drive Param Default Settings *******//
	
	//ram
	
	strcpy((char*)&gServoRamInterface.Parameters.AxisAndDrivePars.AxisName, "Ram");
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.BaseType = mpAXIS_LIMITED_LINEAR;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MeasurementUnit = mpAXIS_UNIT_MM;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MeasurementResolution = 0.01;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.LowerLimit = 0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.UpperLimit = 10650.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.PeriodSettings.Period = 360;
	
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityPositive = 1391.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityNegative = 1391.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Acceleration = 3055.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Deceleration = 3055.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.JerkTime = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.PositionErrorStopLimit = 12;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimit = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimitMode = mpAXIS_VEL_MODE_OFF;

	//gServoRamInterface.Parameters.AxisAndDrivePars.Axis.CyclicReadChannels.UserChannelParameterID = 214;
	
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Input = 640; //actual gear ratio is 8.82 motor turns per load rev
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Output = 100;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Direction = mpAXIS_DIR_CLOCKWISE;
	
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Transformation.ReferenceDistance = 265.1125;
	
	//gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION_FF;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.ProportionalGain = 250.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.IntegralTime = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.PredictionTime = 0.0004;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.TotalDelayTime = 0.0004;
	
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.ProportionalGain = 7.5;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.IntegralTime = 0.1;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.FilterTime = 0.0;
	
	//these values are only used if controller mode is set to position + feed forward
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueLoad = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorquePositive = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueNegative = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.SpeedTorqueFactor = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.Inertia = 0.0;
	gServoRamInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.AccelerationFilterTime = 0.0;
	
	//intitialize how long the motor waits before going into power saver mode
	gHMI.Parameters.ServoRamPowerSaverTime = 5000;
	
	//pick and place
	
	strcpy((char*)&gServoPnPInterface.Parameters.AxisAndDrivePars.AxisName, "PickNPlace");
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.BaseType = mpAXIS_LIMITED_ROTARY;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MeasurementUnit = mpAXIS_UNIT_DEGREES;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MeasurementResolution = 0.01;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.LowerLimit = 0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.UpperLimit = 115;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.PeriodSettings.Period = 360;
	
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityPositive = 1800.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityNegative = 1800.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Acceleration = 30800.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Deceleration = 30800.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.JerkTime = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.PositionErrorStopLimit = 4;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimit = 2;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimitMode = mpAXIS_VEL_MODE_OFF;

	//gServoPnPInterface.Parameters.AxisAndDrivePars.Axis.CyclicReadChannels.UserChannelParameterID = 214;
	
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Input = 10;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Output = 1;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Direction = mpAXIS_DIR_CLOCKWISE;
	
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Transformation.ReferenceDistance = 360;
	
	//gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION_FF;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.ProportionalGain = 600.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.IntegralTime = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.PredictionTime = 0.0004;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.TotalDelayTime = 0.0004;
	
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.ProportionalGain = 1.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.IntegralTime = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.FilterTime = 0.0;
	
	//these values are only used if controller mode is set to position + feed forward
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueLoad = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorquePositive = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueNegative = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.SpeedTorqueFactor = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.Inertia = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.AccelerationFilterTime = 0.0;
	gServoPnPInterface.Parameters.AxisAndDrivePars.Drive.DigitalInputs.Level.HomingSwitch = mpAXIS_IO_ACTIVE_HI_EXTERNAL;
	
	//feed
	
	strcpy((char*)&gServoFeedInterface.Parameters.AxisAndDrivePars.AxisName, "Feed");
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.BaseType = mpAXIS_PERIODIC_LINEAR;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MeasurementUnit = mpAXIS_UNIT_MM;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MeasurementResolution = 0.01;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.LowerLimit = 0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.UpperLimit = 360.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.PeriodSettings.Period = 711.2;
	
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityPositive = 1000.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityNegative = 1000.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Acceleration = 10000.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Deceleration = 10000.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.JerkTime = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.PositionErrorStopLimit = 2;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimit = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimitMode = mpAXIS_VEL_MODE_OFF;

	//gServoFeedInterface.Parameters.AxisAndDrivePars.Axis.CyclicReadChannels.UserChannelParameterID = 214;
	
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Input = 10;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Output = 1;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Direction = mpAXIS_DIR_CLOCKWISE; //mpAXIS_DIR_CLOCKWISE is the normal rotation
	
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Transformation.ReferenceDistance = 279.4;
	
	//gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION_FF;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.ProportionalGain = 400.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.IntegralTime = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.PredictionTime = 0.0004;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.TotalDelayTime = 0.0004;
	
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.ProportionalGain = 0.6;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.IntegralTime = 0.1;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.FilterTime = 0.0;
	
	//these values are only used if controller mode is set to position + feed forward
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueLoad = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorquePositive = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueNegative = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.SpeedTorqueFactor = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.Inertia = 0.0;
	gServoFeedInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.AccelerationFilterTime = 0.0;
		
	
	
	// body hopper
	
	strcpy((char*)&gBodyHopperInterface.Parameters.AxisAndDrivePars.AxisName, "BodyHopper");
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.BaseType = mpAXIS_LINEAR;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MeasurementUnit = mpAXIS_UNIT_MM;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MeasurementResolution = 0.01;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.LowerLimit = 0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.UpperLimit = 100.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.PeriodSettings.Period = 360;
	
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityPositive = 1000.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityNegative = 1000.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Acceleration = 5000.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Deceleration = 5000.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.JerkTime = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.PositionErrorStopLimit = 2;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimit = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimitMode = mpAXIS_VEL_MODE_OFF;

	//gBodyHopperInterface.Parameters.AxisAndDrivePars.Axis.CyclicReadChannels.UserChannelParameterID = 214;
	
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Input = 10;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Output = 1;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Direction = mpAXIS_DIR_CLOCKWISE;
	
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Transformation.ReferenceDistance = 381;
	
	//gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION_FF;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.ProportionalGain = 400.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.IntegralTime = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.PredictionTime = 0.0004;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.TotalDelayTime = 0.0004;
	
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.ProportionalGain = 0.6;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.IntegralTime = 0.1;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.FilterTime = 0.0;
	
	//these values are only used if controller mode is set to position + feed forward
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueLoad = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorquePositive = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueNegative = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.SpeedTorqueFactor = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.Inertia = 0.0;
	gBodyHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.AccelerationFilterTime = 0.0;
	
	// left hopper
	
	strcpy((char*)&gLeftHopperInterface.Parameters.AxisAndDrivePars.AxisName, "LeftHopper");
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.BaseType = mpAXIS_LINEAR;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MeasurementUnit = mpAXIS_UNIT_MM;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MeasurementResolution = 0.01;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.LowerLimit = 0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.UpperLimit = 100.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.PeriodSettings.Period = 360;
	
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityPositive = 1000.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityNegative = 1000.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Acceleration = 5000.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Deceleration = 5000.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.JerkTime = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.PositionErrorStopLimit = 2;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimit = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimitMode = mpAXIS_VEL_MODE_OFF;

	//gLeftHopperInterface.Parameters.AxisAndDrivePars.Axis.CyclicReadChannels.UserChannelParameterID = 214;
	
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Input = 10;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Output = 1;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Direction = mpAXIS_DIR_COUNTERCLOCKWISE;
	
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Transformation.ReferenceDistance = 381;
	
	//gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION_FF;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.ProportionalGain = 400.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.IntegralTime = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.PredictionTime = 0.0004;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.TotalDelayTime = 0.0004;
	
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.ProportionalGain = 0.6;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.IntegralTime = 0.1;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.FilterTime = 0.0;
	
	//these values are only used if controller mode is set to position + feed forward
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueLoad = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorquePositive = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueNegative = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.SpeedTorqueFactor = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.Inertia = 0.0;
	gLeftHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.AccelerationFilterTime = 0.0;
	
	// right hopper
	
	strcpy((char*)&gRightHopperInterface.Parameters.AxisAndDrivePars.AxisName, "RightHopper");
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.BaseType = mpAXIS_LINEAR;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MeasurementUnit = mpAXIS_UNIT_MM;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MeasurementResolution = 0.01;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.LowerLimit = 0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.SoftwareLimitPositions.UpperLimit = 100.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.PeriodSettings.Period = 360;
	
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityPositive = 1000.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityNegative = 1000.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Acceleration = 5000.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.Deceleration = 5000.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.JerkTime = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.PositionErrorStopLimit = 2;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimit = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.MovementLimits.VelocityErrorStopLimitMode = mpAXIS_VEL_MODE_OFF;

	//gRightHopperInterface.Parameters.AxisAndDrivePars.Axis.CyclicReadChannels.UserChannelParameterID = 214;
	
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Input = 10;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Output = 1;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Gearbox.Direction = mpAXIS_DIR_COUNTERCLOCKWISE;
	
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Transformation.ReferenceDistance = 381;
	
	//gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION_FF;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Mode = mpAXIS_CTRL_MODE_POSITION;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.ProportionalGain = 400.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.IntegralTime = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.PredictionTime = 0.0004;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Position.TotalDelayTime = 0.0004;
	
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.ProportionalGain = 0.6;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.IntegralTime = 0.1;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.Speed.FilterTime = 0.0;
	
	//these values are only used if controller mode is set to position + feed forward
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueLoad = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorquePositive = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.TorqueNegative = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.SpeedTorqueFactor = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.Inertia = 0.0;
	gRightHopperInterface.Parameters.AxisAndDrivePars.Drive.Controller.FeedForward.AccelerationFilterTime = 0.0;
	
	//******* End Axis and Drive Param Default Settings *******//
	
	
	
}

void _CYCLIC ProgramCyclic(void)
{
	
	
	//******************START RAM HANDLER******************//
	gIsSimulated = DiagCpuIsSimulated();
	
	
	if ((ServoRamFirstHomeExecuted == 0) || (ServoPnPFirstHomeExecuted == 0)) {
		gHMI.StatusDatapoints.ServoRamHomeSDP = UNHIDE;
	} else {
		gHMI.StatusDatapoints.ServoRamHomeSDP = HIDE;
	}

	///////////////////////////////////////////////////////////////////////////////////////////////////
	
	PowerSaverTimer.PT = gHMI.Parameters.ServoRamPowerSaverTime;
	// If jogging or homing  is requested, power on the motor and then execute the jog
	if ((gServoRamInterface.Status.PowerSaverModeOn == 1) && ((gHMI.Commands.CycleServoRam) || (gCyclesToFinish > 0) || (gHMI.Commands.JogServoRamPos) || (gHMI.Commands.JogServoRamNeg) || (gHMI.Commands.HomeServoRam) || (ServoRamAutoHome)))
	{
		gServoRamInterface.Commands.StopPowerSaver = 1;
	}
	else if ((gServoRamInterface.Status.PowerSaverModeOn == 0) && ((gHMI.Commands.CycleServoRam) || (gCyclesToFinish > 0) || (gHMI.Commands.JogServoRamPos) || (gHMI.Commands.JogServoRamNeg) || (gHMI.Commands.HomeServoRam) || (ServoRamAutoHome)))
	{
		gServoRamInterface.Commands.RequestHome = gHMI.Commands.HomeServoRam || ServoRamAutoHome;
		gServoRamInterface.Commands.RequestJogPos = gHMI.Commands.JogServoRamPos;
		gServoRamInterface.Commands.RequestJogNeg = gHMI.Commands.JogServoRamNeg;
		PowerSaverTimer.IN = 0;
	}
	else if ((gServoRamInterface.Status.PowerSaverModeOn == 0) && (gServoRamInterface.Status.PoweredOn) && (PowerSaverTimer.Q == 0) && ((gCyclesToFinish == 0) && (gHMI.Commands.CycleServoRam == 0) && (gHMI.Commands.JogServoRamPos == 0) && (gHMI.Commands.JogServoRamNeg == 0) && (gHMI.Commands.HomeServoRam == 0) && (ServoRamAutoHome == 0)))
	{
		gServoRamInterface.Commands.RequestHome = gHMI.Commands.HomeServoRam || ServoRamAutoHome;
		gServoRamInterface.Commands.RequestJogPos = gHMI.Commands.JogServoRamPos;
		gServoRamInterface.Commands.RequestJogNeg = gHMI.Commands.JogServoRamNeg;
		PowerSaverTimer.IN = 1;
	}
	// Use a timer to avoid constantly cycling the power
	else if (PowerSaverTimer.Q)
	{
		PowerSaverTimer.IN = 0;
		gServoRamInterface.Commands.StartPowerSaver = 1;		
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	
	gServoRamInterface.Parameters.MovementParameters.Jog.Acceleration = gHMI.Parameters.ServoRamAccel;
	gServoRamInterface.Parameters.MovementParameters.Jog.Deceleration = gHMI.Parameters.ServoRamAccel;
	gServoRamInterface.Parameters.MovementParameters.Jog.Velocity = gHMI.Parameters.ServoRamJogVelocity;
	
	gServoRamInterface.Parameters.MovementParameters.Acceleration = gHMI.Parameters.ServoRamAccel;
	gServoRamInterface.Parameters.MovementParameters.Deceleration = gHMI.Parameters.ServoRamAccel;
	gServoRamInterface.Parameters.MovementParameters.Torque.Limit = gHMI.Parameters.ServoRamTorqueLimit;
	gServoRamInterface.Parameters.MovementParameters.CyclicRead.TorqueMode = mpAXIS_READ_CYCLIC;
	
	//update torque limit anytime it is changed
	if (gServoRamInterface.Status.AxisInitialized) {
		if (OldTorqueLimitRam != gServoRamInterface.Parameters.MovementParameters.Torque.Limit) {
			gServoRamInterface.Commands.ToMapp.Update = 1;
		}
	
		OldTorqueLimitRam = gServoRamInterface.Parameters.MovementParameters.Torque.Limit;
	}
	
	//home request while running should clear command to cycle the ram This prevents ram from taking off immediately after home complets
	if (gServoRamInterface.Commands.RequestHome) {
		gHMI.Commands.CycleServoRam = 0;
	}
	
	//OldTorqueLimitRam = gServoRamInterface.Parameters.MovementParameters.Torque.Limit;
	
	ServoRamHandler.AlarmActive = gHighSeverityAlarmActive;
	ServoRamHandler.IsSimulated = gIsSimulated;
	ServoRamHandler.FirstHomeExecuted = &ServoRamFirstHomeExecuted;
	ServoRamHandler.pInterface = &gServoRamInterface;
	ServoRamHandler.pHomingParameters = &gHomingParameters.ServoRam;
	AxisHandler(&ServoRamHandler);;
	//******************END RAM HANDLER******************//
	
	
	//******************START FEED HANDLER******************//
	gServoFeedInterface.Commands.RequestHome = gHMI.Commands.HomeServoFeed;
	gServoFeedInterface.Commands.RequestJogPos = gHMI.Commands.JogServoFeedPos;
	gServoFeedInterface.Commands.RequestJogNeg = gHMI.Commands.JogServoFeedNeg;
	gServoFeedInterface.Parameters.MovementParameters.Jog.Acceleration = gHMI.Parameters.ServoFeedAccel;
	gServoFeedInterface.Parameters.MovementParameters.Jog.Deceleration = gHMI.Parameters.ServoFeedAccel;
	gServoFeedInterface.Parameters.MovementParameters.Jog.Velocity = gHMI.Parameters.ServoFeedJogVelocity;
	
	gServoFeedInterface.Parameters.MovementParameters.Acceleration = gHMI.Parameters.ServoFeedAccel;
	gServoFeedInterface.Parameters.MovementParameters.Deceleration = gHMI.Parameters.ServoFeedAccel;
	gServoFeedInterface.Parameters.MovementParameters.Velocity = gHMI.Parameters.ServoFeedVelocity;
	gServoFeedInterface.Parameters.MovementParameters.Torque.Limit = gHMI.Parameters.ServoFeedTorqueLimit;
	
	//update torque limit anytime it is changed
	if (gServoFeedInterface.Status.AxisInitialized) {
		if (OldTorqueLimitFeed != gServoFeedInterface.Parameters.MovementParameters.Torque.Limit) {
			gServoFeedInterface.Commands.ToMapp.Update = 1;
		}
	
		OldTorqueLimitFeed = gServoFeedInterface.Parameters.MovementParameters.Torque.Limit;
	}
	
	ServoFeedHandler.AlarmActive = gHighSeverityAlarmActive;
	ServoFeedHandler.IsSimulated = gIsSimulated;
	ServoFeedHandler.FirstHomeExecuted = &ServoFeedFirstHomeExecuted;
	ServoFeedHandler.pInterface = &gServoFeedInterface;
	ServoFeedHandler.pHomingParameters = &gHomingParameters.ServoFeed;
	AxisHandler(&ServoFeedHandler);
	//******************END FEED HANDLER******************//	
		
	//******************START BODY HOPPER HANDLER******************//
	gBodyHopperInterface.Commands.RequestHome = gHMI.Commands.HomeBodyHopper;
	gBodyHopperInterface.Commands.RequestJogPos = gHMI.Commands.JogBodyHopperPos;
	gBodyHopperInterface.Commands.RequestJogNeg = gHMI.Commands.JogBodyHopperNeg;
	gBodyHopperInterface.Parameters.MovementParameters.Jog.Acceleration = gHMI.Parameters.BodyHopperAccel;
	gBodyHopperInterface.Parameters.MovementParameters.Jog.Deceleration = gHMI.Parameters.BodyHopperAccel;
	gBodyHopperInterface.Parameters.MovementParameters.Jog.Velocity = gHMI.Parameters.BodyHopperJogVelocity;
	
	gBodyHopperInterface.Parameters.MovementParameters.Acceleration = gHMI.Parameters.BodyHopperAccel;
	gBodyHopperInterface.Parameters.MovementParameters.Deceleration = gHMI.Parameters.BodyHopperAccel;
	gBodyHopperInterface.Parameters.MovementParameters.Velocity = gHMI.Parameters.BodyHopperVelocity;
	gBodyHopperInterface.Parameters.MovementParameters.Torque.Limit = gHMI.Parameters.BodyHopperTorqueLimit;
	gBodyHopperInterface.Parameters.MovementParameters.CyclicRead.TorqueMode = mpAXIS_READ_CYCLIC;
	
	//update torque limit anytime it is changed
	if (gBodyHopperInterface.Status.AxisInitialized) {
		if (OldTorqueLimitBodyHopper != gBodyHopperInterface.Parameters.MovementParameters.Torque.Limit) {
			gBodyHopperInterface.Commands.ToMapp.Update = 1;
		}
	
		OldTorqueLimitBodyHopper = gBodyHopperInterface.Parameters.MovementParameters.Torque.Limit;
	}
	
	BodyHopperHandler.AlarmActive = gHighSeverityAlarmActive;
	BodyHopperHandler.IsSimulated = gIsSimulated;
	BodyHopperHandler.FirstHomeExecuted = &BodyHopperFirstHomeExecuted;
	BodyHopperHandler.pInterface = &gBodyHopperInterface;
	BodyHopperHandler.pHomingParameters = &gHomingParameters.BodyHopper;
	AxisHandler(&BodyHopperHandler);
	//******************END BODY HOPPER HANDLER******************//		
		
	//******************START LEFT HOPPER HANDLER******************//
	gBodyHopperInterface.Commands.RequestHome = gHMI.Commands.HomeBodyHopper;
	gLeftHopperInterface.Commands.RequestJogPos = gHMI.Commands.JogLeftHopperPos;
	gLeftHopperInterface.Commands.RequestJogNeg = gHMI.Commands.JogLeftHopperNeg;
	gLeftHopperInterface.Parameters.MovementParameters.Jog.Acceleration = gHMI.Parameters.LeftHopperAccel;
	gLeftHopperInterface.Parameters.MovementParameters.Jog.Deceleration = gHMI.Parameters.LeftHopperAccel;
	gLeftHopperInterface.Parameters.MovementParameters.Jog.Velocity = gHMI.Parameters.LeftHopperJogVelocity;
	
	gLeftHopperInterface.Parameters.MovementParameters.Acceleration = gHMI.Parameters.LeftHopperAccel;
	gLeftHopperInterface.Parameters.MovementParameters.Deceleration = gHMI.Parameters.LeftHopperAccel;
	gLeftHopperInterface.Parameters.MovementParameters.Velocity = gHMI.Parameters.LeftHopperVelocity;
	gLeftHopperInterface.Parameters.MovementParameters.Torque.Limit = gHMI.Parameters.LeftHopperTorqueLimit;
	gLeftHopperInterface.Parameters.MovementParameters.CyclicRead.TorqueMode = mpAXIS_READ_CYCLIC;
	
	//update torque limit anytime it is changed
	if (gLeftHopperInterface.Status.AxisInitialized) {
		if (OldTorqueLimitLeftHopper != gLeftHopperInterface.Parameters.MovementParameters.Torque.Limit) {
			gLeftHopperInterface.Commands.ToMapp.Update = 1;
		}
	
		OldTorqueLimitLeftHopper = gLeftHopperInterface.Parameters.MovementParameters.Torque.Limit;
	}
	
	LeftHopperHandler.AlarmActive = gHighSeverityAlarmActive;
	LeftHopperHandler.IsSimulated = gIsSimulated;
	LeftHopperHandler.FirstHomeExecuted = &LeftHopperFirstHomeExecuted;
	LeftHopperHandler.pInterface = &gLeftHopperInterface;
	LeftHopperHandler.pHomingParameters = &gHomingParameters.LeftHopper;
	AxisHandler(&LeftHopperHandler);
	//******************END LEFT HOPPER HANDLER******************//
	
	//******************START RIGHT HOPPER HANDLER******************//
	gBodyHopperInterface.Commands.RequestHome = gHMI.Commands.HomeRightHopper;
	gRightHopperInterface.Commands.RequestJogPos = gHMI.Commands.JogRightHopperPos;
	gRightHopperInterface.Commands.RequestJogNeg = gHMI.Commands.JogRightHopperNeg;
	gRightHopperInterface.Parameters.MovementParameters.Jog.Acceleration = gHMI.Parameters.RightHopperAccel;
	gRightHopperInterface.Parameters.MovementParameters.Jog.Deceleration = gHMI.Parameters.RightHopperAccel;
	gRightHopperInterface.Parameters.MovementParameters.Jog.Velocity = gHMI.Parameters.RightHopperJogVelocity;
	
	gRightHopperInterface.Parameters.MovementParameters.Acceleration = gHMI.Parameters.RightHopperAccel;
	gRightHopperInterface.Parameters.MovementParameters.Deceleration = gHMI.Parameters.RightHopperAccel;
	gRightHopperInterface.Parameters.MovementParameters.Velocity = gHMI.Parameters.RightHopperVelocity;
	gRightHopperInterface.Parameters.MovementParameters.Torque.Limit = gHMI.Parameters.RightHopperTorqueLimit;
	gRightHopperInterface.Parameters.MovementParameters.CyclicRead.TorqueMode = mpAXIS_READ_CYCLIC;
	
	//update torque limit anytime it is changed
	if (gRightHopperInterface.Status.AxisInitialized) {
		if (OldTorqueLimitRightHopper != gRightHopperInterface.Parameters.MovementParameters.Torque.Limit) {
			gRightHopperInterface.Commands.ToMapp.Update = 1;
		}
	
		OldTorqueLimitRightHopper = gRightHopperInterface.Parameters.MovementParameters.Torque.Limit;
	}
	
	RightHopperHandler.AlarmActive = gHighSeverityAlarmActive;
	RightHopperHandler.IsSimulated = gIsSimulated;
	RightHopperHandler.FirstHomeExecuted = &RightHopperFirstHomeExecuted;
	RightHopperHandler.pInterface = &gRightHopperInterface;
	RightHopperHandler.pHomingParameters = &gHomingParameters.RightHopper;
	AxisHandler(&RightHopperHandler);
	//******************END RIGHT HOPPER HANDLER******************//
	
	
		//******************START PNP HANDLER******************//
	gServoPnPInterface.Commands.RequestHome = gHMI.Commands.HomeServoPnP || ServoPnPAutoHome;
	gServoPnPInterface.Commands.RequestJogPos = gHMI.Commands.JogServoPnPPos;
	gServoPnPInterface.Commands.RequestJogNeg = gHMI.Commands.JogServoPnPNeg;
	gServoPnPInterface.Parameters.MovementParameters.Jog.Acceleration = gHMI.Parameters.ServoPnPAccel;
	gServoPnPInterface.Parameters.MovementParameters.Jog.Deceleration = gHMI.Parameters.ServoPnPAccel;
	gServoPnPInterface.Parameters.MovementParameters.Jog.Velocity = gHMI.Parameters.ServoPnPJogVelocity;
	
	gServoPnPInterface.Parameters.MovementParameters.Acceleration = gHMI.Parameters.ServoPnPAccel;
	gServoPnPInterface.Parameters.MovementParameters.Deceleration = gHMI.Parameters.ServoPnPAccel;
	gServoPnPInterface.Parameters.MovementParameters.Torque.Limit = gHMI.Parameters.ServoPnPTorqueLimit;
	gServoPnPInterface.Parameters.MovementParameters.CyclicRead.TorqueMode = mpAXIS_READ_CYCLIC;
	
	//update torque limit anytime it is changed
	if (gServoPnPInterface.Status.AxisInitialized) {
		if (OldTorqueLimitRam != gServoPnPInterface.Parameters.MovementParameters.Torque.Limit) {
			gServoPnPInterface.Commands.ToMapp.Update = 1;
		}
	
		OldTorqueLimitRam = gServoPnPInterface.Parameters.MovementParameters.Torque.Limit;
	}
	
	//home request while running should clear command to cycle the ram This prevents ram from taking off immediately after home complets
	if (gServoPnPInterface.Commands.RequestHome) {
		gHMI.Commands.CycleServoPnP = 0;
	}
	
	//OldTorqueLimitRam = gServoPnPInterface.Parameters.MovementParameters.Torque.Limit;
	
	ServoPnPHandler.AlarmActive = gHighSeverityAlarmActive;
	ServoPnPHandler.IsSimulated = gIsSimulated;
	ServoPnPHandler.FirstHomeExecuted = &ServoPnPFirstHomeExecuted;
	ServoPnPHandler.pInterface = &gServoPnPInterface;
	ServoPnPHandler.pHomingParameters = &gHomingParameters.ServoPnP;
	AxisHandler(&ServoPnPHandler);
	//******************END PNP HANDLER******************//
	
	
	
	
	
	
	
	
	// Call FUBS
	SetHardwareInputs.HomeSwitch = gIO.DIs.BodyPickHome;
	SetHardwareInputs.Axis = &gServoPnP;
	SetHardwareInputs.Enable = 1;
	MC_BR_SetHardwareInputs(&SetHardwareInputs);
	TON(&PowerSaverTimer);
}

void _EXIT ProgramExit(void)
{

}

