#pragma once

#include <cstdint>

struct CNetworkVarChainer;
struct ModifierPropRuntimeHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
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
	CHandle< CBaseEntity > m_hOwner; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x167]; // 0x34
public:
	uint8_t m_nProviderVisitedFlags; // 0x19b	
	bool m_bModifierStatesDirty; // 0x19c	
	bool m_bPredictedOwner; // 0x19d	
	int8_t m_iLockRefCount; // 0x19e	
private:
	[[maybe_unused]] uint8_t __pad019f[0x1]; // 0x19f
public:
	ModifierPropRuntimeHandle_t m_hHandle; // 0x1a0	
private:
	[[maybe_unused]] uint8_t __pad01a2[0x2]; // 0x1a2
public:
	uint32_t m_nBroadcastEventListenerMask; // 0x1a4	
private:
	[[maybe_unused]] uint8_t __pad01a8[0x8]; // 0x1a8
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_vecProviders; // 0x1b0	
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
private:
	[[maybe_unused]] uint8_t __pad0214[0xc]; // 0x214
public:
	bool m_bParentWantsModifierStateChangeCallback; // 0x220	
	
	// Datamap fields:
	// void m_pNotifyOwnerEvents; // 0x1a8
	// void m_vecModifiers; // 0x38
};

