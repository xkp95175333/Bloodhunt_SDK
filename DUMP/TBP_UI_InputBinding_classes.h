// WidgetBlueprintGeneratedClass TBP_UI_InputBinding.TBP_UI_InputBinding_C
// Size: 0x300 (Inherited: 0x280)
struct UTBP_UI_InputBinding_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* ActionName_Text; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* CurrentBind_Text; // 0x290(0x08)
	struct UImage* Highlight; // 0x298(0x08)
	struct UInputKeySelector* InputKey; // 0x2a0(0x08)
	int32_t ActionMappingIndex; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UTBP_UI_InputBindingCollection_C* ParentCollection; // 0x2b0(0x08)
	bool bIsSelected; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float SelectedTextOpacity; // 0x2bc(0x04)
	float NotSelectedTextOpacity; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FInputActionKeyMapping CurrentActionMapping; // 0x2c8(0x28)
	bool bAllowKeyboardKeys; // 0x2f0(0x01)
	bool bAllowGamepadKeys; // 0x2f1(0x01)
	char pad_2F2[0x6]; // 0x2f2(0x06)
	struct UTBP_UI_SystemMenuKeybindings_C* ParentMenuWidget; // 0x2f8(0x08)

	void SetActionMapping(int32_t ActionMappingIndex, struct FInputActionKeyMapping UserActionMapping); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void Construct(); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature(); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_InputBinding(int32_t EntryPoint); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

