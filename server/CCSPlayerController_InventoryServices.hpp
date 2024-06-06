#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xfc0
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_unMusicID"
// MNetworkVarNames "MedalRank_t m_rank"
// MNetworkVarNames "int m_nPersonaDataPublicLevel"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsLeader"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsTeacher"
// MNetworkVarNames "int m_nPersonaDataPublicCommendsFriendly"
// MNetworkVarNames "int m_nPersonaDataXpTrailLevel"
// MNetworkVarNames "ServerAuthoritativeWeaponSlot_t m_vecServerAuthoritativeWeaponSlots"
class CCSPlayerController_InventoryServices : public CPlayerControllerComponent
{
public:
	// MNetworkEnable
	uint16_t m_unMusicID; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0042[0x2]; // 0x42
public:
	// MNetworkEnable
	MedalRank_t m_rank[6]; // 0x44	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicLevel; // 0x5c	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsLeader; // 0x60	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsTeacher; // 0x64	
	// MNetworkEnable
	int32_t m_nPersonaDataPublicCommendsFriendly; // 0x68	
	// MNetworkEnable
	int32_t m_nPersonaDataXpTrailLevel; // 0x6c	
private:
	[[maybe_unused]] uint8_t __pad0070[0xed8]; // 0x70
public:
	uint32_t m_unEquippedPlayerSprayIDs[1]; // 0xf48	
private:
	[[maybe_unused]] uint8_t __pad0f4c[0x4]; // 0xf4c
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CUtlVectorEmbeddedNetworkVar< ServerAuthoritativeWeaponSlot_t > m_vecServerAuthoritativeWeaponSlots; // 0xf50	
};

