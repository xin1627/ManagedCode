#include "pch.h"

#include "ManagedObject.h"

const char* CLI::string_to_char_array(String^ string)
{
    const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
    return str;
}

String^ CLI::char_to_string(const char* str) {
    return Marshal::PtrToStringAnsi((IntPtr)(char*)str);
}
