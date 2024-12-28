#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe08
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
// MNetworkIncludeByName "m_hOwnerEntity"
// MNetworkIncludeByName "CGameSceneNode::m_hParent"
// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
// MNetworkIncludeByName "m_nameStringableIndex"
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "char m_szSnapshotFileName"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bFrozen"
// MNetworkVarNames "float m_flFreezeTransitionDuration"
// MNetworkVarNames "int m_nStopType"
// MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
// MNetworkVarNames "GameTime_t m_flStartTime"
// MNetworkVarNames "float32 m_flPreSimTime"
// MNetworkVarNames "Vector m_vServerControlPoints"
// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
// MNetworkVarNames "bool m_bNoSave"
// MNetworkVarNames "bool m_bNoFreeze"
// MNetworkVarNames "bool m_bNoRamp"
class C_ParticleSystem : public C_BaseModelEntity
{
public:
	// MNetworkEnable
	char m_szSnapshotFileName[512]; // 0x858	
	// MNetworkEnable
	bool m_bActive; // 0xa58	
	// MNetworkEnable
	bool m_bFrozen; // 0xa59	
private:
	[[maybe_unused]] uint8_t __pad0a5a[0x2]; // 0xa5a
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xa5c	
	// MNetworkEnable
	int32_t m_nStopType; // 0xa60	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xa64	
private:
	[[maybe_unused]] uint8_t __pad0a65[0x3]; // 0xa65
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xa68	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa70	
	// MNetworkEnable
	float m_flPreSimTime; // 0xa74	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xa78	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xaa8	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xaac	
	// MNetworkEnable
	bool m_bNoSave; // 0xbac	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xbad	
	// MNetworkEnable
	bool m_bNoRamp; // 0xbae	
	bool m_bStartActive; // 0xbaf	
	CUtlSymbolLarge m_iszEffectName; // 0xbb0	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xbb8	
	int32_t m_nDataCP; // 0xdb8	
	Vector m_vecDataCPValue; // 0xdbc	
	int32_t m_nTintCP; // 0xdc8	
	Color m_clrTint; // 0xdcc	
private:
	[[maybe_unused]] uint8_t __pad0dd0[0x20]; // 0xdd0
public:
	bool m_bOldActive; // 0xdf0	
	bool m_bOldFrozen; // 0xdf1	
	
	// Datamap fields:
	// void InputStart; // 0x0
	// void InputStop; // 0x0
	// void InputStopEndCap; // 0x0
	// void InputDestroy; // 0x0
	// CUtlSymbolLarge InputSetControlPoint; // 0x0
	// float InputSetDataControlPointX; // 0x0
	// float InputSetDataControlPointY; // 0x0
	// float InputSetDataControlPointZ; // 0x0
	// void C_ParticleSystemStartParticleSystemThink; // 0x0
	// CUtlString cpoint%d_value[64]; // 0x7fffffff
	// void m_pEffect; // 0xdd0
	// void m_iOldEffectIndex; // 0xdf8
};

