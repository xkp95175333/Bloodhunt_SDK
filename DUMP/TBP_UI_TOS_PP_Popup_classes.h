// WidgetBlueprintGeneratedClass TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C
// Size: 0x3f0 (Inherited: 0x260)
struct UTBP_UI_TOS_PP_Popup_C : UTigerLicenseAgreementPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FulFixAnimation; // 0x268(0x08)
	struct UWidgetAnimation* ShowAgreeButton; // 0x270(0x08)
	struct UWidgetAnimation* ReadArrowFlash; // 0x278(0x08)
	struct UTBP_UI_MenuButton_C* AgreeButton; // 0x280(0x08)
	struct UTBP_UI_MenuButton_C* CloseButton; // 0x288(0x08)
	struct UTBP_UI_MenuButton_C* CloseButton_2; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* DeniedText; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* DeniedTitleText; // 0x2a0(0x08)
	struct UTBP_UI_MenuButton_C* DisagreeButton; // 0x2a8(0x08)
	struct UTBP_UI_Popup_Base_C* DisagreePopup; // 0x2b0(0x08)
	struct UImage* Image_144; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* License_Text_Newsletter; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* License_Text_PP; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* License_Text_Special1; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* License_Text_Special2; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* License_Text_Special3; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* License_Text_Special4; // 0x2e8(0x08)
	struct UTigerStyledRichTextBlock* License_Text_TOS; // 0x2f0(0x08)
	struct UOverlay* ReadArrowContainer; // 0x2f8(0x08)
	struct UImage* ReadArrowShadow; // 0x300(0x08)
	struct UScrollBox* ScrollBox_1; // 0x308(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x310(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x318(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_3; // 0x320(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_4; // 0x328(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x330(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_Newsletter; // 0x338(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_PP; // 0x340(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_Special1; // 0x348(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_Special2; // 0x350(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_Special3; // 0x358(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_Special4; // 0x360(0x08)
	struct UTigerStyledRichTextBlock* Title_Text_TOS; // 0x368(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_License; // 0x370(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Title; // 0x378(0x08)
	struct FMulticastInlineDelegate OnDecisionMade; // 0x380(0x10)
	struct FString Bold_TextFormating; // 0x390(0x10)
	struct FString EL_TextFormatting; // 0x3a0(0x10)
	struct FString UL_TextFormatting; // 0x3b0(0x10)
	struct FString Subtitle_TextFormatting; // 0x3c0(0x10)
	struct FString Subheader_TextFormatting; // 0x3d0(0x10)
	bool Agreed; // 0x3e0(0x01)
	bool ScrolledFinished; // 0x3e1(0x01)
	bool bShouldForceToAccept; // 0x3e2(0x01)
	char pad_3E3[0x5]; // 0x3e3(0x05)
	struct UTBP_UI_CheckboxWithClickabelText_C* CurrentClickableCheckboxCallerRef; // 0x3e8(0x08)

	void SetDeclinePopupTexts(struct FText InTitleText, struct FText InParagraphText); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetDeclinePopupTexts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Reset(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Init(bool InShouldForceAccept, struct UTBP_UI_CheckboxWithClickabelText_C* InCheckboxRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseLicense(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.CloseLicense // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetTermsOfServiceText(struct FText TitleTextTOS, struct FText LicenceTextTOS); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetTermsOfServiceText // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ClosePopup(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ClosePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowPrivacyPolicy(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowPrivacyPolicy // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowTermsOfService(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowTermsOfService // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPrivacyPolicyText(struct FText TitleTextPP, struct FText LicenceTextPP); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetPrivacyPolicyText // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowNewsletterText(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowNewsletterText // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowKoreaPopup1(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowKoreaPopup2(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup2 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowKoreaPopup3(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup3 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowKoreaPopup4(bool bInShouldCheckCheckbox, struct UTBP_UI_CheckboxWithClickabelText_C* InClickableCheckboxCallerRef); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowKoreaPopup4 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetNewsletterText(struct FText InNewsletterTitle, struct FText InNewsletterText); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetNewsletterText // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSpecial1Text(struct FText InSpecial1Title, struct FText InSpecial1Text); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial1Text // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSpecial2Text(struct FText InSpecial2Title, struct FText InSpecial2Text); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial2Text // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSpecial3Text(struct FText InSpecial3Title, struct FText InSpecial3Text); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial3Text // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSpecial4Text(struct FText InSpecial4Title, struct FText InSpecial4Text); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.SetSpecial4Text // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfScollFinished(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.CheckIfScollFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__AgreeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Reset Agree Button(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.Reset Agree Button // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TOS_PP_Popup_DisagreeButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_DisagreeButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ShowDisagreePopup(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ShowDisagreePopup // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TOS_PP_Popup_CloseButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.BndEvt__TBP_UI_TOS_PP_Popup_CloseButton_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void AutoClickClose(); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.AutoClickClose // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TOS_PP_Popup(int32_t EntryPoint); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.ExecuteUbergraph_TBP_UI_TOS_PP_Popup // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnDecisionMade__DelegateSignature(bool Agreed); // Function TBP_UI_TOS_PP_Popup.TBP_UI_TOS_PP_Popup_C.OnDecisionMade__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

