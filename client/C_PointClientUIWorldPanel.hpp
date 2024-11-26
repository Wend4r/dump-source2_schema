#pragma once

#include <cstdint>

struct CPointOffScreenIndicatorUi;
// Registered binary: client.dll (project 'client')
// Alignment: 16
// Size: 0xac0
// Has VTable
// 
// MEntityAllowsPortraitWorldSpawn
// MNetworkVarNames "bool m_bIgnoreInput"
// MNetworkVarNames "bool m_bLit"
// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
// MNetworkVarNames "float m_flWidth"
// MNetworkVarNames "float m_flHeight"
// MNetworkVarNames "float m_flDPI"
// MNetworkVarNames "float m_flInteractDistance"
// MNetworkVarNames "float m_flDepthOffset"
// MNetworkVarNames "uint32 m_unOwnerContext"
// MNetworkVarNames "uint32 m_unHorizontalAlign"
// MNetworkVarNames "uint32 m_unVerticalAlign"
// MNetworkVarNames "uint32 m_unOrientation"
// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
// MNetworkVarNames "string_t m_vecCSSClasses"
// MNetworkVarNames "bool m_bOpaque"
// MNetworkVarNames "bool m_bNoDepth"
// MNetworkVarNames "bool m_bRenderBackface"
// MNetworkVarNames "bool m_bUseOffScreenIndicator"
// MNetworkVarNames "bool m_bExcludeFromSaveGames"
// MNetworkVarNames "bool m_bGrabbable"
// MNetworkVarNames "bool m_bOnlyRenderToTexture"
// MNetworkVarNames "bool m_bDisableMipGen"
// MNetworkVarNames "int32 m_nExplicitImageLayout"
class C_PointClientUIWorldPanel : public C_BaseClientUIEntity
{
private:
	[[maybe_unused]] uint8_t __pad0890[0x8]; // 0x890
public:
	bool m_bForceRecreateNextUpdate; // 0x898	
	bool m_bMoveViewToPlayerNextThink; // 0x899	
	bool m_bCheckCSSClasses; // 0x89a	
private:
	[[maybe_unused]] uint8_t __pad089b[0x5]; // 0x89b
public:
	CTransform m_anchorDeltaTransform; // 0x8a0	
private:
	[[maybe_unused]] uint8_t __pad08c0[0x178]; // 0x8c0
public:
	CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xa38	
private:
	[[maybe_unused]] uint8_t __pad0a40[0x20]; // 0xa40
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0xa60	
	// MNetworkEnable
	bool m_bLit; // 0xa61	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0xa62	
private:
	[[maybe_unused]] uint8_t __pad0a63[0x1]; // 0xa63
public:
	// MNetworkEnable
	float m_flWidth; // 0xa64	
	// MNetworkEnable
	float m_flHeight; // 0xa68	
	// MNetworkEnable
	float m_flDPI; // 0xa6c	
	// MNetworkEnable
	float m_flInteractDistance; // 0xa70	
	// MNetworkEnable
	float m_flDepthOffset; // 0xa74	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0xa78	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0xa7c	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0xa80	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0xa84	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0xa88	
private:
	[[maybe_unused]] uint8_t __pad0a89[0x7]; // 0xa89
public:
	// MNetworkEnable
	C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0xa90	
	// MNetworkEnable
	bool m_bOpaque; // 0xaa8	
	// MNetworkEnable
	bool m_bNoDepth; // 0xaa9	
	// MNetworkEnable
	bool m_bRenderBackface; // 0xaaa	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0xaab	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0xaac	
	// MNetworkEnable
	bool m_bGrabbable; // 0xaad	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0xaae	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0xaaf	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0xab0	
	
	// Datamap fields:
	// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xa30
};

