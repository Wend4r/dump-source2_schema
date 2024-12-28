#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1808
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_TrooperBossVData : public CAI_NPC_TrooperVData
{
public:
	bool m_bMitigateDamageFromPlayers; // 0x17c8	
private:
	[[maybe_unused]] uint8_t __pad17c9[0x3]; // 0x17c9
public:
	float m_flPlayerAutoAttackRange; // 0x17cc	
	float m_flMinMeleeAttackTime; // 0x17d0	
	float m_flInvulRange; // 0x17d4	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sAngryStart; // 0x17d8	
	CSoundEventName m_sAngryLoop; // 0x17e8	
	CSoundEventName m_sAngryStop; // 0x17f8	
};

