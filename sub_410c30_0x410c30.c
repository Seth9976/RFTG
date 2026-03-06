// 函数名称: sub_410c30
// 虚拟地址: 0x410c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_410c30(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_copy_file@12
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a8 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(*(arg1 + 0x48))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        if ((data_31666ac & 1) == 0)
            data_31666ac.d |= 1
            int32_t var_8_1 = 0
            data_31666a8 = sub_4f5220(data_307c1b8, "Name")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_31666ac & 2) == 0)
            data_31666ac.d |= 2
            int32_t var_8_3 = 1
            data_31666a4 = sub_4f5220(data_307c1b8, "BtnPaste")
            int32_t var_8_4 = 0xffffffff
        
        int128_t* eax_7 =
            sub_4f6e90(data_31666a8, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x4c)), &data_83f3d3)
        *(eax_7 + 0x64) = *eax_7 + 1
        sub_4c4590(&data_83f3d3)
        *(eax_7 + 0x151) = 1
        void* ebx_3 = arg1
        arg1:3.b = IsClipboardFormatAvailable(1) == 0
        *(sub_4f6e90(data_31666a4, sub_4fc3d0(&data_be1cb8, *(ebx_3 + 0x4c)), &data_83f3d3) + 0x21) =
            arg1:3.b
        void var_98
        int32_t eax_11
        int80_t st0_1
        st0_1, eax_11 = sub_40a930(&var_98)
        void* edx_3 = *(ebx_3 + 0x4c)
        float var_ac_2 = fconvert.s(fconvert.t(*(ebx_3 + 0x48)))
        void var_58
        __builtin_memcpy(&var_58, eax_11, 0x40)
        sub_4f9fe0(edx_3, &var_58)
        long double x87_r6_2 = fconvert.t(*(ebx_3 + 0x48))
        long double x87_r5_1 = float.t(1)
        x87_r5_1 - x87_r6_2
        result.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            result = sub_506a30(ebx_3 + 0x50)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
