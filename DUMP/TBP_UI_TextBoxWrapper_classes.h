// WidgetBlueprintGeneratedClass TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C
// Size: 0x12c0 (Inherited: 0x260)
struct UTBP_UI_TextBoxWrapper_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UEditableTextBox* EmailTextBox; // 0x268(0x08)
	struct FMulticastInlineDelegate Focus Lost; // 0x270(0x10)
	struct FMulticastInlineDelegate Focus Received; // 0x280(0x10)
	bool PreviousFocus; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FMulticastInlineDelegate Text Settled; // 0x298(0x10)
	struct FTimerHandle Text Settle Timer Handle; // 0x2a8(0x08)
	float Text Settle Time; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FEditableTextBoxStyle Default Style; // 0x2b8(0x7f8)
	struct FEditableTextBoxStyle Error Style; // 0xab0(0x7f8)
	struct UEditableTextBox* NewVar_1; // 0x12a8(0x08)
	struct FMulticastInlineDelegate Text Changed; // 0x12b0(0x10)

	void SetErrorBorder(bool Enabled); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.SetErrorBorder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FText GetText(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetIsPassword(bool bIsPassword); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.SetIsPassword // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.BndEvt__EmailTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void TextChangeExpire(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.TextChangeExpire // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TextBoxWrapper(int32_t EntryPoint); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.ExecuteUbergraph_TBP_UI_TextBoxWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void Text Changed__DelegateSignature(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.Text Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Text Settled__DelegateSignature(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.Text Settled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Focus Received__DelegateSignature(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.Focus Received__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Focus Lost__DelegateSignature(); // Function TBP_UI_TextBoxWrapper.TBP_UI_TextBoxWrapper_C.Focus Lost__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

