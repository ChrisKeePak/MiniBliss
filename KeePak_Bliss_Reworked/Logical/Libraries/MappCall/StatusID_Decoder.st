FUNCTION StatusID_Decoder 
	
	CASE IN OF
	
		mpAXIS_NO_ERROR:
			StatusID_Decoder := 0;
			
		mpAXIS_ERR_ACTIVATION:
			StatusID_Decoder := 1;
			
		mpAXIS_ERR_MPLINK_NULL:
			StatusID_Decoder := 2;
			
		mpAXIS_ERR_MPLINK_INVALID:
			StatusID_Decoder := 3;
			
		mpAXIS_ERR_MPLINK_CHANGED:
			StatusID_Decoder := 4;
			
		mpAXIS_ERR_MPLINK_CORRUPT:
			StatusID_Decoder := 5;
			
		mpAXIS_ERR_MPLINK_IN_USE:
			StatusID_Decoder := 6;
			
		mpAXIS_ERR_PAR_NULL:
			StatusID_Decoder := 7;
			
		mpAXIS_ERR_CONFIG_NULL:
			StatusID_Decoder := 8;
			
		mpAXIS_ERR_CONFIG_NO_PV:
			StatusID_Decoder := 9;
			
		mpAXIS_ERR_CONFIG_LOAD:
			StatusID_Decoder := 10;
			
		mpAXIS_WRN_CONFIG_LOAD:
			StatusID_Decoder := 11;
			
		mpAXIS_ERR_CONFIG_SAVE:
			StatusID_Decoder := 12;
			
		mpAXIS_ERR_CONFIG_INVALID:
			StatusID_Decoder := 13;
			
		mpAXIS_ERR_AXIS_HANDLE_NULL:
			StatusID_Decoder := 14;
			
		mpAXIS_WRN_ERROR_TABLE_MISSING:
			StatusID_Decoder := 15;
			
		mpAXIS_WRN_CFG_WAIT_ERROR_RESET:
			StatusID_Decoder := 16;
			
		mpAXIS_WRN_CFG_WAIT_POWER_OFF:
			StatusID_Decoder := 17;
			
		mpAXIS_WRN_CFG_WAIT_STANDSTILL:
			StatusID_Decoder := 18;
			
		mpAXIS_ERR_PLC_OPEN:
			StatusID_Decoder := 19;
			
		mpAXIS_WRN_PLC_OPEN:
			StatusID_Decoder := 20;
			
		mpAXIS_WRN_READ_TORQUE_OFF:
			StatusID_Decoder := 21;
			
		mpAXIS_ERR_MAX_TORQUE_REACHED:
			StatusID_Decoder := 22;
			
		mpAXIS_ERR_SLAVE_NOT_FOUND:
			StatusID_Decoder := 23;
			
		mpAXIS_ERR_MASTER_NOT_FOUND:
			StatusID_Decoder := 24;
			
		mpAXIS_ERR_WRONG_DENOMINATOR:
			StatusID_Decoder := 25;
			
		mpAXIS_ERR_WRONG_NUMERATOR:
			StatusID_Decoder := 26;
			
		mpAXIS_ERR_NO_CAM_NAME:
			StatusID_Decoder := 27;
			
		mpAXIS_WRN_SLAVE_NOT_READY:
			StatusID_Decoder := 28;
			
		mpAXIS_ERR_CHECK_SLAVE_STATUS:
			StatusID_Decoder := 29;
			
		mpAXIS_ERR_CMD_WRONG_AXISTYPE:
			StatusID_Decoder := 30;
			
		mpAXIS_WRN_PARAMETER_LIMITED:
			StatusID_Decoder := 31;
			
		mpAXIS_WRN_MULTIPLE_COMMAND:
			StatusID_Decoder := 32;
			
		mpAXIS_ERR_CAM_PARAMETER:
			StatusID_Decoder := 33;
			
		mpAXIS_ERR_RECOVERY_NOT_ALLOWED:
			StatusID_Decoder := 34;
		
	END_CASE
	  
END_FUNCTION