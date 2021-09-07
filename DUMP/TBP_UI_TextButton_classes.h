// WidgetBlueprintGeneratedClass TBP_UI_TextButton.TBP_UI_TextButton_C
// Size: 0x2f5 (Inherited: 0x260)
struct UTBP_UI_TextButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PressedAnimation; // 0x268(0x08)
	struct UButton* Button; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* CustomText; // 0x278(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x290(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x2a0(0x10)
	struct FText Text; // 0x2b0(0x18)
	struct FDataTableRowHandle TextNeutralStyle; // 0x2c8(0x10)
	struct FDataTableRowHandle TextHoveredStyle; // 0x2d8(0x10)
	bool IsPressed; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float TextNeutralOpacity; // 0x2ec(0x04)
	float TextHoveredOpacity; // 0x2f0(0x04)
	bool bIsHovered; // 0x2f4(0x01)

	void SetHoveredState(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetHoveredState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetNeutralState(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetNeutralState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetText(struct FText Text); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void AutoWrapText(bool InAutoTextWrap); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.AutoWrapText // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WrapTextAt(float InWrapTextAt); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.WrapTextAt // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TextButton(int32_t EntryPoint); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.ExecuteUbergraph_TBP_UI_TextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnUnhovered__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_TextButton.TBP_UI_TextButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

