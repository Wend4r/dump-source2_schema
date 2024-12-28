#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb10
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a38[0x8]; // 0xa38
public:
	CEntityIOOutput m_OnPlayerTouch; // 0xa40	
	CEntityIOOutput m_OnPlayerPickup; // 0xa68	
	bool m_bActivateWhenAtRest; // 0xa90	
private:
	[[maybe_unused]] uint8_t __pad0a91[0x7]; // 0xa91
public:
	CEntityIOOutput m_OnCacheInteraction; // 0xa98	
	CEntityIOOutput m_OnGlovePulled; // 0xac0	
	Vector m_vOriginalSpawnOrigin; // 0xae8	
	QAngle m_vOriginalSpawnAngles; // 0xaf4	
	bool m_bPhysStartAsleep; // 0xb00	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

