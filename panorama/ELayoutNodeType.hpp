#pragma once

#include <cstdint>

// Registered binary: panorama.dll (project 'panorama_content')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class ELayoutNodeType : uint32_t
{
	ROOT = 0x0,
	STYLES = 0x1,
	SCRIPT_BODY = 0x2,
	SCRIPTS = 0x3,
	SNIPPETS = 0x4,
	INCLUDE = 0x5,
	SNIPPET = 0x6,
	PANEL = 0x7,
	PANEL_ATTRIBUTE = 0x8,
	PANEL_ATTRIBUTE_VALUE = 0x9,
	REFERENCE_CONTENT = 0xa,
	REFERENCE_COMPILED = 0xb,
	REFERENCE_PASSTHROUGH = 0xc,
};

