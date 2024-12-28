#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct C_RopeKeyframe::CPhysicsDelegate;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc40
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
	[[maybe_unused]] uint8_t __pad0858[0x8]; // 0x858
public:
	CBitVec< 10 > m_LinksTouchingSomething; // 0x860	
	int32_t m_nLinksTouchingSomething; // 0x864	
	bool m_bApplyWind; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad0869[0x3]; // 0x869
public:
	int32_t m_fPrevLockedPoints; // 0x86c	
	int32_t m_iForcePointMoveCounter; // 0x870	
	bool m_bPrevEndPointPos[2]; // 0x874	
private:
	[[maybe_unused]] uint8_t __pad0876[0x2]; // 0x876
public:
	Vector m_vPrevEndPointPos[2]; // 0x878	
	float m_flCurScroll; // 0x890	
	// MNetworkEnable
	float m_flScrollSpeed; // 0x894	
	// MNetworkEnable
	uint16_t m_RopeFlags; // 0x898	
private:
	[[maybe_unused]] uint8_t __pad089a[0x6]; // 0x89a
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08a8[0x270]; // 0x8a8
public:
	Vector m_LightValues[10]; // 0xb18	
	// MNetworkEnable
	uint8_t m_nSegments; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b91[0x3]; // 0xb91
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hStartPoint; // 0xb94	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEndPoint; // 0xb98	
	// MNetworkEnable
	AttachmentHandle_t m_iStartAttachment; // 0xb9c	
	// MNetworkEnable
	AttachmentHandle_t m_iEndAttachment; // 0xb9d	
	// MNetworkEnable
	uint8_t m_Subdiv; // 0xb9e	
private:
	[[maybe_unused]] uint8_t __pad0b9f[0x1]; // 0xb9f
public:
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_RopeLength; // 0xba0	
	// MNetworkEnable
	// MNetworkChangeCallback "RecomputeSprings"
	int16_t m_Slack; // 0xba2	
	// MNetworkEnable
	// MNetworkBitCount "10"
	// MNetworkMinValue "0.100000"
	// MNetworkMaxValue "10.000000"
	float m_TextureScale; // 0xba4	
	// MNetworkEnable
	uint8_t m_fLockedPoints; // 0xba8	
	// MNetworkEnable
	uint8_t m_nChangeCount; // 0xba9	
private:
	[[maybe_unused]] uint8_t __pad0baa[0x2]; // 0xbaa
public:
	// MNetworkEnable
	float m_Width; // 0xbac	
	C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // 0xbb0	
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // 0xbc0	
	int32_t m_TextureHeight; // 0xbc8	
	Vector m_vecImpulse; // 0xbcc	
	Vector m_vecPreviousImpulse; // 0xbd8	
	float m_flCurrentGustTimer; // 0xbe4	
	float m_flCurrentGustLifetime; // 0xbe8	
	float m_flTimeToNextGust; // 0xbec	
	Vector m_vWindDir; // 0xbf0	
	Vector m_vColorMod; // 0xbfc	
	Vector m_vCachedEndPointAttachmentPos[2]; // 0xc08	
	QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xc20	
	// MNetworkEnable
	bool m_bConstrainBetweenEndpoints; // 0xc38	
	struct 
	{
		uint8_t m_bEndPointAttachmentPositionsDirty: 1; 		
		uint8_t m_bEndPointAttachmentAnglesDirty: 1; 		
		uint8_t m_bNewDataThisFrame: 1; 		
		uint8_t m_bPhysicsInitted: 1; 		
		uint8_t __pad0: 4;
	}; // 8 bits
};

