#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x890
// Has VTable
// 
// MNetworkVarNames "bool m_bLoop"
// MNetworkVarNames "float m_flFPS"
// MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
// MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
// MNetworkVarNames "Vector m_vAnimationBoundsMin"
// MNetworkVarNames "Vector m_vAnimationBoundsMax"
// MNetworkVarNames "float m_flStartTime"
// MNetworkVarNames "float m_flStartFrame"
class C_TextureBasedAnimatable : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	bool m_bLoop; // 0x858	
private:
	[[maybe_unused]] uint8_t __pad0859[0x3]; // 0x859
public:
	// MNetworkEnable
	float m_flFPS; // 0x85c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // 0x860	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // 0x868	
	// MNetworkEnable
	Vector m_vAnimationBoundsMin; // 0x870	
	// MNetworkEnable
	Vector m_vAnimationBoundsMax; // 0x87c	
	// MNetworkEnable
	float m_flStartTime; // 0x888	
	// MNetworkEnable
	float m_flStartFrame; // 0x88c	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

