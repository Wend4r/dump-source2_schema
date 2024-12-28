#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x598
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0564[0x24]; // 0x564
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x588	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x58c	
	
	// Datamap fields:
	// void m_hEffect; // 0x568
};

