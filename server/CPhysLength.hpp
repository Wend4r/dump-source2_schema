#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x598
// Has VTable
class CPhysLength : public CPhysConstraint
{
public:
	Vector m_offset[2]; // 0x560	
	Vector m_vecAttach; // 0x578	
	float m_addLength; // 0x584	
	float m_minLength; // 0x588	
	float m_totalLength; // 0x58c	
	bool m_bEnableCollision; // 0x590	
};

