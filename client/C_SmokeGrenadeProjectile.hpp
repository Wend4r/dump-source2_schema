#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x13b0
// Has VTable
// 
// MNetworkVarNames "int m_nSmokeEffectTickBegin"
// MNetworkVarNames "bool m_bDidSmokeEffect"
// MNetworkVarNames "int m_nRandomSeed"
// MNetworkVarNames "Vector m_vSmokeColor"
// MNetworkVarNames "Vector m_vSmokeDetonationPos"
// MNetworkVarNames "uint8 m_VoxelFrameData"
// MNetworkVarNames "int m_nVoxelFrameDataSize"
// MNetworkVarNames "int m_nVoxelUpdate"
class C_SmokeGrenadeProjectile : public C_BaseCSGrenadeProjectile
{
private:
	[[maybe_unused]] uint8_t __pad1208[0x8]; // 0x1208
public:
	// MNetworkEnable
	int32_t m_nSmokeEffectTickBegin; // 0x1210	
	// MNetworkEnable
	bool m_bDidSmokeEffect; // 0x1214	
private:
	[[maybe_unused]] uint8_t __pad1215[0x3]; // 0x1215
public:
	// MNetworkEnable
	int32_t m_nRandomSeed; // 0x1218	
	// MNetworkEnable
	Vector m_vSmokeColor; // 0x121c	
	// MNetworkEnable
	Vector m_vSmokeDetonationPos; // 0x1228	
private:
	[[maybe_unused]] uint8_t __pad1234[0x4]; // 0x1234
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnSimulationChanged"
	C_NetworkUtlVectorBase< uint8 > m_VoxelFrameData; // 0x1238	
	// MNetworkEnable
	int32_t m_nVoxelFrameDataSize; // 0x1250	
	// MNetworkEnable
	int32_t m_nVoxelUpdate; // 0x1254	
	bool m_bSmokeVolumeDataReceived; // 0x1258	
	bool m_bSmokeEffectSpawned; // 0x1259	
};

