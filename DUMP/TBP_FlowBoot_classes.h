// BlueprintGeneratedClass TBP_FlowBoot.TBP_FlowBoot_C
// Size: 0xb8 (Inherited: 0x80)
struct UTBP_FlowBoot_C : UTigerGameFlowStateBoot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct UTBP_UI_FirstTimeArchetypeSelection_C* FirstTimeArchetypeSelectionUI; // 0x88(0x08)
	bool bIsFirstBlackScreenLaunch; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UTBP_UI_TitleScreen_C* TitleScreenUI; // 0x98(0x08)
	struct UObject* ElysiumRef; // 0xa0(0x08)
	struct UTBP_UI_InvalidGameClient_C* InvalidClientUI; // 0xa8(0x08)
	struct UTigerPsoCacheUI* PsoCacheUI; // 0xb0(0x08)

	void GetTigerPlayerController(struct ATigerPlayerController* Tiger Player Controller); // Function TBP_FlowBoot.TBP_FlowBoot_C.GetTigerPlayerController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void HasErrorString(bool bHasErrorString); // Function TBP_FlowBoot.TBP_FlowBoot_C.HasErrorString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetTigerPersistentPlayerState(struct UTigerPersistentPlayerState* PersistentPlayer); // Function TBP_FlowBoot.TBP_FlowBoot_C.GetTigerPersistentPlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void GetTigerGameInstance(struct UTBP_TigerGameInstance_C* TBP_TigerGameInstance); // Function TBP_FlowBoot.TBP_FlowBoot_C.GetTigerGameInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ShowBootSplash(); // Function TBP_FlowBoot.TBP_FlowBoot_C.ShowBootSplash // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowLogInScreen(); // Function TBP_FlowBoot.TBP_FlowBoot_C.ShowLogInScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoginSucceeded_Event(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_FlowBoot.TBP_FlowBoot_C.LoginSucceeded_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Load Elysium(); // Function TBP_FlowBoot.TBP_FlowBoot_C.Load Elysium // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowArchetypeFirstTimeSelect(); // Function TBP_FlowBoot.TBP_FlowBoot_C.ShowArchetypeFirstTimeSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBootSplashClosed(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnBootSplashClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnValidPlayerController(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnValidPlayerController // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowTitleScreen(); // Function TBP_FlowBoot.TBP_FlowBoot_C.ShowTitleScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLandingPageClosed(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnLandingPageClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnter(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnEnter // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFirstTimeCleanup(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnFirstTimeCleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoadingScreenElysiumComplete(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnLoadingScreenElysiumComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InvalidVersion_Event(); // Function TBP_FlowBoot.TBP_FlowBoot_C.InvalidVersion_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnIgnored_Event(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnIgnored_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPreloadingArchetypeSelectDone(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnPreloadingArchetypeSelectDone // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCachingDone(); // Function TBP_FlowBoot.TBP_FlowBoot_C.OnCachingDone // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CacheDX12PSOs(); // Function TBP_FlowBoot.TBP_FlowBoot_C.CacheDX12PSOs // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_FlowBoot(int32_t EntryPoint); // Function TBP_FlowBoot.TBP_FlowBoot_C.ExecuteUbergraph_TBP_FlowBoot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

