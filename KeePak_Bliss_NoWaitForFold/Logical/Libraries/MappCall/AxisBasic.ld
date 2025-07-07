(* Implements config and basic for a mapp axis *)
FUNCTION_BLOCK AxisBasic
<?xml version="1.0"?>
<?AutomationStudio Version=3.0.71?>
<!-- Automation Studio Generated XML Section -->
<networks xmlns:dt="urn:schemas-microsoft-com:datatypes" maxcolumn="0">
	<network label="" comment="&lt;axis&gt; Configuration Function" row="7" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="AxisConfig" type="MpAxisBasicConfig"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="pMpLink"/>
			<functionblock position="top" type="MpAxisBasicConfig"><input name="MpLink" vardynamic="true"/><output name="Active"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasicConfig"><input name="Enable"/><output name="Error"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="MpAxisBasicConfig"><input name="ErrorReset"/><output name="StatusID"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="AxisInterface.Parameters.AxisAndDrivePars"/>
			<functionblock position="middle" type="MpAxisBasicConfig"><input name="Configuration" vardynamic="true"/><output name="CommandBusy"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.LoadConfig"/>
			<line/>
			<functionblock position="middle" type="MpAxisBasicConfig"><input name="Load"/><output name="CommandDone"/></functionblock>
			<analog type="output" name="AxisInterface.Status.ConfigCommandDone"/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.SaveConfig"/>
			<line/>
			<functionblock position="bottom" type="MpAxisBasicConfig"><input name="Save"/><output name="Info"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="1" column="0" commented="1">
		<row>
			<analog type="input" name="pEndlessPosition"/>
			<function position="topbottom" type="MOVE"><input name="" extensible="true"/><output name="56"/></function>
			<analog type="output" name="AxisInterface.Parameters.MovementParameters.Home.EndlessPositionDataRef"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="&lt;axis&gt; Motion Control Function" row="20" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<empty/>
			<functionblock position="header" name="AxisBasic" type="MpAxisBasic"/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<analog type="input" name="pMpLink"/>
			<functionblock position="top" type="MpAxisBasic"><input name="MpLink" vardynamic="true"/><output name="Active"/></functionblock>
			<analog type="output" name="AxisInterface.Status.AxisBasicActive"/>
			<empty/>
		</row>
		<row>
			<line/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Enable"/><output name="Error"/></functionblock>
			<analog type="output" name="AxisInterface.Status.Error"/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="ErrorReset"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="ErrorReset"/><output name="StatusID"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<contact type="address" name="AxisInterface.Parameters.MovementParameters"/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Parameters" vardynamic="true"/><output name="UpdateDone"/></functionblock>
			<line/>
			<coil type="reset" name="AxisInterface.Commands.ToMapp.Update"/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.Update"/>
			<contact type="open" name="AxisInterface.Status.AxisBasicActive"/>
			<contact type="closed" name="AxisBasic.UpdateDone"/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Update"/><output name="Position"/></functionblock>
			<analog type="output" name="AxisInterface.Status.ActualPosition"/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<analog type="input" name="pAxis"/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Axis"/><output name="Velocity"/></functionblock>
			<analog type="output" name="AxisInterface.Status.ActualSpeed"/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.Power"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Power"/><output name="CommandBusy"/></functionblock>
			<line/>
			<coil type="open" name="AxisInterface.Status.MappCommandBusy"/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.Home"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Home"/><output name="CommandAborted"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.MoveVelocity"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="MoveVelocity"/><output name="PowerOn"/></functionblock>
			<line/>
			<coil type="open" name="AxisInterface.Status.PoweredOn"/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.MoveAbs"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="MoveAbsolute"/><output name="IsHomed"/></functionblock>
			<line/>
			<coil type="open" name="AxisInterface.Status.Homed"/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.MoveAdditive"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="MoveAdditive"/><output name="InVelocity"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.Stop"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Stop"/><output name="InPosition"/></functionblock>
			<line/>
			<coil type="open" name="AxisInterface.Status.InPosition"/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.JogPos"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="JogPositive"/><output name="MoveActive"/></functionblock>
			<line/>
			<coil type="open" name="AxisInterface.Status.InMotion"/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.JogNeg"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="JogNegative"/><output name="Stopped"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Autotune"/><output name="TuningDone"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<functionblock position="middle" type="MpAxisBasic"><input name="Simulate"/><output name="Simulation"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Commands.ToMapp.TorqueLimitingOn"/>
			<line/>
			<line/>
			<functionblock position="middle" type="MpAxisBasic"><input name="TorqueLimit"/><output name="TorqueLimited"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<functionblock position="middle" type="MpAxisBasic"><input name="ReleaseBrake"/><output name="BrakeReleased"/></functionblock>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<empty/>
			<functionblock position="bottom" type="MpAxisBasic"><output name="Info"/></functionblock>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="




PARSE ALL OF THE DIAG INFORMATION FOR THE HMI




