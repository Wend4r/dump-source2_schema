#pragma once

#include <cstdint>

struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x650
// Has VTable
class CNavLinkAreaEntity : public CPointEntity
{
public:
	float m_flWidth; // 0x4e8	
	Vector m_vLocatorOffset; // 0x4ec	
	QAngle m_qLocatorAnglesOffset; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CUtlSymbolLarge m_strMovementForward; // 0x508	
	CUtlSymbolLarge m_strMovementReverse; // 0x510	
	int32_t m_nNavLinkIdForward; // 0x518	
	int32_t m_nNavLinkIdReverse; // 0x51c	
	bool m_bEnabled; // 0x520	
private:
	[[maybe_unused]] uint8_t __pad0521[0x7]; // 0x521
public:
	CUtlSymbolLarge m_strFilterName; // 0x528	
	CHandle< CBaseFilter > m_hFilter; // 0x530	
private:
	[[maybe_unused]] uint8_t __pad0534[0x4]; // 0x534
public:
	CUtlVectorFixedGrowable< CHandle< CAI_BaseNPC >, 6 > m_vecNpcUsers; // 0x538	
	CUtlSymbolLarge m_szListenForAnimTag; // 0x568	
	bool m_bIsListeningForAnimTag; // 0x570	
private:
	[[maybe_unused]] uint8_t __pad0571[0xf]; // 0x571
public:
	CEntityIOOutput m_OnAnimTagFired; // 0x580	
	CEntityIOOutput m_OnAnimTagStart; // 0x5a8	
	CEntityIOOutput m_OnAnimTagEnd; // 0x5d0	
	CEntityIOOutput m_OnNavLinkStart; // 0x5f8	
	CEntityIOOutput m_OnNavLinkFinish; // 0x620	
	bool m_bIsTerminus; // 0x648	
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

