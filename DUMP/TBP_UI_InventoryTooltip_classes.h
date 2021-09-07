// WidgetBlueprintGeneratedClass TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C
// Size: 0x40a (Inherited: 0x288)
struct UTBP_UI_InventoryTooltip_C : UTigerTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* AdditionalAmmoBackground; // 0x290(0x08)
	struct UImage* AdditionalAmmoBorder; // 0x298(0x08)
	struct UImage* AdditionalAmmoImage; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* AdditionalAmmoText; // 0x2a8(0x08)
	struct UImage* AmmoBackground; // 0x2b0(0x08)
	struct UImage* AmmoBorder; // 0x2b8(0x08)
	struct UHorizontalBox* AmmoInfoContainer; // 0x2c0(0x08)
	struct UWidgetSwitcher* AssetTypeSwitcher; // 0x2c8(0x08)
	struct UBorder* CategoryContainer; // 0x2d0(0x08)
	struct UTigerStyledRichTextBlock* CategoryText; // 0x2d8(0x08)
	struct UTBP_UI_Box_C* CurrentWeaponInfoBox; // 0x2e0(0x08)
	struct UWidgetSwitcher* CurrentWeaponInfoSwitcher; // 0x2e8(0x08)
	struct UCanvasPanel* EmptyTypeInfo; // 0x2f0(0x08)
	struct USizeBox* EquippedRangedWeaponMods; // 0x2f8(0x08)
	struct UTBP_UI_InventoryRangedModSlots_C* EquippedRangedWeaponSlots; // 0x300(0x08)
	struct UCanvasPanel* EquippedWeaponMod; // 0x308(0x08)
	struct UImage* Image_172; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* ItemDescText; // 0x318(0x08)
	struct UImage* ItemImage; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* ItemText; // 0x328(0x08)
	struct UTigerStyledRichTextBlock* ItemTypeText; // 0x330(0x08)
	struct UImage* ItemUnusableWidget; // 0x338(0x08)
	struct UImage* MeleePowerIcon; // 0x340(0x08)
	struct UTigerStyledRichTextBlock* MeleePowerName; // 0x348(0x08)
	struct UOverlay* MeleeWeaponTypeInfo; // 0x350(0x08)
	struct UImage* ModWeaponImage; // 0x358(0x08)
	struct UTBP_UI_InventoryRangedModSlots_C* NewRangedWeaponSlots; // 0x360(0x08)
	struct UImage* PrimaryWeaponAmmoImage; // 0x368(0x08)
	struct UVerticalBox* RangedWeaponTypeInfo; // 0x370(0x08)
	struct URichTextBlock* ReplaceModName; // 0x378(0x08)
	struct UTBP_UI_InventorySlot_C* ReplaceModSlot; // 0x380(0x08)
	struct UImage* SecondaryWeaponAmmoImage; // 0x388(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x390(0x08)
	struct UTBP_UI_Rarity_VFX_C* TBP_UI_Rarity_VFX; // 0x398(0x08)
	struct UTBP_UI_TooltipActionsContainer_C* TooltipActionsContainer; // 0x3a0(0x08)
	struct UImage* TransferArrow1; // 0x3a8(0x08)
	struct UImage* TransferArrow1_2; // 0x3b0(0x08)
	struct UImage* TransferArrow2; // 0x3b8(0x08)
	struct UImage* TransferArrow3; // 0x3c0(0x08)
	struct UImage* TransferArrow4; // 0x3c8(0x08)
	struct UImage* TransferArrow5; // 0x3d0(0x08)
	struct UTigerItemAsset* ItemAsset; // 0x3d8(0x08)
	struct TArray<struct FTigerTooltipAction> InputActions; // 0x3e0(0x10)
	bool bColorItemBackground; // 0x3f0(0x01)
	bool bShowAdditionalInfo; // 0x3f1(0x01)
	bool bShouldTick; // 0x3f2(0x01)
	char pad_3F3[0x5]; // 0x3f3(0x05)
	struct TArray<struct UImage*> TransferArrows; // 0x3f8(0x10)
	bool bShowUnavailableIcon; // 0x408(0x01)
	bool IsIdenticalInputAction; // 0x409(0x01)

	void SetupConsumableInfo(struct UTigerConsumableAsset* InConsumableAsset); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupConsumableInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupMeleeWeaponInfo(struct UTigerMeleeWeapon* InMeleeWeaponClass); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupMeleeWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupModTransferWidgets(struct TArray<struct FTigerModSlotInfo> InModsToTransfer); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupModTransferWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupAmmoInfoForSlot(struct UTigerAmmoAsset* InAmmoAsset, enum class ETigerWeaponSlot InWeaponSlot, struct UImage* InWeaponImageWidget, bool bIsValidAmmoTypeForWeapon); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupAmmoInfoForSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupRangedAmmoInfo(struct UTigerAmmoAsset* InAmmoAsset); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedAmmoInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupRangedModInfo(struct UTigerRangedModItemAsset* InModItemAsset); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedModInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupRangedWeaponInfo(struct UTigerRangedWeapon* InWeaponClass); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedWeaponInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void PopulateFromItemAsset(struct UTigerItemAsset* InItemAsset, struct TArray<struct FTigerTooltipAction> InInputActions, bool bInShowAdditionalInfo); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromItemAsset // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnInitialized(); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void Construct(); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void PopulateFromCollectible(); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromCollectible // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void PopulateFromQuestItem(); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromQuestItem // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_UI_InventoryTooltip(int32_t EntryPoint); // Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.ExecuteUbergraph_TBP_UI_InventoryTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

