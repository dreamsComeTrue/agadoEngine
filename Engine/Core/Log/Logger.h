// Copyright AGADO Studio. All Rights Reserved.

#ifndef _LOGGER_H_
#define _LOGGER_H_

#include "Common/CommonHeaders.h"

namespace agado
{
    /**
     * Logs information to console/file
     */
    class AGADOENGINE_API Logger : public Singleton<Logger>
    {
        friend class Singleton<Logger>;

    private:
        Logger() = default;
        ~Logger() = default;

    public:
        /**
         * Initializes basic logger configuration
         */
        void Initialize();

        /**
         * Shuts down logger
         */
        void Destroy();
    };

} //  namespace agado

#endif //   _LOGGER_H_
