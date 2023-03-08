// Copyright AGADO Studio. All Rights Reserved.

#ifndef _AGADO_ENGINE_H_
#define _AGADO_ENGINE_H_

#include "Common/CommonHeaders.h"
#include "Core/Singleton.h"

namespace agado
{
    /**
     * Entry point for an Engine DLL
     */
    class AGADOENGINE_API AgadoEngine : public Singleton<AgadoEngine>
    {
        friend class Singleton<AgadoEngine>;

    private:
        AgadoEngine() = default;
        ~AgadoEngine() = default;

    public:
        /**
         * Sets up the engine
         */
        void Create();

        /**
         * Destroys the engine instance
         */
        void Destroy();
    };

} //  namespace agado

#endif // _AGADO_ENGINE_H_