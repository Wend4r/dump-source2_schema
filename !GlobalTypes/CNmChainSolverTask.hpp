#pragma once

#include <cstdint>

struct CNmTarget;
// Registered binary: animationsystem.dll (project 'animlib')
// Alignment: 16
// Size: 0x100
// Has VTable
class CNmChainSolverTask : public CNmTask
{
public:
	int32_t m_nEffectorBoneIdx; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0xc]; // 0x34
public:
	CTransform m_targetTransform; // 0x40	
	int32_t m_nNumBonesInChain; // 0x60	
private:
	[[maybe_unused]] uint8_t __pad0064[0xc]; // 0x64
public:
	CNmTarget m_effectorTarget; // 0x70	
	bool m_bIsTargetInWorldSpace; // 0xa0	
	bool m_bIsRunningFromDeserializedData; // 0xa1	
private:
	[[maybe_unused]] uint8_t __pad00a2[0x6]; // 0xa2
public:
	CGlobalSymbol m_debugEffectorBoneID; // 0xa8	
	CTransform m_chainStartTransformMS; // 0xb0	
	CTransform m_debugRequestedTargetTransformMS; // 0xd0	
	float m_debugTotalChainLength; // 0xf0	
};

