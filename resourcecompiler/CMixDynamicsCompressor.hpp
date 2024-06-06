#pragma once

#include <cstdint>

struct VMixDynamicsCompressorDesc_t;
// Registered binary: resourcecompiler.dll (project 'sounddoc_lib')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "VMix Compressor/Limiter Node"
// MPropertyDescription "Compress the dynamic range of a signal when it is louder than some threshold."
class CMixDynamicsCompressor : public CMixPropertyBase
{
public:
	// MPropertyFriendlyName "Channels"
	// MPropertyAttributeChoiceName "processor_channels"
	int32_t m_nChannels; // 0x20	
	// MPropertyAutoExpandSelf
	VMixDynamicsCompressorDesc_t m_desc; // 0x24	
	int32_t m_nUIPage; // 0x48	
	bool m_bIsLimiter; // 0x4c	
};

