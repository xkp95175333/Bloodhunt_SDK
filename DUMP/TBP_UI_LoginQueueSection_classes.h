// WidgetBlueprintGeneratedClass TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C
// Size: 0x2c4 (Inherited: 0x260)
struct UTBP_UI_LoginQueueSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_Button_CTA_C* Button_CTA_Retry; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* EstimatedWaitTimeValue; // 0x270(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_91; // 0x280(0x08)
	struct UVerticalBox* WaitingPanel; // 0x288(0x08)
	struct FMulticastInlineDelegate ExitGame; // 0x290(0x10)
	float EstimatedWaitTimeSeconds; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FTimerHandle UpdateWaitTimeTimerHandle; // 0x2a8(0x08)
	struct FMulticastInlineDelegate Retry; // 0x2b0(0x10)
	float EstimatedWaitTimeSetAtRealTimeSeconds; // 0x2c0(0x04)

	void Set Estimated Wait Time(struct FTimespan InEstimatedWaitTime); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Set Estimated Wait Time // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowErrorPanel(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ShowErrorPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateWaitTime(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.UpdateWaitTime // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Close(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Open(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Open // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEstimatedWaitTimeUpdated(struct FTimespan InEstimatedWaitTime); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.OnEstimatedWaitTimeUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.BndEvt__TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.BndEvt__Button_CTA_SignIn_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LoginQueueSection(int32_t EntryPoint); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ExecuteUbergraph_TBP_UI_LoginQueueSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void Retry__DelegateSignature(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.Retry__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExitGame__DelegateSignature(); // Function TBP_UI_LoginQueueSection.TBP_UI_LoginQueueSection_C.ExitGame__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

