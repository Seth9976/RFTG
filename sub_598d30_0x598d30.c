// 函数名称: sub_598d30
// 虚拟地址: 0x598d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_598d30(int32_t arg1, void* arg2, int128_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_90 = 0
    int128_t var_4c[0x4]
    sub_5abfc0(&var_4c, 0, 0x44)
    sub_5abfc0(arg3, 0xff, 0x400)
    int32_t eax_2 = 0
    
    if (arg4 s> 0)
        do
            uint32_t ecx = zx.d(*(arg2 + eax_2))
            *(&var_4c + (ecx << 2)) += 1
            eax_2 += 1
        while (eax_2 s< arg4)
    
    int32_t eax_3 = 0
    void* var_9c = arg3 + 0x424
    void* ecx_3 = arg3 + 0x466
    __builtin_memset(&var_4c, 0, 4)
    int32_t ebx = 1
    int32_t i = 0xf
    void* var_a0 = ecx_3
    int32_t var_8c[0x10]
    
    do
        int32_t edx
        edx.w = var_90.w
        *ecx_3 = edx.w
        edx = *(&var_4c + (ebx << 2))
        var_8c[ebx] = eax_3
        *(ecx_3 - 0x64) = eax_3.w
        int32_t eax_4 = eax_3 + edx
        
        if (edx != 0 && eax_4 - 1 s>= 1 << ebx.b)
            data_273ac1c = "bad codelengths"
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        var_90 += edx
        int32_t esi_3 = eax_4 << i.b
        int32_t var_94_1 = eax_4
        i -= 1
        eax_3 = eax_4 * 2
        *var_9c = esi_3
        ecx_3 = var_a0 + 2
        ebx += 1
        var_a0 = ecx_3
        var_9c += 4
    while (i s> 0)
    
    int32_t ecx_9 = 0
    arg3[0x46].d = 0x10000
    int32_t var_90_1 = 0
    
    if (arg4 s> 0)
        do
            uint32_t ebx_1 = zx.d(*(arg2 + ecx_9))
            
            if (ebx_1 != 0)
                int32_t edi_1 = var_8c[ebx_1]
                int32_t esi_8 =
                    zx.d(*(arg3 + (ebx_1 << 1) + 0x464)) - zx.d(*(arg3 + (ebx_1 << 1) + 0x400)) + edi_1
                *(arg3 + esi_8 + 0x484) = ebx_1.b
                *(arg3 + (esi_8 << 1) + 0x5a4) = ecx_9.w
                
                if (ebx_1 s<= 9)
                    int32_t eax_11 = (edi_1 s>> 1 & 0x5555) | ((edi_1 & 0x5555) * 2)
                    int32_t ecx_16 = (eax_11 s>> 2 & 0x3333) | ((eax_11 & 0x3333) * 4)
                    int32_t eax_18 = (ecx_16 s>> 4 & 0xf0f) | (ecx_16 & 0xf0f) << 4
                    
                    for (int32_t i_1 =
                            (zx.d((eax_18 s>> 8).b) | (eax_18 & 0xff) << 8) s>> (0x10 - ebx_1.b); i_1 s< 0x200; 
                            i_1 += 1 << ebx_1.b)
                        *(arg3 + (i_1 << 1)) = esi_8.w
                    
                    ecx_9 = var_90_1
                
                (&__saved_ebp)[ebx_1 - 0x22] = edi_1 + 1
            
            ecx_9 += 1
            var_90_1 = ecx_9
        while (ecx_9 s< arg4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
