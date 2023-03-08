// Copyright AGADO Studio. All Rights Reserved.

#include "Common/EnginePCH.h"

namespace agado
{
    std::string FormatTime()
    {
        struct tm t;

        std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
        time_t now = std::chrono::system_clock::to_time_t(tp);

        const std::chrono::duration<double> tse = tp.time_since_epoch();
        std::chrono::seconds::rep milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(tse).count() % 1000;

        localtime_s(&t, &now);

        std::string ms, s, m, h, D, M, Y;
        ms = std::to_string(milliseconds);
        s = std::to_string(t.tm_sec);
        m = std::to_string(t.tm_min);
        h = std::to_string(t.tm_hour);
        D = std::to_string(t.tm_mday);
        M = std::to_string(t.tm_mon + 1);
        Y = std::to_string(t.tm_year + 1900);

        if (t.tm_sec < 10)
        {
            s = "0" + s;
        }

        if (t.tm_min < 10)
        {
            m = "0" + m;
        }

        if (t.tm_hour < 10)
        {
            h = "0" + h;
        }

        if (t.tm_mday < 10)
        {
            D = "0" + D;
        }

        if (t.tm_mon + 1 < 10)
        {
            M = "0" + M;
        }

        std::string ret = "[ " + Y + "-" + M + "-" + D + " | " + h + ":" + m + ":" + s + "." + ms + " ]";

        return ret;
    }

    std::string FormatLogLevel(unsigned int level)
    {
        switch (level)
        {
        case LOG_ERROR:
            return LOG_ERROR_TEXT;
            break;
        case LOG_WARNING:
            return LOG_WARNING_TEXT;
            break;
        case LOG_INFO:
            return LOG_INFO_TEXT;
            break;
        case LOG_DEBUG:
            return LOG_DEBUG_TEXT;
            break;
        case LOG_TIME:
            return LOG_TIME_TEXT;
            break;
        default:
            return "";
        }
        return "";
    }

    Logger::Logger()
        : m_ConsoleStream(std::cout), m_OutStream(nullptr)
    {
    }

    void Logger::Create(const std::string &logPath)
    {
        m_OutStream = new std::ofstream(logPath.c_str(), std::ofstream::out);

        Info("Logger initialized!");
    }

    void Logger::Destroy()
    {
        if (m_OutStream)
        {
            m_OutStream->flush();
            m_OutStream->close();

            delete m_OutStream;
            m_OutStream = nullptr;
        }

        Info("Logger destroyed!");
    }
} // namespace agado