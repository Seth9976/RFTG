// 函数名称: sub_43d8c0
// 虚拟地址: 0x43d8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_43d8c0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69881c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_27e7a40 + 0x2c4960) == 0)
        void* eax_4 = sub_4fc3d0(&data_be1cb8, arg1)
        *(eax_4 + 8) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    void* eax_5
    char edx
    eax_5, edx = sub_4fc3d0(&data_be1cb8, arg1)
    bool cond:1 = (data_3166748 & 1) != 0
    *(eax_5 + 8) = 0
    
    if (not(cond:1))
        data_3166748.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_6
        eax_6, edx = sub_4f5220(data_307ca70, "rgn_phases")
        data_3166744 = eax_6
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166748 & 2) == 0)
        data_3166748.d |= 2
        int32_t var_8_3 = 1
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307ca70, "imgRoleGlow")
        data_3166740 = eax_7
        int32_t var_8_4 = 0xffffffff
    
    int32_t var_28 = 1
    sub_4fa4e0(arg1, data_3166740, edx)
    int128_t* eax_11 = sub_4f6e90(data_3166744, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_2 = data_3166744
    *(eax_11 + 0x13c) = *eax_11 + 1
    eax_11[0x14].d = sub_423b70
    int128_t* eax_13 = sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_4 = data_3166744
    *(eax_13 + 0x11c) = ___std_atomic_wait_indirect@24
    int32_t eax_14
    int80_t st0
    st0, eax_14 = sub_4236b0(edi_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14
}
