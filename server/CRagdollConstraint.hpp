#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x588
// Has VTable
class CRagdollConstraint : public CPhysConstraint
{
public:
	float m_xmin; // 0x560	
	float m_xmax; // 0x564	
	float m_ymin; // 0x568	
	float m_ymax; // 0x56c	
	float m_zmin; // 0x570	
	float m_zmax; // 0x574	
	float m_xfriction; // 0x578	
	float m_yfriction; // 0x57c	
	float m_zfriction; // 0x580	
};

