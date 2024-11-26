#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "CHandle< CBaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< CBaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
class CRopeKeyframe : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07c0[0x8]; // 0x7c0
public:
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x7c8	
private:
	[[maybe_unused]] uint8_t __pad07ca[0x6]; // 0x7ca
public:
	CUtlSymbolLarge m_iNextLinkName; // 0x7d0	
	// MNetworkEnable
	int16_t m_Slack; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07da[0x2]; // 0x7da
public:
	// MNetworkEnable
	float m_Width; // 0x7dc	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x7e0	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x7e4	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x7e5	
private:
	[[maybe_unused]] uint8_t __pad07e6[0x2]; // 0x7e6
public:
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x7e8	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x7f0	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x7f8	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x7f9	
	// MNetworkEnable
	int16_t m_RopeLength; // 0x7fa	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x7fc	
	bool m_bCreatedFromMapFile; // 0x7fd	
private:
	[[maybe_unused]] uint8_t __pad07fe[0x2]; // 0x7fe
public:
	// MNetworkEnable
	float m_flScrollSpeed; // 0x800	
	bool m_bStartPointValid; // 0x804	
	bool m_bEndPointValid; // 0x805	
private:
	[[maybe_unused]] uint8_t __pad0806[0x2]; // 0x806
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x808	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x80c	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x810	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x811	
	
	// Datamap fields:
	// float InputSetScrollSpeed; // 0x0
	// Vector InputSetForce; // 0x0
	// void InputBreak; // 0x0
	// int32_t Breakable; // 0x7fffffff
	// int32_t Collide; // 0x7fffffff
	// int32_t Barbed; // 0x7fffffff
	// int32_t UseWind; // 0x7fffffff
	// int32_t Dangling; // 0x7fffffff
	// int32_t Type; // 0x7fffffff
	// int32_t RopeShader; // 0x7fffffff
	// CUtlString RopeMaterial; // 0x7fffffff
};

