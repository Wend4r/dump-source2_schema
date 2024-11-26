#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x6e0
// Has VTable
// 
// MNetworkVarNames "bool m_bDisabled"
// MNetworkVarNames "bool m_bUpdateOnClient"
// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
// MNetworkVarNames "float m_flMaximumChangePerSecond"
// MNetworkVarNames "float m_flDisengageDistance"
// MNetworkVarNames "float m_flEngageDistance"
// MNetworkVarNames "bool m_bRequiresUseKey"
// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
// MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class CPointValueRemapper : public CBaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x4e8	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x4e9	
private:
	[[maybe_unused]] uint8_t __pad04ea[0x2]; // 0x4ea
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x4ec	
	CUtlSymbolLarge m_iszRemapLineStartName; // 0x4f0	
	CUtlSymbolLarge m_iszRemapLineEndName; // 0x4f8	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineStart; // 0x500	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hRemapLineEnd; // 0x504	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x508	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x50c	
	// MNetworkEnable
	float m_flEngageDistance; // 0x510	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x514	
private:
	[[maybe_unused]] uint8_t __pad0515[0x3]; // 0x515
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x518	
private:
	[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
public:
	CUtlSymbolLarge m_iszOutputEntityName; // 0x520	
	CUtlSymbolLarge m_iszOutputEntity2Name; // 0x528	
	CUtlSymbolLarge m_iszOutputEntity3Name; // 0x530	
	CUtlSymbolLarge m_iszOutputEntity4Name; // 0x538	
	// MNetworkEnable
	CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hOutputEntities; // 0x540	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x558	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x55c	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x560	
	// MNetworkEnable
	float m_flSnapValue; // 0x564	
	float m_flCurrentMomentum; // 0x568	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x56c	
	float m_flRatchetOffset; // 0x570	
	// MNetworkEnable
	float m_flInputOffset; // 0x574	
	bool m_bEngaged; // 0x578	
	bool m_bFirstUpdate; // 0x579	
private:
	[[maybe_unused]] uint8_t __pad057a[0x2]; // 0x57a
public:
	float m_flPreviousValue; // 0x57c	
	GameTime_t m_flPreviousUpdateTickTime; // 0x580	
	Vector m_vecPreviousTestPoint; // 0x584	
	CHandle< CBasePlayerPawn > m_hUsingPlayer; // 0x590	
	float m_flCustomOutputValue; // 0x594	
	CUtlSymbolLarge m_iszSoundEngage; // 0x598	
	CUtlSymbolLarge m_iszSoundDisengage; // 0x5a0	
	CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x5a8	
	CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x5b0	
	CUtlSymbolLarge m_iszSoundMovingLoop; // 0x5b8	
private:
	[[maybe_unused]] uint8_t __pad05c0[0x8]; // 0x5c0
public:
	CEntityOutputTemplate< float32 > m_Position; // 0x5c8	
	CEntityOutputTemplate< float32 > m_PositionDelta; // 0x5f0	
	CEntityIOOutput m_OnReachedValueZero; // 0x618	
	CEntityIOOutput m_OnReachedValueOne; // 0x640	
	CEntityIOOutput m_OnReachedValueCustom; // 0x668	
	CEntityIOOutput m_OnEngage; // 0x690	
	CEntityIOOutput m_OnDisengage; // 0x6b8	
	
	// Datamap fields:
	// void CPointValueRemapperUpdateThink; // 0x0
};

