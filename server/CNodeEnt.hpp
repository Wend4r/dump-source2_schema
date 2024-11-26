#pragma once

#include <cstdint>

struct HullFlags_t;
struct HintNodeData;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x540
// Has VTable
class CNodeEnt : public CServerOnlyPointEntity
{
public:
	bool m_bDontDropNode; // 0x4e8	
	HullFlags_t m_HullForceFlags; // 0x4e9	
private:
	[[maybe_unused]] uint8_t __pad04f3[0x5]; // 0x4f3
public:
	HintNodeData m_NodeData; // 0x4f8	
	
	// Static fields:
	static int32_t &Get_m_nNodeCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNodeEnt")->m_static_fields[0]->m_instance);};
	
	// Datamap fields:
	// void m_pKeyValuesCopy; // 0x538
};

