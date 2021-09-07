// WidgetBlueprintGeneratedClass TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C
// Size: 0x310 (Inherited: 0x260)
struct UTBP_UI_CheckboxWithClickabelText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Checkbox_button; // 0x268(0x08)
	struct UImage* CheckboxBorder_default_image; // 0x270(0x08)
	struct UImage* CheckboxBorder_selected_image; // 0x278(0x08)
	struct UImage* CheckboxCheck_image; // 0x280(0x08)
	struct UImage* Image_135; // 0x288(0x08)
	struct UTBP_UI_TextButton_C* TextButton; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* TextNormal; // 0x298(0x08)
	struct FMulticastInlineDelegate OnChecked_true; // 0x2a0(0x10)
	struct FText Text; // 0x2b0(0x18)
	bool IsClickable; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FMulticastInlineDelegate OnChecked_false; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnClickedText; // 0x2e0(0x10)
	bool ShouldAutoWrapText; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float WrapTextAt; // 0x2f4(0x04)
	bool bMustReadPopupBeforeAccepting; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FMulticastInlineDelegate OnClickedPopupRequirement; // 0x300(0x10)

	void Reset(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.BndEvt__TBP_UI_CheckboxWithClickabelText_Checkbox_button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_CheckboxWithClickabelText_TextButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.BndEvt__TBP_UI_CheckboxWithClickabelText_TextButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetChecked(bool bInChecked); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.SetChecked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetClickable(bool InClickable); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.SetClickable // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetText(struct FText InText); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CheckboxWithClickabelText(int32_t EntryPoint); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.ExecuteUbergraph_TBP_UI_CheckboxWithClickabelText // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.OnClickedPopupRequirement__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClickedText__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.OnClickedText__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnChecked_false__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.OnChecked_false__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnChecked_true__DelegateSignature(); // Function TBP_UI_CheckboxWithClickabelText.TBP_UI_CheckboxWithClickabelText_C.OnChecked_true__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

