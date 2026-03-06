// 函数名称: sub_4342a0
// 虚拟地址: 0x4342a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4342a0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692ecc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_31658ac & 1) == 0)
        data_31658ac.d |= 1
        int32_t var_8_1 = 0
        char const* const var_48_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_31658a8 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31658ac & 2) == 0)
        data_31658ac.d |= 2
        int32_t var_8_3 = 1
        char const* const var_48_2 = "uiAnte"
        data_31658a4 = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    int32_t eax_7 = sub_50eb00(data_31658a8, 0)
    void var_34
    float* entry_result
    __builtin_memcpy(entry_result, sub_50faa0(eax_7, eax_7, data_31658a4, &var_34), 0x20)
    *entry_result = fconvert.s(fconvert.t(*entry_result) * fconvert.t(0.0010000000474974513))
    entry_result[1] = 0
    entry_result[2] = 0
    entry_result[3] = 0
    entry_result[4] = 0x3f800000
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_result
}
