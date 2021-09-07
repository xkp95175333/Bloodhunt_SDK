// WidgetBlueprintGeneratedClass TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C
// Size: 0x340 (Inherited: 0x260)
struct UTBP_UI_LicenseAgreement_Popup_C : UTigerLicenseAgreementPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FulFixAnimation; // 0x268(0x08)
	struct UWidgetAnimation* ShowAgreeButton; // 0x270(0x08)
	struct UWidgetAnimation* ReadArrowFlash; // 0x278(0x08)
	struct UTBP_UI_MenuButton_C* AgreeButton; // 0x280(0x08)
	struct UTBP_UI_MenuButton_C* CancelButton; // 0x288(0x08)
	struct UImage* Image_144; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* License_Text; // 0x298(0x08)
	struct UOverlay* ReadArrowContainer; // 0x2a0(0x08)
	struct UImage* ReadArrowShadow; // 0x2a8(0x08)
	struct UScrollBox* ScrollBox_1; // 0x2b0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2b8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x2c0(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* Title_Text; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnDecisionMade; // 0x2d8(0x10)
	bool Agreed; // 0x2e8(0x01)
	bool ScrolledFinished; // 0x2e9(0x01)
	char pad_2EA[0x6]; // 0x2ea(0x06)
	struct FString Subtitle_TextFormatting; // 0x2f0(0x10)
	struct FString Subheader_TextFormatting; // 0x300(0x10)
	struct FString UL_TextFormatting; // 0x310(0x10)
	struct FString Bold_TextFormating; // 0x320(0x10)
	struct FString EL_TextFormatting; // 0x330(0x10)

	void GetLegalDocument(struct FString InCulture, enum class ETigerLegalDocumentType InDocumentType, struct FString OutString); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.GetLegalDocument // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseLicense(); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.CloseLicense // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowPopup(struct FText TitleText, struct FText LicenceText); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ShowPopup // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ClosePopup(); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ClosePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Reset Agree Button(); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.Reset Agree Button // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfScollFinished(); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.CheckIfScollFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_LicenseAgreement_Popup(int32_t EntryPoint); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.ExecuteUbergraph_TBP_UI_LicenseAgreement_Popup // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnDecisionMade__DelegateSignature(bool Agreed); // Function TBP_UI_LicenseAgreement_Popup.TBP_UI_LicenseAgreement_Popup_C.OnDecisionMade__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

