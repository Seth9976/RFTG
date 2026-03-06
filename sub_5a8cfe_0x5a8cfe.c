// 函数名称: sub_5a8cfe
// 虚拟地址: 0x5a8cfe
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a8cfe(int32_t arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t var_4 = 0x58
    int32_t var_4 = 0x58
    int32_t var_8 = 0x8aa110
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ebp
    var_4 = ebp
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_2 = 0x8aa110 ^ __security_cookie_1
    int32_t var_7c = __security_cookie_1 ^ &var_4
    int32_t* var_1c = &var_7c
    void* const var_80_4 = &data_5a8d0a
    int32_t var_8_3 = 0xfffffffe
    int32_t var_c = var_8_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    STARTUPINFOW startupInfo
    GetStartupInfoW(&startupInfo)
    
    if (data_3166fe8 == 0)
        HeapSetInformation(nullptr, HeapEnableTerminationOnCorruption, nullptr, 0)
    
    int32_t var_20 = 0
    
    if (__heap_init() == 0)
        _fast_error_exit(0x1c)
        noreturn
    
    if (sub_5ad09b() == 0)
        _fast_error_exit(0x10)
        noreturn
    
    sub_5af437()
    int32_t var_8_1 = 0
    
    if (sub_5b0503() s< 0)
        __amsg_exit(0x1b)
        noreturn
    
    data_3166fe4 = GetCommandLineA()
    data_bec5c4 = sub_5b25ca()
    
    if (sub_5b250f() s< 0)
        __amsg_exit(8)
        noreturn
    
    if (sub_5b2299() s< 0)
        __amsg_exit(9)
        noreturn
    
    int32_t eax_7 = sub_5a76bb(1)
    
    if (eax_7 != 0)
        __amsg_exit(eax_7)
        noreturn
    
    char* eax_8 = __wincmdln()
    uint32_t wShowWindow
    
    if ((startupInfo.dwFlags.b & 1) == 0)
        int32_t var_80_2 = 0xa
        wShowWindow = 0xa
    else
        wShowWindow = zx.d(startupInfo.wShowWindow)
    
    uint32_t wShowWindow_1 = wShowWindow
    char* var_84 = eax_8
    uint32_t status = sub_51acf0(&__dos_header, SW_HIDE)
    uint32_t status_1 = status
    
    if (var_20 != 0)
        __cexit()
        int32_t entry_ebx
        return sub_5a8e5b(&var_4, arg2, arg1, entry_ebx) __tailcall
    
    _exit(status)
    noreturn
}
