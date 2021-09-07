// BlueprintGeneratedClass TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C
// Size: 0x270 (Inherited: 0x238)
struct ATBP_Grimoire_ModelViewerItem_C : ATigerModelViewerItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTigerGrimoireEntry* CurrentEntry; // 0x240(0x08)
	struct AActor* RootObject; // 0x248(0x08)
	struct ACineCameraActor* CurrentCamera; // 0x250(0x08)
	struct FVector CurrentWorldSpaceScale; // 0x258(0x0c)
	struct FVector TargetWorldSpaceScale; // 0x264(0x0c)

	void ResetScale(); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ResetScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void AdjustByDeltaPosition(); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.AdjustByDeltaPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void EnforceDesiredScreenSize(); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.EnforceDesiredScreenSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void RecalculateScreenSize(); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.RecalculateScreenSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnMeshLoaded(); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.OnMeshLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Show(struct UTBP_UI_Grimoire_CategoryButton_C* InSelectedButton); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.Show // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveBeginPlay(); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveTick(float DeltaSeconds); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_Grimoire_ModelViewerItem(int32_t EntryPoint); // Function TBP_Grimoire_ModelViewerItem.TBP_Grimoire_ModelViewerItem_C.ExecuteUbergraph_TBP_Grimoire_ModelViewerItem // (Final|UbergraphFunction) // @ game+0x16a87a0
};

