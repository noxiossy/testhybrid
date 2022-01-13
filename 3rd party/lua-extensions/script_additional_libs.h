#pragma once

#include "../../xray/build_config_defines.h"

#include "../luajit/src/lua.hpp"

#include <cstdlib>
#include <cctype>

typedef unsigned long DWORD;
typedef unsigned char BYTE;

void open_additional_libs(lua_State*);