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
// Size: 0x858
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
	CRenderComponent* m_CRenderComponent; // 0x560	
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; // 0x568	
	HitGroup_t m_LastHitGroup; // 0x590	
private:
	[[maybe_unused]] uint8_t __pad0594[0x24]; // 0x594
public:
	bool m_bInitModelEffects; // 0x5b8	
	bool m_bIsStaticProp; // 0x5b9	
private:
	[[maybe_unused]] uint8_t __pad05ba[0x2]; // 0x5ba
public:
	int32_t m_nLastAddDecal; // 0x5bc	
	int32_t m_nDecalsAdded; // 0x5c0	
	int32_t m_iOldHealth; // 0x5c4	
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderModeChanged"
	RenderMode_t m_nRenderMode; // 0x5c8	
	// MNetworkEnable
	RenderFx_t m_nRenderFX; // 0x5c9	
private:
	[[maybe_unused]] uint8_t __pad05ca[0x6]; // 0x5ca
public:
	CUtlString m_szAddModifier; // 0x5d0	
	bool m_bAllowFadeInView; // 0x5d8	
private:
	[[maybe_unused]] uint8_t __pad05d9[0x1f]; // 0x5d9
public:
	bool m_bHasCollision; // 0x5f8	
private:
	[[maybe_unused]] uint8_t __pad05f9[0x3]; // 0x5f9
public:
	Vector m_vSupport; // 0x5fc	
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; // 0x608	
private:
	[[maybe_unused]] uint8_t __pad060c[0x4]; // 0x60c
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	C_UtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t > m_vecRenderAttributes; // 0x610	
private:
	[[maybe_unused]] uint8_t __pad0678[0x18]; // 0x678
public:
	// MNetworkEnable
	bool m_bRenderToCubemaps; // 0x690	
	// MNetworkEnable
	bool m_bNoInterpolate; // 0x691	
private:
	[[maybe_unused]] uint8_t __pad0692[0x6]; // 0x692
public:
	// MNetworkEnable
	CCollisionProperty m_Collision; // 0x698	
	// MNetworkEnable
	CGlowProperty m_Glow; // 0x748	
	// MNetworkEnable
	float m_flGlowBackfaceMult; // 0x7a0	
	// MNetworkEnable
	float m_fadeMinDist; // 0x7a4	
	// MNetworkEnable
	float m_fadeMaxDist; // 0x7a8	
	// MNetworkEnable
	float m_flFadeScale; // 0x7ac	
	// MNetworkEnable
	float m_flShadowStrength; // 0x7b0	
	// MNetworkEnable
	uint8_t m_nObjectCulling; // 0x7b4	
private:
	[[maybe_unused]] uint8_t __pad07b5[0x3]; // 0x7b5
public:
	// MNetworkEnable
	int32_t m_nAddDecal; // 0x7b8	
	// MNetworkEnable
	Vector m_vDecalPosition; // 0x7bc	
	// MNetworkEnable
	Vector m_vDecalForwardAxis; // 0x7c8	
	// MNetworkEnable
	float m_flDecalHealBloodRate; // 0x7d4	
	// MNetworkEnable
	float m_flDecalHealHeightRate; // 0x7d8	
private:
	[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x7e0	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	// MNetworkChangeCallback "OnViewOffsetChanged"
	CNetworkViewOffsetVector m_vecViewOffset; // 0x7f8	
private:
	[[maybe_unused]] uint8_t __pad0820[0x8]; // 0x820
public:
	CClientAlphaProperty* m_pClientAlphaProperty; // 0x828	
	Color m_ClientOverrideTint; // 0x830	
	bool m_bUseClientOverrideTint; // 0x834	
	
	// Datamap fields:
	// int32_t InputAlpha; // 0x0
	// Color InputColor; // 0x0
	// int32_t InputSkin; // 0x0
	// CUtlString add_attribute; // 0x7fffffff
	// void m_Ropes; // 0x598
	// Color rendercolor32; // 0x7fffffff
	// Color rendercolor; // 0x7fffffff
	// int32_t renderamt; // 0x7fffffff
	// Vector mins; // 0x7fffffff
	// Vector maxs; // 0x7fffffff
	// const char * skin; // 0x7fffffff
	// CUtlString bodygroups; // 0x7fffffff
};

