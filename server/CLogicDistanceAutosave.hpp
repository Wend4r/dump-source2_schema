#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x500
// Has VTable
class CLogicDistanceAutosave : public CLogicalEntity
{
public:
	CUtlSymbolLarge m_iszTargetEntity; // 0x4e8	
	float m_flDistanceToPlayer; // 0x4f0	
	bool m_bForceNewLevelUnit; // 0x4f4	
	bool m_bCheckCough; // 0x4f5	
	bool m_bThinkDangerous; // 0x4f6	
private:
	[[maybe_unused]] uint8_t __pad04f7[0x1]; // 0x4f7
public:
	float m_flDangerousTime; // 0x4f8	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// void CLogicDistanceAutosaveSaveThink; // 0x0
};

