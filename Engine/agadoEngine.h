#ifndef _AGADO_ENGINE_H_
#define _AGADO_ENGINE_H_

#include "Common/CommonHeaders.h"

namespace agado
{
    /**
     * Entry point for an Engine DLL
     */
    class AGADOENGINE_API AgadoEngine
    {
    public:
        /**
         * Sets up the engine
         */
        void Initialize();
    };

} //  namespace agado

#endif // _AGADO_ENGINE_H_