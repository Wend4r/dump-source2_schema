#pragma once

#include <cstdint>

struct GameTime_t;
struct CEntityIOOutput;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x910
// Has VTable
class CFuncTrackTrain : public CBaseModelEntity
{
public:
	CHandle< CPathTrack > m_ppath; // 0x7c0	
	float m_length; // 0x7c4	
	Vector m_vPosPrev; // 0x7c8	
	QAngle m_angPrev; // 0x7d4	
	Vector m_controlMins; // 0x7e0	
	Vector m_controlMaxs; // 0x7ec	
	Vector m_lastBlockPos; // 0x7f8	
	int32_t m_lastBlockTick; // 0x804	
	float m_flVolume; // 0x808	
	float m_flBank; // 0x80c	
	float m_oldSpeed; // 0x810	
	float m_flBlockDamage; // 0x814	
	float m_height; // 0x818	
	float m_maxSpeed; // 0x81c	
	float m_dir; // 0x820	
private:
	[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
public:
	CUtlSymbolLarge m_iszSoundMove; // 0x828	
	CUtlSymbolLarge m_iszSoundMovePing; // 0x830	
	CUtlSymbolLarge m_iszSoundStart; // 0x838	
	CUtlSymbolLarge m_iszSoundStop; // 0x840	
	CUtlSymbolLarge m_strPathTarget; // 0x848	
	float m_flMoveSoundMinDuration; // 0x850	
	float m_flMoveSoundMaxDuration; // 0x854	
	GameTime_t m_flNextMoveSoundTime; // 0x858	
	float m_flMoveSoundMinPitch; // 0x85c	
	float m_flMoveSoundMaxPitch; // 0x860	
	TrainOrientationType_t m_eOrientationType; // 0x864	
	TrainVelocityType_t m_eVelocityType; // 0x868	
private:
	[[maybe_unused]] uint8_t __pad086c[0xc]; // 0x86c
public:
	CEntityIOOutput m_OnStart; // 0x878	
	CEntityIOOutput m_OnNext; // 0x8a0	
	CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x8c8	
	bool m_bManualSpeedChanges; // 0x8f0	
private:
	[[maybe_unused]] uint8_t __pad08f1[0x3]; // 0x8f1
public:
	float m_flDesiredSpeed; // 0x8f4	
	GameTime_t m_flSpeedChangeTime; // 0x8f8	
	float m_flAccelSpeed; // 0x8fc	
	float m_flDecelSpeed; // 0x900	
	bool m_bAccelToSpeed; // 0x904	
private:
	[[maybe_unused]] uint8_t __pad0905[0x3]; // 0x905
public:
	GameTime_t m_flNextMPSoundTime; // 0x908	
	
	// Datamap fields:
	// int64_t m_soundMoveGuid; // 0x86c
	// void InputStop; // 0x0
	// void InputStartForward; // 0x0
	// void InputStartBackward; // 0x0
	// void InputToggle; // 0x0
	// void InputResume; // 0x0
	// void InputReverse; // 0x0
	// float InputSetSpeed; // 0x0
	// float InputSetSpeedDir; // 0x0
	// float InputSetSpeedReal; // 0x0
	// float InputSetMaxSpeed; // 0x0
	// float InputSetSpeedDirAccel; // 0x0
	// CUtlSymbolLarge InputMoveToPathNode; // 0x0
	// CUtlSymbolLarge InputTeleportToPathNode; // 0x0
	// void InputLockOrientation; // 0x0
	// void InputUnlockOrientation; // 0x0
	// void CFuncTrackTrainNext; // 0x0
	// void CFuncTrackTrainFind; // 0x0
	// void CFuncTrackTrainNearestPath; // 0x0
	// void CFuncTrackTrainDeadEnd; // 0x0
	// int32_t volume; // 0x7fffffff
};

