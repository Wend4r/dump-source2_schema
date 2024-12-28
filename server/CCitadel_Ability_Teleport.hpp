#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
class CCitadel_Ability_Teleport : public CCitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0af9[0x3]; // 0xaf9
public:
	Vector m_vTargetPosition; // 0xafc	
	QAngle m_vTargetAngles; // 0xb08	
};

