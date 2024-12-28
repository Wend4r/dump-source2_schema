#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb50
// Has VTable
class CCitadel_Ability_Tier2Boss_LaserBeam : public CCitadelBaseAbilityServerOnly
{
public:
	CModifierHandleTyped< CCitadelModifier > m_pBeamModifier; // 0xaf8	
private:
	[[maybe_unused]] uint8_t __pad0b10[0x38]; // 0xb10
public:
	AttachmentHandle_t m_hAttackPosHigh; // 0xb48	
	AttachmentHandle_t m_hAttackPosLow; // 0xb49	
	AttachmentHandle_t m_hAttackPosLeft; // 0xb4a	
	AttachmentHandle_t m_hAttackPosRight; // 0xb4b	
};

