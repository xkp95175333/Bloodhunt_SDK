// WidgetBlueprintGeneratedClass TBP_UI_LoginScreen.TBP_UI_LoginScreen_C
// Size: 0x4d0 (Inherited: 0x290)
struct UTBP_UI_LoginScreen_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* FadeOut; // 0x298(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2a0(0x08)
	struct UImage* BlackFade; // 0x2a8(0x08)
	struct UTextBlock* ErrorMessage; // 0x2b0(0x08)
	struct UTBP_UI_LicenseAgreement_Popup_C* ExportGateDeniedPopup; // 0x2b8(0x08)
	struct UTBP_UI_LicenseAgreement_Popup_C* ExportGatePopup; // 0x2c0(0x08)
	struct UTBP_UI_GetDevTicketSection_C* GetDevTicketSection; // 0x2c8(0x08)
	struct UTBP_UI_LoginQueueSection_C* LoginQueueSection; // 0x2d0(0x08)
	struct UTBP_UI_LoginSection_C* LoginSection; // 0x2d8(0x08)
	struct UTBP_UI_RegistrationSection_C* RegistrationSection; // 0x2e0(0x08)
	struct UWidgetSwitcher* SectionSwitcher; // 0x2e8(0x08)
	struct UWidgetSwitcher* StatusSwitcher; // 0x2f0(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2f8(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x300(0x08)
	struct UImage* Vein1; // 0x308(0x08)
	struct UImage* Vein2; // 0x310(0x08)
	struct UImage* Vein3; // 0x318(0x08)
	struct UTBP_UI_VerificationSection_C* VerificationSection; // 0x320(0x08)
	struct USizeBox* WorkThrobber; // 0x328(0x08)
	struct FMulticastInlineDelegate LoginSucceeded; // 0x330(0x10)
	struct FMulticastInlineDelegate OnValidVersionDispatch; // 0x340(0x10)
	struct FMulticastInlineDelegate OnInvalidVersionDispatch; // 0x350(0x10)
	struct FTigerLoginQueueToken LoginQueueToken; // 0x360(0x10)
	struct FText AccountLicenseAgreementTitle; // 0x370(0x18)
	struct FText AccountLicenseAgreementText; // 0x388(0x18)
	bool EnableLicenseAgreement; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct TMap<int32_t, int32_t> ThirdPartyErrorsBoxMapping; // 0x3a8(0x50)
	struct TMap<int32_t, struct FText> ThirdPartyErrorCodes; // 0x3f8(0x50)
	int32_t ErrorBoxIndex; // 0x448(0x04)
	char pad_44C[0x4]; // 0x44c(0x04)
	struct FText AccountExportGateTitle; // 0x450(0x18)
	struct FText AccountExportGateText; // 0x468(0x18)
	struct FString Subheader_TextFormatting; // 0x480(0x10)
	struct FString Subtitle_TextFormatting; // 0x490(0x10)
	struct FString UL_TextFormatting; // 0x4a0(0x10)
	struct FString Bold_TextFormating; // 0x4b0(0x10)
	struct FString EL_TextFormatting; // 0x4c0(0x10)

	void FindAndDisplayErrorMessage(int32_t Error Code, int32_t Third Party Error Code, struct FString Error Message, struct FString Third Party Error Message, struct FText Value); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.FindAndDisplayErrorMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowExportGateWidget(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowExportGateWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FindErrorMessage(int32_t Error Code, int32_t Third Party Error Code, struct FString Error Message, struct FString Third Party Error Message, struct FText Value); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.FindErrorMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShouldUseDevTicket(bool UseDevTicket); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShouldUseDevTicket // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Try Login with Login Queue Token(struct FTigerLoginQueueToken InLoginQueueToken); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Try Login with Login Queue Token // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClearError(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ClearError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryShowError(bool DelayMessage, struct FText Error, bool No Error); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.TryShowError // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EndWork(bool Success, struct FText Error); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.EndWork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartWork(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.StartWork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowRegistrationScreen(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowRegistrationScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowLogInScreen(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowLogInScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowVerificationScreen(struct FString Email); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowVerificationScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LogMeIn(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.LogMeIn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWidgetsEnabled(bool Enabled); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.SetWidgetsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Error_25AA6E00485B8955EDA2B58041008BAC(struct FTigerLoginQueueToken LoginToken, struct FTimespan EstimatedWaitTime, struct FString ErrorMessage); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Error_25AA6E00485B8955EDA2B58041008BAC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WaitTimeUpdated_25AA6E00485B8955EDA2B58041008BAC(struct FTigerLoginQueueToken LoginToken, struct FTimespan EstimatedWaitTime, struct FString ErrorMessage); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.WaitTimeUpdated_25AA6E00485B8955EDA2B58041008BAC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReadyForLogin_25AA6E00485B8955EDA2B58041008BAC(struct FTigerLoginQueueToken LoginToken, struct FTimespan EstimatedWaitTime, struct FString ErrorMessage); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ReadyForLogin_25AA6E00485B8955EDA2B58041008BAC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterSelected(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID CharacterId, bool bWasCharacterCreated); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnLoginFailed(struct FTigerLoginFailedInfo InLoginFailedInfo); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ShowErrorMessage(bool DelayMessage, struct FText ErrorMessage); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ShowErrorMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfVersionIsValid(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.CheckIfVersionIsValid // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SharkmobAccountLoginResult(struct FSharkLoginResult InResult); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.SharkmobAccountLoginResult // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_2_Back__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_2_Back__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LoginSection_K2Node_ComponentBoundEvent_3_SignIn__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_3_SignIn__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__VerificationSection_K2Node_ComponentBoundEvent_6_BackAction__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__VerificationSection_K2Node_ComponentBoundEvent_6_BackAction__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__VerificationSection_K2Node_ComponentBoundEvent_7_RegisterAction__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__VerificationSection_K2Node_ComponentBoundEvent_7_RegisterAction__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_5_CreateAccount__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__RegistrationSection_K2Node_ComponentBoundEvent_5_CreateAccount__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnEmailVerificationResult(struct FSharkAccountActionResult InResult); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnEmailVerificationResult // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LoginSection_K2Node_ComponentBoundEvent_0_CreateAccount__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_0_CreateAccount__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__GetDevTicketSection_K2Node_ComponentBoundEvent_9_SignIn__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__GetDevTicketSection_K2Node_ComponentBoundEvent_9_SignIn__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void QueueForLogin(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.QueueForLogin // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LoginQueueSection_K2Node_ComponentBoundEvent_10_Retry__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginQueueSection_K2Node_ComponentBoundEvent_10_Retry__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_LicenseAgreement_Popup_K2Node_ComponentBoundEvent_11_OnDecisionMade__DelegateSignature(bool Agreed); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__TBP_UI_LicenseAgreement_Popup_K2Node_ComponentBoundEvent_11_OnDecisionMade__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LoginSection_K2Node_ComponentBoundEvent_12_RecoverPassword__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.BndEvt__LoginSection_K2Node_ComponentBoundEvent_12_RecoverPassword__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void RegistrationServerErrorCallback(struct FText InError); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.RegistrationServerErrorCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void VerificationServerErrorCallback(struct FText InError); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.VerificationServerErrorCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClearButtonErrors(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ClearButtonErrors // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ResendVerificationCode(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ResendVerificationCode // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExitClicked_LoginSection(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_LoginSection // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExitClicked_LoginQueue(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_LoginQueue // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExitClicked_Registration(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_Registration // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExitClicked_DevTicket(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnExitClicked_DevTicket // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExportGateAgreementDenied(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ExportGateAgreementDenied // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LoginScreen(int32_t EntryPoint); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.ExecuteUbergraph_TBP_UI_LoginScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnInvalidVersionDispatch__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnInvalidVersionDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnValidVersionDispatch__DelegateSignature(); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.OnValidVersionDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoginSucceeded__DelegateSignature(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_UI_LoginScreen.TBP_UI_LoginScreen_C.LoginSucceeded__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

