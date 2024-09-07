#pragma once

#include <cstdint>

struct CPathKeyFrame;
// Registered binary: server.dll (project 'server')
// Alignment: 16
// Size: 0x530
// Has VTable
class CPathKeyFrame : public CLogicalEntity
{
public:
	Vector m_Origin; // 0x4d8	
	QAngle m_Angles; // 0x4e4	
	Quaternion m_qAngle; // 0x4f0	
	CUtlSymbolLarge m_iNextKey; // 0x500	
	float m_flNextTime; // 0x508	
private:
	[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
public:
	CPathKeyFrame* m_pNextKey; // 0x510	
	CPathKeyFrame* m_pPrevKey; // 0x518	
	float m_flMoveSpeed; // 0x520	
};

