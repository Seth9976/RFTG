// 函数名称: sub_4c53a0
// 虚拟地址: 0x4c53a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c53a0(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    sub_4c57f0("creating minidump")
    char* eax_3 = sub_4c6050()
    sub_4ffc50(eax_3)
    SYSTEMTIME systemTime
    GetSystemTime(&systemTime)
    int32_t edi = 0
    void fileName
    HANDLE eax_6
    
    while (true)
        int32_t var_14c_1 = edi
        uint32_t wSecond = zx.d(systemTime.wSecond)
        uint32_t wMinute = zx.d(systemTime.wMinute)
        uint32_t wHour = zx.d(systemTime.wHour)
        uint32_t wDay = zx.d(systemTime.wDay)
        uint32_t wMonth = zx.d(systemTime.wMonth)
        uint32_t wYear = zx.d(systemTime.wYear)
        char* var_168_1 = eax_3
        sub_5a733b(&fileName, "%sminidump_%4d%02d%02d_%02d%02d%02d_%02d.dmp")
        eax_6 = CreateFileA(&fileName, 0x40000000, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, 
            FILE_ATTRIBUTE_NORMAL, nullptr)
        
        if (eax_6 != 0xffffffff)
            break
        
        edi += 1
        
        if (edi s>= 0xa)
            sub_4c57f0("Can't create minidump file handle")
            break
    
    struct MINIDUMP_EXCEPTION_INFORMATION ExceptionParam
    ExceptionParam.ThreadId = GetCurrentThreadId()
    ExceptionParam.ExceptionPointers = arg1
    ExceptionParam.ClientPointers = 0
    BOOL eax_10 = MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(), eax_6, MiniDumpNormal, 
        &ExceptionParam, nullptr, nullptr)
    CloseHandle(eax_6)
    char const* const var_150_1
    
    if (eax_10 == 0)
        void* var_14c_4 = &fileName
        var_150_1 = "saved to write minidump file %s"
    else
        void* var_14c_3 = &fileName
        var_150_1 = "wrote minidump file %s"
    
    int32_t result = sub_4c57f0(var_150_1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
