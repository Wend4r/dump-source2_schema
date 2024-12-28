#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xba0
// Has VTable
class C_LocalTempEntity : public CBaseAnimGraph
{
public:
	int32_t flags; // 0xaf8	
	GameTime_t die; // 0xafc	
	float m_flFrameMax; // 0xb00	
	float x; // 0xb04	
	float y; // 0xb08	
	float fadeSpeed; // 0xb0c	
	float bounceFactor; // 0xb10	
	int32_t hitSound; // 0xb14	
	int32_t priority; // 0xb18	
	Vector tentOffset; // 0xb1c	
	QAngle m_vecTempEntAngVelocity; // 0xb28	
	int32_t tempent_renderamt; // 0xb34	
	Vector m_vecNormal; // 0xb38	
	float m_flSpriteScale; // 0xb44	
	int32_t m_nFlickerFrame; // 0xb48	
	float m_flFrameRate; // 0xb4c	
	float m_flFrame; // 0xb50	
private:
	[[maybe_unused]] uint8_t __pad0b54[0x4]; // 0xb54
public:
	char* m_pszImpactEffect; // 0xb58	
	char* m_pszParticleEffect; // 0xb60	
	bool m_bParticleCollision; // 0xb68	
private:
	[[maybe_unused]] uint8_t __pad0b69[0x3]; // 0xb69
public:
	int32_t m_iLastCollisionFrame; // 0xb6c	
	Vector m_vLastCollisionOrigin; // 0xb70	
	Vector m_vecTempEntVelocity; // 0xb7c	
	Vector m_vecPrevAbsOrigin; // 0xb88	
	Vector m_vecTempEntAcceleration; // 0xb94	
};

