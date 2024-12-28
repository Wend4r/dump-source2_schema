#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x810
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
	[[maybe_unused]] uint8_t __pad07b8[0x8]; // 0x7b8
public:
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c2[0x6]; // 0x7c2
public:
	CUtlSymbolLarge m_iNextLinkName; // 0x7c8	
	// MNetworkEnable
	int16_t m_Slack; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d2[0x2]; // 0x7d2
public:
	// MNetworkEnable
	float m_Width; // 0x7d4	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0x7d8	
	// MNetworkEnable
	uint8_t m_nSegments; // 0x7dc	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0x7dd	
private:
	[[maybe_unused]] uint8_t __pad07de[0x2]; // 0x7de
public:
	CUtlSymbolLarge m_strRopeMaterialModel; // 0x7e0	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x7e8	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0x7f0	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0x7f1	
	// MNetworkEnable
	int16_t m_RopeLength; // 0x7f2	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0x7f4	
	bool m_bCreatedFromMapFile; // 0x7f5	
private:
	[[maybe_unused]] uint8_t __pad07f6[0x2]; // 0x7f6
public:
	// MNetworkEnable
	float m_flScrollSpeed; // 0x7f8	
	bool m_bStartPointValid; // 0x7fc	
	bool m_bEndPointValid; // 0x7fd	
private:
	[[maybe_unused]] uint8_t __pad07fe[0x2]; // 0x7fe
public:
	// MNetworkEnable
	CHandle< CBaseEntity > m_hStartPoint; // 0x800	
	// MNetworkEnable
	CHandle< CBaseEntity > m_hEndPoint; // 0x804	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0x808	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0x809	
	
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

