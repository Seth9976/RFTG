// 函数名称: sub_4acd10
// 虚拟地址: 0x4acd10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4acd10(int32_t* arg1 @ esi, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    void* edi = arg2 * 0xb4 + arg1
    int32_t i = sx.d(*(edi + 0x46))
    int32_t var_d98 = 0
    int32_t var_d90 = 0
    int32_t var_da0 = 0
    int32_t var_d9c = 0
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x14)
    int32_t var_1c_1
    int32_t var_18_1
    int32_t var_14_1
    int32_t var_10_1
    void* ecx
    int32_t edx
    
    if (i != 0xffffffff)
        do
            int32_t ecx_1 = i * 5
            edx = arg1[ecx_1 + 0x11b]
            ecx = &arg1[ecx_1 + 0x119]
            
            if ((*(edx + 0x10) & 2) != 0 && *(ecx + 0xe) == 0)
                edx = sx.d(*(edx + 0xe))
                void var_24
                *(&var_24 + (edx << 2)) = 1
                var_d98 = 1
            
            i = sx.d(arg1[i * 5 + 0x11d].w)
        while (i != 0xffffffff)
        
        if (var_20 != 0)
            var_1c_1 = 1
            var_18_1 = 1
            var_14_1 = 1
            var_10_1 = 1
    
    void var_348
    void* var_dc4 = &var_348
    int32_t var_dc8 = 5
    int32_t eax_6 = sub_49dea0(arg2, edx, ecx, arg1)
    int32_t var_d94 = 0
    int32_t var_d88[0x148]
    int32_t var_868[0x148]
    
    if (eax_6 s> 0)
        do
            int32_t edx_1 = sx.d(*(&var_348 + (ebx << 3)))
            void var_344
            void* eax_7 = *(&var_344 + (ebx << 3))
            int32_t ecx_4 = *(eax_7 + 8)
            int32_t eax_11 = ecx_4 & 0x100
            void var_346
            
            if (eax_11 != 0)
                sub_4ac450(eax_11, arg1, sx.d(*(&var_346 + (ebx << 3))), arg2, edx_1)
            else if (ecx_4 != 1 || *(eax_7 + 0xc) != 0)
                if ((ecx_4 & 0x1fe08000) != 0)
                    sub_4ac450(arg2, arg1, sx.d(*(&var_346 + (ebx << 3))), arg2, edx_1)
                else if (((ecx_4 & 4) == 0 || var_1c_1 != 0) && ((ecx_4 & 8) == 0 || var_18_1 != 0)
                        && ((ecx_4 & 0x10) == 0 || var_14_1 != 0)
                        && ((ecx_4 & 0x20) == 0 || var_10_1 != 0)
                        && ((ecx_4 & 2) == 0 || var_d98 != 0))
                    int32_t edi_2 = ecx_4 & 0x80
                    int32_t eax_34
                    
                    if (edi_2 == 0)
                        eax_34 = (ecx_4 & 0x3c) | edi_2
                    
                    if (edi_2 == 0 && eax_34 != 0)
                        ebx = var_d94
                        sub_4ac450(eax_34, arg1, sx.d(*(&var_346 + (ebx << 3))), arg2, edx_1)
                        
                        if (*(arg1 + 0x1ec3) != 0)
                            goto label_4acf6c
                    else if ((ecx_4 & 1) != 0 && *(&arg1[edx_1 * 5] + 0x472) != 0)
                        ebx = var_d94
                    else if (edi_2 != 0)
                        int32_t i_1
                        int32_t edx_9
                        
                        if (arg1 != 0 && arg2 s>= 0)
                            i_1 = sx.d(*(edi + 0x44))
                            edx_9 = 0
                        
                        if (arg1 == 0 || arg2 s< 0 || i_1 s< 0xffffffff)
                            sub_49b2a0()
                            noreturn
                        
                        while (i_1 != 0xffffffff)
                            i_1 = sx.d(arg1[i_1 * 5 + 0x11d].w)
                            edx_9 += 1
                        
                        if (sx.d(*(edi + 0xae)) - sx.d(*(edi + 0xb0)) + edx_9 s>= 1
                                && (ecx_4 & 0x2783f) != 0)
                            goto label_4acff4
                        
                        ebx = var_d94
                    else if ((ecx_4 & 0x2783f) == 0)
                        ebx = var_d94
                    else
                    label_4acff4:
                        ebx = var_d94
                        int32_t eax_42 = var_d90
                        int32_t edx_10 = sx.d(*(&var_346 + (ebx << 3)))
                        var_d88[eax_42] = sx.d(*(&var_348 + (ebx << 3)))
                        var_868[eax_42] = edx_10
                        var_d90 = eax_42 + 1
                        var_da0 |= *(eax_7 + 8)
                        var_d9c |= *(eax_7 + 0xc)
            else if (*(&arg1[edx_1 * 5] + 0x472) == 0)
                sub_4ac450(&arg1[edx_1 * 5 + 0x119], arg1, sx.d(*(&var_346 + (ebx << 3))), arg2, edx_1)
            ebx += 1
            var_d94 = ebx
        while (ebx s< eax_6)
    
    char* eax_45 = 0x89
    char* var_dc8_5
    int32_t var_dc4_5
    int32_t* ecx_17
    
    if (var_d98 != 0)
        if ((((*(edi + 0x2c)).b & 0x7f) == 9 || ((*(edi + 0x30)).b & 0x7f) == 9)
                && (*(edi + 0x3d) & 2) == 0)
            eax_45 = arg2
            var_dc4_5 = 0xffffffff
            var_dc8_5 = eax_45
            ecx_17 = 0xffffffff
        label_4ad26c:
            sub_4ac450(eax_45, arg1, ecx_17, var_dc8_5, var_dc4_5)
            int32_t result
            result.b = *(arg1 + 0x1ec3) == 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
        
        if (*(edi + 0x2c) == 0x89)
            if ((*(edi + 0x3d) & 4) == 0)
                goto label_4ad0b4
        else if (*(edi + 0x30) == 0x89 && (*(edi + 0x3d) & 4) == 0)
        label_4ad0b4:
            var_dc4_5 = 0xfffffffe
            var_dc8_5 = arg2
            ecx_17 = 0xffffffff
            goto label_4ad26c
    
    if ((*(edi + 0x2c) == 0x89 || *(edi + 0x30) == 0x89) && (*(edi + 0x3d) & 8) == 0)
        var_dc4_5 = 0xfffffffd
        var_dc8_5 = arg2
        ecx_17 = 0xffffffff
        goto label_4ad26c
    
    int32_t ebx_3 = var_d90
    eax_45 = nullptr
    bool cond:2_1 = ebx_3 == 0
    
    if (ebx_3 s> 0)
        do
            int32_t edx_16 = arg1[var_d88[eax_45] * 5 + 0x11b]
            int32_t ecx_21 = var_868[eax_45] * 3
            
            if (*(edx_16 + (ecx_21 << 3) + 0x20) == 2 && *(edx_16 + (ecx_21 << 3) + 0x24) == 0)
                var_dc4_5 = var_d88[eax_45]
                ecx_17 = var_868[eax_45]
                var_dc8_5 = arg2
                goto label_4ad26c
            
            eax_45 = &eax_45[1]
        while (eax_45 s< ebx_3)
        
        cond:2_1 = ebx_3 == 0
    
    if (not(cond:2_1))
        eax_45 = var_da0 & 0x3f
        
        if (eax_45 == 0)
            int32_t ebx_4 = 0
            
            if (var_d90 s> 0)
                do
                    int32_t eax_48 = var_d88[ebx_4]
                    sub_4ac450(eax_48, arg1, var_868[ebx_4], arg2, eax_48)
                    
                    if (*(arg1 + 0x1ec3) != 0)
                        goto label_4acf6c
                    
                    ebx_4 += 1
                while (ebx_4 s< var_d90)
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
        
        if (ebx_3 s<= 0)
        label_4ad262:
            ecx_17 = var_868[0]
            var_dc4_5 = var_d88[0]
            var_dc8_5 = arg2
            goto label_4ad26c
        
        sub_49d720(arg1, arg2)
        int32_t* var_dcc_1
        int32_t* var_dc8_7
        int32_t* var_dc4_7
        int32_t* eax_50
        
        if (*(edi + 0xc8) s>= *(edi + 0xc4))
            (*(*(edi + 0x28) + 0xc))(arg1, arg2, 0x14, &var_d88, &var_d90, &var_868, &var_d90, 0, 0, 0, 
                0)
            
            if (*(arg1 + 0x1ec3) == 0)
                int32_t eax_53 = *(*(edi + 0x28) + 0x10)
                
                if (eax_53 != 0)
                    eax_53(arg1, arg2, 0x14)
                
                var_dc4_7 = &var_d90
                eax_50 = &var_d90
                var_dc8_7 = &var_d90
                var_dcc_1 = &var_d88
                goto label_4ad247
        else
            eax_50 = &var_d90
            var_dc4_7 = &var_d90
            var_dc8_7 = &var_d90
            var_dcc_1 = &var_d88
        label_4ad247:
            eax_45 = sub_49d860(eax_50, &var_868, arg1, arg2, 0x14, var_dcc_1, var_dc8_7, var_dc4_7)
            
            if (*(arg1 + 0x1ec3) == 0)
                goto label_4ad262
    
    label_4acf6c:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
