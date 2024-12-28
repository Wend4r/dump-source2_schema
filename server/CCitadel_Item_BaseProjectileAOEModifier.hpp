#pragma once

#include <cstdint>

struct CitadelAbilityProjectileCreateInfo_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
class CCitadel_Item_BaseProjectileAOEModifier : public CCitadel_Item
{
public:
	Vector m_vLaunchPosition; // 0xb18	
	QAngle m_qLaunchAngle; // 0xb24	
private:
	[[maybe_unused]] uint8_t __pad0b30[0x38]; // 0xb30
public:
	CitadelAbilityProjectileCreateInfo_t m_projInfo; // 0xb68	
};

