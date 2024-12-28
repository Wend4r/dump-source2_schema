#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcc0
// Has VTable
class CCitadel_Ability_Teleport : public C_CitadelBaseAbility
{
public:
	bool m_bTeleportingToTarget; // 0xc98	
private:
	[[maybe_unused]] uint8_t __pad0c99[0x3]; // 0xc99
public:
	Vector m_vTargetPosition; // 0xc9c	
	QAngle m_vTargetAngles; // 0xca8	
};

