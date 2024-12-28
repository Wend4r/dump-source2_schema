#pragma once

#include <cstdint>

struct CBaseAnimGraph;
struct PhysicsRagdollPose_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xaf8
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
	[[maybe_unused]] uint8_t __pad0858[0x80]; // 0x858
public:
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; // 0x8d8	
private:
	[[maybe_unused]] uint8_t __pad08d9[0x1]; // 0x8d9
public:
	bool m_bSuppressAnimEventSounds; // 0x8da	
private:
	[[maybe_unused]] uint8_t __pad08db[0xd]; // 0x8db
public:
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x3]; // 0x8e9
public:
	float m_flMaxSlopeDistance; // 0x8ec	
	Vector m_vLastSlopeCheckPos; // 0x8f0	
	bool m_bAnimationUpdateScheduled; // 0x8fc	
private:
	[[maybe_unused]] uint8_t __pad08fd[0x3]; // 0x8fd
public:
	// MNetworkEnable
	Vector m_vecForce; // 0x900	
	// MNetworkEnable
	int32_t m_nForceBone; // 0x90c	
	CBaseAnimGraph* m_pClientsideRagdoll; // 0x910	
	bool m_bBuiltRagdoll; // 0x918	
private:
	[[maybe_unused]] uint8_t __pad0919[0x17]; // 0x919
public:
	// MNetworkEnable
	PhysicsRagdollPose_t m_RagdollPose; // 0x930	
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bRagdollClientSide; // 0x978	
private:
	[[maybe_unused]] uint8_t __pad0979[0xf]; // 0x979
public:
	bool m_bHasAnimatedMaterialAttributes; // 0x988	
private:
	[[maybe_unused]] uint8_t __pad0989[0x147]; // 0x989
public:
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	C_NetworkUtlVectorBase< uint8 > m_animGraph2SerializeData; // 0xad0	
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xae8	
	
	// Datamap fields:
	// void m_pMainGraphController; // 0x8d0
	// float InputSetPlaybackRate; // 0x0
	// CUtlSymbolLarge InputSetBodyGroup; // 0x0
	// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
	// void InputClearTargetIdentifierOverride; // 0x0
	// bool InputDisableAnimEventSounds; // 0x0
};

