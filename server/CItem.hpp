#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb18
// Has VTable
class CItem : public CBaseAnimGraph
{
private:
	[[maybe_unused]] uint8_t __pad0a40[0x8]; // 0xa40
public:
	CEntityIOOutput m_OnPlayerTouch; // 0xa48	
	CEntityIOOutput m_OnPlayerPickup; // 0xa70	
	bool m_bActivateWhenAtRest; // 0xa98	
private:
	[[maybe_unused]] uint8_t __pad0a99[0x7]; // 0xa99
public:
	CEntityIOOutput m_OnCacheInteraction; // 0xaa0	
	CEntityIOOutput m_OnGlovePulled; // 0xac8	
	Vector m_vOriginalSpawnOrigin; // 0xaf0	
	QAngle m_vOriginalSpawnAngles; // 0xafc	
	bool m_bPhysStartAsleep; // 0xb08	
	
	// Datamap fields:
	// void CItemItemTouch; // 0x0
	// void CItemMaterialize; // 0x0
	// void CItemComeToRest; // 0x0
};

