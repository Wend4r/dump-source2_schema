#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x9f0
// Has VTable
class C_Precipitation : public C_BaseTrigger
{
public:
	float m_flDensity; // 0x9a0	
private:
	[[maybe_unused]] uint8_t __pad09a4[0xc]; // 0x9a4
public:
	float m_flParticleInnerDist; // 0x9b0	
private:
	[[maybe_unused]] uint8_t __pad09b4[0x4]; // 0x9b4
public:
	char* m_pParticleDef; // 0x9b8	
private:
	[[maybe_unused]] uint8_t __pad09c0[0x20]; // 0x9c0
public:
	TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x9e0	
	bool m_bActiveParticlePrecipEmitter[1]; // 0x9e8	
	bool m_bParticlePrecipInitialized; // 0x9e9	
	bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x9ea	
private:
	[[maybe_unused]] uint8_t __pad09eb[0x1]; // 0x9eb
public:
	int32_t m_nAvailableSheetSequencesMaxIndex; // 0x9ec	
};

