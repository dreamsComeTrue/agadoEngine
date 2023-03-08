// Copyright AGADO Studio. All Rights Reserved.

#ifndef _LOGGER_H_
#define _LOGGER_H_

#include "Common/CommonHeaders.h"
#include "Core/Singleton.h"

namespace agado
{
#define LOG_SILENT 0
#define LOG_ERROR 1
#define LOG_WARNING 2
#define LOG_INFO 3
#define LOG_TIME 4
#define LOG_DEBUG 5
#define LOG_DEFAULT 4

#define LOG_TIME_TEXT "[  TIME   ]"
#define LOG_DEBUG_TEXT "[  DEBUG  ]"
#define LOG_ERROR_TEXT "[  ERROR  ]"
#define LOG_WARNING_TEXT "[ WARNING ]"
#define LOG_INFO_TEXT "[  INFO   ]"

    std::string FormatTime();
    std::string FormatLogLevel(unsigned int level);

    /**
     * Logs information to console/file
     */
    class AGADOENGINE_API Logger : public Singleton<Logger>
    {
        friend class Singleton<Logger>;

    private:
        unsigned int m_Level;
        std::ofstream *m_OutStream;
        std::ostream &m_ConsoleStream;

    private:
        Logger();
        ~Logger() = default;

        void LogToStreams() {}

        template <typename T, typename... Types>
        void LogToStreams(const T &logMessage, Types... messages)
        {
            if (m_OutStream)
            {
                (*m_OutStream) << logMessage;
            }

            m_ConsoleStream << logMessage;

            LogToStreams(messages...);
        }

    public:
        /**
         * Initializes basic logger configuration
         */
        void Create(const std::string &logPath);

        /**
         * Shuts down logger
         */
        void Destroy();

        /**
         * Logs data with INFO level
         */
        template <typename T>
        void Info(const T &logMessage)
        {
            LogToStreams(FormatTime(), " ", FormatLogLevel(LOG_INFO), " ", logMessage, "\n");
        }

        /**
         * Logs data with ERROR level
         */
        template <typename T>
        void Error(const T &logMessage)
        {
            LogToStreams(FormatTime(), " ", FormatLogLevel(LOG_ERROR), " ", logMessage, "\n");
        }

        /**
         * Logs data with DEBUG level
         */
        template <typename T>
        void Debug(const T &logMessage)
        {
            LogToStreams(FormatTime(), " ", FormatLogLevel(LOG_DEBUG), " ", logMessage, "\n");
        }
    };

} //  namespace agado

#endif //   _LOGGER_H_
