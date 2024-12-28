#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b0
// Has VTable
// 
// MGetKV3ClassDefaults
class CitadelItemVData : public CitadelAbilityVData
{
private:
	[[maybe_unused]] uint8_t __pad1568[0x4]; // 0x1568
public:
	EModTier_t m_iItemTier; // 0x156c	
	int8_t m_nUpgradeSlotCost; // 0x156d	
	bool m_bWarnIfNoAffectedAbilities; // 0x156e	
	bool m_bRequiresChargedAbility; // 0x156f	
	bool m_bRequiresChanelledAbility; // 0x1570	
private:
	[[maybe_unused]] uint8_t __pad1571[0x7]; // 0x1571
public:
	CUtlVector< CSubclassName< 4 > > m_vecComponentItems; // 0x1578	
	bool m_bShowTextDescription; // 0x1590	
	bool m_bIsDefensiveItem; // 0x1591	
	EShopFilters_t m_eShopFilters; // 0x1592	
private:
	[[maybe_unused]] uint8_t __pad1594[0x4]; // 0x1594
public:
	// MPropertyFriendlyName "Item Tooltips"
	CUtlVector< ItemSectionInfo_t > m_vecTooltipSectionInfo; // 0x1598	
};

