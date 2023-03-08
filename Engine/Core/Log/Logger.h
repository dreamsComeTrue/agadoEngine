// Copyright AGADO Studio. All Rights Reserved.

#ifndef _LOGGER_H_
#define _LOGGER_H_

#include "Common/CommonHeaders.h"

namespace agado
{
    /**
     * Logs information to console/file
     */
    class AGADOENGINE_API Logger
    {
    private:
        inline static Logger *m_LogInstance{nullptr};
        Logger() = default;
        ~Logger() = default;

    public:
        Logger(const Logger &) = delete;
        Logger &operator=(const Logger &) = delete;

        static Logger *Get()
        {
            if (!m_LogInstance)
            {
                m_LogInstance = new Logger();
            }

            return m_LogInstance;
        }

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
