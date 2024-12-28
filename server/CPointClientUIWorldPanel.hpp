#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
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
class CPointClientUIWorldPanel : public CBaseClientUIEntity
{
public:
	// MNetworkEnable
	bool m_bIgnoreInput; // 0x968	
	// MNetworkEnable
	bool m_bLit; // 0x969	
	// MNetworkEnable
	bool m_bFollowPlayerAcrossTeleport; // 0x96a	
private:
	[[maybe_unused]] uint8_t __pad096b[0x1]; // 0x96b
public:
	// MNetworkEnable
	float m_flWidth; // 0x96c	
	// MNetworkEnable
	float m_flHeight; // 0x970	
	// MNetworkEnable
	float m_flDPI; // 0x974	
	// MNetworkEnable
	float m_flInteractDistance; // 0x978	
	// MNetworkEnable
	float m_flDepthOffset; // 0x97c	
	// MNetworkEnable
	uint32_t m_unOwnerContext; // 0x980	
	// MNetworkEnable
	uint32_t m_unHorizontalAlign; // 0x984	
	// MNetworkEnable
	uint32_t m_unVerticalAlign; // 0x988	
	// MNetworkEnable
	uint32_t m_unOrientation; // 0x98c	
	// MNetworkEnable
	bool m_bAllowInteractionFromAllSceneWorlds; // 0x990	
private:
	[[maybe_unused]] uint8_t __pad0991[0x7]; // 0x991
public:
	// MNetworkEnable
	CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // 0x998	
	// MNetworkEnable
	bool m_bOpaque; // 0x9b0	
	// MNetworkEnable
	bool m_bNoDepth; // 0x9b1	
	// MNetworkEnable
	bool m_bRenderBackface; // 0x9b2	
	// MNetworkEnable
	bool m_bUseOffScreenIndicator; // 0x9b3	
	// MNetworkEnable
	bool m_bExcludeFromSaveGames; // 0x9b4	
	// MNetworkEnable
	bool m_bGrabbable; // 0x9b5	
	// MNetworkEnable
	bool m_bOnlyRenderToTexture; // 0x9b6	
	// MNetworkEnable
	bool m_bDisableMipGen; // 0x9b7	
	// MNetworkEnable
	int32_t m_nExplicitImageLayout; // 0x9b8	
	
	// Datamap fields:
	// void InputIgnoreUserInput; // 0x0
	// void InputAcceptUserInput; // 0x0
	// CUtlSymbolLarge InputAddCSSClass; // 0x0
	// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
	// CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
};

