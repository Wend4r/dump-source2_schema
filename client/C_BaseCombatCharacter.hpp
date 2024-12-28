#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
class C_BaseCombatCharacter : public C_BaseFlex
{
public:
	// MNetworkEnable
	// MNetworkChangeCallback "OnWearablesChanged"
	C_NetworkUtlVectorBase< CHandle< C_EconWearable > > m_hMyWearables; // 0xc90	
	AttachmentHandle_t m_leftFootAttachment; // 0xca8	
	AttachmentHandle_t m_rightFootAttachment; // 0xca9	
private:
	[[maybe_unused]] uint8_t __pad0caa[0x2]; // 0xcaa
public:
	C_BaseCombatCharacter::WaterWakeMode_t m_nWaterWakeMode; // 0xcac	
	float m_flWaterWorldZ; // 0xcb0	
	float m_flWaterNextTraceTime; // 0xcb4	
};

