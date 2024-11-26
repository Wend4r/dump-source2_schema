#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb00
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
class CBaseAnimGraph : public C_BaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad0860[0x80]; // 0x860
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x8e0	
private:
	[[maybe_unused]] uint8_t __pad08e1[0x1]; // 0x8e1
public:
	bool m_bSuppressAnimEventSounds; // 0x8e2	
private:
	[[maybe_unused]] uint8_t __pad08e3[0xd]; // 0x8e3
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x3]; // 0x8f1
public:
	float m_flMaxSlopeDistance; // 0x8f4	
	Vector m_vLastSlopeCheckPos; // 0x8f8	
	bool m_bAnimationUpdateScheduled; // 0x904	
private:
	[[maybe_unused]] uint8_t __pad0905[0x3]; // 0x905
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x908	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x914	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0x918	
	bool m_bBuiltRagdoll; // 0x920	
private:
	[[maybe_unused]] uint8_t __pad0921[0x17]; // 0x921
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x938	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0981[0xf]; // 0x981
public:
	bool m_bHasAnimatedMaterialAttributes; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0991[0x147]; // 0x991
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	C_NetworkUtlVectorBase< uint8 > m_animGraph2SerializeData; // 0xad8	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xaf0	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x8d8
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

