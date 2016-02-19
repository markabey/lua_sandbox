/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/** Hindsight Heka JSON structures @file */

#ifndef luasandbox_heka_json_h_
#define luasandbox_heka_json_h_

#ifdef __cplusplus
extern "C"
{
#endif

#include "lua.h"
#include "luasandbox/util/heka_message.h"
#include "lauxlib.h"

extern const char *mozsvc_heka_json;
extern const char *mozsvc_heka_json_table;

int luaopen_heka_json(lua_State *lua);

#ifdef __cplusplus
}
#endif

#endif
