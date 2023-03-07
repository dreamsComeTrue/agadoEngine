#include "Common/EnginePCH.h"

namespace agado
{
    void AgadoEngine::Initialize()
    {
        std::cout << "agadoEngine initialization!\n";
    }

} // namespace agado

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}