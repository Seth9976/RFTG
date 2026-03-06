// 函数名称: sub_40bb90
// 虚拟地址: 0x40bb90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_40bb90(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_remove@4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a8 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(*(arg1 + 4))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        if ((data_31666b8 & 1) == 0)
            data_31666b8.d |= 1
            int32_t var_8_1 = 0
            data_31666b4 = sub_4f5220(data_307c1a0, "txtTitle")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_31666b8 & 2) == 0)
            data_31666b8.d |= 2
            int32_t var_8_3 = 1
            data_31666b0 = sub_4f5220(data_307c1a0, "txtInstruction")
            int32_t var_8_4 = 0xffffffff
        
        int32_t edi_1 = data_31666b4
        int32_t esi_1 = *(arg1 + 8)
        char const* const eax_13
        int128_t* esi_6
        
        if (*(*(arg1 + 0xc) * 0x1f8 + data_27e7a40 + 0xcb4) != 1)
            int128_t* eax_15 = sub_4f6e90(edi_1, sub_4fc3d0(&data_be1cb8, esi_1), &data_83f3d3)
            *(eax_15 + 0x64) = *eax_15 + 1
            sub_4c4590("FORFEIT")
            int32_t ebx_4 = data_31666b0
            *(eax_15 + 0x151) = 1
            esi_6 = sub_4f6e90(ebx_4, sub_4fc3d0(&data_be1cb8, *(arg1 + 8)), &data_83f3d3)
            *(esi_6 + 0x64) = *esi_6 + 1
            eax_13 = "Forfeit Game?"
        else
            int128_t* eax_8 = sub_4f6e90(edi_1, sub_4fc3d0(&data_be1cb8, esi_1), &data_83f3d3)
            *(eax_8 + 0x64) = *eax_8 + 1
            sub_4c4590("ABANDON")
            int32_t ebx_2 = data_31666b0
            *(eax_8 + 0x151) = 1
            esi_6 = sub_4f6e90(ebx_2, sub_4fc3d0(&data_be1cb8, *(arg1 + 8)), &data_83f3d3)
            *(esi_6 + 0x64) = *esi_6 + 1
            eax_13 = "Abandon Game?"
        
        sub_4c4590(eax_13)
        *(esi_6 + 0x151) = 1
        void var_98
        int32_t eax_20
        int80_t st0_1
        st0_1, eax_20 = sub_40a930(&var_98)
        void* eax_22 = *(arg1 + 8)
        float var_ac_2 = fconvert.s(fconvert.t(*(arg1 + 4)))
        void var_58
        __builtin_memcpy(&var_58, eax_20, 0x40)
        result = sub_4f9fe0(eax_22, &var_58)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
