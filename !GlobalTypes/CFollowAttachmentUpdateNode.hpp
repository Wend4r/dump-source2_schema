#pragma once

#include <cstdint>

struct FollowAttachmentSettings_t;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 16
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
class CFollowAttachmentUpdateNode : public CUnaryUpdateNode
{
public:
	// -> m_attachment - 0x70
	// -> m_boneIndex - 0xf0
	// -> m_attachmentHandle - 0xf4
	// -> m_bMatchTranslation - 0xf5
	// -> m_bMatchRotation - 0xf6
	FollowAttachmentSettings_t m_opFixedData; // 0x70	
};

