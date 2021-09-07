// WidgetBlueprintGeneratedClass TBP_UI_VerificationSection.TBP_UI_VerificationSection_C
// Size: 0x300 (Inherited: 0x260)
struct UTBP_UI_VerificationSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_Button_CTA_C* Button_CTA_SignInButton; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* CheckMailText; // 0x270(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x278(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x280(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Verification; // 0x288(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Code; // 0x290(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Verification; // 0x298(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_Back; // 0x2a0(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_NoEmail; // 0x2a8(0x08)
	struct UTBP_UI_AdvancedTextBox_C* VerificationCodeBox; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* VerificationCodeToText; // 0x2b8(0x08)
	struct FText DescriptionFormat; // 0x2c0(0x18)
	struct FMulticastInlineDelegate RegisterAction; // 0x2d8(0x10)
	struct FMulticastInlineDelegate BackAction; // 0x2e8(0x10)
	struct UTBP_UI_LoginScreen_C* LoginScreen; // 0x2f8(0x08)

	void TurnOffLoadingThrobber(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.TurnOffLoadingThrobber // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Reset(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Verify(struct FText Error); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Verify // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FString GetEnteredVerificationCode(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.GetEnteredVerificationCode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetDisplayedEmail(struct FString Email); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.SetDisplayedEmail // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__VerificationCodeBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__VerificationCodeBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_VerificationSection_VerificationCodeBox_K2Node_ComponentBoundEvent_3_On Text Changed__DelegateSignature(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_VerificationCodeBox_K2Node_ComponentBoundEvent_3_On Text Changed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_VerificationSection_TBP_UI_TextButton_NoEmail_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BndEvt__TBP_UI_VerificationSection_TBP_UI_TextButton_NoEmail_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_VerificationSection(int32_t EntryPoint); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.ExecuteUbergraph_TBP_UI_VerificationSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void BackAction__DelegateSignature(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.BackAction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RegisterAction__DelegateSignature(); // Function TBP_UI_VerificationSection.TBP_UI_VerificationSection_C.RegisterAction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

