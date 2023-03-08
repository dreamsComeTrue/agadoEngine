// Copyright AGADO Studio. All Rights Reserved.

#include <iostream>

#include "agadoEngine.h"

int main(int argc, char *argv[])
{
    agado::AgadoEngine engine;
    engine.Init();

    engine.Destroy();
}