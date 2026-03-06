// 函数名称: sub_49d860
// 虚拟地址: 0x49d860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49d860(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t* arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*(arg4 * 0xb4 + arg3 + 0xc8) s>= *(arg4 * 0xb4 + arg3 + 0xc4))
        char const* const var_434 = "No data available in choice log!\n"
        sub_4c5680("error %s")
        sub_49b2a0()
        noreturn
    
    sub_49d720(arg3, arg4)
    int32_t edx_3 = *(arg4 * 0xb4 + arg3 + 0xc0)
    int32_t ecx = *(arg4 * 0xb4 + arg3 + 0xc8)
    int32_t eax_5 = *(edx_3 + (ecx << 2))
    void* ecx_1 = edx_3 + (ecx << 2)
    
    if (eax_5 != arg5)
        int32_t var_434_1 = eax_5
        int32_t var_438 = arg4
        int32_t var_43c = arg5
        void var_410
        sub_5a733b(&var_410, "Expected %d in choice log for player %d, found %d!\n")
        void* var_434_2 = &var_410
        sub_4c5680("error %s")
        sub_49b2a0()
        noreturn
    
    int32_t result = *(ecx_1 + 4)
    int32_t edi_1 = *(ecx_1 + 8)
    void* ecx_2 = ecx_1 + 0xc
    
    if (arg7 != 0)
        int32_t edx_5 = 0
        *arg7 = edi_1
        
        if (edi_1 s> 0)
            do
                arg6[edx_5] = *ecx_2
                edx_5 += 1
                ecx_2 += 4
            while (edx_5 s< edi_1)
    else if (edi_1 != 0)
        char const* const var_434_3 = "Log has items but nowhere to copy them!\n"
        sub_4c5680("error %s")
        sub_49b2a0()
        noreturn
    
    int32_t eax_7 = *ecx_2
    void* ecx_3 = ecx_2 + 4
    
    if (arg8 != 0)
        *arg8 = eax_7
        int32_t edx_7 = 0
        
        if (eax_7 s> 0)
            do
                *(arg2 + (edx_7 << 2)) = *ecx_3
                edx_7 += 1
                ecx_3 += 4
            while (edx_7 s< eax_7)
    else if (eax_7 != 0)
        char const* const var_434_4 = "Log has specials but nowhere to copy them!\n"
        sub_4c5680("error %s")
        sub_49b2a0()
        noreturn
    
    int32_t ecx_5 = (ecx_3 - *(arg4 * 0xb4 + arg3 + 0xc0)) s>> 2
    *(arg4 * 0xb4 + arg3 + 0xc8) = ecx_5
    *(arg4 * 0xb4 + arg3 + 0xd0) = ecx_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
