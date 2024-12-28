#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
class CFuncElectrifiedVolume : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x7d8	
	CUtlSymbolLarge m_EffectInterpenetrateName; // 0x7e0	
	CUtlSymbolLarge m_EffectZapName; // 0x7e8	
	CUtlSymbolLarge m_iszEffectSource; // 0x7f0	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};

