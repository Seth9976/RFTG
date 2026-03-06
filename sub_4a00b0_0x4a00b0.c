// 函数名称: sub_4a00b0
// 虚拟地址: 0x4a00b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a00b0(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* edi = arg2
    int32_t eax_3 = arg4 * 5
    void* ecx = arg3[eax_3 + 0x11b]
    int32_t ebx = sx.d(*(ecx + 7))
    void var_730
    void* var_75c = &var_730
    int32_t var_760 = 2
    char* var_738 = edi
    int32_t eax_6 = sub_49dea0(edi, arg2, ecx, arg3)
    int32_t ecx_1 = 0
    void var_72c
    
    if (eax_6 s> 0)
        do
            void* edx = *(&var_72c + (ecx_1 << 3))
            
            if ((*(edx + 8) & 2) != 0)
                ebx -= sx.d(*(edx + 0x10))
            
            ecx_1 += 1
        while (ecx_1 s< eax_6)
        
        edi = var_738
    
    int32_t eax_11 = sx.d(arg3[0x7b0].b)
    void* edi_2 = &arg3[edi * 0x2d + 8]
    void* var_74c = edi_2
    
    if (eax_11 s>= 0)
        bool cond:0_1
        
        if (eax_11.b s< 0)
            if (*(edi_2 + 0xc) != eax_11)
                cond:0_1 = *(edi_2 + 0x10) != eax_11
                goto label_4a0177
            
            ebx -= 1
        else if ((*(edi_2 + 0xc) & 0x7f) == eax_11)
            ebx -= 1
        else
            cond:0_1 = (*(edi_2 + 0x10) & 0x7f) != eax_11
        label_4a0177:
            
            if (not(cond:0_1))
                ebx -= 1
    
    int32_t eax_12 = eax_11 | 0x80
    
    if (eax_12 s>= 0)
        bool cond:1_1
        
        if (eax_12.b s< 0)
            if (*(edi_2 + 0xc) != eax_12)
                cond:1_1 = *(edi_2 + 0x10) != eax_12
                goto label_4a01a1
            
            ebx -= 2
        else if ((*(edi_2 + 0xc) & 0x7f) == eax_12)
            ebx -= 2
        else
            cond:1_1 = (*(edi_2 + 0x10) & 0x7f) != eax_12
        label_4a01a1:
            
            if (not(cond:1_1))
                ebx -= 2
    
    if (ebx s< 0)
        ebx = 0
    
    sub_49fc70(arg3, var_738, ebx)
    int32_t result = 0
    
    if (*(arg3 + 0x1ec3) == 0)
        int32_t result_1 = 0
        
        if (eax_6 s> 0)
            do
                void* ebx_1 = *(&var_72c + (result << 3))
                int32_t* ecx_6 = arg3
                int32_t edx_5 = sx.d(*(&var_730 + (result << 3))) * 5
                void* esi_1 = *ecx_6[edx_5 + 0x11b]
                
                if ((*(ebx_1 + 8) & 4) != 0)
                    edx_5 = sub_49cf20(ecx_6, var_738, sx.d(*(ebx_1 + 0x10)), esi_1)
                    edi_2 = var_74c
                    ecx_6 = arg3
                
                void var_410
                
                if ((*(ebx_1 + 8) & 0x80) != 0)
                    edx_5 = arg3[eax_3 + 0x11b]
                    
                    if ((*(edx_5 + 0x10) & 0x40) != 0)
                        int32_t eax_23 = sx.d(*(ebx_1 + 0x10))
                        *(edi_2 + 0x83) += eax_23.b
                        
                        if (ecx_6[6].b == 0)
                            int32_t var_75c_3 = eax_23
                            edx_5 = sub_49b990(var_738, edx_5)
                            ecx_6 = arg3
                            
                            if (ecx_6[6].b == 0 && esi_1 != 0)
                                void* var_75c_4 = esi_1
                                int32_t var_760_3 = eax_23
                                int32_t var_764_1 = *edi_2
                                sub_5a733b(&var_410, "%s receives %d prestige from %s.\n")
                                char const* const var_75c_5 = "verbose"
                                void* var_760_4 = &var_410
                                edx_5 = sub_4c5680("%s (%s)")
                                ecx_6 = arg3
                        
                        *(edi_2 + 0x84) = 1
                
                if ((*(ebx_1 + 8) & 0x100) != 0)
                    edx_5 = arg3[eax_3 + 0x11b]
                    
                    if (*(edx_5 + 7) == 6)
                        int32_t eax_31 = sx.d(*(ebx_1 + 0x10))
                        *(edi_2 + 0x83) += eax_31.b
                        
                        if (ecx_6[6].b == 0)
                            int32_t var_75c_6 = eax_31
                            edx_5 = sub_49b990(var_738, edx_5)
                            ecx_6 = arg3
                            
                            if (ecx_6[6].b == 0 && esi_1 != 0)
                                void* var_75c_7 = esi_1
                                int32_t var_760_5 = eax_31
                                int32_t var_764_2 = *edi_2
                                sub_5a733b(&var_410, "%s receives %d prestige from %s.\n")
                                char const* const var_75c_8 = "verbose"
                                void* var_760_6 = &var_410
                                edx_5 = sub_4c5680("%s (%s)")
                                ecx_6 = arg3
                        
                        *(edi_2 + 0x84) = 1
                
                if ((*(ebx_1 + 8) & 0x40) != 0)
                    int32_t ebx_2 = sx.d(*(ebx_1 + 0x10))
                    *(edi_2 + 0x83) += ebx_2.b
                    
                    if (ecx_6[6].b == 0)
                        int32_t var_75c_9 = ebx_2
                        sub_49b990(var_738, edx_5)
                        ecx_6 = arg3
                    
                    if (ecx_6[6].b == 0 && esi_1 != 0)
                        void* var_75c_10 = esi_1
                        int32_t var_760_7 = ebx_2
                        int32_t var_764_3 = *edi_2
                        sub_5a733b(&var_410, "%s receives %d prestige from %s.\n")
                        char const* const var_75c_11 = "verbose"
                        void* var_760_8 = &var_410
                        sub_4c5680("%s (%s)")
                    
                    *(edi_2 + 0x84) = 1
                
                result = result_1 + 1
                result_1 = result
            while (result s< eax_6)
        
        result = 1
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
