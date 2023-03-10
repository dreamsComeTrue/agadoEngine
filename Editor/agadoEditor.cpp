// Copyright AGADO Studio. All Rights Reserved.

#include "agadoEngine.h"
#include "Core/Log/Logger.h"

int main(int argc, char *argv[])
{
    using namespace agado;
    
    AgadoEngine::Get().Create();
    
    Logger::Get().Debug("Hello from agadoEditor!");
    
    AgadoEngine::Get().Destroy();
}