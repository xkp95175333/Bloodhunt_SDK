// WidgetBlueprintGeneratedClass TBP_UI_Grimoire.TBP_UI_Grimoire_C
// Size: 0x530 (Inherited: 0x400)
struct UTBP_UI_Grimoire_C : UTigerGrimoireUi {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* FadeIn; // 0x408(0x08)
	struct UWidgetAnimation* ShowScrollPrompt; // 0x410(0x08)
	struct UWidgetAnimation* InteractAnim; // 0x418(0x08)
	struct UTBP_UI_Grimoire_Background_C* BackgroundImage; // 0x420(0x08)
	struct UImage* BlackBackground; // 0x428(0x08)
	struct UTBP_UI_Grimoire_CategoryBox_C* CategoryBox; // 0x430(0x08)
	struct UTBP_UI_InputMenuPrompt_C* CloseButton; // 0x438(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Footer; // 0x440(0x08)
	struct UTBP_UI_InputMenuPrompt_C* HideMenuButton; // 0x448(0x08)
	struct UTBP_UI_Grimoire_ImageBox_C* ImageBox; // 0x450(0x08)
	struct UTBP_UI_Grimoire_InfoBox_C* InfoBox; // 0x458(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter; // 0x460(0x08)
	struct UTBP_UI_Grimoire_Landing_C* LandingView; // 0x468(0x08)
	struct UTBP_UI_Grimoire_RootCategoryMenu_C* RootCategoryMenu; // 0x470(0x08)
	struct UTBP_UI_InputMenuPrompt_C* RotateButton; // 0x478(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ShowMenuButton; // 0x480(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x488(0x08)
	struct UTBP_UI_VideoPlayer_C* VideoBox; // 0x490(0x08)
	struct UTigerGrimoireCategory* SelectedCategory; // 0x498(0x08)
	float UnlockedRootCategoryPercentage; // 0x4a0(0x04)
	bool bMenusHidden; // 0x4a4(0x01)
	char pad_4A5[0x3]; // 0x4a5(0x03)
	struct UTigerGrimoireTree* GrimoireTree; // 0x4a8(0x08)
	struct UTBP_UI_Grimoire_CategoryButton_C* SelectedButton; // 0x4b0(0x08)
	struct UTigerGrimoireCategory* DefaultOpenedCategory; // 0x4b8(0x08)
	bool Scrollable; // 0x4c0(0x01)
	bool bIsDisplayItemRotatable; // 0x4c1(0x01)
	char pad_4C2[0x2]; // 0x4c2(0x02)
	float ItemRotationSpeed; // 0x4c4(0x04)
	struct FName ViewName; // 0x4c8(0x08)
	struct ATBP_Grimoire_Card_C* GrimCard; // 0x4d0(0x08)
	struct ATBP_Grimoire_ModelViewerItem_C* GrimModel; // 0x4d8(0x08)
	bool bGrimCardShown; // 0x4e0(0x01)
	bool bGrimModelShown; // 0x4e1(0x01)
	enum class ETigerGrimoireEntryMediaDisplayMode LastEntryMediaShown; // 0x4e2(0x01)
	bool bFailedToShowEntryMedia; // 0x4e3(0x01)
	bool bGrimoirePropExamined; // 0x4e4(0x01)
	char pad_4E5[0x3]; // 0x4e5(0x03)
	struct FString JumpEntryId; // 0x4e8(0x10)
	bool bIsMenuTransitioning; // 0x4f8(0x01)
	bool bHasTransitionedToShow; // 0x4f9(0x01)
	char pad_4FA[0x2]; // 0x4fa(0x02)
	float CurrentDeltaTime; // 0x4fc(0x04)
	struct FVector2D LastMousePosition; // 0x500(0x08)
	bool IsRightMouseDown; // 0x508(0x01)
	char pad_509[0x3]; // 0x509(0x03)
	struct FVector2D CurrentMouseDelta; // 0x50c(0x08)
	float CurrentZoomLevel; // 0x514(0x04)
	struct ACineCameraActor* CloseViewerCameraActor; // 0x518(0x08)
	struct ACineCameraActor* ViewerCameraActor; // 0x520(0x08)
	float UnFocusedScreenSize; // 0x528(0x04)
	float FocusedScreenSize; // 0x52c(0x04)

	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ResetGrimoireDisplayItems(float InDeltaTime); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ForwardInputToCategoryMenu(int32_t InDirection); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void GrimoirePropJumpToEntry(struct FString InEntryId); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void HideGrimoireDisplayItems(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void RotateGrimoireDisplayItem(float InDeltaTime); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetInteractionButtonVisiblity(bool bVisible); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ClearContent(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void InteractedFooterAnimationEnd(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void InteractedFooterAnimationStart(struct UTBP_UI_Menu_Button_Prompt_Footer_C* InteractedFooter); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnOpen(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void SelectMenuOnClick(struct UTigerGrimoireCategory* SelectedCategory); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SelectMenuOnClickCategoryButton(struct UTBP_UI_Grimoire_CategoryButton_C* CategoryButton); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SelectMenuOnClickEntryButton(struct UTBP_UI_Grimoire_CategoryButton_C* EntryButton); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void MenuAnimHide(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void MenuAnimShow(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ToggleMenusHidden(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnClose(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnInitialized(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void JumpToCategory(struct UTigerGrimoireCategory* InCategory); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void JumpToSubCategory(struct UTigerGrimoireCategory* InSubCategory); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void JumpToEntry(struct FString InEntryId); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnBackgroundSceneShown(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void MenuUpPressed(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void MenuDownPressed(); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_Grimoire(int32_t EntryPoint); // Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

