// 函数名称: sub_67e9d0
// 虚拟地址: 0x67e9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67e9d0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg3 s< 0 || arg3 s>= 4)
        *(*arg1 + 0x14) = 0x32
        *(*arg1 + 0x18) = arg3
        (**arg1)(arg1)
    
    int32_t var_518
    int32_t esi
    
    if (arg2 == 0)
        int32_t edx_2 = arg1[arg3 + 0x31]
        var_518 = edx_2
        esi = edx_2
    else
        esi = arg1[arg3 + 0x2d]
        var_518 = esi
    
    if (esi == 0)
        *(*arg1 + 0x14) = 0x32
        *(*arg1 + 0x18) = arg3
        (**arg1)(arg1)
    
    if (*arg4 == 0)
        *arg4 = (*arg1[1])(arg1, 1, 0x590)
    
    int32_t eax_7 = *arg4
    int32_t edi_1 = 0
    *(eax_7 + 0x8c) = esi
    void* ebx_2 = 1
    
    while (true)
        uint32_t esi_1 = zx.d(*(ebx_2 + esi))
        
        if (esi_1 s< 0 || esi_1 + edi_1 s> 0x100)
            *(*arg1 + 0x14) = 8
            (**arg1)(arg1)
        
        if (esi_1 != 0)
            sub_5abfc0(&__saved_ebp + edi_1 - 0x108, ebx_2.b, esi_1)
            edi_1 += esi_1
        
        ebx_2 += 1
        
        if (ebx_2 s> 0x10)
            break
        
        esi = var_518
    
    char var_10c
    (&var_10c)[edi_1] = 0
    int128_t* eax_8
    eax_8.b = var_10c
    int32_t ebx_3 = sx.d(eax_8.b)
    int32_t esi_2 = 0
    int32_t edi_2 = 0
    int32_t edx_6 = rol.d(1, ebx_3.b)
    int32_t var_514 = edx_6
    int32_t var_510[0x101]
    
    if (eax_8.b != 0)
        char* eax_12 = &var_10c
        
        while (true)
            if (sx.d(*eax_12) == ebx_3)
                int32_t eax_13
                
                do
                    char var_10b[0x103]
                    eax_13 = sx.d(var_10b[edi_2])
                    var_510[edi_2] = esi_2
                    edi_2 += 1
                    esi_2 += 1
                while (eax_13 == ebx_3)
            
            if (esi_2 s>= edx_6)
                *(*arg1 + 0x14) = 8
                (**arg1)(arg1)
                edx_6 = var_514
            
            esi_2 *= 2
            ebx_3 += 1
            bool cond:1_1 = (&var_10c)[edi_2] != 0
            eax_12 = &__saved_ebp + edi_2 - 0x108
            var_514 = rol.d(edx_6, 1)
            
            if (not(cond:1_1))
                break
            
            edx_6 = var_514
    
    int32_t ecx_9 = 0
    
    for (void* i = 1; i s<= 0x10; i += 1)
        if (*(i + var_518) == 0)
            *(eax_7 + (i << 2)) = 0xffffffff
        else
            *(eax_7 + (i << 2) + 0x48) = ecx_9 - var_510[ecx_9]
            ecx_9 += zx.d(*(i + var_518))
            *(eax_7 + (i << 2)) = (&var_514)[ecx_9]
    
    *(eax_7 + 0x44) = 0xfffff
    int32_t j = sub_5abfc0(eax_7 + 0x90, 0, 0x400)
    int32_t esi_6 = 0
    int32_t ecx_10 = 7
    int32_t var_528 = 0
    char* ebx_4 = 1
    var_514 = 7
    int32_t ecx_15
    
    do
        if (ebx_4[var_518] u>= 1)
            j = 1 << ecx_10.b
            int32_t i_2 = 1
            char* edi_5 = esi_6 + var_518 + 0x11
            int32_t j_1 = j
            int32_t i_1
            
            do
                int32_t edx_12 = var_510[esi_6] << var_514.b
                
                if (j s> 0)
                    char* esi_7 = edx_12 + eax_7 + 0x490
                    char** edx_13 = eax_7 + (edx_12 << 2) + 0x90
                    
                    do
                        *edx_13 = ebx_4
                        int32_t ecx_12
                        ecx_12.b = *edi_5
                        *esi_7 = ecx_12.b
                        j -= 1
                        edx_13 = &edx_13[1]
                        esi_7 = &esi_7[1]
                    while (j s> 0)
                    
                    esi_6 = var_528
                    j = j_1
                
                i_1 = i_2 + 1
                esi_6 += 1
                edi_5 = &edi_5[1]
                var_528 = esi_6
                i_2 = i_1
            while (i_1 s<= zx.d(ebx_4[var_518]))
        
        ecx_15 = var_514
        ebx_4 = &ebx_4[1]
        ecx_10 = ecx_15 - 1
        var_514 = ecx_10
    while (ecx_15 - 1 s>= 0)
    
    if (arg2 != 0)
        int32_t esi_8 = 0
        
        if (edi_1 s> 0)
            do
                j = zx.d(*(var_518 + esi_8 + 0x11))
                
                if (j s< 0 || j s> 0xf)
                    *(*arg1 + 0x14) = 8
                    j = (**arg1)(arg1)
                
                esi_8 += 1
            while (esi_8 s< edi_1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return j
}
