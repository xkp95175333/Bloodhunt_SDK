// BlueprintGeneratedClass TBFL_AccountUtility.TBFL_AccountUtility_C
// Size: 0x28 (Inherited: 0x28)
struct UTBFL_AccountUtility_C : UBlueprintFunctionLibrary {

	void Check UsernameNotInPassword(struct FText InUsername, struct FText InPassword, struct UObject* __WorldContext, bool OutErrror); // Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check UsernameNotInPassword // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Check Date Of Birth(struct FDateTime InDateOfBirth, int32_t InSelectedCountryIndex, bool InCountrySelected, struct UObject* __WorldContext, bool bValid, struct FText Message); // Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Date Of Birth // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Check Verification Code Format(struct FText In Email, struct UObject* __WorldContext, bool Error, struct FText Message); // Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Verification Code Format // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Check Username Format(struct FText In Email, struct UObject* __WorldContext, bool Error, struct FText Message); // Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Username Format // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Check Email Format(struct FText In Email, struct UObject* __WorldContext, bool Error, struct FText Message); // Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Email Format // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Check Password Format(struct FText In Password, struct UObject* __WorldContext, bool Error, struct FText Message); // Function TBFL_AccountUtility.TBFL_AccountUtility_C.Check Password Format // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

