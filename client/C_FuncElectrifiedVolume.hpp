#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
// MNetworkVarNames "bool m_bState"
class C_FuncElectrifiedVolume : public C_FuncBrush
{
public:
	ParticleIndex_t m_nAmbientEffect; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad085c[0x4]; // 0x85c
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x860	
	// MNetworkEnable
	bool m_bState; // 0x868	
};

