// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C
// Size: 0x361 (Inherited: 0x348)
struct UTBP_UI_Social_Elysium_PlayerCard_C : UTBP_UI_Social_PlayerCardBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct ATigerElysiumPlayerState* PlayerState; // 0x350(0x08)
	struct UAkAudioEvent* FriendRequestSentAudioEvent; // 0x358(0x08)
	bool bCouldInviteToParty; // 0x360(0x01)

	void OnExtra(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.OnExtra // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void CouldInviteToParty(bool bCouldInvite); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.CouldInviteToParty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void InviteToParty(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.InviteToParty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SendFriendRequest(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.SendFriendRequest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdatePlayerInfo(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.UpdatePlayerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateGroupStatus(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.UpdateGroupStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Update(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Construct(); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnIsInPartyChanged(bool bInIsInParty); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.OnIsInPartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_Social_Elysium_PlayerCard(int32_t EntryPoint); // Function TBP_UI_Social_Elysium_PlayerCard.TBP_UI_Social_Elysium_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Elysium_PlayerCard // (Final|UbergraphFunction) // @ game+0x16a87a0
};

