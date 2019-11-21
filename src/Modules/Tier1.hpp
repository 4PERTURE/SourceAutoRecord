#pragma once
#include "Module.hpp"

#include "Interface.hpp"
#include "Utils.hpp"

#ifdef _WIN32
#define TIER1 "vstdlib"
#else
#define TIER1 "libvstdlib"
#endif

class Tier1 : public Module {
public:
    Interface* g_pCVar = nullptr;

    _RegisterConCommand RegisterConCommand = nullptr;
    _UnregisterConCommand UnregisterConCommand = nullptr;
    _FindCommandBase FindCommandBase = nullptr;
    _InstallGlobalChangeCallback InstallGlobalChangeCallback = nullptr;
    _RemoveGlobalChangeCallback RemoveGlobalChangeCallback = nullptr;

    ConCommandBase* m_pConCommandList = nullptr;

    void* ConCommand_VTable = nullptr;
    void* ConVar_VTable = nullptr;
    void* ConVar_VTable2 = nullptr;
    _AutoCompletionFunc AutoCompletionFunc = nullptr;

#ifdef _WIN32
    using _Dtor = int(__func*)(ConVar* thisptr, char a2);
#else
    using _Dtor = int(__func*)(ConVar* thisptr);
#endif
    using _Create = int(__func*)(ConVar* thisptr, const char* pName, const char* pDefaultValue, int flags, const char* pHelpString, bool bMin, float fMin, bool bMax,
        float fMax, FnChangeCallback_t callback);
    using _Create2 = int(__func*)(ConVar* thisptr, const char* pName, const char* pDefaultValue, int flags, const char* pHelpString, bool bMin, float fMin, bool bMax,
        float fMax, FnChangeCallback_t callback, int unk0, int unk1, int unk2, int unk3);

    _Dtor Dtor = nullptr;
    _Create Create = nullptr;
    _Create2 Create2 = nullptr;

public:
    bool Init() override;
    void Shutdown() override;
    const char* Name() override { return MODULE(TIER1); }
};

extern Tier1* tier1;

struct CBaseAutoCompleteFileList {
    const char* m_pszCommandName;
    const char* m_pszSubDir;
    const char* m_pszExtension;

    CBaseAutoCompleteFileList(const char* cmdname, const char* subdir, const char* extension);
    int AutoCompletionFunc(char const* partial, char commands[COMMAND_COMPLETION_MAXITEMS][COMMAND_COMPLETION_ITEM_LENGTH]);
};
