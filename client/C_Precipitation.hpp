#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9e8
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad099c[0xc]; // 0x99c
public:
	float m_flParticleInnerDist; // 0x9a8	
private:
	[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
public:
	char* m_pParticleDef; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b8[0x20]; // 0x9b8
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x9d8	
	bool m_bActiveParticlePrecipEmitter[1]; // 0x9e0	
	bool m_bParticlePrecipInitialized; // 0x9e1	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x9e2	
private:
	[[maybe_unused]] uint8_t __pad09e3[0x1]; // 0x9e3
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x9e4	
};

