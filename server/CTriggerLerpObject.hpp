#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa28
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x980	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x988	
private:
	[[maybe_unused]] uint8_t __pad098c[0x4]; // 0x98c
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x990	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x998	
private:
	[[maybe_unused]] uint8_t __pad0999[0x3]; // 0x999
public:
	float m_flLerpDuration; // 0x99c	
	bool m_bLerpRestoreMoveType; // 0x9a0	
	bool m_bSingleLerpObject; // 0x9a1	
private:
	[[maybe_unused]] uint8_t __pad09a2[0x6]; // 0x9a2
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x9a8	
	CUtlSymbolLarge m_iszLerpEffect; // 0x9c0	
	CUtlSymbolLarge m_iszLerpSound; // 0x9c8	
	bool m_bAttachTouchingObject; // 0x9d0	
private:
	[[maybe_unused]] uint8_t __pad09d1[0x3]; // 0x9d1
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x9d4	
	CEntityIOOutput m_OnLerpStarted; // 0x9d8	
	CEntityIOOutput m_OnLerpFinished; // 0xa00	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

