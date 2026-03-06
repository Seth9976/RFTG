// 函数名称: sub_4c5870
// 虚拟地址: 0x4c5870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c5870(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xfffffffe
    int32_t var_8 = 0xfffffffe
    int32_t var_c = 0x8aa7e8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_c_1 = var_c ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie_1 ^ &__saved_ebp
    int32_t var_858 = eax_1
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_1c = &var_858
    void var_420
    
    if (*arg1 == 0)
        int32_t var_85c_1 = arg4
        int32_t var_860_1 = arg3
        int32_t var_864_1 = arg5
        int32_t var_868_1 = arg2
        sub_4c5660(arg4, &var_420, 0x400, "\nassertion failed\n%s\n%s (%s:%d)\n")
    else
        int32_t var_85c = arg4
        int32_t var_860 = arg3
        int32_t var_864 = arg5
        int32_t var_868 = arg2
        char* var_86c_1 = arg1
        sub_4c5660(arg1, &var_420, 0x400, "\nassertion failed '%s'\n%s\n%s (%s:%d)\n")
    
    void* lpOutputString = &var_420
    
    if (IsDebuggerPresent() == 1)
        int32_t result = OutputDebugStringA(lpOutputString)
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c56f0(lpOutputString)
    int32_t var_8_1 = 0
    RaiseException(0xc0000025, 1, 0, nullptr)
    noreturn
}
