#pragma once

#include <cstdint>

// Registered binary: vphysics2.dll (project 'physicslib')
// Alignment: 16
// Size: 0x50
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct FeSimdSpringIntegrator_t
{
public:
	uint16_t nNode[2][4]; // 0x0	
	fltx4 flSpringRestLength; // 0x10	
	fltx4 flSpringConstant; // 0x20	
	fltx4 flSpringDamping; // 0x30	
	fltx4 flNodeWeight0; // 0x40	
};

