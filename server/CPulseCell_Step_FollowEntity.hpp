#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MCellForDomain
// MPulseCellMethodBindings
// MPulseCellOutflowHookInfo
// MPulseCellWithCustomDocNode
class CPulseCell_Step_FollowEntity : public CPulseCell_BaseFlow
{
public:
	CUtlString m_ParamBoneOrAttachName; // 0x48	
	CUtlString m_ParamBoneOrAttachNameChild; // 0x50	
};

