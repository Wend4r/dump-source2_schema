#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x518
// Has VTable
class CGameGibManager : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x20]; // 0x4e8
public:
	bool m_bAllowNewGibs; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad0509[0x3]; // 0x509
public:
	int32_t m_iCurrentMaxPieces; // 0x50c	
	int32_t m_iMaxPieces; // 0x510	
	int32_t m_iLastFrame; // 0x514	
	
	// Datamap fields:
	// int32_t InputSetMaxPieces; // 0x0
	// int32_t InputSetMaxPiecesDX8; // 0x0
	// void m_LRU; // 0x4e8
};

