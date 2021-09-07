// BlueprintGeneratedClass TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C
// Size: 0x2a1 (Inherited: 0x248)
struct ATBP_Projectile_ThrowingAxe_C : ATigerThrowingAxe {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UParticleSystemComponent* ParticleSystem2; // 0x250(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0x258(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x260(0x08)
	struct UCapsuleComponent* CollisionComp; // 0x268(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x280(0x08)
	float ProjectileDamage; // 0x288(0x04)
	struct FVector SpawnLocation; // 0x28c(0x0c)
	bool bHasCollided; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float AiNoiseRadius; // 0x29c(0x04)
	enum class ETigerDisciplinesEnum DisciplineType; // 0x2a0(0x01)

	struct AActor* CopyAndReflect(struct ATigerCharacter* InNewOwner, struct FVector InSpawnLocation, struct FRotator InSpawnRotation); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.CopyAndReflect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void MaterialHit(struct UPhysicalMaterial* Material, struct FVector Position, struct FVector Normal); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.MaterialHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void SetConfigValues(); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.SetConfigValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void UserConstructionScript(); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void Multicast_SetInitialValues(struct FVector Velocity); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.Multicast_SetInitialValues // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16a87a0
	void OnReflected(); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.OnReflected // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void BlockReflect(struct ATigerCharacter* ReflectOwner); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.BlockReflect // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_TBP_Projectile_ThrowingAxe(int32_t EntryPoint); // Function TBP_Projectile_ThrowingAxe.TBP_Projectile_ThrowingAxe_C.ExecuteUbergraph_TBP_Projectile_ThrowingAxe // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

