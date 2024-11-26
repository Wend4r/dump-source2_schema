#pragma once

#include <cstdint>

struct CCitadelModifier;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_UltCombo_Target : public CCitadel_Modifier_Stunned
{
public:
	QAngle m_angles; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	CCitadelModifier* m_pAttachmentModifier; // 0xd8	
};

