// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C
// Size: 0x2fd (Inherited: 0x280)
struct UTBP_UI_ElysiumHUD_Battlepass_C : UTigerDataDependentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Image_135; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* LevelXp; // 0x290(0x08)
	struct UTBP_UI_ElysiumHUD_Battlepass_Preview_C* NewBPRewardPrev; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* SeasonLevel; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* SeasonName; // 0x2a8(0x08)
	struct UProgressBar* SeasonProgressBar; // 0x2b0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_246; // 0x2c0(0x08)
	struct FText Season Level Text; // 0x2c8(0x18)
	struct FText Season Name; // 0x2e0(0x18)
	int32_t Player Current Rank; // 0x2f8(0x04)
	bool HasListenedToLevelUp; // 0x2fc(0x01)

	bool IsDataLoaded(struct ATigerPlayerController* InTigerPlayerController); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.IsDataLoaded // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Update Rank(); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Update Rank // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Update Progress Bar(); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Update Progress Bar // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Listen To Level Up(); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Listen To Level Up // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnDataLoaded(); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.OnDataLoaded // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ListenToDataLoadingEvent(); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.ListenToDataLoadingEvent // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void Data Listen Event(); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.Data Listen Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnTransactionalDataChanged(struct FTigerPersistentPlayerTransactionalData TransactionalPlayerData); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.OnTransactionalDataChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass(int32_t EntryPoint); // Function TBP_UI_ElysiumHUD_Battlepass.TBP_UI_ElysiumHUD_Battlepass_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Battlepass // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

