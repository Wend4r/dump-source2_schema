#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x280
// Has VTable
// 
// MNetworkVarNames "HModelStrong m_hModel"
// MNetworkVarNames "bool m_bClientClothCreationSuppressed"
// MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
// MNetworkVarNames "int32 m_nBodyGroupChoices"
// MNetworkVarNames "int8 m_nIdealMotionType"
class CModelState
{
private:
	[[maybe_unused]] uint8_t __pad0000[0xd0]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonModelChanged"
	CStrongHandle< InfoForResourceTypeCModel > m_hModel; // 0xd0	
	CUtlSymbolLarge m_ModelName; // 0xd8	
private:
	[[maybe_unused]] uint8_t __pad00e0[0x38]; // 0xe0
public:
	// MNetworkEnable
	bool m_bClientClothCreationSuppressed; // 0x118	
private:
	[[maybe_unused]] uint8_t __pad0119[0xb7]; // 0x119
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
	uint64_t m_MeshGroupMask; // 0x1d0	
private:
	[[maybe_unused]] uint8_t __pad01d8[0x48]; // 0x1d8
public:
	// MNetworkEnable
	// MNetworkChangeCallback "bodyGroupChoiceChanged"
	CNetworkUtlVectorBase< int32 > m_nBodyGroupChoices; // 0x220	
private:
	[[maybe_unused]] uint8_t __pad0238[0x32]; // 0x238
public:
	// MNetworkEnable
	// MNetworkChangeCallback "skeletonMotionTypeChanged"
	int8_t m_nIdealMotionType; // 0x26a	
	int8_t m_nForceLOD; // 0x26b	
	int8_t m_nClothUpdateFlags; // 0x26c	
	
	// Datamap fields:
	// void m_pVPhysicsAggregate; // 0x110
};

