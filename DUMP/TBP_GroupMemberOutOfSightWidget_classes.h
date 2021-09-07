// WidgetBlueprintGeneratedClass TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct UTBP_GroupMemberOutOfSightWidget_C : UTigerInWorldWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2d0(0x08)
	struct UBorder* BorderWidget; // 0x2d8(0x08)
	struct URichTextBlock* GroupMemberNameWidget; // 0x2e0(0x08)
	struct ATigerPlayerState* GroupMemberState; // 0x2e8(0x08)

	struct FLinearColor GetColorAndOpacity(); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16a87a0
	void Initialize(struct ATigerPlayerState* Player State); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnPawnChanged(struct APawn* NewPawn); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnScreenStateChanged(bool bInIsOnScreen); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void Destruct(); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnNameChanged(); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget(int32_t EntryPoint); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

