#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5d8
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
// MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
// MNetworkVarNames "float m_flMomentumModifier"
// MNetworkVarNames "float m_flSnapValue"
// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
// MNetworkVarNames "float m_flInputOffset"
class C_PointValueRemapper : public C_BaseEntity
{
public:
	// MNetworkEnable
	bool m_bDisabled; // 0x560	
	bool m_bDisabledOld; // 0x561	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x562	
private:
	[[maybe_unused]] uint8_t __pad0563[0x1]; // 0x563
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x564	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x568	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x56c	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x570	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x574	
	// MNetworkEnable
	float m_flEngageDistance; // 0x578	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x57c	
private:
	[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x580	
private:
	[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x588	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x5a0	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x5a4	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x5a8	
	// MNetworkEnable
	float m_flSnapValue; // 0x5ac	
	float m_flCurrentMomentum; // 0x5b0	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x5b4	
	float m_flRatchetOffset; // 0x5b8	
	// MNetworkEnable
	float m_flInputOffset; // 0x5bc	
	bool m_bEngaged; // 0x5c0	
	bool m_bFirstUpdate; // 0x5c1	
private:
	[[maybe_unused]] uint8_t __pad05c2[0x2]; // 0x5c2
public:
	float m_flPreviousValue; // 0x5c4	
	GameTime_t m_flPreviousUpdateTickTime; // 0x5c8	
	Vector m_vecPreviousTestPoint; // 0x5cc	
};

