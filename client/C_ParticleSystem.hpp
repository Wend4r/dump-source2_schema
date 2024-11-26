#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe10
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
	char m_szSnapshotFileName[512]; // 0x860	
	// MNetworkEnable
	bool m_bActive; // 0xa60	
	// MNetworkEnable
	bool m_bFrozen; // 0xa61	
private:
	[[maybe_unused]] uint8_t __pad0a62[0x2]; // 0xa62
public:
	// MNetworkEnable
	float m_flFreezeTransitionDuration; // 0xa64	
	// MNetworkEnable
	int32_t m_nStopType; // 0xa68	
	// MNetworkEnable
	bool m_bAnimateDuringGameplayPause; // 0xa6c	
private:
	[[maybe_unused]] uint8_t __pad0a6d[0x3]; // 0xa6d
public:
	// MNetworkEnable
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // 0xa70	
	// MNetworkEnable
	GameTime_t m_flStartTime; // 0xa78	
	// MNetworkEnable
	float m_flPreSimTime; // 0xa7c	
	// MNetworkEnable
	Vector m_vServerControlPoints[4]; // 0xa80	
	// MNetworkEnable
	uint8_t m_iServerControlPointAssignments[4]; // 0xab0	
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hControlPointEnts[64]; // 0xab4	
	// MNetworkEnable
	bool m_bNoSave; // 0xbb4	
	// MNetworkEnable
	bool m_bNoFreeze; // 0xbb5	
	// MNetworkEnable
	bool m_bNoRamp; // 0xbb6	
	bool m_bStartActive; // 0xbb7	
	CUtlSymbolLarge m_iszEffectName; // 0xbb8	
	CUtlSymbolLarge m_iszControlPointNames[64]; // 0xbc0	
	int32_t m_nDataCP; // 0xdc0	
	Vector m_vecDataCPValue; // 0xdc4	
	int32_t m_nTintCP; // 0xdd0	
	Color m_clrTint; // 0xdd4	
private:
	[[maybe_unused]] uint8_t __pad0dd8[0x20]; // 0xdd8
public:
	bool m_bOldActive; // 0xdf8	
	bool m_bOldFrozen; // 0xdf9	
	
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
	// void m_pEffect; // 0xdd8
	// void m_iOldEffectIndex; // 0xe00
};

