// WidgetBlueprintGeneratedClass TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C
// Size: 0x2f0 (Inherited: 0x2a0)
struct UTBP_UI_PsoCachingDX12_C : UTigerPsoCacheUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UScaleBox* BackgroundScaleBox; // 0x2a8(0x08)
	struct UImage* BackgroundVideoWidget; // 0x2b0(0x08)
	struct UImage* Image_547; // 0x2b8(0x08)
	struct UProgressBar* ProgressBar; // 0x2c0(0x08)
	struct UTBP_UI_MenuButton_C* SkipButton; // 0x2c8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2d0(0x08)
	struct UImage* Vein1; // 0x2d8(0x08)
	struct UImage* Vein2; // 0x2e0(0x08)
	struct UImage* Vein3; // 0x2e8(0x08)

	void OnProgressUpdated(float InPercentageCompleted); // Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_PsoCachingDX12_TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.BndEvt__TBP_UI_PsoCachingDX12_TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PsoCachingDX12(int32_t EntryPoint); // Function TBP_UI_PsoCachingDX12.TBP_UI_PsoCachingDX12_C.ExecuteUbergraph_TBP_UI_PsoCachingDX12 // (Final|UbergraphFunction) // @ game+0x16c0340
};

