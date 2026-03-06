// 函数名称: sub_4a4cd0
// 虚拟地址: 0x4a4cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a4cd0(int32_t arg1, int32_t arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = 0
    int32_t var_a58 = 0
    int32_t var_a54 = 0
    
    if (arg3 == 0)
        sub_49b2a0()
        noreturn
    
    if (arg4 s< 0)
        sub_49b2a0()
        noreturn
    
    void* eax_3 = arg4 * 0xb4
    int32_t i_2 = sx.d(*(eax_3 + arg3 + 0x44))
    void* edi = eax_3 + arg3
    int32_t i = i_2
    void* var_a5c = edi
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(*(arg3 + ((i * 5 + 0x11d) << 2)))
        ecx += 1
    
    if (sx.d(*(edi + 0xae)) - sx.d(*(edi + 0xb0)) + ecx s> 0)
        int32_t i_1 = i_2
        
        if (i_1 != 0xffffffff)
            int32_t var_a50[0x148]
            int32_t var_530[0x149]
            
            do
                void* eax_8 = *(arg3 + i_1 * 0x14 + 0x46c)
                
                if (*(eax_8 + 6) == 1 && (*(eax_8 + 0x10) & 1) == 0)
                    int32_t j_1 = sx.d(*(edi + 0x46))
                    
                    if (j_1 != 0xffffffff)
                        int32_t j = j_1
                        
                        do
                            int32_t edx = j * 5
                            
                            if (*(arg3 + (edx << 2) + 0x467) == 3)
                                void* eax_10 = *(arg3 + (edx << 2) + 0x46c)
                                
                                if (*(eax_10 + 6) == 1 && (*(eax_10 + 0x10) & 1) == 0
                                        && sub_4a48c0(j, arg3, i_1) != 0)
                                    int32_t ecx_5 = var_a58
                                    int32_t eax_13 = 0
                                    
                                    if (ecx_5 s> 0)
                                        while (var_a50[eax_13] != j)
                                            eax_13 += 1
                                            
                                            if (eax_13 s>= ecx_5)
                                                break
                                    
                                    if (eax_13 == ecx_5)
                                        var_a50[ecx_5] = j
                                        var_a58 = ecx_5 + 1
                                    
                                    int32_t ecx_7 = var_a54
                                    int32_t eax_14 = 0
                                    
                                    if (ecx_7 s> 0)
                                        while (var_530[eax_14] != i_1)
                                            eax_14 += 1
                                            
                                            if (eax_14 s>= ecx_7)
                                                break
                                    
                                    if (eax_14 == ecx_7)
                                        var_530[ecx_7] = i_1
                                        var_a54 = ecx_7 + 1
                            
                            j = sx.d(*(arg3 + ((j * 5 + 0x11d) << 2)))
                        while (j != 0xffffffff)
                    
                    edi = var_a5c
                
                i_1 = sx.d(*(arg3 + ((i_1 * 5 + 0x11d) << 2)))
            while (i_1 != 0xffffffff)
            
            if (var_a54 != 0)
                sub_49d9e0(arg3, arg4, 0xb, &var_530, &var_a54, &var_a50, &var_a58, 0, 0, 0, 0)
                
                if (*(arg3 + 0x1ec3) == 0 && var_a54 != 0)
                    sub_4a4940(arg4, var_a50[0], var_530[0], arg3, arg4)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return i_1 + 2
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
