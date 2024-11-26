#pragma once

#include <cstdint>

struct CConstantForceController;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x548
// Has VTable
// Is Abstract
class CPhysForce : public CPointEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CUtlSymbolLarge m_nameAttach; // 0x4f0	
	float m_force; // 0x4f8	
	float m_forceTime; // 0x4fc	
	CHandle< CBaseEntity > m_attachedObject; // 0x500	
	bool m_wasRestored; // 0x504	
private:
	[[maybe_unused]] uint8_t __pad0505[0x3]; // 0x505
public:
	CConstantForceController m_integrator; // 0x508	
	
	// Datamap fields:
	// void m_pController; // 0x4e8
	// void InputActivate; // 0x0
	// void InputDeactivate; // 0x0
	// float InputForceScale; // 0x0
	// void CPhysForceForceOff; // 0x0
};

