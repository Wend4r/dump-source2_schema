#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x520
// Has VTable
class CCitadelBotTestNode : public CServerOnlyPointEntity
{
public:
	EBotTestNodeType m_eNodeType; // 0x4e8	
private:
	[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
public:
	CUtlSymbolLarge m_sNextNode; // 0x4f0	
	CUtlSymbolLarge m_sShootTarget; // 0x4f8	
	CHandle< CCitadelBotTestNode > m_hNextNode; // 0x500	
	CHandle< CCitadelBotTestNode > m_hShootTarget; // 0x504	
	CHandle< CCitadelPlayerPawn > m_hLockingEntity; // 0x508	
};

