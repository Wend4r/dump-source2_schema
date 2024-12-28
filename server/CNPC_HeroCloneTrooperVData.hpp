#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x10f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CNPC_HeroCloneTrooperVData : public CAI_CitadelNPCVData
{
public:
	bool m_bMeleeOnly; // 0x10e8	
	bool m_bChargeForward; // 0x10e9	
private:
	[[maybe_unused]] uint8_t __pad10ea[0x2]; // 0x10ea
public:
	float m_flMeleeChargeRange; // 0x10ec	
	bool m_bCloneOwnerWeapon; // 0x10f0	
};

