// WidgetBlueprintGeneratedClass TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C
// Size: 0x5e0 (Inherited: 0x260)
struct UTBP_UI_RegistrationSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTBP_UI_Button_CTA_C* Button_CTA_RegisterButton; // 0x268(0x08)
	struct UVerticalBox* CountrySpecificExtras; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* DateofBirth_Text; // 0x278(0x08)
	struct UTBP_UI_AdvancedTextBox_C* EmailBoxRegistration; // 0x280(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox1; // 0x288(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox2; // 0x290(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox3; // 0x298(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox4; // 0x2a0(0x08)
	struct UTBP_UI_AdvancedTextBox_C* PasswordBoxRegistration; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* Regitster_Text; // 0x2b0(0x08)
	struct UTBP_UI_AdvancedTextBox_C* RepeatPasswordBoxRegistration; // 0x2b8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2c0(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider_6; // 0x2c8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Email; // 0x2d0(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Registration; // 0x2d8(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Username; // 0x2e0(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* TBP_UI_Registration_Checkbox_Newsletter; // 0x2e8(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* TBP_UI_Registration_Checkbox_PrivacyPolicy; // 0x2f0(0x08)
	struct UTBP_UI_CheckboxWithClickabelText_C* TBP_UI_Registration_Checkbox_TermsOfService; // 0x2f8(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Agreement; // 0x300(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Country; // 0x308(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Date; // 0x310(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_EmailRegistration; // 0x318(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_2; // 0x320(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_3; // 0x328(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_4; // 0x330(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_5; // 0x338(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_PasswordRegistration; // 0x340(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Register; // 0x348(0x08)
	struct UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_UsernameRegistration; // 0x350(0x08)
	struct UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Country; // 0x358(0x08)
	struct UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Day; // 0x360(0x08)
	struct UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Month; // 0x368(0x08)
	struct UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Year; // 0x370(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x378(0x08)
	struct UTBP_UI_TextButton_C* TBP_UI_TextButton_SignIn; // 0x380(0x08)
	struct UTBP_UI_TOS_PP_Popup_C* TBP_UI_TOS_PP_Popup; // 0x388(0x08)
	struct UTBP_UI_AdvancedTextBox_C* UsernameBoxRegistration; // 0x390(0x08)
	struct FMulticastInlineDelegate CreateAccount; // 0x398(0x10)
	struct FMulticastInlineDelegate Back; // 0x3a8(0x10)
	bool bYearSelected; // 0x3b8(0x01)
	bool bMonthSelected; // 0x3b9(0x01)
	bool bCountrySelected; // 0x3ba(0x01)
	bool bDaySelected; // 0x3bb(0x01)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct FText> Countries; // 0x3c0(0x10)
	int32_t RegionId; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct FText EmailUserChangeRevision; // 0x3d8(0x18)
	struct FText UsernameUserChangeRevision; // 0x3f0(0x18)
	bool bUsernameAvailable; // 0x408(0x01)
	bool bEmailAvailable; // 0x409(0x01)
	bool bPasswordEnteredCorrectly; // 0x40a(0x01)
	bool bDateEnteredCorrectly; // 0x40b(0x01)
	char pad_40C[0x4]; // 0x40c(0x04)
	struct TMap<struct FString, bool> CachedEmailResponses; // 0x410(0x50)
	struct TMap<struct FString, bool> CachedUsernameResponses; // 0x460(0x50)
	struct UTBP_UI_LoginScreen_C* LoginScreen; // 0x4b0(0x08)
	struct TMap<struct FString, int32_t> CountryDropDownKeyIndices; // 0x4b8(0x50)
	int32_t CurrentKeyIndex; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct FMulticastInlineDelegate ExitGame; // 0x510(0x10)
	bool bTermsOfServiceAccepted; // 0x520(0x01)
	bool bPrivacyPolicyAccepted; // 0x521(0x01)
	bool bNewsletterAccepted; // 0x522(0x01)
	bool bKoreaCheckbox1Accepted; // 0x523(0x01)
	bool bKoreaCheckbox2Accepted; // 0x524(0x01)
	bool bKoreaCheckbox3Accepted; // 0x525(0x01)
	bool bKoreaCheckbox4Accepted; // 0x526(0x01)
	char pad_527[0x1]; // 0x527(0x01)
	struct FString Subheader_TextFormatting; // 0x528(0x10)
	struct FString Subtitle_TextFormatting; // 0x538(0x10)
	struct FString UL_TextFormatting; // 0x548(0x10)
	struct FString Bold_TextFormating; // 0x558(0x10)
	struct FString EL_TextFormatting; // 0x568(0x10)
	struct FTimerHandle TimeoutTimerHandle; // 0x578(0x08)
	bool bCountrySelectedKorea; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct TMap<struct FString, int32_t> CachedUsernameResponsesProfanity; // 0x588(0x50)
	struct FTimerHandle UsernameTimeoutTimerHandle; // 0x5d8(0x08)

	void UsernameNotInPassword(bool OutError); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameNotInPassword // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetCountryShouldShowExportGate(bool OutShouldShowExportGate); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetCountryShouldShowExportGate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckAgeRestrictionDirectlyByYearSelection(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckAgeRestrictionDirectlyByYearSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetCountryRegionId(int32_t OutRegionId); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetCountryRegionId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ValidatePasswordEntry(bool OutCorrectlyEntered); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ValidatePasswordEntry // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckRegistrationFormReady(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckRegistrationFormReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void VerifyDateOfBirth(bool bValid, struct FText Message); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.VerifyDateOfBirth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetEnteredDateOfBirth(bool IsValidDate, struct FDateTime DateOfBirth); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredDateOfBirth // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void MakeArray(int32_t FirstIndex, int32_t LastIndex, bool InvertList, struct TArray<struct FText> NewParam); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.MakeArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Verify(struct FText Error); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Verify // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FString GetEnteredEmail(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredEmail // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void PopulateComboBox(struct UComboBoxString* InComboBox, int32_t FirstOption, int32_t LastOption, bool Reverse); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.PopulateComboBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetEnteredDetails(struct FString Verification Code, struct FSharkAccountRegistrationData Registration Data); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.GetEnteredDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__Button_CTA_RegisterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__UsernameBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__UsernameBox_K2Node_ComponentBoundEvent_0_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EmailBox_K2Node_ComponentBoundEvent_2_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__EmailBox_K2Node_ComponentBoundEvent_2_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__PasswordBox_K2Node_ComponentBoundEvent_3_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RepeatPasswordBox_K2Node_ComponentBoundEvent_5_On Text Settled__DelegateSignature(struct FText Text); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__RepeatPasswordBox_K2Node_ComponentBoundEvent_5_On Text Settled__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_TextButton_Back_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StyledComboBox_Day_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Day_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StyledComboBox_Month_K2Node_ComponentBoundEvent_7_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Month_K2Node_ComponentBoundEvent_7_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StyledComboBox_Year_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Year_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void UsernameAvailabilityCallback(bool InAvailable, struct FText InErrorText, bool InIsProfanity); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameAvailabilityCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EmailAvailabilityCallback(bool InAvailable, struct FText InErrorText); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.EmailAvailabilityCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_StyledComboBox_Country_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature(struct FText SelectedItem, int32_t SelectedIndex); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_StyledComboBox_Country_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EmailBox_K2Node_ComponentBoundEvent_11_On Text Changed__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__EmailBox_K2Node_ComponentBoundEvent_11_On Text Changed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__UsernameBox_K2Node_ComponentBoundEvent_12_On Text Changed__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__UsernameBox_K2Node_ComponentBoundEvent_12_On Text Changed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void QueryEmailRegisterCallback(bool bInSuccess, bool bInRegistered, struct FString InEmail); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.QueryEmailRegisterCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartEmailTimeOutTimer(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StartEmailTimeOutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopEmailTimeOutTimer(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StopEmailTimeOutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Timeout(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Timeout // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowTermsOfService(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowTermsOfService // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowPrivacyPolicy(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowPrivacyPolicy // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_TextButton_ExitGame_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void DoubleCheckPasswordAfterUpdatedUsername(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.DoubleCheckPasswordAfterUpdatedUsername // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfShouldDoubleCheckPasswordField(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CheckIfShouldDoubleCheckPasswordField // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_13_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_13_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_14_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_14_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_15_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_15_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_16_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_16_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_17_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_17_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_18_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_18_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_19_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_19_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_20_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_20_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_21_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_21_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_22_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_22_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_23_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_23_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_24_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_24_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ShowNewsletterAgreement(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ShowNewsletterAgreement // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExitDueToTimeOut(bool InAvailable, struct FText InErrorText); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExitDueToTimeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_25_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox1_K2Node_ComponentBoundEvent_25_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_26_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox2_K2Node_ComponentBoundEvent_26_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_27_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox3_K2Node_ComponentBoundEvent_27_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_28_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_KoreaCheckbox4_K2Node_ComponentBoundEvent_28_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_29_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_29_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_30_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_30_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_31_OnClickedPopupRequirement__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_31_OnClickedPopupRequirement__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_32_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_32_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_33_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_33_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_34_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_TermsOfService_K2Node_ComponentBoundEvent_34_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_35_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_35_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_36_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_36_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_37_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_PrivacyPolicy_K2Node_ComponentBoundEvent_37_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_38_OnChecked_true__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_38_OnChecked_true__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_39_OnChecked_false__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_39_OnChecked_false__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_40_OnClickedText__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.BndEvt__TBP_UI_RegistrationSection_TBP_UI_Registration_Checkbox_Newsletter_K2Node_ComponentBoundEvent_40_OnClickedText__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ResetAllCheckBoxes(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ResetAllCheckBoxes // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void QueryUsernameRegisterCallback(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, struct FString InUsername); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.QueryUsernameRegisterCallback // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartUsernameTimeoutTimer(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StartUsernameTimeoutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopUsernameTimeoutTimer(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.StopUsernameTimeoutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UsernameExitDueToTimeout(bool InAvailable, struct FText InErrorText); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameExitDueToTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UsernameTimeout(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.UsernameTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_RegistrationSection(int32_t EntryPoint); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExecuteUbergraph_TBP_UI_RegistrationSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void ExitGame__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.ExitGame__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Back__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.Back__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateAccount__DelegateSignature(); // Function TBP_UI_RegistrationSection.TBP_UI_RegistrationSection_C.CreateAccount__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

