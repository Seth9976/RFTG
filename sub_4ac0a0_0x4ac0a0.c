// 函数名称: sub_4ac0a0
// 虚拟地址: 0x4ac0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4ac0a0(int32_t arg1, int32_t arg2, int32_t* arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg6
    int32_t edx = 0
    void* eax_5 = arg3[arg5 * 5 + 0x11b] + ((ebx * 3 + 3) << 3)
    int32_t var_a5c = 0
    int32_t var_a58 = 0
    int32_t ecx_1 = *(eax_5 + 8)
    int32_t var_a64 = *(eax_5 + 0xc)
    int32_t var_a54 = 0
    
    if ((ecx_1 & 4) != 0)
        var_a54 = 2
    
    if ((ecx_1 & 8) != 0)
        var_a54 = 3
    
    if ((ecx_1 & 0x10) != 0)
        var_a54 = 4
    
    if ((ecx_1 & 0x20) != 0)
        var_a54 = 5
    
    int32_t edi = sx.d(arg3[0x118].w)
    int32_t var_a50[0x148]
    
    if (edi s> 0)
        void* ecx_4 = &arg3[0x11b]
        
        do
            if (sx.d(*(ecx_4 - 8)) == arg4 && *(ecx_4 - 7) == 3)
                void* eax_17 = *ecx_4
                
                if ((*(eax_17 + 0x10) & 2) != 0)
                    eax_17.b = *(eax_17 + 0xe)
                    
                    if (eax_17.b != 0 && (var_a54 == 0 || sx.d(eax_17.b) == var_a54 || eax_17.b == 1)
                            && *(ecx_4 + 6) == 0)
                        int32_t eax_18 = var_a58
                        var_a50[eax_18] = edx
                        var_a58 = eax_18 + 1
            
            edx += 1
            ecx_4 += 0x14
        while (edx s< edi)
        
        ebx = arg6
    
    int32_t i = sx.d(arg3[arg4 * 0x2d + 0x11].w)
    int32_t ecx_5 = 0
    int32_t var_530[0x149]
    
    while (i != 0xffffffff)
        var_530[ecx_5] = i
        i = sx.d(arg3[i * 5 + 0x11d].w)
        ecx_5 += 1
    
    var_a5c = ecx_5
    
    if (ecx_5 != 0 && var_a58 != 0)
        int32_t edx_3
        i, edx_3 = sub_49d9e0(arg3, arg4, 0x15, &var_530, &var_a5c, &var_a50, &var_a58, arg5, ebx, 0, 0)
        
        if (*(arg3 + 0x1ec3) == 0 && var_a5c s> 0)
            i = sub_49dff0(arg5, edx_3, var_530[0], arg3, arg4, var_a50[0], arg5, ebx)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
