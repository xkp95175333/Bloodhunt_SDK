// BlueprintGeneratedClass BP_DynamicLootSpawner.BP_DynamicLootSpawner_C
// Size: 0x130 (Inherited: 0xb8)
struct UBP_DynamicLootSpawner_C : UTigerBlueprintLootComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	enum class ETigerTelemetryItemSourceID LootItemSource; // 0xc0(0x01)
	bool SimulatePhysics; // 0xc1(0x01)
	bool RandomizeLocations; // 0xc2(0x01)
	char pad_C3[0x1]; // 0xc3(0x01)
	int32_t NumberOfRandomItemsToSpawn; // 0xc4(0x04)
	struct TArray<struct FTransform> LootSpawnLocations; // 0xc8(0x10)
	struct TArray<struct FTransform> RandomizedLocationsResult; // 0xd8(0x10)
	struct FName ComponentTagFilter; // 0xe8(0x08)
	struct TArray<struct AActor*> SpawnedItemActors; // 0xf0(0x10)
	struct TArray<struct FS_ItemWithProbability> ItemProbabilities; // 0x100(0x10)
	float ProbabilitySum; // 0x110(0x04)
	float ProbabilitySubtracted; // 0x114(0x04)
	bool OverrideLootSpawnLocationArray; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct TArray<struct FTransform> OverrideArray; // 0x120(0x10)

	void On Spawn Loot(); // Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.On Spawn Loot // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ReceiveBeginPlay(); // Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x16a87a0
	void BreakLoop(); // Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.BreakLoop // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void Chose Random Amount(); // Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.Chose Random Amount // (BlueprintCallable|BlueprintEvent) // @ game+0x16a87a0
	void ExecuteUbergraph_BP_DynamicLootSpawner(int32_t EntryPoint); // Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ExecuteUbergraph_BP_DynamicLootSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x16a87a0
};

