#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct HeroID_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf20
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
class C_PortraitWorldUnit : public C_BaseCombatCharacter
{
public:
	bool m_bSuppressIntroEffects; // 0xd18	
	bool m_bIsAlternateLoadout; // 0xd19	
	bool m_bSpawnBackgroundModels; // 0xd1a	
	bool m_bDeferredPortrait; // 0xd1b	
	bool m_bShowParticleAssetModifiers; // 0xd1c	
	bool m_bIgnorePortraitInfo; // 0xd1d	
	bool m_bFlyingCourier; // 0xd1e	
private:
	[[maybe_unused]] uint8_t __pad0d1f[0x1]; // 0xd1f
public:
	int32_t m_nEffigyStatusEffect; // 0xd20	
private:
	[[maybe_unused]] uint8_t __pad0d24[0x4]; // 0xd24
public:
	CUtlSymbolLarge m_effigySequenceName; // 0xd28	
	CUtlSymbolLarge m_BodyGroup; // 0xd30	
	float m_flStartingAnimationCycle; // 0xd38	
	float m_flRareLoadoutAnimChance; // 0xd3c	
private:
	[[maybe_unused]] uint8_t __pad0d40[0x10]; // 0xd40
public:
	CitadelPortraitEnvironmentType_t m_environment; // 0xd50	
	StartupBehavior_t m_nStartupBehavior; // 0xd54	
private:
	[[maybe_unused]] uint8_t __pad0d58[0x170]; // 0xd58
public:
	CUtlSymbolLarge m_cameraName; // 0xec8	
private:
	[[maybe_unused]] uint8_t __pad0ed0[0x30]; // 0xed0
public:
	ParticleIndex_t m_nPortraitParticle; // 0xf00	
	ParticleIndex_t m_nAmbientParticle; // 0xf04	
	int32_t m_nCourierType; // 0xf08	
	HeroID_t m_heroID; // 0xf0c	
	CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf10	
	CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf18	
	
	// Datamap fields:
	// uint32_t heroid; // 0x7fffffff
	// bool skip_pet_spawn; // 0x7fffffff
	// int32_t model_index; // 0x7fffffff
	// bool StartDisabled; // 0x7fffffff
};

