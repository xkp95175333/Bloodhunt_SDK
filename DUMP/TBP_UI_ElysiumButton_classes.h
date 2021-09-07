// WidgetBlueprintGeneratedClass TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C
// Size: 0x2f0 (Inherited: 0x260)
struct UTBP_UI_ElysiumButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x268(0x08)
	struct UWidgetAnimation* LoopingAnimation; // 0x270(0x08)
	struct UWidgetAnimation* InAnimation; // 0x278(0x08)
	struct UImage* ArrowDown; // 0x280(0x08)
	struct UImage* ArrowUp; // 0x288(0x08)
	struct UImage* Border; // 0x290(0x08)
	struct UImage* Darken_Hover; // 0x298(0x08)
	struct UImage* DiamondLeft; // 0x2a0(0x08)
	struct UImage* DiamondRight; // 0x2a8(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad; // 0x2b0(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard; // 0x2b8(0x08)
	struct UCanvasPanel* SmokeClipBox; // 0x2c0(0x08)
	struct UTBP_UI_TransitionMenuButton_C* StartGameUIButton; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x2e0(0x10)

	void BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_HoverAnimation_K2Node_WidgetAnimationEvent_2(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.WidgetAnimationEvt_HoverAnimation_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumButton(int32_t EntryPoint); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.ExecuteUbergraph_TBP_UI_ElysiumButton // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_ElysiumButton.TBP_UI_ElysiumButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

