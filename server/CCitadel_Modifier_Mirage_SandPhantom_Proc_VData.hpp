#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x930
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertySuppressBaseClassField
class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public CCitadelModifierVData
{
public:
	// MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
	bool m_bRollOnceForAllBulletsInAShot; // 0x630	
private:
	[[maybe_unused]] uint8_t __pad0631[0x3]; // 0x631
public:
	// MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
	float m_flMaxBulletsToProcInShot; // 0x634	
	// MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
	bool m_bCanProcMultipleTimesFromSameShot; // 0x638	
	// MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
	bool m_bRequiresTargetFilter; // 0x639	
private:
	[[maybe_unused]] uint8_t __pad063a[0x6]; // 0x63a
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ProcReadyModifier; // 0x640	
	CEmbeddedSubclass< CCitadelModifier > m_PassiveVictimModifier; // 0x650	
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcReadyParticle; // 0x660	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerAdditionParticle; // 0x740	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // 0x820	
	// MPropertyStartGroup "Sounds"
	// MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
	CSoundEventName m_OnBulletRolledProcSound; // 0x900	
	CSoundEventName m_ProcSound; // 0x910	
	CSoundEventName m_ExplodeSound; // 0x920	
};

