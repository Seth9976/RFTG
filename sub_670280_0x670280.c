// 函数名称: sub_670280
// 虚拟地址: 0x670280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_670280(void* arg1, int32_t arg2, void* arg3, void* arg4, char* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg5 == 3)
        if (arg4 s> 0 && arg4 s<= zx.d(*(arg1 + 0x12c)))
            int32_t var_1c = arg2
            int32_t var_20
            __builtin_strncpy(&var_20, "SNRt", 4)
            int32_t eax_5 = sub_66f140(arg1, arg4, arg2, arg5)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
        
        uint32_t eax_6 = sub_664100(arg1, "Invalid number of transparent colors specified")
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    int32_t var_2c
    uint8_t var_10
    
    if (arg5 != 0)
        if (arg5 != 2)
            uint32_t eax_12 = sub_664100(arg1, "Can't write tRNS with an alpha channel")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_12
        
        uint32_t ecx_9 = zx.d(*(arg3 + 2))
        char var_f_1 = ecx_9.b
        uint32_t ecx_10 = zx.d(*(arg3 + 4))
        uint32_t eax_9 = zx.d(*(arg3 + 6))
        char var_d_1 = ecx_10.b
        uint8_t edx_3 = (ecx_9 u>> 8).b
        uint8_t ebx_2 = (ecx_10 u>> 8).b
        uint8_t ecx_12 = (eax_9 u>> 8).b
        bool cond:0_1 = *(arg1 + 0x13c) != 8
        var_10 = edx_3
        uint8_t var_e_1 = ebx_2
        uint8_t var_c_1 = ecx_12
        char var_b_1 = eax_9.b
        
        if (not(cond:0_1) && (ecx_12 | ebx_2 | edx_3) != 0)
            uint32_t eax_10 =
                sub_664100(arg1, "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_10
        
        sub_66f010(arg1, 6)
        sub_666640(arg1, &var_10, 6)
        var_2c = 6
    else
        char* ecx
        ecx.b = *(arg1 + 0x13c)
        uint32_t eax_7 = zx.d(*(arg3 + 8))
        
        if (eax_7 s>= 1 << ecx.b)
            uint32_t eax_8 =
                sub_664100(arg1, "Ignoring attempt to write tRNS chunk out-of-range for bit_depth")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_8
        
        var_10 = (eax_7 u>> 8).b
        char var_f = eax_7.b
        sub_66f010(arg1, 2)
        sub_666640(arg1, &var_10, 2)
        var_2c = 2
    
    sub_662280(arg1, &var_10, var_2c)
    int32_t eax_11 = sub_66f0f0(arg1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_11
}
