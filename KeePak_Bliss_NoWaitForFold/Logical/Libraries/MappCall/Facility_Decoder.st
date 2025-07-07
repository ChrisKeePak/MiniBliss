FUNCTION Facility_Decoder 
    
	CASE IN OF
    
		mpCOM_FAC_UNDEFINED:
			Facility_Decoder := 1000;
            
		mpCOM_FAC_ARCORE:
			Facility_Decoder := 0;
            
		mpCOM_FAC_SAFETY1:
			Facility_Decoder := 1;
            
		mpCOM_FAC_SAFETY2:
			Facility_Decoder := 2;
            
		mpCOM_FAC_GMC1:
			Facility_Decoder := 96;
            
		mpCOM_FAC_GMC2:
			Facility_Decoder := 97;
            
		mpCOM_FAC_GMCAXIS:
			Facility_Decoder := 98;
            
		mpCOM_FAC_GMCAXESGROUP:
			Facility_Decoder := 99;
            
		mpCOM_FAC_GMCARNCGROUP:
			Facility_Decoder := 103;
            
		mpCOM_FAC_TRF:
			Facility_Decoder := 105;
            
		mpCOM_FAC_MAPP_INTERNAL:
			Facility_Decoder := 144;
            
		mpCOM_FAC_MAPP_CORE:
			Facility_Decoder := 145;
            
		mpCOM_FAC_MAPP_INFRASTRUCTURE:
			Facility_Decoder := 146;
            
		mpCOM_FAC_MAPP_MECHATRONIC:
			Facility_Decoder := 147;
            
		mpCOM_FAC_MAPP_INDUSTRY:
			Facility_Decoder := 148;
        
	END_CASE
      
END_FUNCTION