// 函数名称: sub_4606d0
// 虚拟地址: 0x4606d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_4606d0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6986ae
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_64 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = arg1[0x16]
    float var_54[0x11]
    int32_t edx
    sub_460270(eax_3, edx, &var_54, eax_3)
    int32_t eax_4 = 1
    
    if ((data_3166704 & 1) == 0)
        data_3166704.d |= 1
        int32_t var_8_1 = 0
        eax_4 = sub_4f5220(data_307ca64, "rgn_opponentTableau")
        data_3166700 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    int80_t result = sub_45fce0(eax_4, data_3166700, data_307ca64, arg1, &var_54, arg1)
    void* eax_5 = data_27e7fe4
    __builtin_memcpy(eax_5 + 0x9c, 0x83faf8, 0x40)
    *(eax_5 + 0xdc) = 0
    sub_4e2080()
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
