#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15a8
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad1560[0x4]; // 0x1560
public:
	EModTier_t m_iItemTier; // 0x1564	
	int8_t m_nUpgradeSlotCost; // 0x1565	
	bool m_bWarnIfNoAffectedAbilities; // 0x1566	
	bool m_bRequiresChargedAbility; // 0x1567	
	bool m_bRequiresChanelledAbility; // 0x1568	
private:
	[[maybe_unused]] uint8_t __pad1569[0x7]; // 0x1569
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x1570	
	bool m_bShowTextDescription; // 0x1588	
	bool m_bIsDefensiveItem; // 0x1589	
	EShopFilters_t m_eShopFilters; // 0x158a	
private:
	[[maybe_unused]] uint8_t __pad158c[0x4]; // 0x158c
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x1590	
};

