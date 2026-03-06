// 函数名称: sub_41a210
// 虚拟地址: 0x41a210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41a210(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693b4e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    
    if ((data_3165a64 & 1) == 0)
        data_3165a64.d |= 1
        int32_t var_8_1 = 0
        char const* const var_24_1 = "players"
        char* edx
        data_3165a60 = sub_510710(data_307ca3c, edx)
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_5 = sub_50eb00(data_3165a60, 0)
    int32_t eax_6
    int32_t ecx_2
    eax_6, ecx_2 = sub_419fe0(arg1)
    int128_t* eax_9 = sub_50c830(eax_6, eax_5, sub_510b30(ecx_2, eax_5))
    *(eax_9 + 0x64) = *(eax_9 + 0x5c) + 1
    *(eax_9 + 0x68) = 0
    int32_t result = sub_510860(eax_6)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
