#pragma once

#include <cstdint>

struct HSequence;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x28
// Has VTable
// Has Trivial Destructor
// 
// MNetworkVarNames "HSequence m_hSequence"
// MNetworkVarNames "float32 m_flPrevCycle"
// MNetworkVarNames "float32 m_flCycle"
class CNetworkedSequenceOperation
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkChangeCallback "sequenceOpSequenceChanged"
	// MNetworkPriority "32"
	HSequence m_hSequence; // 0x8	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flPrevCycle; // 0xc	
	// MNetworkEnable
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "8"
	// MNetworkPriority "32"
	// MNetworkSendProxyRecipientsFilter
	// MNetworkUserGroup "m_flCycle"
	float m_flCycle; // 0x10	
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1.000000"
	// MNetworkEncodeFlags "0"
	CNetworkedQuantizedFloat m_flWeight; // 0x14	
	bool m_bSequenceChangeNetworked; // 0x1c	
	bool m_bDiscontinuity; // 0x1d	
private:
	[[maybe_unused]] uint8_t __pad001e[0x2]; // 0x1e
public:
	float m_flPrevCycleFromDiscontinuity; // 0x20	
	float m_flPrevCycleForAnimEventDetection; // 0x24	
	
	// Datamap fields:
	// CUtlString sequenceName; // 0x7fffffff
	// int32_t sequence; // 0x7fffffff
};

