/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for library osc
 *
 * This file has been generated by dub 2.2.2.
 */
#include "dub/dub.h"
#include "osc/osc.h"

using namespace osc;

extern "C" {
}

/** LuaStackSize osc::unpack(lua_State *L)
 * include/osc/osc.h:39
 */
static int osc_unpack(lua_State *L) {
  try {
    return osc::unpack(L);
  } catch (std::exception &e) {
    lua_pushfstring(L, "osc.unpack: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "osc.unpack: Unknown exception");
  }
  return lua_error(L);
}

/** LuaStackSize osc::pack(lua_State *L)
 * include/osc/osc.h:44
 */
static int osc_pack(lua_State *L) {
  try {
    return osc::pack(L);
  } catch (std::exception &e) {
    lua_pushfstring(L, "osc.pack: %s", e.what());
  } catch (...) {
    lua_pushfstring(L, "osc.pack: Unknown exception");
  }
  return lua_error(L);
}

// --=============================================== FUNCTIONS
static const struct luaL_Reg osc_functions[] = {
  { "unpack"       , osc_unpack           },
  { "pack"         , osc_pack             },
  { NULL, NULL},
};


DUB_EXPORT int luaopen_osc_core(lua_State *L) {
  lua_newtable(L);
  // <lib>
  dub::fregister(L, osc_functions);
  // <lib>

  
  // <lib>
  return 1;
}
