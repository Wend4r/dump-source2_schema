#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x578
// Has VTable
class CInfoDynamicShadowHint : public C_PointEntity
{
public:
	bool m_bDisabled; // 0x560	
private:
	[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
public:
	float m_flRange; // 0x564	
	int32_t m_nImportance; // 0x568	
	int32_t m_nLightChoice; // 0x56c	
	CHandle< C_BaseEntity > m_hLight; // 0x570	
	
	// Static fields:
	static CUtlVector< CInfoDynamicShadowHint* > &Get_m_AllHints(){return *reinterpret_cast<CUtlVector< CInfoDynamicShadowHint* >*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CInfoDynamicShadowHint")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void InputEnable; // 0x0
	// void InputDisable; // 0x0
};

