#pragma once

#include <cstdint>

struct ParticleIndex_t;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x240
// Has VTable
class CCitadel_Modifier_BulletFlurry : public CCitadel_Modifier_BaseBulletPreRollProc
{
private:
	[[maybe_unused]] uint8_t __pad0188[0xa8]; // 0x188
public:
	ParticleIndex_t m_nEffectId; // 0x230	
	GameTime_t m_flNextSequenceChange; // 0x234	
	int32_t m_nCurrentPose; // 0x238	
};

