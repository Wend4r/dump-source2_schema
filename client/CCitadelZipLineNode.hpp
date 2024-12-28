#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8c8
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
class CCitadelZipLineNode : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0858[0x40]; // 0x858
public:
	// MNetworkEnable
	// MNetworkChangeCallback "connectionsChanged"
	C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // 0x898	
	// MNetworkEnable
	int16_t m_eCaptureState; // 0x8b0	
	// MNetworkEnable
	int16_t m_iPrimaryLane; // 0x8b2	
	// MNetworkEnable
	int16_t m_nRopesParity; // 0x8b4	
	// MNetworkEnable
	bool m_bCornerNode; // 0x8b6	
	// MNetworkEnable
	bool m_bCapturable; // 0x8b7	
	// MNetworkEnable
	bool m_bAlwaysUsable; // 0x8b8	
	// MNetworkEnable
	bool m_bOneWay; // 0x8b9	
	// MNetworkEnable
	bool m_bDisableZippingToByPlayers; // 0x8ba	
	// MNetworkEnable
	bool m_bUseForMinimapDrawing; // 0x8bb	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hGuardingBoss; // 0x8bc	
	// MNetworkEnable
	float m_flRopeRadius; // 0x8c0	
	// MNetworkEnable
	bool m_bEnabled; // 0x8c4	
};

