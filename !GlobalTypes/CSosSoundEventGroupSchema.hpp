#pragma once

#include <cstdint>

struct CSosGroupMatchPattern;
struct CSosGroupBranchPattern;
// Registered binary: soundsystem.dll (project 'soundsystem')
// Alignment: 8
// Size: 0xe0
// 
// MGetKV3ClassDefaults
// MPropertyElementNameFn
class CSosSoundEventGroupSchema
{
public:
	// MPropertyFriendlyName "Group Name"
	CUtlString m_name; // 0x0	
	// MPropertyFriendlyName "Group Type"
	SosGroupType_t m_nType; // 0x8	
	// MPropertyFriendlyName "Blocks Events"
	bool m_bIsBlocking; // 0xc	
private:
	[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
public:
	// MPropertyFriendlyName "Block Max Count"
	int32_t m_nBlockMaxCount; // 0x10	
	// MPropertyFriendlyName "Invert Match"
	bool m_bInvertMatch; // 0x14	
private:
	[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
public:
	// MPropertyFriendlyName "Match Rules"
	// -> m_matchSoundEventName - 0x28
	// -> m_matchSoundEventSubString - 0x30
	// -> m_flEntIndex - 0x38
	// -> m_flOpvar - 0x3c
	// -> m_opvarString - 0x40
	CSosGroupMatchPattern m_matchPattern; // 0x18	
	// MPropertyFriendlyName "Branch Rules"
	// -> m_bMatchEventName - 0x50
	// -> m_bMatchEventSubString - 0x51
	// -> m_bMatchEntIndex - 0x52
	// -> m_bMatchOpvar - 0x53
	// -> m_bMatchString - 0x54
	CSosGroupBranchPattern m_branchPattern; // 0x48	
	// MPropertyFriendlyName "Member Lifespan Time"
	float m_flLifeSpanTime; // 0x58	
private:
	[[maybe_unused]] uint8_t __pad005c[0x64]; // 0x5c
public:
	// MPropertyFriendlyName "Actions"
	CSosGroupActionSchema* m_vActions[4]; // 0xc0	
};

