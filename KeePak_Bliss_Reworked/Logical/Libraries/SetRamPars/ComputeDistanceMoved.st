
(* Compute how far encoder has moved *)
FUNCTION ComputeDistanceMoved
	
	IF((CurentPos -  OldPos) >= 0) THEN
		ComputeDistanceMoved := CurentPos -  OldPos;
	ELSE
		ComputeDistanceMoved := 711.2 + CurentPos -  OldPos;
	END_IF
	
END_FUNCTION
