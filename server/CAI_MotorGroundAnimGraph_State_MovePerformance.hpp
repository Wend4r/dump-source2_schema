#pragma once

#include <cstdint>

struct AI_MovePerformance_DynamicSettings_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x60
// Has VTable
// Has Trivial Destructor
class CAI_MotorGroundAnimGraph_State_MovePerformance : public CAI_MotorGroundAnimGraph_State
{
public:
	CGlobalSymbol m_sHandshake; // 0x20	
	AI_MovePerformance_DynamicSettings_t m_dynamicSettings; // 0x28	
};

