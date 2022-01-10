#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CLI {
    const char* string_to_char_array(String^ string);
    String^ char_to_string(const char* str);

    template<class T>
    public ref class ManagedObject
    {
    protected:
        T* m_Instance;
    public:
        ManagedObject(T* instance): m_Instance(instance)
        {
        }
        virtual ~ManagedObject()
        {
            if (m_Instance != nullptr)
            {
                delete m_Instance;
            }
        }
        !ManagedObject()
        {
            if (m_Instance != nullptr)
            {
                delete m_Instance;
            }
        }
        T* GetInstance()
        {
            return m_Instance;
        }
    };
}
