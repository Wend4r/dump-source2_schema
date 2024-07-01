#pragma once

#include <cstdint>

struct IChoreoServices;
struct PhysicsRagdollPose_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x958
// Has VTable
// 
// MNetworkIncludeByName "m_bClientSideRagdoll"
// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
// MNetworkVarNames "Vector m_vecForce"
// MNetworkVarNames "int32 m_nForceBone"
// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
// MNetworkVarNames "bool m_bRagdollClientSide"
class CBaseAnimGraph : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0748[0x78]; // 0x748
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x7c0	
private:
	[[maybe_unused]] uint8_t __pad07c1[0x7]; // 0x7c1
public:
	IChoreoServices* m_pChoreoServices; // 0x7c8	
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x7d0	
private:
	[[maybe_unused]] uint8_t __pad07d1[0x3]; // 0x7d1
public:
	float m_flMaxSlopeDistance; // 0x7d4	
	Vector m_vLastSlopeCheckPos; // 0x7d8	
	bool m_bAnimationUpdateScheduled; // 0x7e4	
private:
	[[maybe_unused]] uint8_t __pad07e5[0x3]; // 0x7e5
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x7e8	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x7f4	
private:
	[[maybe_unused]] uint8_t __pad07f8[0x10]; // 0x7f8
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x808	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x830	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x7b8
	// void CBaseAnimGraphChoreoServicesThink; // 0x0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// void InputBecomeRagdoll; // 0x0
};

