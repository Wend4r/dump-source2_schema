#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd0
// Has VTable
// 
// MNetworkVarNames "QAngle m_angFacing"
class CCitadel_Ability_Bounce_Pad : public C_CitadelBaseAbility
{
public:
	Vector m_vForward; // 0xc98	
	bool m_bShouldDeploy; // 0xca4	
	bool m_bAnglesSet; // 0xca5	
	bool m_bCanCancel; // 0xca6	
private:
	[[maybe_unused]] uint8_t __pad0ca7[0x119]; // 0xca7
public:
	// MNetworkEnable
	QAngle m_angFacing; // 0xdc0	
};

