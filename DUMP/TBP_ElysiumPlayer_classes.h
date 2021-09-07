// BlueprintGeneratedClass TBP_ElysiumPlayer.TBP_ElysiumPlayer_C
// Size: 0x1368 (Inherited: 0x1358)
struct ATBP_ElysiumPlayer_C : ATBP_Player_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1358(0x08)
	struct UWidgetComponent* NameplateWidget; // 0x1360(0x08)

	void OnJoinedParty(struct FTigerParty InParty); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnGotPlayerState(); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnLeftParty(struct FTigerParty InParty); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveBeginPlay(); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_ElysiumPlayer(int32_t EntryPoint); // Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

