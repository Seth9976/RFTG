// 函数名称: sub_5ce7a0
// 虚拟地址: 0x5ce7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_5ce7a0(int32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4, char* arg5)
{
    // 第一条实际指令: uint32_t numberOfCharsWritten = arg3
    uint32_t numberOfCharsWritten = arg3
    
    if (data_bedd00 == 0)
        if (AttachConsole(0xffffffff) != 0)
            data_bedd00 = 1
            data_bedd04 = GetStdHandle(STD_ERROR_HANDLE)
        else
            enum WIN32_ERROR eax_1 = GetLastError()
            
            if (eax_1 == ERROR_INVALID_HANDLE)
                OutputDebugStringW(u"Parent process has no console\r\n")
                data_bedd00 = 0xffffffff
            else if (eax_1 == ERROR_GEN_FAILURE)
                OutputDebugStringW(u"Could not attach to console of parent process\r\n")
                data_bedd00 = 0xffffffff
            else if (eax_1 == ERROR_ACCESS_DENIED)
                data_bedd00 = 1
                data_bedd04 = GetStdHandle(STD_ERROR_HANDLE)
            else
                OutputDebugStringW(u"Error attaching console\r\n")
                data_bedd00 = 0xffffffff
    
    void* edi = sub_5cd1b0(*((arg4 << 2) + &data_8b9760)) + sub_5cd1b0(arg5) + 5
    __alloca_probe_16(edi)
    char* var_18_1 = arg5
    int32_t var_1c_1 = *((arg4 << 2) + &data_8b9760)
    int32_t __saved_edi
    sub_5ce6a0(&__saved_edi, edi, "%s: %s\r\n")
    void* var_30 = sub_5cd1b0(&__saved_edi) + 1
    int32_t* var_34 = &__saved_edi
    PWSTR eax_10 = sub_5dd160("UTF-16LE", "UTF-8")
    OutputDebugStringW(eax_10)
    
    if (data_bedd00 == 1)
        int32_t nNumberOfCharsToWrite = lstrlenW(eax_10)
        
        if (WriteConsoleW(data_bedd04, eax_10, nNumberOfCharsToWrite, &numberOfCharsWritten, nullptr)
                == 0)
            OutputDebugStringW(u"Error calling WriteConsole\r\n")
        
        if (numberOfCharsWritten == 8)
            OutputDebugStringW(u"Insufficient heap memory to write message\r\n")
    
    PWSTR var_18_3 = eax_10
    sub_5d0af0()
    char* var_18_4 = arg5
    int32_t var_1c_3 = *((arg4 << 2) + &data_8b9760)
    return sub_5a8559(&data_8b80d0, "%s: %s\n")
}
