// BlueprintGeneratedClass TBP_Player.TBP_Player_C
// Size: 0x1358 (Inherited: 0xf00)
struct ATBP_Player_C : ATigerPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	struct UAkComponent* TakeDamageAkComp; // 0xf08(0x08)
	struct UTBP_PlayerVFXComponent_C* TBP_PlayerVFXComponent; // 0xf10(0x08)
	struct UPostProcessComponent* RainOnCameraPostProcess; // 0xf18(0x08)
	struct USceneComponent* ListenerComponent; // 0xf20(0x08)
	struct USpringArmComponent* ListenerSpringArm; // 0xf28(0x08)
	struct UPostProcessComponent* DeathPostProcess; // 0xf30(0x08)
	struct UParticleSystemComponent* PS_VFX_GasDebuff; // 0xf38(0x08)
	struct UStaticMeshComponent* OutlineBillboard; // 0xf40(0x08)
	struct UTBP_PlayerTraversalStateMachine_C* PlayerTraversalStateMachine; // 0xf48(0x08)
	struct UTBP_BuffPostProcessHandler_C* BuffPostProcessHandler; // 0xf50(0x08)
	struct UPostProcessComponent* ScopePostProcess; // 0xf58(0x08)
	struct UPostProcessComponent* TraversalZoomBlurPostProcess; // 0xf60(0x08)
	struct UParticleSystemComponent* TraversalSmokeTrailFeet; // 0xf68(0x08)
	struct UParticleSystemComponent* TraversalSmokeTrail; // 0xf70(0x08)
	struct USphereComponent* AudioTrigger; // 0xf78(0x08)
	struct USkeletalMeshComponent* SecondaryWeapon; // 0xf80(0x08)
	struct UPointLightComponent* SecondaryMuzzleLight; // 0xf88(0x08)
	struct UArrowComponent* SecondaryProjectileSpawnLocator; // 0xf90(0x08)
	struct UArrowComponent* SecondaryMuzzleLocator; // 0xf98(0x08)
	struct UPostProcessComponent* RedGasPostProcess; // 0xfa0(0x08)
	struct UPointLightComponent* HairLight; // 0xfa8(0x08)
	struct UTigerHSensesTargetComponent* TigerHSensesTarget; // 0xfb0(0x08)
	struct UPostProcessComponent* FeedingPostProcess; // 0xfb8(0x08)
	struct UTBP_FeedingComponent_C* TBP_FeedingComponent; // 0xfc0(0x08)
	struct USpotLightComponent* FeedingLight; // 0xfc8(0x08)
	struct UTBP_CharacterCustomizationComp_C* CharacterCustomization; // 0xfd0(0x08)
	struct UTBP_LevelComponent_C* TBP_LevelComponent; // 0xfd8(0x08)
	struct USpotLightComponent* Fill Light; // 0xfe0(0x08)
	struct USpotLightComponent* Rim Light; // 0xfe8(0x08)
	struct USpotLightComponent* Key Light; // 0xff0(0x08)
	struct UVectorFieldComponent* VectorField; // 0xff8(0x08)
	struct UPointLightComponent* MuzzleLight; // 0x1000(0x08)
	struct UPostProcessComponent* DownedPostProcess; // 0x1008(0x08)
	struct UArrowComponent* ProjectileSpawnRoot; // 0x1010(0x08)
	struct UWidgetComponent* HealthBarWidget; // 0x1018(0x08)
	struct UArrowComponent* ProjectileSpawnLocator; // 0x1020(0x08)
	struct UBoxComponent* InteractionVolume; // 0x1028(0x08)
	struct UPostProcessComponent* LowHealthPostProcess; // 0x1030(0x08)
	struct UPostProcessComponent* HeightenedSensesPostProcess; // 0x1038(0x08)
	struct UBoxComponent* FullscreenEffectsVolume; // 0x1040(0x08)
	struct UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x1048(0x08)
	struct UArrowComponent* MuzzleLocator; // 0x1050(0x08)
	struct UBoxComponent* TriggerVolume; // 0x1058(0x08)
	struct USkeletalMeshComponent* Weapon; // 0x1060(0x08)
	float GasDebuffBurnTimeline_NewTrack_0_84279FD2437A84CAF9924F81F64E1CED; // 0x1068(0x04)
	enum class ETimelineDirection GasDebuffBurnTimeline__Direction_84279FD2437A84CAF9924F81F64E1CED; // 0x106c(0x01)
	char pad_106D[0x3]; // 0x106d(0x03)
	struct UTimelineComponent* GasDebuffBurnTimeline; // 0x1070(0x08)
	float GasDebuffTimeline_NewTrack_0_1887B31C4D0B0FDB42B539B4308CF7BD; // 0x1078(0x04)
	enum class ETimelineDirection GasDebuffTimeline__Direction_1887B31C4D0B0FDB42B539B4308CF7BD; // 0x107c(0x01)
	char pad_107D[0x3]; // 0x107d(0x03)
	struct UTimelineComponent* GasDebuffTimeline; // 0x1080(0x08)
	float OutlineTimeline_Visibility_EAAB304D4327221D27448EAC650058F1; // 0x1088(0x04)
	enum class ETimelineDirection OutlineTimeline__Direction_EAAB304D4327221D27448EAC650058F1; // 0x108c(0x01)
	char pad_108D[0x3]; // 0x108d(0x03)
	struct UTimelineComponent* OutlineTimeline; // 0x1090(0x08)
	float MuzzleFlashLight2Timeline_Intensity_CEEB9A454434A38325252583A6A3B6F4; // 0x1098(0x04)
	enum class ETimelineDirection MuzzleFlashLight2Timeline__Direction_CEEB9A454434A38325252583A6A3B6F4; // 0x109c(0x01)
	char pad_109D[0x3]; // 0x109d(0x03)
	struct UTimelineComponent* MuzzleFlashLight2Timeline; // 0x10a0(0x08)
	struct FVector ScopeTimeline_FocusPosition_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x10a8(0x0c)
	float ScopeTimeline_IsScoped_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x10b4(0x04)
	enum class ETimelineDirection ScopeTimeline__Direction_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x10b8(0x01)
	char pad_10B9[0x7]; // 0x10b9(0x07)
	struct UTimelineComponent* ScopeTimeline; // 0x10c0(0x08)
	float MuzzleFlashLightTimeline_Intensity_051DB23B4BC6020389CC78B6EF022930; // 0x10c8(0x04)
	enum class ETimelineDirection MuzzleFlashLightTimeline__Direction_051DB23B4BC6020389CC78B6EF022930; // 0x10cc(0x01)
	char pad_10CD[0x3]; // 0x10cd(0x03)
	struct UTimelineComponent* MuzzleFlashLightTimeline; // 0x10d0(0x08)
	enum class ETimelineDirection Check_Dodge__Direction_2340BDC0451DB765FEDE2CB7146A5511; // 0x10d8(0x01)
	char pad_10D9[0x7]; // 0x10d9(0x07)
	struct UTimelineComponent* Check Dodge; // 0x10e0(0x08)
	float Timeline_9_Blood_Visibility_D47DB4DB47C5EBA45F01F99C1BF144F4; // 0x10e8(0x04)
	enum class ETimelineDirection Timeline_9__Direction_D47DB4DB47C5EBA45F01F99C1BF144F4; // 0x10ec(0x01)
	char pad_10ED[0x3]; // 0x10ed(0x03)
	struct UTimelineComponent* Timeline_10; // 0x10f0(0x08)
	float Timeline_Diablerize_Short_NewTrack_0_6970392F467F11B38587869BF53D9986; // 0x10f8(0x04)
	float Timeline_Diablerize_Short_Transition_6970392F467F11B38587869BF53D9986; // 0x10fc(0x04)
	enum class ETimelineDirection Timeline_Diablerize_Short__Direction_6970392F467F11B38587869BF53D9986; // 0x1100(0x01)
	char pad_1101[0x7]; // 0x1101(0x07)
	struct UTimelineComponent* Timeline_Diablerize_Short; // 0x1108(0x08)
	enum class ETimelineDirection Timeline_13__Direction_8F0808F345D8234F85595F9450BAE209; // 0x1110(0x01)
	char pad_1111[0x7]; // 0x1111(0x07)
	struct UTimelineComponent* Timeline_14; // 0x1118(0x08)
	float Timeline_8_Opacity_7E2D82864AB41D91CE8753A3A2E4951C; // 0x1120(0x04)
	enum class ETimelineDirection Timeline_8__Direction_7E2D82864AB41D91CE8753A3A2E4951C; // 0x1124(0x01)
	char pad_1125[0x3]; // 0x1125(0x03)
	struct UTimelineComponent* Timeline_9; // 0x1128(0x08)
	float Timeline_7_Zoom_30D72BD24E1509A1AF3FB099FA1C9EB6; // 0x1130(0x04)
	enum class ETimelineDirection Timeline_7__Direction_30D72BD24E1509A1AF3FB099FA1C9EB6; // 0x1134(0x01)
	char pad_1135[0x3]; // 0x1135(0x03)
	struct UTimelineComponent* Timeline_8; // 0x1138(0x08)
	float Timeline_2_RainMultiplier_CECBE516414697453F25FAB3B5FB331C; // 0x1140(0x04)
	enum class ETimelineDirection Timeline_2__Direction_CECBE516414697453F25FAB3B5FB331C; // 0x1144(0x01)
	char pad_1145[0x3]; // 0x1145(0x03)
	struct UTimelineComponent* Timeline_3; // 0x1148(0x08)
	float Timeline_1_Sprint_Strength_2AEA3DD140966E986A8A2A830078C114; // 0x1150(0x04)
	enum class ETimelineDirection Timeline_1__Direction_2AEA3DD140966E986A8A2A830078C114; // 0x1154(0x01)
	char pad_1155[0x3]; // 0x1155(0x03)
	struct UTimelineComponent* Timeline_2; // 0x1158(0x08)
	float Timeline_0_FOV_Animation_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1160(0x04)
	float Timeline_0_Sprint_Strength_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1164(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1168(0x01)
	char pad_1169[0x7]; // 0x1169(0x07)
	struct UTimelineComponent* Timeline_1; // 0x1170(0x08)
	float Timeline_4_Zoom_1CA12BEA4ECFEA2FB018C7BE4DE80E72; // 0x1178(0x04)
	enum class ETimelineDirection Timeline_4__Direction_1CA12BEA4ECFEA2FB018C7BE4DE80E72; // 0x117c(0x01)
	char pad_117D[0x3]; // 0x117d(0x03)
	struct UTimelineComponent* Timeline_5; // 0x1180(0x08)
	float Timeline_3_Opacity_B82857664678EB85DC4CA0A80BD4542E; // 0x1188(0x04)
	enum class ETimelineDirection Timeline_3__Direction_B82857664678EB85DC4CA0A80BD4542E; // 0x118c(0x01)
	char pad_118D[0x3]; // 0x118d(0x03)
	struct UTimelineComponent* Timeline_4; // 0x1190(0x08)
	float Inside; // 0x1198(0x04)
	int32_t FeedingAudioAkEventID; // 0x119c(0x04)
	float DownedBlendWeight; // 0x11a0(0x04)
	float InAssaultedZoneBlendWeight; // 0x11a4(0x04)
	float NearAssaultedZoneBlendWeight; // 0x11a8(0x04)
	char pad_11AC[0x4]; // 0x11ac(0x04)
	struct UAudioComponent* HeightenedSensesSoundLoop; // 0x11b0(0x08)
	float OriginalRainRate; // 0x11b8(0x04)
	char pad_11BC[0x4]; // 0x11bc(0x04)
	struct FTimerHandle HSensesDelayHandle; // 0x11c0(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshDuplicates; // 0x11c8(0x10)
	int32_t CurrentTrailLoop; // 0x11d8(0x04)
	float AnimFloat1; // 0x11dc(0x04)
	float AnimFloat2; // 0x11e0(0x04)
	char pad_11E4[0x4]; // 0x11e4(0x04)
	struct USkeletalMeshComponent* HeartMesh_Smoke; // 0x11e8(0x08)
	struct ATBP_AshPile_C* AshFxActor; // 0x11f0(0x08)
	bool DiablerizeFinished; // 0x11f8(0x01)
	bool IsBeingDiablerized; // 0x11f9(0x01)
	enum class ETigerPlayerLifeStatus LifeStatus; // 0x11fa(0x01)
	char pad_11FB[0x1]; // 0x11fb(0x01)
	struct FVector PreviousCameraLocation; // 0x11fc(0x0c)
	struct FVector Previous; // 0x1208(0x0c)
	char pad_1214[0x4]; // 0x1214(0x04)
	struct UParticleSystemComponent* ScoutedParticles; // 0x1218(0x08)
	float BloodVisibility; // 0x1220(0x04)
	char pad_1224[0x4]; // 0x1224(0x04)
	struct ATigerNPC* CurrentNPCBeingFedOn; // 0x1228(0x08)
	bool bWasAimGliding; // 0x1230(0x01)
	char pad_1231[0x3]; // 0x1231(0x03)
	int32_t FeedingBloodIndex; // 0x1234(0x04)
	struct TArray<float> FeedingBloodVisibility; // 0x1238(0x10)
	float CurrentFeedingVisibility; // 0x1248(0x04)
	char pad_124C[0x4]; // 0x124c(0x04)
	struct FMulticastInlineDelegate SpeedFullscreenEffectEventDispatch; // 0x1250(0x10)
	struct UAkAudioEvent* ProjectileCloseFlyby; // 0x1260(0x08)
	bool Was Previously Inside Holy Incense; // 0x1268(0x01)
	char pad_1269[0x7]; // 0x1269(0x07)
	struct FTimerHandle TraversalMostRecentTimer; // 0x1270(0x08)
	int32_t HolyIncenseAkEventID; // 0x1278(0x04)
	int32_t WallGrindAkEventID; // 0x127c(0x04)
	int32_t DiablerizeVictimAkEventID; // 0x1280(0x04)
	int32_t DiablerizeAkEventID; // 0x1284(0x04)
	int32_t ReviveAkEventID; // 0x1288(0x04)
	int32_t SlideAkEventID; // 0x128c(0x04)
	struct FVector PositionLastFrame; // 0x1290(0x0c)
	int32_t ShieldShaderCount; // 0x129c(0x04)
	struct TMap<enum class EPhysicalSurface, struct FName> SurfaceToAudioName; // 0x12a0(0x50)
	float FeedingProgress; // 0x12f0(0x04)
	char pad_12F4[0x4]; // 0x12f4(0x04)
	struct UNiagaraSystem* CashedDownedParticle; // 0x12f8(0x08)
	struct FSoftObjectPath NiagaraDownedPath; // 0x1300(0x18)
	struct UNiagaraComponent* DownedNiagara; // 0x1318(0x08)
	struct UNiagaraComponent* DownedNiagara2; // 0x1320(0x08)
	int32_t FeedingLoopAkEventID; // 0x1328(0x04)
	int32_t RedGasAkEventID; // 0x132c(0x04)
	bool ExposePlayerInHeightenedSenses; // 0x1330(0x01)
	bool IsInsideHolySmoke; // 0x1331(0x01)
	char pad_1332[0x2]; // 0x1332(0x02)
	float DistanceToHolyIncenseVolume; // 0x1334(0x04)
	bool ShouldUpdateListenerPosition; // 0x1338(0x01)
	char pad_1339[0x3]; // 0x1339(0x03)
	struct FVector2D InterpolatedDirectionToRedGasEdge; // 0x133c(0x08)
	bool bEnableHealthBars; // 0x1344(0x01)
	char pad_1345[0x3]; // 0x1345(0x03)
	struct FVector TakeDamageLocation; // 0x1348(0x0c)
	float FeedingFadeOutTime; // 0x1354(0x04)

	void GetWeapon(struct USkeletalMeshComponent* OutWeapon, struct USkeletalMeshComponent* OutSecondWeapon); // Function TBP_Player.TBP_Player_C.GetWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16a87a0
	void InitHealthBars(); // Function TBP_Player.TBP_Player_C.InitHealthBars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateSPCPlayerMaterialCollection(); // Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Update Red Gas MPC(); // Function TBP_Player.TBP_Player_C.Update Red Gas MPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void StartRedGasAudio(); // Function TBP_Player.TBP_Player_C.StartRedGasAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void StopRedGasAudio(); // Function TBP_Player.TBP_Player_C.StopRedGasAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	bool CheckShouldUpdateListenerPosition(struct APlayerController* Player Controller); // Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16a87a0
	void EnableCharacterlighting(); // Function TBP_Player.TBP_Player_C.EnableCharacterlighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetAkAlignmentRTPC(); // Function TBP_Player.TBP_Player_C.SetAkAlignmentRTPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetLodOnLocalPlayer(); // Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetAudioListenerOverride(); // Function TBP_Player.TBP_Player_C.SetAudioListenerOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetDamageTakenAudioSwitch(float Value); // Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void StartSlidingAudio(); // Function TBP_Player.TBP_Player_C.StartSlidingAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void DetermineOwnerOfProjectile(struct UObject* Object, struct ATigerProjectile* AsTiger Projectile); // Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetRTPC:AltitudePlayer(); // Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetReverbStateOnExit(struct UObject* Object); // Function TBP_Player.TBP_Player_C.SetReverbStateOnExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetReverbStateOnEnter(struct UObject* Object); // Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void DisableScreenCullSize(); // Function TBP_Player.TBP_Player_C.DisableScreenCullSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void PostLandingAudio(); // Function TBP_Player.TBP_Player_C.PostLandingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void PlayBeingDiablerizedAudio(); // Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetGroundedAudioState(bool Condition); // Function TBP_Player.TBP_Player_C.SetGroundedAudioState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void PlayDiablerizeAudio(); // Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void PlayReviveAudio(); // Function TBP_Player.TBP_Player_C.PlayReviveAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void DisableAllPostProcess(); // Function TBP_Player.TBP_Player_C.DisableAllPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void StopCloseToRedGasAudio(); // Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void StartCloseToRedGasAudio(); // Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnTraversalPostProcessEnded(); // Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateTraversalPostProcess(float Duration, float Strength, struct FVector2D FocusPosition); // Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	float GetDiablerizeEffectStartTime(); // Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16a87a0
	void DeactivateHeavyChargeFX(); // Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateAimGlideCosmetic(); // Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void DisableSkeletonSmokeEffects(); // Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetupCharacterDuplicates(struct USkeletalMeshComponent* SkeletalMeshOriginal); // Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SwiftStrikeFX(); // Function TBP_Player.TBP_Player_C.SwiftStrikeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnGroupMemberLifeStatusChanged(enum class ETigerPlayerLifeStatus NewLifeStatus); // Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateInRedGasEffect(float Delta Time); // Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateDownedFX(float DeltaTime); // Function TBP_Player.TBP_Player_C.UpdateDownedFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void IsLocalClient(bool Client); // Function TBP_Player.TBP_Player_C.IsLocalClient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UpdateFeedingFX(float Delta); // Function TBP_Player.TBP_Player_C.UpdateFeedingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Set Rain Amount(); // Function TBP_Player.TBP_Player_C.Set Rain Amount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void StunVisualEffect(struct AActor* self2); // Function TBP_Player.TBP_Player_C.StunVisualEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UserConstructionScript(); // Function TBP_Player.TBP_Player_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Timeline_3__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_3__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_4__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_4__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_0__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_0__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_1__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_1__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_2__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_2__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_7__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_7__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_8__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_8__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void ScopeTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void ScopeTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_13__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_13__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_13__InvulnerabilityTrigger__EventFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_13__ToggleCharacterVisibility__EventFunc(); // Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_Diablerize_Short__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_Diablerize_Short__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_9__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Timeline_9__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Timeline_9__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Timeline_9__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Check Dodge__FinishedFunc(); // Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void Check Dodge__UpdateFunc(); // Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void MuzzleFlashLightTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void MuzzleFlashLightTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void MuzzleFlashLight2Timeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void MuzzleFlashLight2Timeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void OutlineTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void OutlineTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void GasDebuffTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void GasDebuffTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void GasDebuffBurnTimeline__FinishedFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16a87a0
	void GasDebuffBurnTimeline__UpdateFunc(); // Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16a87a0
	void InpActEvt_Left_K2Node_InputKeyEvent_4(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x16a87a0
	void InpActEvt_Right_K2Node_InputKeyEvent_3(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x16a87a0
	void InpActEvt_PageUp_K2Node_InputKeyEvent_2(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x16a87a0
	void InpActEvt_PageDown_K2Node_InputKeyEvent_1(struct FKey Key); // Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x16a87a0
	void OnLocalDisciplineUse(struct FDisciplineUse DisciplineUse, float ExpectedDuration); // Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void DisciplineJumpFinished(); // Function TBP_Player.TBP_Player_C.DisciplineJumpFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnLocalDisciplineUseFailed(struct FDisciplineUse DisciplineUse); // Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void LocalPlayer BeginPlay(); // Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnLocalSprintStarted(); // Function TBP_Player.TBP_Player_C.OnLocalSprintStarted // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnLocalSprintEnded(); // Function TBP_Player.TBP_Player_C.OnLocalSprintEnded // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnLocalEnteredIndoor(); // Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnLocalExitedIndoor(); // Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnStartedFeedingApproach(float TravelTime); // Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnFeedingDoneEvent(bool bTargetIsDrained, struct ATigerCharacter* InTargetFedOn); // Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TBP_Player.TBP_Player_C.BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void OnTigerMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class ETigerMovementMode PrevCustomMode, enum class EMovementMode NewMovementMode, enum class ETigerMovementMode NewCustomMode); // Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnExtraHealthDepleted(); // Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnStartedAimingCameraTransition(); // Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnStoppedAimingCameraTransition(); // Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnMasqueradeStateChanged_Event_1(bool InIsMasqueradeBreached, enum class ETigerAIPlayerAction InPlayerAction); // Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveActorEndOverlap(struct AActor* OtherActor); // Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnShieldDepleted(struct ATigerPlayer* InInstigator); // Function TBP_Player.TBP_Player_C.OnShieldDepleted // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnChangedAkAlignment(enum class ETigerCharacterAkAlignmentType InAlignment); // Function TBP_Player.TBP_Player_C.OnChangedAkAlignment // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnModEquipped(); // Function TBP_Player.TBP_Player_C.OnModEquipped // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void Client On Mod Equipped(); // Function TBP_Player.TBP_Player_C.Client On Mod Equipped // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void LocalPlayerTick(float InDeltaSeconds); // Function TBP_Player.TBP_Player_C.LocalPlayerTick // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveBeginPlay(); // Function TBP_Player.TBP_Player_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnDisciplineUseSucceeded(struct FDisciplineUse DisciplineUse); // Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnLanded(struct FHitResult Hit); // Function TBP_Player.TBP_Player_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void ReceivePossessed(struct AController* NewController); // Function TBP_Player.TBP_Player_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnShowDamageAmount(struct FVector InHitLocation, struct FLinearColor InDamageColor, int32_t InTotalDamageAmount, int32_t InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent); // Function TBP_Player.TBP_Player_C.OnShowDamageAmount // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnWeaponFired(bool bSecondaryWeaponFired); // Function TBP_Player.TBP_Player_C.OnWeaponFired // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnRep_PlayerClan(); // Function TBP_Player.TBP_Player_C.OnRep_PlayerClan // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void LifeStatusChanged(enum class ETigerPlayerLifeStatus NewLifeStatus); // Function TBP_Player.TBP_Player_C.LifeStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnGotPlayerState(); // Function TBP_Player.TBP_Player_C.OnGotPlayerState // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnRep_PowerKit(); // Function TBP_Player.TBP_Player_C.OnRep_PowerKit // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnDodged(bool IsControllingPlayer, bool bLaunchedInAir, struct FVector LaunchDirection, char DodgeStage); // Function TBP_Player.TBP_Player_C.OnDodged // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void SpawnBloodDecal(); // Function TBP_Player.TBP_Player_C.SpawnBloodDecal // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_Player.TBP_Player_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnGotScouted(); // Function TBP_Player.TBP_Player_C.OnGotScouted // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnNoLongerScouted(); // Function TBP_Player.TBP_Player_C.OnNoLongerScouted // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnAboutToBeHitByDisplacement(); // Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnDamageTaken(float DamageTaken, struct AActor* DamageInstigator); // Function TBP_Player.TBP_Player_C.OnDamageTaken // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnDoubleJump(struct FVector Direction); // Function TBP_Player.TBP_Player_C.OnDoubleJump // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnPlayMeleeHitEffects(struct UTigerMeleeWeapon* WeaponHitBy, struct FVector ImpactLocation, struct FVector HitDirection); // Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnStartedPhysicalInteraction(struct UTigerPhysicalInteraction* PhysInteractionClass, bool bIsTargetPlayer); // Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnInterruptedPhysicalInteraction(struct UTigerPhysicalInteraction* PhysInteractionClass, bool bIsTargetPlayer); // Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnFinishedPhysicalInteraction(struct UTigerPhysicalInteraction* PhysInteractionClass, bool bIsTargetPlayer); // Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnWeaponVisualChangedEvent(); // Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent // (Event|Protected|BlueprintEvent) // @ game+0x16a87a0
	void OnWallJump(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnWallJump // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnClimbStarted(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnClimbStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnClimbEnded(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnClimbEnded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnWallGrindStarted(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnWallGrindStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnWallGrindEnded(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnWallGrindEnded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnHardLanding(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnHardLanding // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnSlideJump(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnSlideJump // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnSlidingStarted(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnSlidingStarted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnSlidingEnded(struct FVector InVelocity); // Function TBP_Player.TBP_Player_C.OnSlidingEnded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnBecameSpectator(); // Function TBP_Player.TBP_Player_C.OnBecameSpectator // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnBecameGroupMember(); // Function TBP_Player.TBP_Player_C.OnBecameGroupMember // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void OnStoppedBeingGroupMember(); // Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature(enum class ETigerOutlineMode HighestPrioOutline); // Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature // (BlueprintEvent) // @ game+0x16a87a0
	void UpdateHolyIncenseEffect(float InDeltaTime); // Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void IncrementShieldShaderCounter(); // Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void DecrementShieldShaderCounter(); // Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void IncrementFeedingBloodIndex(); // Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void OnGoneBelowHalfHealth(); // Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_Player(int32_t EntryPoint); // Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
	void SpeedFullscreenEffectEventDispatch__DelegateSignature(float TravelTime, bool bIsFeedingApproach); // Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
};

