// WidgetBlueprintGeneratedClass TBP_UI_GetDevTicketSection.TBP_UI_GetDevTicketSection_C
// Size: 0x2b0 (Inherited: 0x260)
struct UTBP_UI_GetDevTicketSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_Button_CTA_C* Button_CTA_SignInButton; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* DevelopmentLogInText; // 0x270(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x278(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Development; // 0x280(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x288(0x08)
	struct FMulticastInlineDelegate SignIn; // 0x290(0x10)
	struct FMulticastInlineDelegate ExitGame; // 0x2a0(0x10)

	void BndEvt__Button_CTA_SignInButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_GetDevTicketSection.TBP_UI_GetDevTicketSection_C.BndEvt__Button_CTA_SignInButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_GetDevTicketSection.TBP_UI_GetDevTicketSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_GetDevTicketSection(int32_t EntryPoint); // Function TBP_UI_GetDevTicketSection.TBP_UI_GetDevTicketSection_C.ExecuteUbergraph_TBP_UI_GetDevTicketSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void ExitGame__DelegateSignature(); // Function TBP_UI_GetDevTicketSection.TBP_UI_GetDevTicketSection_C.ExitGame__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SignIn__DelegateSignature(); // Function TBP_UI_GetDevTicketSection.TBP_UI_GetDevTicketSection_C.SignIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

