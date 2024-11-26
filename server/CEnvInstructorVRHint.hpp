#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CEnvInstructorVRHint : public CPointEntity
{
public:
	CUtlSymbolLarge m_iszName; // 0x4e8	
	CUtlSymbolLarge m_iszHintTargetEntity; // 0x4f0	
	int32_t m_iTimeout; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CUtlSymbolLarge m_iszCaption; // 0x500	
	CUtlSymbolLarge m_iszStartSound; // 0x508	
	int32_t m_iLayoutFileType; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
public:
	CUtlSymbolLarge m_iszCustomLayoutFile; // 0x518	
	int32_t m_iAttachType; // 0x520	
	float m_flHeightOffset; // 0x524	
	
	// Datamap fields:
	// CUtlSymbolLarge InputShowHint; // 0x0
	// void InputEndHint; // 0x0
};

