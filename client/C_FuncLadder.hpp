#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b0
// Has VTable
// 
// MNetworkVarNames "Vector m_vecLadderDir"
// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
// MNetworkVarNames "float m_flAutoRideSpeed"
// MNetworkVarNames "bool m_bFakeLadder"
class C_FuncLadder : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecLadderDir; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad0864[0x4]; // 0x864
public:
	CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // 0x868	
	Vector m_vecLocalTop; // 0x880	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionTop; // 0x88c	
	// MNetworkEnable
	// MNetworkEncoder "coord"
	Vector m_vecPlayerMountPositionBottom; // 0x898	
	// MNetworkEnable
	float m_flAutoRideSpeed; // 0x8a4	
	bool m_bDisabled; // 0x8a8	
	// MNetworkEnable
	bool m_bFakeLadder; // 0x8a9	
	bool m_bHasSlack; // 0x8aa	
	
	// Static fields:
	static CUtlVector< C_FuncLadder* > &Get_s_Ladders(){return *reinterpret_cast<CUtlVector< C_FuncLadder* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->m_static_fields[0]->m_instance);};
};

