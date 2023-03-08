// Copyright AGADO Studio. All Rights Reserved.

#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include "Common/CommonHeaders.h"

namespace agado
{
    /**
     * Singleton is a class which allows only one instance to be available globally
     */
    template <typename T>
    class AGADOENGINE_API Singleton
    {
    protected:
        inline static T *m_Instance{nullptr};
        Singleton() = default;
        ~Singleton() = default;

    public:
        Singleton(const Singleton &) = delete;
        Singleton &operator=(const Singleton &) = delete;

        static T &Get()
        {
            if (!m_Instance)
            {
                m_Instance = new T();
            }

            return *m_Instance;
        }

        static T *GetPtr()
        {
            if (!m_Instance)
            {
                m_Instance = new T();
            }

            return m_Instance;
        }
    };

} //  namespace agado

#endif //   _SINGLETON_H_
