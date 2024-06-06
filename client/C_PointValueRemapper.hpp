#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5c0
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
	bool m_bDisabled; // 0x548	
	bool m_bDisabledOld; // 0x549	
	// MNetworkEnable
	bool m_bUpdateOnClient; // 0x54a	
private:
	[[maybe_unused]] uint8_t __pad054b[0x1]; // 0x54b
public:
	// MNetworkEnable
	ValueRemapperInputType_t m_nInputType; // 0x54c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineStart; // 0x550	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hRemapLineEnd; // 0x554	
	// MNetworkEnable
	float m_flMaximumChangePerSecond; // 0x558	
	// MNetworkEnable
	float m_flDisengageDistance; // 0x55c	
	// MNetworkEnable
	float m_flEngageDistance; // 0x560	
	// MNetworkEnable
	bool m_bRequiresUseKey; // 0x564	
private:
	[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
public:
	// MNetworkEnable
	ValueRemapperOutputType_t m_nOutputType; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x4]; // 0x56c
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hOutputEntities; // 0x570	
	// MNetworkEnable
	ValueRemapperHapticsType_t m_nHapticsType; // 0x588	
	// MNetworkEnable
	ValueRemapperMomentumType_t m_nMomentumType; // 0x58c	
	// MNetworkEnable
	float m_flMomentumModifier; // 0x590	
	// MNetworkEnable
	float m_flSnapValue; // 0x594	
	float m_flCurrentMomentum; // 0x598	
	// MNetworkEnable
	ValueRemapperRatchetType_t m_nRatchetType; // 0x59c	
	float m_flRatchetOffset; // 0x5a0	
	// MNetworkEnable
	float m_flInputOffset; // 0x5a4	
	bool m_bEngaged; // 0x5a8	
	bool m_bFirstUpdate; // 0x5a9	
private:
	[[maybe_unused]] uint8_t __pad05aa[0x2]; // 0x5aa
public:
	float m_flPreviousValue; // 0x5ac	
	GameTime_t m_flPreviousUpdateTickTime; // 0x5b0	
	Vector m_vecPreviousTestPoint; // 0x5b4	
};
