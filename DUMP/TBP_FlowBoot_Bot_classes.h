// BlueprintGeneratedClass TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C
// Size: 0xc8 (Inherited: 0x80)
struct UTBP_FlowBoot_Bot_C : UTigerGameFlowStateBoot {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x80(0x08)
	struct TArray<struct UObject*> BackgroundSceneClasses; // 0x88(0x10)
	struct UTBP_UI_FirstTimeArchetypeSelection_C* FirstTimeArchetypeSelectionUI; // 0x98(0x08)
	struct UAkAudioEvent* StartupEvent; // 0xa0(0x08)
	bool bIsFirstTime; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UTBP_UI_TitleScreen_C* LandingPageUI; // 0xb0(0x08)
	struct UObject* ElysiumRef; // 0xb8(0x08)
	struct UTBP_UI_InvalidGameClient_C* InvalidClientUI; // 0xc0(0x08)

	void HasErrorString(bool bHasErrorString); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.HasErrorString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetTigerPersistentPlayerState(struct UTigerPersistentPlayerState* PersistentPlayer); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.GetTigerPersistentPlayerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void GetTigerGameInstance(struct UTBP_TigerGameInstance_C* TBP_TigerGameInstance); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.GetTigerGameInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Load Elysium(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.Load Elysium // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowCharacterSelectionWidget(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.ShowCharacterSelectionWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoginSucceeded_Event(struct TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.LoginSucceeded_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnValidPlayerController(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.OnValidPlayerController // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowLandingPage(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.ShowLandingPage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnNextCleanup(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.OnNextCleanup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoadLocalPlayerSaveGame(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.LoadLocalPlayerSaveGame // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoadingScreenElysiumComplete(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.OnLoadingScreenElysiumComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowLogInScreen(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.ShowLogInScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowBootSplash(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.ShowBootSplash // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InvalidVersion_Event(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.InvalidVersion_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnIgnored_Event(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.OnIgnored_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnter(); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.OnEnter // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_FlowBoot_Bot(int32_t EntryPoint); // Function TBP_FlowBoot_Bot.TBP_FlowBoot_Bot_C.ExecuteUbergraph_TBP_FlowBoot_Bot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

