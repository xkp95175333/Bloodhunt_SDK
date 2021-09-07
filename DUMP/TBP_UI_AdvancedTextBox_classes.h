// WidgetBlueprintGeneratedClass TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C
// Size: 0x2cc (Inherited: 0x260)
struct UTBP_UI_AdvancedTextBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* MoveHint; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* HintText; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UTBP_UI_TextBoxWrapper_C* WrappedTextBox; // 0x280(0x08)
	struct FText Hint Text; // 0x288(0x18)
	bool Is Password; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate On Text Settled; // 0x2a8(0x10)
	struct FMulticastInlineDelegate On Text Changed; // 0x2b8(0x10)
	int32_t CharCap; // 0x2c8(0x04)

	void Reset(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FText GetText(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetError(bool Error, struct FText Message); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.SetError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_0_Focus Received__DelegateSignature(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_0_Focus Received__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_1_Focus Lost__DelegateSignature(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_1_Focus Lost__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_2_Text Settled__DelegateSignature(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_2_Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_3_Text Changed__DelegateSignature(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.BndEvt__WrappedTextBox_K2Node_ComponentBoundEvent_3_Text Changed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_AdvancedTextBox(int32_t EntryPoint); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.ExecuteUbergraph_TBP_UI_AdvancedTextBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void On Text Changed__DelegateSignature(); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.On Text Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_AdvancedTextBox.TBP_UI_AdvancedTextBox_C.On Text Settled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

