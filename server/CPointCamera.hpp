#pragma once

#include <cstdint>

struct CPointCamera;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "float m_FOV"
// MNetworkVarNames "float m_Resolution"
// MNetworkVarNames "bool m_bFogEnable"
// MNetworkVarNames "Color m_FogColor"
// MNetworkVarNames "float m_flFogStart"
// MNetworkVarNames "float m_flFogEnd"
// MNetworkVarNames "float m_flFogMaxDensity"
// MNetworkVarNames "bool m_bActive"
// MNetworkVarNames "bool m_bUseScreenAspectRatio"
// MNetworkVarNames "float m_flAspectRatio"
// MNetworkVarNames "bool m_bNoSky"
// MNetworkVarNames "float m_fBrightness"
// MNetworkVarNames "float m_flZFar"
// MNetworkVarNames "float m_flZNear"
// MNetworkVarNames "bool m_bCanHLTVUse"
// MNetworkVarNames "bool m_bAlignWithParent"
// MNetworkVarNames "bool m_bDofEnabled"
// MNetworkVarNames "float m_flDofNearBlurry"
// MNetworkVarNames "float m_flDofNearCrisp"
// MNetworkVarNames "float m_flDofFarCrisp"
// MNetworkVarNames "float m_flDofFarBlurry"
// MNetworkVarNames "float m_flDofTiltToGround"
class CPointCamera : public CBaseEntity
{
public:
	// MNetworkEnable
	float m_FOV; // 0x4e8	
	// MNetworkEnable
	float m_Resolution; // 0x4ec	
	// MNetworkEnable
	bool m_bFogEnable; // 0x4f0	
	// MNetworkEnable
	Color m_FogColor; // 0x4f1	
private:
	[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
public:
	// MNetworkEnable
	float m_flFogStart; // 0x4f8	
	// MNetworkEnable
	float m_flFogEnd; // 0x4fc	
	// MNetworkEnable
	float m_flFogMaxDensity; // 0x500	
	// MNetworkEnable
	bool m_bActive; // 0x504	
	// MNetworkEnable
	bool m_bUseScreenAspectRatio; // 0x505	
private:
	[[maybe_unused]] uint8_t __pad0506[0x2]; // 0x506
public:
	// MNetworkEnable
	float m_flAspectRatio; // 0x508	
	// MNetworkEnable
	bool m_bNoSky; // 0x50c	
private:
	[[maybe_unused]] uint8_t __pad050d[0x3]; // 0x50d
public:
	// MNetworkEnable
	float m_fBrightness; // 0x510	
	// MNetworkEnable
	float m_flZFar; // 0x514	
	// MNetworkEnable
	float m_flZNear; // 0x518	
	// MNetworkEnable
	bool m_bCanHLTVUse; // 0x51c	
	// MNetworkEnable
	bool m_bAlignWithParent; // 0x51d	
	// MNetworkEnable
	bool m_bDofEnabled; // 0x51e	
private:
	[[maybe_unused]] uint8_t __pad051f[0x1]; // 0x51f
public:
	// MNetworkEnable
	float m_flDofNearBlurry; // 0x520	
	// MNetworkEnable
	float m_flDofNearCrisp; // 0x524	
	// MNetworkEnable
	float m_flDofFarCrisp; // 0x528	
	// MNetworkEnable
	float m_flDofFarBlurry; // 0x52c	
	// MNetworkEnable
	float m_flDofTiltToGround; // 0x530	
	float m_TargetFOV; // 0x534	
	float m_DegreesPerSecond; // 0x538	
	bool m_bIsOn; // 0x53c	
private:
	[[maybe_unused]] uint8_t __pad053d[0x3]; // 0x53d
public:
	CPointCamera* m_pNext; // 0x540	
	
	// Datamap fields:
	// CUtlSymbolLarge InputChangeFOV; // 0x0
	// void InputSetOnAndTurnOthersOff; // 0x0
	// void InputSetOn; // 0x0
	// void InputSetOff; // 0x0
	// void InputForceActive; // 0x0
	// void InputForceInactive; // 0x0
	// void InputEnableDOF; // 0x0
	// void InputDisableDOF; // 0x0
	// float InputSetDOFNearBlurry; // 0x0
	// float InputSetDOFNearCrisp; // 0x0
	// float InputSetDOFFarCrisp; // 0x0
	// float InputSetDOFFarBlurry; // 0x0
	// float InputSetDOFTiltToGround; // 0x0
};

