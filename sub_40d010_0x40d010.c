// 函数名称: sub_40d010
// 虚拟地址: 0x40d010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_40d010(int32_t arg1, float arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_Makewloc@_Locimp@locale@std@@CAXABV_Locinfo@3@HPAV123@PBV23@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_e4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165764 & 1) == 0)
        data_3165764.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4 = sub_4f5220(data_307c16c, "tblPlayer1")
        int32_t* ecx_1 = data_307c16c
        data_315f8e4 = eax_4
        int32_t eax_5 = sub_4f5220(ecx_1, "tblPlayer2")
        int32_t* edx_1 = data_307c16c
        data_315f8e8 = eax_5
        data_315f8ec = sub_4f5220(edx_1, "tblPlayer3")
        data_315f8f0 = sub_4f5220(data_307c16c, "tblPlayer4")
        int32_t var_8_2 = 0xffffffff
    
    void var_94
    int32_t eax_9
    int80_t st0
    st0, eax_9 = sub_40a930(&var_94)
    int32_t eax_10 = (&data_315f8e4)[arg1]
    void var_54
    int32_t var_f0 = __builtin_memcpy(&var_54, eax_9, 0x40)
    void var_d4
    int32_t eax_11
    int80_t result
    result, eax_11 = sub_4f66d0(&var_d4, data_307c16c, eax_10, &data_84074c, 
        fconvert.s(fconvert.t(arg2)), nullptr, nullptr)
    int32_t entry_ebx
    __builtin_memcpy(entry_ebx, eax_11, 0x40)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
