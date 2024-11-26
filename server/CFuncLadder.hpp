#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x870
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class CFuncLadder : public CBaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07cc[0x4]; // 0x7cc
public:
	CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // 0x7d0	
	Vector m_vecLocalTop; // 0x7e8	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x7f4	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x800	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x80c	
	bool m_bDisabled; // 0x810	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x811	
	bool m_bHasSlack; // 0x812	
private:
	[[maybe_unused]] uint8_t __pad0813[0x5]; // 0x813
public:
	CUtlSymbolLarge m_surfacePropName; // 0x818	
	CEntityIOOutput m_OnPlayerGotOnLadder; // 0x820	
	CEntityIOOutput m_OnPlayerGotOffLadder; // 0x848	
	
	// Static fields:
	static CUtlVector< CFuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< CFuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

