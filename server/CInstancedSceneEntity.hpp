#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa60
// Has VTable
class CInstancedSceneEntity : public CSceneEntity
{
public:
	CHandle< CBaseEntity > m_hOwner; // 0xa48	
	bool m_bHadOwner; // 0xa4c	
private:
	[[maybe_unused]] uint8_t __pad0a4d[0x3]; // 0xa4d
public:
	float m_flPostSpeakDelay; // 0xa50	
	float m_flPreDelay; // 0xa54	
	bool m_bIsBackground; // 0xa58	
	bool m_bRemoveOnCompletion; // 0xa59	
private:
	[[maybe_unused]] uint8_t __pad0a5a[0x2]; // 0xa5a
public:
	CHandle< CBaseEntity > m_hTarget; // 0xa5c	
};

