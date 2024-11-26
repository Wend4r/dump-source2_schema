#pragma once

#include <cstdint>

struct CPathTrack;
struct CFuncTrackTrain;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8c8
// Has VTable
class CFuncTrackChange : public CFuncPlatRot
{
public:
	CPathTrack* m_trackTop; // 0x888	
	CPathTrack* m_trackBottom; // 0x890	
	CFuncTrackTrain* m_train; // 0x898	
	CUtlSymbolLarge m_trackTopName; // 0x8a0	
	CUtlSymbolLarge m_trackBottomName; // 0x8a8	
	CUtlSymbolLarge m_trainName; // 0x8b0	
	TRAIN_CODE m_code; // 0x8b8	
	int32_t m_targetState; // 0x8bc	
	int32_t m_use; // 0x8c0	
	
	// Datamap fields:
	// void CFuncTrackChangeFind; // 0x0
};

