// 函数名称: sub_4071f0
// 虚拟地址: 0x4071f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_4071f0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6984be
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_a8 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = arg1
    long double x87_r7 = fconvert.t(*(ebx + 4))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    struct _EXCEPTION_REGISTRATION_RECORD** result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        if (*(ebx + 0x10) == 0)
            if ((data_31666c0 & 1) == 0)
                data_31666c0.d |= 1
                int32_t var_8_1 = 0
                data_31666bc = sub_4f5220(data_307c174, "TxtVersion")
                int32_t var_8_2 = 0xffffffff
            
            char* edx_1 = *(data_27e7fd0 + 0x10)
            int128_t* eax_6 =
                sub_4f6e90(data_31666bc, sub_4fc3d0(&data_be1cb8, *(ebx + 8)), &data_83f3d3)
            *(eax_6 + 0x64) = *eax_6 + 1
            sub_4c4590(edx_1)
            ebx = arg1
            *(eax_6 + 0x151) = 1
        
        void* edx_2 = *(ebx + (*(ebx + 0x10) << 2) + 8)
        void var_98
        int32_t eax_10
        int80_t st0_1
        st0_1, eax_10 = sub_40a930(&var_98)
        float var_ac_2 = fconvert.s(fconvert.t(*(ebx + 4)))
        void var_58
        __builtin_memcpy(&var_58, eax_10, 0x40)
        result = sub_4f9fe0(edx_2, &var_58)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
