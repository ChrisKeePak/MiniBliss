FUNCTION Severity_Decoder 
	
	CASE IN OF
	
		mpCOM_SEV_SUCCESS:
			Severity_Decoder := 0;
			
		mpCOM_SEV_INFORMATIONAL:
			Severity_Decoder := 1;
			
		mpCOM_SEV_WARNING:
			Severity_Decoder := 2;
			
		mpCOM_SEV_ERROR:
			Severity_Decoder := 3;
		
	END_CASE
	  
END_FUNCTION