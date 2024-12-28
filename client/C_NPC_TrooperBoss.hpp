#pragma once

#include <cstdint>

struct CCitadelPlayerClipComponent;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14e0
// Has VTable
// 
// MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
// MNetworkVarNames "GameTime_t m_flFadeOutStart"
// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
class C_NPC_TrooperBoss : public C_NPC_Trooper
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "CCitadelPlayerClipComponent"
	// MNetworkAlias "CCitadelPlayerClipComponent"
	// MNetworkTypeAlias "CCitadelPlayerClipComponent"
	CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x14a8	
private:
	[[maybe_unused]] uint8_t __pad14c8[0xc]; // 0x14c8
public:
	// MNetworkEnable
	GameTime_t m_flFadeOutStart; // 0x14d4	
	// MNetworkEnable
	GameTime_t m_flFadeOutEnd; // 0x14d8	
};

