//
// Created by yretenai on 2020-15-06.
//

#pragma once

#ifndef DRAGON_WAROFDRAGON_EXPORT_H
#define DRAGON_WAROFDRAGON_EXPORT_H
#ifdef _WIN32
#include "export_win32.h"
#else
#include "export_clang.h"
#endif
#endif