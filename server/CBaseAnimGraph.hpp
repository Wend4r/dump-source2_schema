#pragma once

#include <cstdint>

struct IChoreoServices;
struct PhysicsRagdollPose_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa38
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
	[[maybe_unused]] uint8_t __pad07b8[0x80]; // 0x7b8
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x838	
private:
	[[maybe_unused]] uint8_t __pad0839[0x7]; // 0x839
public:
	IChoreoServices* m_pChoreoServices; // 0x840	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x848	
private:
	[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
public:
	float m_flMaxSlopeDistance; // 0x84c	
	Vector m_vLastSlopeCheckPos; // 0x850	
	bool m_bAnimationUpdateScheduled; // 0x85c	
private:
	[[maybe_unused]] uint8_t __pad085d[0x3]; // 0x85d
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x860	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x86c	
private:
	[[maybe_unused]] uint8_t __pad0870[0x10]; // 0x870
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x880	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x8a8	
private:
	[[maybe_unused]] uint8_t __pad08a9[0x16f]; // 0x8a9
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CNetworkUtlVectorBase< uint8 > m_animGraph2SerializeData; // 0xa18	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa30	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x830
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

