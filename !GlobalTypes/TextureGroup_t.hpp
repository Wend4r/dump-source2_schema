#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
struct TextureControls_t;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xb58
// 
// MGetKV3ClassDefaults
struct TextureGroup_t
{
public:
	// MPropertyFriendlyName "Enabled"
	bool m_bEnabled; // 0x0	
	// MPropertyFriendlyName "Author Texture As Gradient"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C || m_nTextureType == SPRITECARD_TEXTURE_DEPTH )"
	bool m_bReplaceTextureWithGradient; // 0x1	
private:
	[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
public:
	// MPropertyFriendlyName "Texture"
	// MPropertySuppressExpr "m_bReplaceTextureWithGradient"
	// MPropertyAttributeEditor "AssetBrowse( vtex, *showassetpreview )"
	CStrongHandle< InfoForResourceTypeCTextureBase > m_hTexture; // 0x8	
	// MPropertyFriendlyName "Gradient"
	// MPropertySuppressExpr "!m_bReplaceTextureWithGradient"
	CColorGradient m_Gradient; // 0x10	
	// MPropertyFriendlyName "Texture Type"
	SpriteCardTextureType_t m_nTextureType; // 0x28	
	// MPropertyFriendlyName "Channel Mix"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C || m_nTextureType == SPRITECARD_TEXTURE_DEPTH )"
	SpriteCardTextureChannel_t m_nTextureChannels; // 0x2c	
	// MPropertyFriendlyName "Mix Blend Mode"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C || m_nTextureType == SPRITECARD_TEXTURE_DEPTH )"
	ParticleTextureLayerBlendType_t m_nTextureBlendMode; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyFriendlyName "Blend Amount"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C || m_nTextureType == SPRITECARD_TEXTURE_DEPTH )"
	CParticleCollectionRendererFloatInput m_flTextureBlend; // 0x38	
	// MPropertyFriendlyName "Texture Controls"
	// MPropertySuppressExpr "( m_nTextureType == SPRITECARD_TEXTURE_NORMALMAP || m_nTextureType == SPRITECARD_TEXTURE_ANIMMOTIONVEC || m_nTextureType == SPRITECARD_TEXTURE_6POINT_XYZ_A || m_nTextureType == SPRITECARD_TEXTURE_6POINT_NEGXYZ_E || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_A || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_B || m_nTextureType == SPRITECARD_TEXTURE_SPHERICAL_HARMONICS_C || m_nTextureType == SPRITECARD_TEXTURE_DEPTH )"
	TextureControls_t m_TextureControls; // 0x198	
};

