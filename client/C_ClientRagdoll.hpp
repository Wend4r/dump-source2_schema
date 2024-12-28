#pragma once

#include <cstdint>

struct GameTime_t;
struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xb90
// Has VTable
class C_ClientRagdoll : public CBaseAnimGraph
{
public:
	bool m_bFadeOut; // 0xaf8	
	bool m_bImportant; // 0xaf9	
private:
	[[maybe_unused]] uint8_t __pad0afa[0x2]; // 0xafa
public:
	GameTime_t m_flEffectTime; // 0xafc	
	GameTime_t m_gibDespawnTime; // 0xb00	
	int32_t m_iCurrentFriction; // 0xb04	
	int32_t m_iMinFriction; // 0xb08	
	int32_t m_iMaxFriction; // 0xb0c	
	int32_t m_iFrictionAnimState; // 0xb10	
	bool m_bReleaseRagdoll; // 0xb14	
	AttachmentHandle_t m_iEyeAttachment; // 0xb15	
	bool m_bFadingOut; // 0xb16	
private:
	[[maybe_unused]] uint8_t __pad0b17[0x1]; // 0xb17
public:
	float m_flScaleEnd[10]; // 0xb18	
	GameTime_t m_flScaleTimeStart[10]; // 0xb40	
	GameTime_t m_flScaleTimeEnd[10]; // 0xb68	
	
	// Datamap fields:
	// Color m_clrRender; // 0x608
};

