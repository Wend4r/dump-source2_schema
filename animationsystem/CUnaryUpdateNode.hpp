#pragma once

#include <cstdint>

struct CAnimUpdateNodeRef;
// Registered binary: animationsystem.dll (project 'animgraphlib')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
class CUnaryUpdateNode : public CAnimUpdateNodeBase
{
private:
	[[maybe_unused]] uint8_t __pad0058[0x8]; // 0x58
public:
	CAnimUpdateNodeRef m_pChildNode; // 0x60	
};

