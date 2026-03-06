// 函数名称: sub_4a3e90
// 虚拟地址: 0x4a3e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a3e90(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = arg4 * 5
    int32_t edx = sx.d(*(arg2 + (eax_3 << 2) + 0x464))
    int32_t eax_7 = *(*(arg2 + (eax_3 << 2) + 0x46c) + 0x10) & 0x40
    char* ebx = arg2 + arg3 * 0x14 + 0x464
    char* var_424 = ebx
    int32_t i_1 = 0
    
    if (*(*(ebx + 8) + 0x15) s> 0)
        int32_t var_414_1 = 0
        int32_t i
        
        do
            int32_t eax_8 = *(ebx + 8)
            
            if (*(eax_8 + var_414_1 + 0x18) == 3)
                int32_t ecx_2 = *(eax_8 + var_414_1 + 0x24) & 0x3c
                
                if (ecx_2 != 0)
                    if ((*(eax_8 + var_414_1 + 0x20) & 0x20) == 0)
                        *(ebx + 4) |= 1 << (i_1.b + 8)
                    else
                        int32_t var_444_1 = 1
                        sub_49cc30(arg2, arg3, ecx_2, 0xffffffff)
                        
                        if (*(arg2 + 0x18) == 0)
                            sub_49bec0(edx)
                            ebx = var_424
                    
                    int32_t eax_13 = *(eax_8 + var_414_1 + 0x24)
                    int32_t var_430_1 = *(eax_8 + var_414_1 + 0x20)
                    int32_t ecx_6 = eax_13 & 4
                    
                    if (ecx_6 != 0)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_7
                    
                    int32_t ecx_7 = ecx_6 | (eax_13 & 8)
                    
                    if (ecx_7 != 0)
                        int32_t eax_18 = sub_49c940(edx, 0x400, arg2)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_18
                    
                    int32_t ecx_8 = ecx_7 | (eax_13 & 0x10)
                    
                    if (ecx_8 != 0)
                        int32_t ecx_19
                        ecx_19.b = sub_4b1530(eax_13, edx, arg2, edx) s> 0
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return ecx_19
                    
                    if ((ecx_8 | (eax_13 & 0x20)) != 0)
                        *ebx
                        sub_49d1b0(arg2)
                        
                        if (*(arg2 + 0x18) == 0)
                            int32_t var_444_4 = **(var_424 + 8)
                            int32_t var_448_1 = *(sx.d(*var_424) * 0xb4 + arg2 + 0x20)
                            char var_410[0x404]
                            sub_5a733b(&var_410, "%s spends 1 prestige on %s.\n")
                            sub_4c5680(&var_410)
                        
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 1
            
            var_414_1 += 0x18
            i = i_1 + 1
            i_1 = i
        while (i s< sx.d(*(*(ebx + 8) + 0x15)))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
