#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x768
// Has VTable
// 
// MNetworkVarNames "string_t m_EffectName"
class CFuncElectrifiedVolume : public CFuncBrush
{
public:
	// MNetworkEnable
	CUtlSymbolLarge m_EffectName; // 0x730	
	CUtlSymbolLarge m_EffectInterpenetrateName; // 0x738	
	CUtlSymbolLarge m_EffectZapName; // 0x740	
	CUtlSymbolLarge m_iszEffectSource; // 0x748	
	
	// Datamap fields:
	// void InputDisable; // 0x0
	// void InputEnable; // 0x0
};
