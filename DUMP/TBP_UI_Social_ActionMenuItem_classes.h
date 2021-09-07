// WidgetBlueprintGeneratedClass TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C
// Size: 0x2e9 (Inherited: 0x280)
struct UTBP_UI_Social_ActionMenuItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* LabelText; // 0x288(0x08)
	struct UButton* MenuButton; // 0x290(0x08)
	struct FText Label; // 0x298(0x18)
	struct FMulticastInlineDelegate MenuClicked; // 0x2b0(0x10)
	struct UAkAudioEvent* MenuItemClickedAudioEvent; // 0x2c0(0x08)
	struct FDataTableRowHandle NeutralTextSyle; // 0x2c8(0x10)
	struct FDataTableRowHandle HoverdTextSyle; // 0x2d8(0x10)
	bool bIsEnabledFromStart; // 0x2e8(0x01)

	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void Construct(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_Social_ActionMenuItem(int32_t EntryPoint); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.ExecuteUbergraph_TBP_UI_Social_ActionMenuItem // (Final|UbergraphFunction) // @ game+0x16a87a0
	void MenuClicked__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.MenuClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
};

