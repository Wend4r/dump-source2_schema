#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x528
// Has VTable
class CAI_Relationship : public CBaseEntity
{
private:
	[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
public:
	CUtlSymbolLarge m_iszSubject; // 0x4e8	
	CUtlSymbolLarge m_iszSubjectClass; // 0x4f0	
	Class_T m_nSubjectClassifyAs; // 0x4f8	
private:
	[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
public:
	CUtlSymbolLarge m_iszTargetClass; // 0x500	
	Class_T m_nTargetClassifyAs; // 0x508	
	int32_t m_iDisposition; // 0x50c	
	int32_t m_iRank; // 0x510	
	bool m_fStartActive; // 0x514	
	bool m_bIsActive; // 0x515	
private:
	[[maybe_unused]] uint8_t __pad0516[0x2]; // 0x516
public:
	int32_t m_iPreviousDisposition; // 0x518	
	float m_flRadius; // 0x51c	
	int32_t m_iPreviousRank; // 0x520	
	bool m_bReciprocal; // 0x524	
	
	// Datamap fields:
	// void CAI_RelationshipApplyRelationshipThink; // 0x0
	// void InputApplyRelationship; // 0x0
	// void InputRevertRelationship; // 0x0
	// void InputRevertToDefaultRelationship; // 0x0
};

