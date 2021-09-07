// WidgetBlueprintGeneratedClass TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C
// Size: 0x569 (Inherited: 0x470)
struct UTBP_UI_FirstTimeArchetypeSelection_C : UTigerFirstTimeArchetypeSelectionUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* HighlightElysiumButton; // 0x478(0x08)
	struct UWidgetAnimation* OnVideoDone; // 0x480(0x08)
	struct UWidgetAnimation* OnVideoShown; // 0x488(0x08)
	struct UWidgetAnimation* FadeOutToCharacterCreate; // 0x490(0x08)
	struct UWidgetAnimation* InAnimation; // 0x498(0x08)
	struct UTBP_UI_ArchetypeDescription_C* ArchetypeDescription; // 0x4a0(0x08)
	struct UTBP_UI_ArchetypeInfo_C* ArchetypeInfo; // 0x4a8(0x08)
	struct UTBP_UI_ConfirmMenu_C* ConfirmQuitPopup; // 0x4b0(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ExitGameInputPrompt; // 0x4b8(0x08)
	struct UTBP_UI_HorizontalArchetypeSelector_Default_C* HorizontalArchetypeSelector; // 0x4c0(0x08)
	struct UTBP_UI_ConfirmMenu_C* JoinErrorMessage; // 0x4c8(0x08)
	struct UTigerStyledRichTextBlock* PlAYCINEMATIC; // 0x4d0(0x08)
	struct UTBP_UI_TransitionMenuButton_C* PlayCinematicButton; // 0x4d8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* PlayTutorialInputPrompt; // 0x4e0(0x08)
	struct UImage* PlayVideoIcon; // 0x4e8(0x08)
	struct UTBP_UI_InputPromptCombined_C* ShowCinematicKeyPrompt; // 0x4f0(0x08)
	struct UTBP_UI_ElysiumButton_C* StartGameUIButton; // 0x4f8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x500(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x508(0x08)
	struct UTigerStyledRichTextBlock* Text; // 0x510(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x518(0x08)
	struct FMulticastInlineDelegate EnterElysium; // 0x520(0x10)
	struct FMulticastInlineDelegate LoadTutorial; // 0x530(0x10)
	struct FText JoinElysiumErrorText; // 0x540(0x18)
	struct UTBP_UI_MoviePlayer_C* MoviePlayerUI; // 0x558(0x08)
	struct FName ShowCinematicActionName; // 0x560(0x08)
	bool bIsPlayingPowerVideo; // 0x568(0x01)

	void SetMusicStateAndPostEvent(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.SetMusicStateAndPostEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool HasErrorString(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.HasErrorString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SendCharacterChoiceToServer(struct FTigerPersistentCharacterID InSelectedCharacterId); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.SendCharacterChoiceToServer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateCharacter(struct UTigerPowerKit* InArchetypeData, struct FTigerCharacterAppearance InCharacterApperance); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.UpdateCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HoveredCharacter(struct FTigerPersistentCharacterID CharacterId); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.HoveredCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Change Background(struct TSoftObjectPtr<struct UTigerPlayerClanData> PlayerClanPath, struct FTigerCharacterAppearance InCharacterApperance); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.Change Background // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnStartGame(struct FTigerPersistentCharacterID InSelectedCharacterId); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnStartGame // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterSelected(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnCharacterSelected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SelectedArchetypeChanged(struct UTigerPowerKit* InArchetypeData, struct FTigerCharacterAppearance InCharacterAppearance); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.SelectedArchetypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCloseErrorMessage(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnCloseErrorMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StartGameUIButtonNew_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__StartGameUIButtonNew_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Toggle UI Visibility(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.Toggle UI Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoginSucceeded(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnLoginSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnLoginFailed(struct FTigerLoginFailedInfo InLoginFailedInfo); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnLoginFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnOutfitLoaded(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnOutfitLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExitGameInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ExitGameInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnGetValidGameVersionResult(enum class ETigerVersionIsValidResult Result); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnGetValidGameVersionResult // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_9_Confirm__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_9_Confirm__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ConfirmQuitPopup_K2Node_ComponentBoundEvent_10_Decline__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ShowFullscreenCinematic(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.ShowFullscreenCinematic // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClosedCinematic(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnClosedCinematic // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryStartGame(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.TryStartGame // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HorizontalArchetypeSelector_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__HorizontalArchetypeSelector_K2Node_ComponentBoundEvent_0_OnArchetypeSelected__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnCreateCharacterResult(struct FTigerPersistentCharacterID CharacterId, bool bWasCharacterCreated); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnCreateCharacterResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_2_OnVideoStarted__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_2_OnVideoStarted__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_7_OnVideoEnded__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__ArchetypeInfo_K2Node_ComponentBoundEvent_7_OnVideoEnded__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterPaperDoll_K2Node_ComponentBoundEvent_11_OnItemSpawned__DelegateSignature(struct AActor* InSpawnedItem); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__CharacterPaperDoll_K2Node_ComponentBoundEvent_11_OnItemSpawned__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.BndEvt__PlayCinematicButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_FirstTimeArchetypeSelection(int32_t EntryPoint); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.ExecuteUbergraph_TBP_UI_FirstTimeArchetypeSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void LoadTutorial__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.LoadTutorial__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnterElysium__DelegateSignature(); // Function TBP_UI_FirstTimeArchetypeSelection.TBP_UI_FirstTimeArchetypeSelection_C.EnterElysium__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

