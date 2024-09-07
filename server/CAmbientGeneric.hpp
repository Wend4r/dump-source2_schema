#pragma once

#include <cstdint>

struct dynpitchvol_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x570
// Has VTable
class CAmbientGeneric : public CPointEntity
{
public:
	float m_radius; // 0x4d8	
	float m_flMaxRadius; // 0x4dc	
	soundlevel_t m_iSoundLevel; // 0x4e0	
	dynpitchvol_t m_dpv; // 0x4e4	
	bool m_fActive; // 0x548	
	bool m_fLooping; // 0x549	
private:
	[[maybe_unused]] uint8_t __pad054a[0x6]; // 0x54a
public:
	CUtlSymbolLarge m_iszSound; // 0x550	
	CUtlSymbolLarge m_sSourceEntName; // 0x558	
	CHandle< CBaseEntity > m_hSoundSource; // 0x560	
	CEntityIndex m_nSoundSourceEntIndex; // 0x564	
	
	// Datamap fields:
	// void m_nGUID; // 0x568
	// void CAmbientGenericRampThink; // 0x0
	// void InputPlaySound; // 0x0
	// void InputStopSound; // 0x0
	// void InputToggleSound; // 0x0
	// float InputPitch; // 0x0
	// float InputVolume; // 0x0
	// float InputFadeIn; // 0x0
	// float InputFadeOut; // 0x0
	// int32_t fadein; // 0x7fffffff
	// int32_t fadeout; // 0x7fffffff
	// int32_t fadeinsecs; // 0x7fffffff
	// int32_t fadeoutsecs; // 0x7fffffff
};

