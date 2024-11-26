#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x530
// Has VTable
class CAI_Relationship : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e8[0x8]; // 0x4e8
public:
	CUtlSymbolLarge m_iszSubject; // 0x4f0	
	CUtlSymbolLarge m_iszSubjectClass; // 0x4f8	
	Class_T m_nSubjectClassifyAs; // 0x500	
private:
	[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
public:
	CUtlSymbolLarge m_iszTargetClass; // 0x508	
	Class_T m_nTargetClassifyAs; // 0x510	
	int32_t m_iDisposition; // 0x514	
	int32_t m_iRank; // 0x518	
	bool m_fStartActive; // 0x51c	
	bool m_bIsActive; // 0x51d	
private:
	[[maybe_unused]] uint8_t __pad051e[0x2]; // 0x51e
public:
	int32_t m_iPreviousDisposition; // 0x520	
	float m_flRadius; // 0x524	
	int32_t m_iPreviousRank; // 0x528	
	bool m_bReciprocal; // 0x52c	
	
	// Datamap fields:
	// void CAI_RelationshipApplyRelationshipThink; // 0x0
	// void InputApplyRelationship; // 0x0
	// void InputRevertRelationship; // 0x0
	// void InputRevertToDefaultRelationship; // 0x0
};

