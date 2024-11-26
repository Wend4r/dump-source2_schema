#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc88
// Has VTable
class CItemGeneric : public CItem
{
private:
	[[maybe_unused]] uint8_t __pad0b18[0x8]; // 0xb18
public:
	bool m_bHasTriggerRadius; // 0xb20	
	bool m_bHasPickupRadius; // 0xb21	
private:
	[[maybe_unused]] uint8_t __pad0b22[0x2]; // 0xb22
public:
	float m_flPickupRadiusSqr; // 0xb24	
	float m_flTriggerRadiusSqr; // 0xb28	
	GameTime_t m_flLastPickupCheck; // 0xb2c	
	bool m_bPlayerCounterListenerAdded; // 0xb30	
	bool m_bPlayerInTriggerRadius; // 0xb31	
private:
	[[maybe_unused]] uint8_t __pad0b32[0x6]; // 0xb32
public:
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // 0xb38	
	CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb40	
	bool m_bAutoStartAmbientSound; // 0xb48	
private:
	[[maybe_unused]] uint8_t __pad0b49[0x7]; // 0xb49
public:
	CUtlSymbolLarge m_pSpawnScriptFunction; // 0xb50	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // 0xb58	
	CUtlSymbolLarge m_pPickupSoundEffect; // 0xb60	
	CUtlSymbolLarge m_pPickupScriptFunction; // 0xb68	
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // 0xb70	
	CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xb78	
	CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xb80	
	CUtlSymbolLarge m_pPickupFilterName; // 0xb88	
	CHandle< CBaseFilter > m_hPickupFilter; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b94[0x4]; // 0xb94
public:
	CEntityIOOutput m_OnPickup; // 0xb98	
	CEntityIOOutput m_OnTimeout; // 0xbc0	
	CEntityIOOutput m_OnTriggerStartTouch; // 0xbe8	
	CEntityIOOutput m_OnTriggerTouch; // 0xc10	
	CEntityIOOutput m_OnTriggerEndTouch; // 0xc38	
	CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xc60	
	float m_flPickupRadius; // 0xc68	
	float m_flTriggerRadius; // 0xc6c	
	CUtlSymbolLarge m_pTriggerSoundEffect; // 0xc70	
	bool m_bGlowWhenInTrigger; // 0xc78	
	Color m_glowColor; // 0xc79	
	bool m_bUseable; // 0xc7d	
private:
	[[maybe_unused]] uint8_t __pad0c7e[0x2]; // 0xc7e
public:
	CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // 0xc80	
	
	// Datamap fields:
	// void CItemGenericItemGenericTouch; // 0x0
	// void InputStartAmbientSound; // 0x0
	// void InputStopAmbientSound; // 0x0
	// void InputToggleAmbientSound; // 0x0
	// void m_hAmbientSound; // 0xb18
	// float auto_remove_timeout; // 0x7fffffff
	// float drag_override; // 0x7fffffff
	// float damping_override; // 0x7fffffff
};

