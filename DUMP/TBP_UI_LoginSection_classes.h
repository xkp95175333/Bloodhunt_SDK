// WidgetBlueprintGeneratedClass TBP_UI_LoginSection.TBP_UI_LoginSection_C
// Size: 0x320 (Inherited: 0x260)
struct UTBP_UI_LoginSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_Button_CTA_C* Button_CTA_SignIn; // 0x268(0x08)
	struct UTBP_UI_AdvancedTextBox_C* EmailTextBoxLogin; // 0x270(0x08)
	struct UTBP_UI_AdvancedTextBox_C* PasswordTextBoxLogin; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* SignInText; // 0x280(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x288(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_5; // 0x290(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_SignIn; // 0x298(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Login; // 0x2a0(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_LoginEmail; // 0x2a8(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_LoginPassword; // 0x2b0(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_CreateAnAccount; // 0x2b8(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x2c0(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_LostPassword; // 0x2c8(0x08)
	struct FMulticastInlineDelegate CreateAccount; // 0x2d0(0x10)
	struct FMulticastInlineDelegate SignIn; // 0x2e0(0x10)
	struct FMulticastInlineDelegate ExitGame; // 0x2f0(0x10)
	struct FMulticastInlineDelegate RecoverPassword; // 0x300(0x10)
	bool bEmailEnteredCorrectly; // 0x310(0x01)
	bool bPasswordEnteredCorrectly; // 0x311(0x01)
	char pad_312[0x6]; // 0x312(0x06)
	struct UTBP_UI_LoginScreen_C* LoginScreen; // 0x318(0x08)

	void CheckIfSignInReady(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.CheckIfSignInReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Verify(struct FText Error); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.Verify // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetEnteredEmailAndPassword(struct FString Email, struct FString Password); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.GetEnteredEmailAndPassword // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_4_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_4_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_LostPassword_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__TBP_UI_TextButton_LostPassword_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_6_On Text Changed__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_6_On Text Changed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_On Text Changed__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_On Text Changed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LoginSection(int32_t EntryPoint); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.ExecuteUbergraph_TBP_UI_LoginSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void RecoverPassword__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.RecoverPassword__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExitGame__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.ExitGame__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SignIn__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.SignIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateAccount__DelegateSignature(); // Function TBP_UI_LoginSection.TBP_UI_LoginSection_C.CreateAccount__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

