#pragma once

#include <cstdint>

struct CPropDataComponent;
struct CEntityIOOutput;
struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x898
// Has VTable
// 
// MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
class CBreakable : public CBaseModelEntity
{
private:
	[[maybe_unused]] uint8_t __pad07c0[0x8]; // 0x7c0
public:
	// MNetworkEnable
	// MNetworkUserGroup "CPropDataComponent"
	// MNetworkAlias "CPropDataComponent"
	// MNetworkTypeAlias "CPropDataComponent"
	CPropDataComponent m_CPropDataComponent; // 0x7c8	
	Materials m_Material; // 0x808	
	CHandle< CBaseEntity > m_hBreaker; // 0x80c	
	Explosions m_Explosion; // 0x810	
private:
	[[maybe_unused]] uint8_t __pad0814[0x4]; // 0x814
public:
	CUtlSymbolLarge m_iszSpawnObject; // 0x818	
	float m_flPressureDelay; // 0x820	
	int32_t m_iMinHealthDmg; // 0x824	
	CUtlSymbolLarge m_iszPropData; // 0x828	
	float m_impactEnergyScale; // 0x830	
	EOverrideBlockLOS_t m_nOverrideBlockLOS; // 0x834	
	CEntityIOOutput m_OnBreak; // 0x838	
	CEntityOutputTemplate< float32 > m_OnHealthChanged; // 0x860	
	PerformanceMode_t m_PerformanceMode; // 0x888	
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // 0x88c	
	GameTime_t m_flLastPhysicsInfluenceTime; // 0x890	
	
	// Datamap fields:
	// void InputBreak; // 0x0
	// int32_t InputSetHealth; // 0x0
	// int32_t InputAddHealth; // 0x0
	// int32_t InputRemoveHealth; // 0x0
	// float InputSetMass; // 0x0
	// void CBreakableDie; // 0x0
	// int32_t material; // 0x7fffffff
	// int32_t spawnobject; // 0x7fffffff
	// int32_t propdata; // 0x7fffffff
	// int64_t gamemass; // 0x7fffffff
	// float massScale; // 0x7fffffff
};

