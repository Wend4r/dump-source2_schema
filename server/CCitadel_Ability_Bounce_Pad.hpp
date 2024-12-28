#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public CCitadelBaseAbility
{
public:
	Vector m_vForward; // 0xaf8	
	bool m_bShouldDeploy; // 0xb04	
	bool m_bAnglesSet; // 0xb05	
	bool m_bCanCancel; // 0xb06	
private:
	[[maybe_unused]] uint8_t __pad0b07[0x119]; // 0xb07
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xc20	
};

