#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f8
// Has VTable
class CRagdollMagnet : public CPointEntity
{
public:
	bool m_bDisabled; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	float m_radius; // 0x4e4	
	float m_force; // 0x4e8	
	Vector m_axis; // 0x4ec	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

