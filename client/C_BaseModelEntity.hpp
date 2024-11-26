#pragma once

#include <cstdint>

struct CRenderComponent;
struct CHitboxComponent;
struct CCollisionProperty;
struct CGlowProperty;
struct CNetworkViewOffsetVector;
struct CClientAlphaProperty;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x860
// Has VTable
// 
// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
// MNetworkVarNames "RenderMode_t m_nRenderMode"
// MNetworkVarNames "RenderFx_t m_nRenderFX"
// MNetworkVarNames "Color m_clrRender"
// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
// MNetworkVarNames "bool m_bRenderToCubemaps"
// MNetworkVarNames "bool m_bNoInterpolate"
// MNetworkVarNames "CCollisionProperty m_Collision"
// MNetworkVarNames "CGlowProperty m_Glow"
// MNetworkVarNames "float m_flGlowBackfaceMult"
// MNetworkVarNames "float32 m_fadeMinDist"
// MNetworkVarNames "float32 m_fadeMaxDist"
// MNetworkVarNames "float32 m_flFadeScale"
// MNetworkVarNames "float32 m_flShadowStrength"
// MNetworkVarNames "uint8 m_nObjectCulling"
// MNetworkVarNames "int m_nAddDecal"
// MNetworkVarNames "Vector m_vDecalPosition"
// MNetworkVarNames "Vector m_vDecalForwardAxis"
// MNetworkVarNames "float m_flDecalHealBloodRate"
// MNetworkVarNames "float m_flDecalHealHeightRate"
// MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
class C_BaseModelEntity : public C_BaseEntity
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; // 0x568	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x570	
	HitGroup_t m_LastHitGroup; // 0x598	
private:
	[[maybe_unused]] uint8_t __pad059c[0x24]; // 0x59c
public:
	bool m_bInitModelEffects; // 0x5c0	
	bool m_bIsStaticProp; // 0x5c1	
private:
	[[maybe_unused]] uint8_t __pad05c2[0x2]; // 0x5c2
public:
	int32_t m_nLastAddDecal; // 0x5c4	
	int32_t m_nDecalsAdded; // 0x5c8	
	int32_t m_iOldHealth; // 0x5cc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x5d0	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x5d1	
private:
	[[maybe_unused]] uint8_t __pad05d2[0x6]; // 0x5d2
public:
	CUtlString m_szAddModifier; // 0x5d8	
	bool m_bAllowFadeInView; // 0x5e0	
private:
	[[maybe_unused]] uint8_t __pad05e1[0x1f]; // 0x5e1
public:
	bool m_bHasCollision; // 0x600	
private:
	[[maybe_unused]] uint8_t __pad0601[0x3]; // 0x601
public:
	Vector m_vSupport; // 0x604	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0614[0x4]; // 0x614
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x618	
private:
	[[maybe_unused]] uint8_t __pad0680[0x18]; // 0x680
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x698	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0x699	
private:
	[[maybe_unused]] uint8_t __pad069a[0x6]; // 0x69a
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x6a0	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x750	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x7a8	
	// MNetworkEnable
	float m_fadeMinDist; // 0x7ac	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x7b0	
	// MNetworkEnable
	float m_flFadeScale; // 0x7b4	
	// MNetworkEnable
	float m_flShadowStrength; // 0x7b8	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x7bc	
private:
	[[maybe_unused]] uint8_t __pad07bd[0x3]; // 0x7bd
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x7c0	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x7c4	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x7d0	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x7dc	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x7e0	
private:
	[[maybe_unused]] uint8_t __pad07e4[0x4]; // 0x7e4
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x7e8	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x800	
private:
	[[maybe_unused]] uint8_t __pad0828[0x8]; // 0x828
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x830	
	Color m_ClientOverrideTint; // 0x838	
	bool m_bUseClientOverrideTint; // 0x83c	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0x5a0
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

