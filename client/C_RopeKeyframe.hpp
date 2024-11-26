#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nMinCPULevel"
// MNetworkIncludeByName "m_nMaxCPULevel"
// MNetworkIncludeByName "m_nMinGPULevel"
// MNetworkIncludeByName "m_nMaxGPULevel"
// MNetworkVarNames "float32 m_flScrollSpeed"
// MNetworkVarNames "uint16 m_RopeFlags"
// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
// MNetworkVarNames "uint8 m_nSegments"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
// MNetworkVarNames "uint8 m_Subdiv"
// MNetworkVarNames "int16 m_RopeLength"
// MNetworkVarNames "int16 m_Slack"
// MNetworkVarNames "float32 m_TextureScale"
// MNetworkVarNames "uint8 m_fLockedPoints"
// MNetworkVarNames "uint8 m_nChangeCount"
// MNetworkVarNames "float32 m_Width"
// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
class C_RopeKeyframe : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0860[0x8]; // 0x860
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x868	
	int32_t m_nLinksTouchingSomething; // 0x86c	
	bool m_bApplyWind; // 0x870	
private:
	[[maybe_unused]] uint8_t __pad0871[0x3]; // 0x871
public:
	int32_t m_fPrevLockedPoints; // 0x874	
	int32_t m_iForcePointMoveCounter; // 0x878	
	bool m_bPrevEndPointPos[2]; // 0x87c	
private:
	[[maybe_unused]] uint8_t __pad087e[0x2]; // 0x87e
public:
	Vector m_vPrevEndPointPos[2]; // 0x880	
	float m_flCurScroll; // 0x898	
	// MNetworkEnable
	float m_flScrollSpeed; // 0x89c	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08a2[0x6]; // 0x8a2
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08b0[0x270]; // 0x8b0
public:
	Vector m_LightValues[10]; // 0xb20	
	// MNetworkEnable
	uint8_t m_nSegments; // 0xb98	
private:
	[[maybe_unused]] uint8_t __pad0b99[0x3]; // 0xb99
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xb9c	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xba0	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0xba4	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0xba5	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0xba6	
private:
	[[maybe_unused]] uint8_t __pad0ba7[0x1]; // 0xba7
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xba8	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xbaa	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0xbac	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0xbb0	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0xbb1	
private:
	[[maybe_unused]] uint8_t __pad0bb2[0x2]; // 0xbb2
public:
	// MNetworkEnable
	float m_Width; // 0xbb4	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xbb8	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xbc8	
	int32_t m_TextureHeight; // 0xbd0	
	Vector m_vecImpulse; // 0xbd4	
	Vector m_vecPreviousImpulse; // 0xbe0	
	float m_flCurrentGustTimer; // 0xbec	
	float m_flCurrentGustLifetime; // 0xbf0	
	float m_flTimeToNextGust; // 0xbf4	
	Vector m_vWindDir; // 0xbf8	
	Vector m_vColorMod; // 0xc04	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0xc10	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xc28	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xc40	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

