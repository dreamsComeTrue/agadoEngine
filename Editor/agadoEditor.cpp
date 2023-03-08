// Copyright AGADO Studio. All Rights Reserved.

#include "agadoEngine.h"
#include "Core/Log/Logger.h"

int main(int argc, char *argv[])
{
    agado::AgadoEngine::Get().Create();
    agado::AgadoEngine::Get().Destroy();
}