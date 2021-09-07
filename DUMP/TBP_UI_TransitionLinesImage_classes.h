// WidgetBlueprintGeneratedClass TBP_UI_TransitionLinesImage.TBP_UI_TransitionLinesImage_C
// Size: 0x304 (Inherited: 0x260)
struct UTBP_UI_TransitionLinesImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* ImageWidget; // 0x268(0x08)
	struct UTBP_UI_TransitionWidget_C* TransitionWidget; // 0x270(0x08)
	struct FSlateBrush Brush; // 0x278(0x88)
	float AnimationDelay; // 0x300(0x04)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_TransitionLinesImage.TBP_UI_TransitionLinesImage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_TransitionLinesImage.TBP_UI_TransitionLinesImage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void RestartAnimation(); // Function TBP_UI_TransitionLinesImage.TBP_UI_TransitionLinesImage_C.RestartAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TransitionLinesImage(int32_t EntryPoint); // Function TBP_UI_TransitionLinesImage.TBP_UI_TransitionLinesImage_C.ExecuteUbergraph_TBP_UI_TransitionLinesImage // (Final|UbergraphFunction) // @ game+0x16c0340
};

