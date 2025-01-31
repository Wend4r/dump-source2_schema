#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x4f0
// Has VTable
class CLogicAutosave : public CLogicalEntity
{
public:
	bool m_bForceNewLevelUnit; // 0x4e0	
private:
	[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
public:
	int32_t m_minHitPoints; // 0x4e4	
	int32_t m_minHitPointsToCommit; // 0x4e8	
	
	// Datamap fields:
	// void InputSave; // 0x0
	// float InputSaveDangerous; // 0x0
	// int32_t InputSetMinHitpointsThreshold; // 0x0
};

