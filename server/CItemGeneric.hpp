#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc80
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
public:
	bool m_bHasTriggerRadius; // 0xb18	
	bool m_bHasPickupRadius; // 0xb19	
private:
	[[maybe_unused]] uint8_t __pad0b1a[0x2]; // 0xb1a
public:
	float m_flPickupRadiusSqr; // 0xb1c	
	float m_flTriggerRadiusSqr; // 0xb20	
	GameTime_t m_flLastPickupCheck; // 0xb24	
	bool m_bPlayerCounterListenerAdded; // 0xb28	
	bool m_bPlayerInTriggerRadius; // 0xb29	
private:
	[[maybe_unused]] uint8_t __pad0b2a[0x6]; // 0xb2a
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0xb30	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb38	
	bool m_bAutoStartAmbientSound; // 0xb40	
private:
	[[maybe_unused]] uint8_t __pad0b41[0x7]; // 0xb41
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0xb48	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xb50	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xb58	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xb60	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xb68	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xb70	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xb78	
	CUtlSymbolLarge m_pPickupFilterName; // 0xb80	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b8c[0x4]; // 0xb8c
public:
	CEntityIOOutput m_OnPickup; // 0xb90	
	CEntityIOOutput m_OnTimeout; // 0xbb8	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xbe0	
	CEntityIOOutput m_OnTriggerTouch; // 0xc08	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xc30	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xc58	
	float m_flPickupRadius; // 0xc60	
	float m_flTriggerRadius; // 0xc64	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xc68	
	bool m_bGlowWhenInTrigger; // 0xc70	
	Color m_glowColor; // 0xc71	
	bool m_bUseable; // 0xc75	
private:
	[[maybe_unused]] uint8_t __pad0c76[0x2]; // 0xc76
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xc78	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0xb10
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

