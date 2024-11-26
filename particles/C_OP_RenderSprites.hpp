#pragma once

#include <cstdint>

struct CParticleCollectionRendererFloatInput;
struct CReplicationParameters;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x4880
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_RenderSprites : public CBaseRendererSource2
{
public:
	// MPropertyStartGroup "Animation"
	// MPropertyFriendlyName "sequence id override"
	// MPropertySortPriority "500"
	CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2c10	
	// MPropertyStartGroup "Orientation"
	// MPropertyFriendlyName "orientation type"
	// MPropertySortPriority "750"
	ParticleOrientationChoiceList_t m_nOrientationType; // 0x2d70	
	// MPropertyFriendlyName "orientation control point"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	int32_t m_nOrientationControlPoint; // 0x2d74	
	// MPropertyFriendlyName "enable yaw for particles aligned to normals"
	// MPropertySortPriority "750"
	// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
	bool m_bUseYawWithNormalAligned; // 0x2d78	
private:
	[[maybe_unused]] uint8_t __pad2d79[0x7]; // 0x2d79
public:
	// MPropertyStartGroup "Fading and culling"
	// MPropertyFriendlyName "minimum visual screen size"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flMinSize; // 0x2d80	
	// MPropertyFriendlyName "maximum visual screen size"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flMaxSize; // 0x2ee0	
	// MPropertyFriendlyName "Factor to map size adjustment to alpha"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x3040	
	// MPropertyFriendlyName "screen size to start fading"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x31a0	
	// MPropertyFriendlyName "screen size to fade away"
	// MPropertySortPriority "1000"
	CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x3300	
	// MPropertyFriendlyName "start fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flStartFadeDot; // 0x3460	
	// MPropertyFriendlyName "end fade dot product of normal vs view"
	// MPropertySortPriority "1000"
	float m_flEndFadeDot; // 0x3464	
	// MPropertyStartGroup "Distance to alpha coding"
	// MPropertyFriendlyName "distance alpha"
	// MPropertySortPriority "0"
	bool m_bDistanceAlpha; // 0x3468	
	// MPropertyFriendlyName "use soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	bool m_bSoftEdges; // 0x3469	
private:
	[[maybe_unused]] uint8_t __pad346a[0x2]; // 0x346a
public:
	// MPropertyFriendlyName "start value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessStart; // 0x346c	
	// MPropertyFriendlyName "end value for soft edges for distance alpha"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bDistanceAlpha"
	float m_flEdgeSoftnessEnd; // 0x3470	
	// MPropertyStartGroup "Outlining"
	// MPropertyFriendlyName "enable particle outlining"
	// MPropertySortPriority "0"
	bool m_bOutline; // 0x3474	
	// MPropertyFriendlyName "outline color"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	Color m_OutlineColor; // 0x3475	
private:
	[[maybe_unused]] uint8_t __pad3479[0x3]; // 0x3479
public:
	// MPropertyFriendlyName "outline alpha"
	// MPropertyAttributeRange "0 255"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	int32_t m_nOutlineAlpha; // 0x347c	
	// MPropertyFriendlyName "outline start 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart0; // 0x3480	
	// MPropertyFriendlyName "outline start 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineStart1; // 0x3484	
	// MPropertyFriendlyName "outline end 0"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd0; // 0x3488	
	// MPropertyFriendlyName "outline end 1"
	// MPropertySortPriority "0"
	// MPropertySuppressExpr "!m_bOutline"
	float m_flOutlineEnd1; // 0x348c	
	// MPropertyStartGroup "Lighting and Shadows"
	// MPropertyFriendlyName "lighting mode"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	ParticleLightingQuality_t m_nLightingMode; // 0x3490	
private:
	[[maybe_unused]] uint8_t __pad3494[0x4]; // 0x3494
public:
	// MPropertyFriendlyName "vertex lighting tessellation (0-5)"
	// MPropertyAttributeRange "0 5"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
	CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x3498	
	// MPropertyFriendlyName "lighting directionality"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != hlx"
	CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x35f8	
	// MPropertyFriendlyName "Particle Shadows"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "mod != csgo"
	bool m_bParticleShadows; // 0x3758	
private:
	[[maybe_unused]] uint8_t __pad3759[0x3]; // 0x3759
public:
	// MPropertyFriendlyName "Shadow Density"
	// MPropertySortPriority "400"
	// MPropertySuppressExpr "!m_bParticleShadows"
	float m_flShadowDensity; // 0x375c	
	// MPropertyStartGroup "Replication"
	// MPropertyFriendlyName "Replication settings"
	// -> m_nReplicationMode - 0x3760
	// -> m_bScaleChildParticleRadii - 0x3764
	// -> m_flMinRandomRadiusScale - 0x3768
	// -> m_flMaxRandomRadiusScale - 0x38c8
	// -> m_vMinRandomDisplacement - 0x3a28
	// -> m_vMaxRandomDisplacement - 0x40a0
	// -> m_flModellingScale - 0x4718
	CReplicationParameters m_replicationParameters; // 0x3760	
};

