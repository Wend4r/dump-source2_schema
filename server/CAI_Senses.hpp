#pragma once

#include <cstdint>

struct GameTime_t;
struct CSound;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x138
// Has VTable
class CAI_Senses : public CAI_Component
{
public:
	float m_flLookDist; // 0x40	
	float m_flLookDistIdle; // 0x44	
	float m_flLastLookDist; // 0x48	
	GameTime_t m_TimeLastLook; // 0x4c	
	int32_t m_iAudibleList; // 0x50	
private:
	[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
public:
	CUtlVector< CHandle< CBaseEntity > > m_SeenHighPriority; // 0x58	
	CUtlVector< CHandle< CBaseEntity > > m_SeenNPCs; // 0x70	
	CUtlVector< CHandle< CBaseEntity > > m_SeenMisc; // 0x88	
	CUtlVector< CHandle< CBaseEntity > > m_GatheredEntities; // 0xa0	
	CUtlVector< CHandle< CBaseEntity > > m_GatheredProxyEntities; // 0xb8	
	CUtlVector< CHandle< CBaseEntity > >* m_SeenArrays[3]; // 0xd0	
	GameTime_t m_TimeLastLookHighPriority; // 0xe8	
	GameTime_t m_TimeLastLookNPCs; // 0xec	
	GameTime_t m_TimeLastLookMisc; // 0xf0	
	int32_t m_iSensingFlags; // 0xf4	
	CSound m_CachedTaskSound; // 0xf8	
	float m_flHearingSensitivity; // 0x12c	
	int32_t m_nSoundInterests; // 0x130	
	
	// Datamap fields:
	// void m_SeenArrays; // 0xd0
};

