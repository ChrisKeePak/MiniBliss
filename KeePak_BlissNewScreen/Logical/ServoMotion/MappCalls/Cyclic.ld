PROGRAM _CYCLIC
<?xml version="1.0"?>
<?AutomationStudio Version=3.0.71?>
<!-- Automation Studio Generated XML Section -->
<networks maxcolumn="0">
	<network label="" comment="" row="8" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="ServoRam" type="AxisBasic"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="mpServoRam"/>
			<functionblock position="top" type="AxisBasic"><input name="pMpLink"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gServoRam"/>
			<functionblock position="middle" type="AxisBasic"><input name="pAxis"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="ServoRam_EPD"/>
			<functionblock position="middle" type="AxisBasic"><input name="pEndlessPosition"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gServoRamInterface"/>
			<functionblock position="middle" type="AxisBasic"><input name="AxisInterface"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="AxisBasic"><input name="OdometerValue"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="ServoOverride"/>
			<functionblock position="middle" type="AxisBasic"><input name="Override"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="gSoftwareReset"/>
			<line/>
			<functionblock position="bottom" type="AxisBasic"><input name="ErrorReset"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="8" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="ServoPnP" type="AxisBasic"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="mpServoPick"/>
			<functionblock position="top" type="AxisBasic"><input name="pMpLink"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gServoPnP"/>
			<functionblock position="middle" type="AxisBasic"><input name="pAxis"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="ServoPnP_EPD"/>
			<functionblock position="middle" type="AxisBasic"><input name="pEndlessPosition"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gServoPnPInterface"/>
			<functionblock position="middle" type="AxisBasic"><input name="AxisInterface"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="AxisBasic"><input name="OdometerValue"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="ServoOverride"/>
			<functionblock position="middle" type="AxisBasic"><input name="Override"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="gSoftwareReset"/>
			<line/>
			<functionblock position="bottom" type="AxisBasic"><input name="ErrorReset"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="8" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="ServoFeed" type="AxisBasic"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="mpServoFeed"/>
			<functionblock position="top" type="AxisBasic"><input name="pMpLink"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gServoFeed"/>
			<functionblock position="middle" type="AxisBasic"><input name="pAxis"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="ServoFeed_EPD"/>
			<functionblock position="middle" type="AxisBasic"><input name="pEndlessPosition"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gServoFeedInterface"/>
			<functionblock position="middle" type="AxisBasic"><input name="AxisInterface"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="AxisBasic"><input name="OdometerValue"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="ServoOverride"/>
			<functionblock position="middle" type="AxisBasic"><input name="Override"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="gSoftwareReset"/>
			<line/>
			<functionblock position="bottom" type="AxisBasic"><input name="ErrorReset"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="8" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="BodyHopper" type="AxisBasic"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="mpBodyHopper"/>
			<functionblock position="top" type="AxisBasic"><input name="pMpLink"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gBodyHopper"/>
			<functionblock position="middle" type="AxisBasic"><input name="pAxis"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="BodyHopper_EPD"/>
			<functionblock position="middle" type="AxisBasic"><input name="pEndlessPosition"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gBodyHopperInterface"/>
			<functionblock position="middle" type="AxisBasic"><input name="AxisInterface"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="AxisBasic"><input name="OdometerValue"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="ServoOverride"/>
			<functionblock position="middle" type="AxisBasic"><input name="Override"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="gSoftwareReset"/>
			<line/>
			<functionblock position="bottom" type="AxisBasic"><input name="ErrorReset"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="8" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="LeftHopper" type="AxisBasic"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="mpLeftHopper"/>
			<functionblock position="top" type="AxisBasic"><input name="pMpLink"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gLeftHopper"/>
			<functionblock position="middle" type="AxisBasic"><input name="pAxis"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="LeftHopper_EPD"/>
			<functionblock position="middle" type="AxisBasic"><input name="pEndlessPosition"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gLeftHopperInterface"/>
			<functionblock position="middle" type="AxisBasic"><input name="AxisInterface"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="AxisBasic"><input name="OdometerValue"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="ServoOverride"/>
			<functionblock position="middle" type="AxisBasic"><input name="Override"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="gSoftwareReset"/>
			<line/>
			<functionblock position="bottom" type="AxisBasic"><input name="ErrorReset"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
	<network label="" comment="" row="8" column="0" commented="0">
		<row>
			<empty/>
			<empty/>
			<functionblock position="header" name="RightHopper" type="AxisBasic"/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="mpRightHopper"/>
			<functionblock position="top" type="AxisBasic"><input name="pMpLink"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gRightHopper"/>
			<functionblock position="middle" type="AxisBasic"><input name="pAxis"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="RightHopper_EPD"/>
			<functionblock position="middle" type="AxisBasic"><input name="pEndlessPosition"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<contact type="address" name="gRightHopperInterface"/>
			<functionblock position="middle" type="AxisBasic"><input name="AxisInterface"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<empty/>
			<functionblock position="middle" type="AxisBasic"><input name="OdometerValue"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<empty/>
			<analog type="input" name="ServoOverride"/>
			<functionblock position="middle" type="AxisBasic"><input name="Override"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
		<row>
			<contact type="open" name="gSoftwareReset"/>
			<line/>
			<functionblock position="bottom" type="AxisBasic"><input name="ErrorReset"/></functionblock>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
			<empty/>
		</row>
	</network>
</networks>
END_PROGRAM










































