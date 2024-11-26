#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x590
// Has VTable
class CPhysPulley : public CPhysConstraint
{
public:
	Vector m_position2; // 0x560	
	Vector m_offset[2]; // 0x56c	
	float m_addLength; // 0x584	
	float m_gearRatio; // 0x588	
};

