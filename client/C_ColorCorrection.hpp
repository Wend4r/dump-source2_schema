#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x7a8
// Has VTable
// 
// MNetworkIncludeByUserGroup "Origin"
// MNetworkVarNames "float32 m_MinFalloff"
// MNetworkVarNames "float32 m_MaxFalloff"
// MNetworkVarNames "float32 m_flFadeInDuration"
// MNetworkVarNames "float32 m_flFadeOutDuration"
// MNetworkVarNames "float32 m_flMaxWeight"
// MNetworkVarNames "float32 m_flCurWeight"
// MNetworkVarNames "char m_netlookupFilename"
// MNetworkVarNames "bool m_bEnabled"
// MNetworkVarNames "bool m_bMaster"
// MNetworkVarNames "bool m_bClientSide"
// MNetworkVarNames "bool m_bExclusive"
class C_ColorCorrection : public C_BaseEntity
{
public:
	Vector m_vecOrigin; // 0x560	
	// MNetworkEnable
	float m_MinFalloff; // 0x56c	
	// MNetworkEnable
	float m_MaxFalloff; // 0x570	
	// MNetworkEnable
	float m_flFadeInDuration; // 0x574	
	// MNetworkEnable
	float m_flFadeOutDuration; // 0x578	
	// MNetworkEnable
	float m_flMaxWeight; // 0x57c	
	// MNetworkEnable
	float m_flCurWeight; // 0x580	
	// MNetworkEnable
	char m_netlookupFilename[512]; // 0x584	
	// MNetworkEnable
	bool m_bEnabled; // 0x784	
	// MNetworkEnable
	bool m_bMaster; // 0x785	
	// MNetworkEnable
	bool m_bClientSide; // 0x786	
	// MNetworkEnable
	bool m_bExclusive; // 0x787	
	bool m_bEnabledOnClient[1]; // 0x788	
private:
	[[maybe_unused]] uint8_t __pad0789[0x3]; // 0x789
public:
	float m_flCurWeightOnClient[1]; // 0x78c	
	bool m_bFadingIn[1]; // 0x790	
private:
	[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
public:
	float m_flFadeStartWeight[1]; // 0x794	
	float m_flFadeStartTime[1]; // 0x798	
	float m_flFadeDuration[1]; // 0x79c	
};

