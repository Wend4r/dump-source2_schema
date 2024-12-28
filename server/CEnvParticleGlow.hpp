#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd48
// Has VTable
// 
// MNetworkVarNames "float32 m_flAlphaScale"
// MNetworkVarNames "float32 m_flRadiusScale"
// MNetworkVarNames "float32 m_flSelfIllumScale"
// MNetworkVarNames "Color m_ColorTint"
// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
class CEnvParticleGlow : public CParticleSystem
{
public:
	// MNetworkEnable
	float m_flAlphaScale; // 0xd30	
	// MNetworkEnable
	float m_flRadiusScale; // 0xd34	
	// MNetworkEnable
	float m_flSelfIllumScale; // 0xd38	
	// MNetworkEnable
	Color m_ColorTint; // 0xd3c	
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTextureOverride; // 0xd40	
	
	// Datamap fields:
	// float InputSetScale; // 0x0
	// float InputSetAlphaScale; // 0x0
	// Color InputSetColorTint; // 0x0
};

