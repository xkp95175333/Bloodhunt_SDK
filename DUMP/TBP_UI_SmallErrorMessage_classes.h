// WidgetBlueprintGeneratedClass TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C
// Size: 0x280 (Inherited: 0x260)
struct UTBP_UI_SmallErrorMessage_C : UUserWidget {
	struct UImage* Background; // 0x260(0x08)
	struct UImage* Border; // 0x268(0x08)
	struct UImage* ErrorImage; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* ErrorText; // 0x278(0x08)

	void SetError(bool InError, struct FText InText); // Function TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C.SetError // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Reset(); // Function TBP_UI_SmallErrorMessage.TBP_UI_SmallErrorMessage_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

