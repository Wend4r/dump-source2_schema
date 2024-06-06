#pragma once

#include <cstdint>

struct CParticleCollectionFloatInput;
// Registered binary: particles.dll (project 'particles')
// Alignment: 8
// Size: 0x5e8
// Has VTable
// 
// MGetKV3ClassDefaults
class C_OP_ContinuousEmitter : public CParticleFunctionEmitter
{
public:
	// MPropertyFriendlyName "emission duration"
	CParticleCollectionFloatInput m_flEmissionDuration; // 0x1c0	
	// MPropertyFriendlyName "emission start time"
	CParticleCollectionFloatInput m_flStartTime; // 0x318	
	// MPropertyFriendlyName "emission rate"
	CParticleCollectionFloatInput m_flEmitRate; // 0x470	
	// MPropertyFriendlyName "scale emission to used control points"
	// MParticleMaxVersion "1"
	float m_flEmissionScale; // 0x5c8	
	// MPropertyFriendlyName "scale emission by parent particle count"
	float m_flScalePerParentParticle; // 0x5cc	
	// MPropertyFriendlyName "emit particles for parent particle events"
	bool m_bInitFromKilledParentParticles; // 0x5d0	
private:
	[[maybe_unused]] uint8_t __pad05d1[0x3]; // 0x5d1
public:
	// MPropertyFriendlyName "emission parent particle event type"
	// MPropertySuppressExpr "m_bInitFromKilledParentParticles == false"
	EventTypeSelection_t m_nEventType; // 0x5d4	
	// MPropertyFriendlyName "control point with snapshot data"
	int32_t m_nSnapshotControlPoint; // 0x5d8	
	// MPropertyFriendlyName "limit per update"
	int32_t m_nLimitPerUpdate; // 0x5dc	
	// MPropertyFriendlyName "force emit on first update"
	bool m_bForceEmitOnFirstUpdate; // 0x5e0	
	// MPropertyFriendlyName "force emit on last update"
	bool m_bForceEmitOnLastUpdate; // 0x5e1	
};
