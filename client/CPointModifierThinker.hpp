#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
class CPointModifierThinker : public C_BaseEntity
{
public:
	CModifierHandleTyped< CCitadelModifier > m_hModifier; // 0x560	
	bool m_bSendToClients; // 0x578	
	
	// Datamap fields:
	// void CPointModifierThinkerOnModifierLost; // 0x0
};

