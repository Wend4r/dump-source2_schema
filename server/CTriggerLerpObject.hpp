#pragma once

#include <cstdint>

struct AttachmentHandle_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa20
// Has VTable
class CTriggerLerpObject : public CBaseTrigger
{
public:
	CUtlSymbolLarge m_iszLerpTarget; // 0x978	
	CHandle< CBaseEntity > m_hLerpTarget; // 0x980	
private:
	[[maybe_unused]] uint8_t __pad0984[0x4]; // 0x984
public:
	CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x988	
	AttachmentHandle_t m_hLerpTargetAttachment; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0991[0x3]; // 0x991
public:
	float m_flLerpDuration; // 0x994	
	bool m_bLerpRestoreMoveType; // 0x998	
	bool m_bSingleLerpObject; // 0x999	
private:
	[[maybe_unused]] uint8_t __pad099a[0x6]; // 0x99a
public:
	CUtlVector< lerpdata_t > m_vecLerpingObjects; // 0x9a0	
	CUtlSymbolLarge m_iszLerpEffect; // 0x9b8	
	CUtlSymbolLarge m_iszLerpSound; // 0x9c0	
	bool m_bAttachTouchingObject; // 0x9c8	
private:
	[[maybe_unused]] uint8_t __pad09c9[0x3]; // 0x9c9
public:
	CHandle< CBaseEntity > m_hEntityToWaitForDisconnect; // 0x9cc	
	CEntityIOOutput m_OnLerpStarted; // 0x9d0	
	CEntityIOOutput m_OnLerpFinished; // 0x9f8	
	
	// Datamap fields:
	// void CTriggerLerpObjectLerpThink; // 0x0
	// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
};

