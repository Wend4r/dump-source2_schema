#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_NeutralCampVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Gameplay"
	int32_t m_iInitialSpawnDelayInSeconds; // 0x28	
	int32_t m_iSpawnIntervalInSeconds; // 0x2c	
	ENeutralTrooperType m_eNeutralType; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdleAmbient; // 0x38	
	CSoundEventName m_sAlertAmbient; // 0x48	
};