StatusID.ID" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.StatusID.ID"/>
			<function position="topbottom" type="StatusID_Decoder"><input name="IN"/><output name="5"/></function>
			<analog type="output" name="AxisInterface.Status.PositiveStatusID"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="StatusID.Severity" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.StatusID.Severity"/>
			<function position="topbottom" type="Severity_Decoder"><input name="IN"/><output name="7"/></function>
			<analog type="output" name="AxisInterface.Status.StatusSeverity"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="StatusID.Code" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.StatusID.Code"/>
			<function position="topbottom" type="MOVE"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="AxisInterface.Status.StatusCode"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="Internal.ID" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.Internal.ID"/>
			<function position="topbottom" type="MOVE"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="AxisInterface.Status.InternalID"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="Internal.Severity" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.Internal.Severity"/>
			<function position="topbottom" type="Severity_Decoder"><input name="IN"/><output name="7"/></function>
			<analog type="output" name="AxisInterface.Status.InternalSeverity"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="Internal.Facility" row="2" column="0" commented="0">
		<row>
			<empty/>
			<function position="top" type="Compare!"><input name=""/><output name="56"/></function>
			<line/>
			<function position="top" type="MOVE"><input name="EN" extensible="true" ENO="true"/><output name="ENO" ENO="true"/></function>
			<empty/>
		</row>
		<row>
			<empty/>
			<function position="bottom" type="Compare!"><input name="&lt;!AxisBasic.Info.Diag.Internal.Facility = -1"/></function>
			<analog type="input" name="1000"/>
			<function position="bottom" type="MOVE"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="AxisInterface.Status.PositiveInternalFacility"/>
		</row>
	</network>
	<network label="" comment="" row="2" column="0" commented="0">
		<row>
			<empty/>
			<function position="top" type="Compare!"><input name=""/><output name="56"/></function>
			<line/>
			<function position="top" type="Facility_Decoder"><input name="EN"/><output name="7"/></function>
			<analog type="output" name="AxisInterface.Status.PositiveInternalFacility"/>
		</row>
		<row>
			<empty/>
			<function position="bottom" type="Compare!"><input name="&lt;!AxisBasic.Info.Diag.Internal.Facility &lt;&gt; -1"/></function>
			<analog type="input" name="AxisBasic.Info.Diag.Internal.Facility"/>
			<function position="bottom" type="Facility_Decoder"><input name="IN"/></function>
			<empty/>
		</row>
	</network>
	<network label="" comment="Internal.Code" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.Internal.Code"/>
			<function position="topbottom" type="MOVE"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="AxisInterface.Status.InternalCode"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="ExecutingCommand" row="1" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.Diag.ExecutingCommand"/>
			<function position="topbottom" type="MOVE"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="AxisInterface.Status.ExecutingCmd"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="END OF PARSING ALL OF THE DIAG INFORMATION FOR THE HMI









 " row="3" column="0" commented="0">
		<row>
			<analog type="input" name="AxisBasic.Info.AxisInitialized"/>
			<function position="top" type="MOVE"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="AxisInterface.Status.AxisInitialized"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<analog type="input" name="AxisBasic.Info.ReadyToPowerOn"/>
			<function position="middle" type="MOVE"><input name="" extensible="true"/><output name="56"/></function>
			<analog type="output" name="AxisInterface.Status.ReadyToPowerOn"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<analog type="input" name="AxisBasic.Info.CyclicRead.Torque.Value"/>
			<function position="bottom" type="MOVE"><input name="" extensible="true"/><output name="56"/></function>
			<analog type="output" name="AxisInterface.Status.ActualTorque"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="The move distance for absolute moves should be the difference between where you are and where you are going" row="3" column="0" commented="0">
		<row>
			<contact type="positive transition" name="AxisBasic.MoveAbsolute"/>
			<function position="top" type="Compute!"><input name="EN" ENO="true"/><output name="ENO" ENO="true"/></function>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<function position="middle" type="Compute!"><input name=""/><output name="56"/></function>
			<analog type="output" name="AbsDistance"/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<function position="bottom" type="Compute!"><input name="&lt;!ABS(AxisInterface.Parameters.MovementParameters.Position - AxisBasic.Position)"/></function>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="If the Position Parameter of &lt;axis&gt; has changed, When the move starts add the Calculated distance to the &lt;axis&gt;-Axis Odometer" row="3" column="0" commented="0">
		<row>
			<contact type="positive transition" name="AxisBasic.MoveActive"/>
			<contact type="open" name="AxisBasic.MoveAbsolute"/>
			<function position="top" type="ADD"><input name="EN" extensible="true" ENO="true"/><output name="ENO" ENO="true"/></function>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="OdometerValue"/>
			<function position="middle" type="ADD"><input name="" extensible="true"/><output name="40"/></function>
			<analog type="output" name="OdometerValue"/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="AbsDistance"/>
			<function position="bottom" type="ADD"><input name="" extensible="true"/></function>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="5" column="0" commented="0">
		<row>
			<empty/>
			<functionblock position="header" name="SetOverride" type="MC_SetOverride"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<analog type="input" name="pAxis"/>
			<functionblock position="top" type="MC_SetOverride"><input name="Axis"/><output name="Enabled"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="AxisInterface.Status.PoweredOn"/>
			<functionblock position="middle" type="MC_SetOverride"><input name="Enable"/><output name="Busy"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<analog type="input" name="Override"/>
			<functionblock position="middle" type="MC_SetOverride"><input name="VelFactor"/><output name="Error"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<analog type="input" name="1.0"/>
			<functionblock position="bottom" type="MC_SetOverride"><input name="AccFactor"/><output name="ErrorID"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
</networks>
END_FUNCTION_BLOCK














