#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x828
// Has VTable
class CLogicNPCCounter : public CBaseEntity
{
public:
	CEntityIOOutput m_OnMinCountAll; // 0x4e8	
	CEntityIOOutput m_OnMaxCountAll; // 0x510	
	CEntityOutputTemplate< float32 > m_OnFactorAll; // 0x538	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDistAll; // 0x560	
	CEntityIOOutput m_OnMinCount_1; // 0x588	
	CEntityIOOutput m_OnMaxCount_1; // 0x5b0	
	CEntityOutputTemplate< float32 > m_OnFactor_1; // 0x5d8	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_1; // 0x600	
	CEntityIOOutput m_OnMinCount_2; // 0x628	
	CEntityIOOutput m_OnMaxCount_2; // 0x650	
	CEntityOutputTemplate< float32 > m_OnFactor_2; // 0x678	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_2; // 0x6a0	
	CEntityIOOutput m_OnMinCount_3; // 0x6c8	
	CEntityIOOutput m_OnMaxCount_3; // 0x6f0	
	CEntityOutputTemplate< float32 > m_OnFactor_3; // 0x718	
	CEntityOutputTemplate< float32 > m_OnMinPlayerDist_3; // 0x740	
	CEntityHandle m_hSource; // 0x768	
private:
	[[maybe_unused]] uint8_t __pad076c[0x4]; // 0x76c
public:
	CUtlSymbolLarge m_iszSourceEntityName; // 0x770	
	float m_flDistanceMax; // 0x778	
	bool m_bDisabled; // 0x77c	
private:
	[[maybe_unused]] uint8_t __pad077d[0x3]; // 0x77d
public:
	int32_t m_nMinCountAll; // 0x780	
	int32_t m_nMaxCountAll; // 0x784	
	int32_t m_nMinFactorAll; // 0x788	
	int32_t m_nMaxFactorAll; // 0x78c	
private:
	[[maybe_unused]] uint8_t __pad0790[0x8]; // 0x790
public:
	CUtlSymbolLarge m_iszNPCClassname_1; // 0x798	
	int32_t m_nNPCState_1; // 0x7a0	
	bool m_bInvertState_1; // 0x7a4	
private:
	[[maybe_unused]] uint8_t __pad07a5[0x3]; // 0x7a5
public:
	int32_t m_nMinCount_1; // 0x7a8	
	int32_t m_nMaxCount_1; // 0x7ac	
	int32_t m_nMinFactor_1; // 0x7b0	
	int32_t m_nMaxFactor_1; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad07b8[0x4]; // 0x7b8
public:
	float m_flDefaultDist_1; // 0x7bc	
	CUtlSymbolLarge m_iszNPCClassname_2; // 0x7c0	
	int32_t m_nNPCState_2; // 0x7c8	
	bool m_bInvertState_2; // 0x7cc	
private:
	[[maybe_unused]] uint8_t __pad07cd[0x3]; // 0x7cd
public:
	int32_t m_nMinCount_2; // 0x7d0	
	int32_t m_nMaxCount_2; // 0x7d4	
	int32_t m_nMinFactor_2; // 0x7d8	
	int32_t m_nMaxFactor_2; // 0x7dc	
private:
	[[maybe_unused]] uint8_t __pad07e0[0x4]; // 0x7e0
public:
	float m_flDefaultDist_2; // 0x7e4	
	CUtlSymbolLarge m_iszNPCClassname_3; // 0x7e8	
	int32_t m_nNPCState_3; // 0x7f0	
	bool m_bInvertState_3; // 0x7f4	
private:
	[[maybe_unused]] uint8_t __pad07f5[0x3]; // 0x7f5
public:
	int32_t m_nMinCount_3; // 0x7f8	
	int32_t m_nMaxCount_3; // 0x7fc	
	int32_t m_nMinFactor_3; // 0x800	
	int32_t m_nMaxFactor_3; // 0x804	
private:
	[[maybe_unused]] uint8_t __pad0808[0x4]; // 0x808
public:
	float m_flDefaultDist_3; // 0x80c	
	
	// Datamap fields:
	// CUtlSymbolLarge InputSetSourceEntity; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
	// void CLogicNPCCounterSetNPCCounterThink; // 0x0
};

