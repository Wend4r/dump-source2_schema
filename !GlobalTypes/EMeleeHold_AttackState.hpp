#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Enumerator count: 6
// Alignment: 4
// Size: 0x4
enum class EMeleeHold_AttackState : uint32_t
{
	EAttackState_None = 0x0,
	EAttackState_Charging = 0x1,
	EAttackState_GroundDashing = 0x2,
	EAttackState_AirDashing = 0x3,
	EAttackState_Attacking = 0x4,
	EAttackState_SlideDashing = 0x5,
};

