#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x760
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadel_Modifier_BaseBulletPreRollProcVData : public CCitadel_Modifier_BaseEventProcVData
{
public:
	// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
	bool m_bRollOnceForAllBulletsInAShot; // 0x660	
private:
	[[maybe_unused]] uint8_t __pad0661[0x3]; // 0x661
public:
	// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
	float m_flMaxBulletsToProcInShot; // 0x664	
	// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
	bool m_bCanProcMultipleTimesFromSameShot; // 0x668	
	// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
	bool m_bRequiresTargetFilter; // 0x669	
	// MPropertyDescription "When false, Proc'd bullets cannot be evaded"
	bool m_bCanBeEvaded; // 0x66a	
private:
	[[maybe_unused]] uint8_t __pad066b[0x5]; // 0x66b
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // 0x670	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
	CSoundEventName m_OnBulletRolledProcSound; // 0x750	
};

