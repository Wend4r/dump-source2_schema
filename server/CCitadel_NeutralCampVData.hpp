#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_NeutralCampVData : public CEntitySubclassVDataBase
{
public:
	// MPropertyStartGroup "Gameplay"
	int32_t m_iInitialSpawnDelayInSeconds; // 0x28	
	int32_t m_iSpawnIntervalInSeconds; // 0x2c	
	int32_t m_iSpawnIntervalChange; // 0x30	
	int32_t m_iSpawnIntervalMin; // 0x34	
	ENeutralTrooperType m_eNeutralType; // 0x38	
private:
	[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
public:
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_sIdleAmbient; // 0x40	
	CSoundEventName m_sAlertAmbient; // 0x50	
};

