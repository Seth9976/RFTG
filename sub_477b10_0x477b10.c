// 函数名称: sub_477b10
// 虚拟地址: 0x477b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_477b10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69098e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165288 & 1) == 0)
        data_3165288.d |= 1
        int32_t var_8_1 = 0
        char const* const var_48_1 = "camera"
        char* edx
        data_3165284 = sub_510710(data_307ca3c, edx)
        int32_t var_8_2 = 0xffffffff
    
    void var_34
    float* entry_result
    __builtin_memcpy(entry_result, sub_50faa0(&var_34, data_3092a04, data_3165284, &var_34), 0x20)
    *entry_result = fconvert.s(float.t(1))
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_result
}
