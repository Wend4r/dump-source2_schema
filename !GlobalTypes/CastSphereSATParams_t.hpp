#pragma once

#include <cstdint>

struct RnHull_t;
// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 8
// Size: 0x30
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct CastSphereSATParams_t
{
public:
	Vector m_vRayStart; // 0x0	
	Vector m_vRayDelta; // 0xc	
	float m_flRadius; // 0x18	
	float m_flMaxFraction; // 0x1c	
	float m_flScale; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
public:
	RnHull_t* m_pHull; // 0x28	
};

