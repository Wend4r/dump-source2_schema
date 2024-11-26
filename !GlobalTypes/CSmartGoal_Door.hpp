#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x50
// Has VTable
class CSmartGoal_Door : public INavSmartGoal
{
public:
	CHandle< CBaseEntity > m_hDoor; // 0x10	
	CHandle< CBaseEntity > m_hPathCornerGoalPostDoor; // 0x14	
	CModifierHandleTyped< CCitadelModifier > m_hModifierInteractionIKLock; // 0x18	
	Vector m_vGoalPostDoor; // 0x30	
	MoveType_t m_PrevMoveType; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	float m_flDoorSpeed; // 0x40	
	bool m_bUseAnimatedInteraction; // 0x44	
	bool m_bOpenAway; // 0x45	
private:
	[[maybe_unused]] uint8_t __pad0046[0x2]; // 0x46
public:
	int32_t m_nState; // 0x48	
	bool m_bInterrupted; // 0x4c	
};

