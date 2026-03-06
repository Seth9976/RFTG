// 函数名称: sub_4b9420
// 虚拟地址: 0x4b9420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b9420(int32_t arg1, int32_t arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69588e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_307c588
    char* entry_ebx
    
    if (sub_4f65a0(&entry_ebx[4], *entry_ebx) != 0)
        sub_47ebc0(*(entry_ebx + 8))
        *(sub_4fc3d0(&data_be1cb8, *(entry_ebx + 8)) + 0x2c) = sub_4b92f0
        
        if ((data_3165f58 & 1) == 0)
            data_3165f58.d |= 1
            int32_t var_8_1 = 0
            data_3165f54 = sub_4f5220(data_307c748, "tblStoreItem")
            int32_t var_8_2 = 0xffffffff
        
        *(sub_4f6e90(data_3165f54, sub_4fc3d0(&data_be1cb8, *(entry_ebx + 8)), &data_83f3d3) + 0x11c) =
            sub_4b93d0
        void var_b8
        int32_t eax_10
        int80_t st0_1
        st0_1, eax_10 = sub_40a930(&var_b8)
        long double x87_r6_1 = fconvert.t(data_8c4d34)
        void var_58
        int32_t ecx_1
        int32_t esi_5
        esi_5, ecx_1 = __builtin_memcpy(&var_58, eax_10, 0x40)
        int32_t var_d8_1 = ecx_1
        void var_78
        sub_4f8710(esi_5, &var_78, *(entry_ebx + 8), &var_58, arg4, arg3, fconvert.s(x87_r6_1), 
            nullptr, nullptr, nullptr)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return 0
}
