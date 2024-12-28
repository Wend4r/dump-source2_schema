#pragma once

#include <cstdint>

struct CAttributeContainer;
struct style_index_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe48
// Has VTable
// 
// MNetworkVarNames "CAttributeContainer m_AttributeManager"
class C_EconEntity : public C_BaseFlex
{
private:
	[[maybe_unused]] uint8_t __pad0c90[0x10]; // 0xc90
public:
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; // 0xca0	
	bool m_bClientside; // 0xdf8	
private:
	[[maybe_unused]] uint8_t __pad0df9[0x3]; // 0xdf9
public:
	EconEntityParticleDisableMode_t m_nDisableMode; // 0xdfc	
	bool m_bParticleSystemsCreated; // 0xe00	
	bool m_bForceDestroyAttachedParticlesImmediately; // 0xe01	
private:
	[[maybe_unused]] uint8_t __pad0e02[0x6]; // 0xe02
public:
	CUtlVector< C_EconEntity::AttachedParticleInfo_t > m_vecAttachedParticles; // 0xe08	
	CHandle< CBaseAnimGraph > m_hViewmodelAttachment; // 0xe20	
	int32_t m_iOldTeam; // 0xe24	
	bool m_bAttachmentDirty; // 0xe28	
	style_index_t m_iOldStyle; // 0xe29	
private:
	[[maybe_unused]] uint8_t __pad0e2a[0x2]; // 0xe2a
public:
	CHandle< C_BaseEntity > m_hOldProvidee; // 0xe2c	
	CUtlVector< C_EconEntity::AttachedModelData_t > m_vecAttachedModels; // 0xe30	
};

