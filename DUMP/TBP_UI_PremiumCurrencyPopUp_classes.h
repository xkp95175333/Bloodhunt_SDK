// WidgetBlueprintGeneratedClass TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C
// Size: 0x2d0 (Inherited: 0x280)
struct UTBP_UI_PremiumCurrencyPopUp_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* Header; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* Subheader; // 0x290(0x08)
	struct UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x298(0x08)
	struct UTBP_UI_PremiumCurrency_C* TBP_UI_PremiumCurrency; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClosed; // 0x2a8(0x10)
	struct FText Currency Name; // 0x2b8(0x18)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnOpen(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnClose(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnExitKeyPressed(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnExitKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp(int32_t EntryPoint); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
	void OnClosed__DelegateSignature(); // Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
};

