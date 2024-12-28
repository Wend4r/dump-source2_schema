#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8f8
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	matrix3x4_t m_matPanelTransform; // 0x7b8	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x7e8	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x818	
	Vector2D m_PanelSize; // 0x830	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x838	
	GameTime_t m_flLastCleanupTime; // 0x83c	
	GameTime_t m_flInitAtTime; // 0x840	
	float m_flGlassThickness; // 0x844	
	float m_flSpawnInvulnerability; // 0x848	
	bool m_bBreakSilent; // 0x84c	
	bool m_bBreakShardless; // 0x84d	
	bool m_bBroken; // 0x84e	
	bool m_bGlassNavIgnore; // 0x84f	
	bool m_bGlassInFrame; // 0x850	
	bool m_bStartBroken; // 0x851	
	uint8_t m_iInitialDamageType; // 0x852	
private:
	[[maybe_unused]] uint8_t __pad0853[0x5]; // 0x853
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x858	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x860	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x868	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x870	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x878	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x890	
	CUtlVector< Vector4D > m_vInitialPanelVertices; // 0x8a8	
	CEntityIOOutput m_OnBroken; // 0x8c0	
	uint8_t m_iSurfaceType; // 0x8e8	
private:
	[[maybe_unused]] uint8_t __pad08e9[0x7]; // 0x8e9
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // 0x8f0	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};

