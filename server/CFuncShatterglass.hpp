#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x900
// Has VTable
class CFuncShatterglass : public CBaseModelEntity
{
public:
	matrix3x4_t m_matPanelTransform; // 0x7c0	
	matrix3x4_t m_matPanelTransformWsTemp; // 0x7f0	
	CUtlVector< uint32 > m_vecShatterGlassShards; // 0x820	
	Vector2D m_PanelSize; // 0x838	
	GameTime_t m_flLastShatterSoundEmitTime; // 0x840	
	GameTime_t m_flLastCleanupTime; // 0x844	
	GameTime_t m_flInitAtTime; // 0x848	
	float m_flGlassThickness; // 0x84c	
	float m_flSpawnInvulnerability; // 0x850	
	bool m_bBreakSilent; // 0x854	
	bool m_bBreakShardless; // 0x855	
	bool m_bBroken; // 0x856	
	bool m_bGlassNavIgnore; // 0x857	
	bool m_bGlassInFrame; // 0x858	
	bool m_bStartBroken; // 0x859	
	uint8_t m_iInitialDamageType; // 0x85a	
private:
	[[maybe_unused]] uint8_t __pad085b[0x5]; // 0x85b
public:
	CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x860	
	CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x868	
	CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x870	
	CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x878	
	CUtlVector< Vector > m_vInitialDamagePositions; // 0x880	
	CUtlVector< Vector > m_vExtraDamagePositions; // 0x898	
	CUtlVector< Vector4D > m_vInitialPanelVertices; // 0x8b0	
	CEntityIOOutput m_OnBroken; // 0x8c8	
	uint8_t m_iSurfaceType; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x7]; // 0x8f1
public:
	CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterialDamageBase; // 0x8f8	
	
	// Datamap fields:
	// void CFuncShatterglassGlassThink; // 0x0
	// void InputHit; // 0x0
	// void InputShatter; // 0x0
	// void InputRestore; // 0x0
};

