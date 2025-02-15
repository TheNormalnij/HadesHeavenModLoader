//
// Copyright (c) Uladzislau Nikalayevich <thenormalnij@gmail.com>. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for details.
//

#pragma once

#include <filesystem>

class lua_State;

class LuaManager {
  public:
    static void Reinit();
    static bool LoadScriptFile(const std::filesystem::path &path);
    static lua_State *GetLuaState();
};
