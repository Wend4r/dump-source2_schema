#pragma once

#include <cstdint>

struct IChoreoServices;
struct PhysicsRagdollPose_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa40
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
// MNetworkVarNames "uint8 m_animGraph2SerializeData"
// MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
class CBaseAnimGraph : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07c0[0x80]; // 0x7c0
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x840	
private:
	[[maybe_unused]] uint8_t __pad0841[0x7]; // 0x841
public:
	IChoreoServices* m_pChoreoServices; // 0x848	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x850	
private:
	[[maybe_unused]] uint8_t __pad0851[0x3]; // 0x851
public:
	float m_flMaxSlopeDistance; // 0x854	
	Vector m_vLastSlopeCheckPos; // 0x858	
	bool m_bAnimationUpdateScheduled; // 0x864	
private:
	[[maybe_unused]] uint8_t __pad0865[0x3]; // 0x865
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x868	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x874	
private:
	[[maybe_unused]] uint8_t __pad0878[0x10]; // 0x878
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x888	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x8b0	
private:
	[[maybe_unused]] uint8_t __pad08b1[0x16f]; // 0x8b1
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CNetworkUtlVectorBase< uint8 > m_animGraph2SerializeData; // 0xa20	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa38	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x838
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

