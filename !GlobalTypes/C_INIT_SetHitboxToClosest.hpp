#pragma once

#include <cstdint>

struct CParticleCollectionVecInput;
struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0xa38
// Has VTable
// 
// MGetKV3ClassDefaults
class C_INIT_SetHitboxToClosest : public CParticleFunctionInitializer
{
public:
	// MPropertyFriendlyName "control point number"
	int32_t m_nControlPointNumber; // 0x1c8	
	// MPropertyFriendlyName "desired hitbox"
	int32_t m_nDesiredHitbox; // 0x1cc	
	// MPropertyFriendlyName "model hitbox scale"
	CParticleCollectionVecInput m_vecHitBoxScale; // 0x1d0	
	// MPropertyFriendlyName "hitbox set"
	char m_HitboxSetName[128]; // 0x848	
	// MPropertyFriendlyName "use bones instead of hitboxes"
	bool m_bUseBones; // 0x8c8	
	// MPropertyFriendlyName "get closest point on closest hitbox"
	bool m_bUseClosestPointOnHitbox; // 0x8c9	
private:
	[[maybe_unused]] uint8_t __pad08ca[0x2]; // 0x8ca
public:
	// MPropertyFriendlyName "closest point test type"
	ClosestPointTestType_t m_nTestType; // 0x8cc	
	// MPropertyFriendlyName "hybrid ratio"
	CParticleCollectionFloatInput m_flHybridRatio; // 0x8d0	
	// MPropertyFriendlyName "set initial position"
	bool m_bUpdatePosition; // 0xa30	
};

