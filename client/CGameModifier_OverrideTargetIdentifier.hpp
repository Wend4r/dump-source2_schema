#pragma once

#include <cstdint>

struct AttachmentHandle_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CGameModifier_OverrideTargetIdentifier : public CCitadelModifier
{
public:
	CGlobalSymbol m_sTargetIdentifier; // 0xc0	
	CHandle< C_BaseEntity > m_hTarget; // 0xc8	
	TargetIdentifierOriginType_t m_nOriginType; // 0xcc	
	CGlobalSymbol m_sAttachmentName; // 0xd0	
	AttachmentHandle_t m_hAttachment; // 0xd8	
};

