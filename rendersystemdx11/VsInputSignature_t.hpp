#pragma once

#include <cstdint>

// Registered binary: rendersystemdx11.dll (project 'rendersystemdx11')
// Alignment: 8
// Size: 0x30
struct VsInputSignature_t
{
public:
	CUtlVector< VsInputSignatureElement_t > m_elems; // 0x0	
	CUtlVector< VsInputSignatureElement_t > m_depth_elems; // 0x18	
};

