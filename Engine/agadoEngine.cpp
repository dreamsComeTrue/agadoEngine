// Copyright AGADO Studio. All Rights Reserved.

#include "Common/EnginePCH.h"

namespace agado
{
    void AgadoEngine::Create()
    {
        Logger::Get().Create("Binaries/agadoEngine.log");
        
        Logger::Get().Info("Engine initialized!");
    }

    void AgadoEngine::Destroy()
    {
        Logger::Get().Info("Engine destroyed!");

        Logger::Get().Destroy();
    }

} // namespace agado
