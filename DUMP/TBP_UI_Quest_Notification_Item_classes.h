// WidgetBlueprintGeneratedClass TBP_UI_Quest_Notification_Item.TBP_UI_Quest_Notification_Item_C
// Size: 0x2b0 (Inherited: 0x280)
struct UTBP_UI_Quest_Notification_Item_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* In; // 0x288(0x08)
	struct UImage* Background; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* QuestNameText; // 0x298(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2a0(0x08)
	struct UTexture2D* Texture; // 0x2a8(0x08)

	void SetupDataFromQuest(struct UTigerQuest* TigerChallenge); // Function TBP_UI_Quest_Notification_Item.TBP_UI_Quest_Notification_Item_C.SetupDataFromQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Construct(); // Function TBP_UI_Quest_Notification_Item.TBP_UI_Quest_Notification_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_Quest_Notification_Item(int32_t EntryPoint); // Function TBP_UI_Quest_Notification_Item.TBP_UI_Quest_Notification_Item_C.ExecuteUbergraph_TBP_UI_Quest_Notification_Item // (Final|UbergraphFunction) // @ game+0x16a87a0
};

