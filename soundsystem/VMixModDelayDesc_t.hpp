#pragma once

#include <cstdint>

struct VMixFilterDesc_t;
// Registered binary: soundsystem.dll (project 'soundsystem_lowlevel')
// Alignment: 4
// Size: 0x30
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
struct VMixModDelayDesc_t
{
public:
	VMixFilterDesc_t m_feedbackFilter; // 0x0	
	bool m_bPhaseInvert; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
public:
	float m_flGlideTime; // 0x14	
	float m_flDelay; // 0x18	
	float m_flOutputGain; // 0x1c	
	float m_flFeedbackGain; // 0x20	
	float m_flModRate; // 0x24	
	float m_flModDepth; // 0x28	
	bool m_bApplyAntialiasing; // 0x2c	
};

