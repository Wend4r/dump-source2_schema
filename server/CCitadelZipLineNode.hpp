#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
// 
// MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
// MNetworkVarNames "int16 m_eCaptureState"
// MNetworkVarNames "int16 m_iPrimaryLane"
// MNetworkVarNames "int16 m_nRopesParity"
// MNetworkVarNames "bool m_bCornerNode"
// MNetworkVarNames "bool m_bCapturable"
// MNetworkVarNames "bool m_bAlwaysUsable"
// MNetworkVarNames "bool m_bOneWay"
// MNetworkVarNames "bool m_bDisableZippingToByPlayers"
// MNetworkVarNames "bool m_bUseForMinimapDrawing"
// MNetworkVarNames "EHANDLE m_hGuardingBoss"
// MNetworkVarNames "float m_flRopeRadius"
// MNetworkVarNames "bool m_bEnabled"
class CCitadelZipLineNode : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07c0[0x10]; // 0x7c0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07e8[0x34]; // 0x7e8
public:
	Vector m_vTangentIn; // 0x81c	
	Vector m_vTangentOut; // 0x828	
private:
	[[maybe_unused]] uint8_t __pad0834[0x4]; // 0x834
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x838	
	CUtlSymbolLarge m_strGuardBossName2; // 0x840	
	CUtlSymbolLarge m_strGuardBossName3; // 0x848	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x850	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x852	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x854	
	// MNetworkEnable
	bool m_bCornerNode; // 0x856	
	// MNetworkEnable
	bool m_bCapturable; // 0x857	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x858	
	// MNetworkEnable
	bool m_bOneWay; // 0x859	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x85a	
	// MNetworkEnable
	bool m_bUseForMinimapDrawing; // 0x85b	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGuardingBoss; // 0x85c	
	// MNetworkEnable
	float m_flRopeRadius; // 0x860	
	// MNetworkEnable
	bool m_bEnabled; // 0x864	
};

