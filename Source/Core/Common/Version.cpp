// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include "Common/Version.h"

#include <string>

#include "Common/scmrev.h"

namespace Common
{
#ifdef _DEBUG
#define BUILD_TYPE_STR "Debug "
#elif defined DEBUGFAST
#define BUILD_TYPE_STR "DebugFast "
#else
#define BUILD_TYPE_STR ""
#endif

const std::string primehack_ver = "1.0.3";
const std::string scm_rev_str = "PrimeHack Pre-Release [v"+primehack_ver+"]";

const std::string scm_rev_git_str = SCM_REV_STR;
const std::string scm_desc_str = SCM_DESC_STR;
const std::string scm_branch_str = SCM_BRANCH_STR;
const std::string scm_distributor_str = SCM_DISTRIBUTOR_STR;

#ifdef _WIN32
const std::string netplay_dolphin_ver = SCM_DESC_STR " Win";
#elif __APPLE__
const std::string netplay_dolphin_ver = SCM_DESC_STR " Mac";
#else
const std::string netplay_dolphin_ver = SCM_DESC_STR " Lin";
#endif
}  // namespace Common
