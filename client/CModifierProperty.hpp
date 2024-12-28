#pragma once

#include <cstdint>

struct CNetworkVarChainer;
struct ModifierPropRuntimeHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x248
// Has VTable
// 
// MNetworkVarNames "EHANDLE m_vecProviders"
// MNetworkVarNames "uint32 m_nDisabledGroups"
// MNetworkVarNames "uint32 m_bvEnabledStateMask"
// MNetworkVarNames "uint32 m_bvDisabledStateMask"
// MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
class CModifierProperty
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	CNetworkVarChainer __m_pChainEntity; // 0x8	
	CHandle< C_BaseEntity > m_hOwner; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x169]; // 0x34
public:
	uint8_t m_nProviderVisitedFlags; // 0x19d	
	bool m_bModifierStatesDirty; // 0x19e	
	bool m_bPredictedOwner; // 0x19f	
	int8_t m_iLockRefCount; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01a1[0x1]; // 0x1a1
public:
	ModifierPropRuntimeHandle_t m_hHandle; // 0x1a2	
	uint32_t m_nBroadcastEventListenerMask; // 0x1a4	
private:
	[[maybe_unused]] uint8_t __pad01a8[0x8]; // 0x1a8
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_vecProviders; // 0x1b0	
	// MNetworkEnable
	uint32_t m_nDisabledGroups; // 0x1c8	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledStateMask[6]; // 0x1cc	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvDisabledStateMask[6]; // 0x1e4	
	// MNetworkEnable
	// MNetworkChangeCallback "modifierStatesChanged"
	uint32_t m_bvEnabledPredictedStateMask[6]; // 0x1fc	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1a8
	// void m_vecModifiers; // 0x38
};

