#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x860
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
	[[maybe_unused]] uint8_t __pad07b8[0x10]; // 0x7b8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07e0[0x34]; // 0x7e0
public:
	Vector m_vTangentIn; // 0x814	
	Vector m_vTangentOut; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad082c[0x4]; // 0x82c
public:
	CUtlSymbolLarge m_strGuardBossName; // 0x830	
	CUtlSymbolLarge m_strGuardBossName2; // 0x838	
	CUtlSymbolLarge m_strGuardBossName3; // 0x840	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x848	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x84a	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x84c	
	// MNetworkEnable
	bool m_bCornerNode; // 0x84e	
	// MNetworkEnable
	bool m_bCapturable; // 0x84f	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x850	
	// MNetworkEnable
	bool m_bOneWay; // 0x851	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x852	
	// MNetworkEnable
	bool m_bUseForMinimapDrawing; // 0x853	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hGuardingBoss; // 0x854	
	// MNetworkEnable
	float m_flRopeRadius; // 0x858	
	// MNetworkEnable
	bool m_bEnabled; // 0x85c	
};

