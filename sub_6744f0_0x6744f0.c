// 函数名称: sub_6744f0
// 虚拟地址: 0x6744f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6744f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    while (true)
        if (arg1[0x1d] == 0)
            sub_673570(arg1)
            
            if (arg1[0x1d] == 0)
                if (arg2 != 0)
                    arg1[0x5ad] = 0
                    
                    if (arg2 == 4)
                        int32_t ecx_9 = arg1[0x17]
                        char* eax_10
                        
                        if (ecx_9 s< 0)
                            eax_10 = nullptr
                        else
                            eax_10 = arg1[0xe] + ecx_9
                        
                        sub_6781e0(arg1, eax_10, arg1[0x1b] - ecx_9, 1)
                        void* edi_2 = *arg1
                        arg1[0x17] = arg1[0x1b]
                        sub_673250(edi_2)
                        int32_t eax_12
                        eax_12.b = *(*arg1 + 0x10) != 0
                        return eax_12 + 2
                    
                    if (arg1[0x5a8] != 0)
                        int32_t ecx_11 = arg1[0x17]
                        char* eax_15
                        
                        if (ecx_11 s< 0)
                            eax_15 = nullptr
                        else
                            eax_15 = arg1[0xe] + ecx_11
                        
                        sub_6781e0(arg1, eax_15, arg1[0x1b] - ecx_11, 0)
                        void* edi_3 = *arg1
                        arg1[0x17] = arg1[0x1b]
                        sub_673250(edi_3)
                    
                    if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                        return 1
                
                break
        
        char* eax = arg1[0x1b]
        int32_t ecx_1 = arg1[0xe]
        int32_t edx_1 = arg1[0x5a8]
        arg1[0x18] = 0
        eax.b = eax[ecx_1]
        *(arg1[0x5a9] + (edx_1 << 1)) = 0
        arg1[0x5a6][arg1[0x5a8]] = eax.b
        uint32_t edx_3 = zx.d(eax.b)
        arg1[0x5a8] += 1
        arg1[edx_3 + 0x25].w += 1
        arg1[0x1b] += 1
        arg1[0x1d] -= 1
        
        if (arg1[0x5a8] == arg1[0x5a7] - 1)
            int32_t edx_6 = arg1[0x17]
            char* ecx_5
            
            if (edx_6 s< 0)
                ecx_5 = nullptr
            else
                ecx_5 = arg1[0xe] + edx_6
            
            sub_6781e0(arg1, ecx_5, arg1[0x1b] - edx_6, 0)
            void* edi_1 = *arg1
            arg1[0x17] = arg1[0x1b]
            void* ebx_1 = *(edi_1 + 0x1c)
            sub_6780d0(ebx_1)
            void* eax_4 = *(ebx_1 + 0x14)
            void* ecx_6 = *(edi_1 + 0x10)
            void* var_8_1 = eax_4
            
            if (eax_4 u> ecx_6)
                var_8_1 = ecx_6
                eax_4 = ecx_6
            
            if (eax_4 != 0)
                sub_5ab990(*(edi_1 + 0xc), *(ebx_1 + 0x10), eax_4)
                *(edi_1 + 0xc) += var_8_1
                *(ebx_1 + 0x10) += var_8_1
                *(edi_1 + 0x14) += var_8_1
                *(edi_1 + 0x10) -= var_8_1
                int32_t temp0_1 = *(ebx_1 + 0x14)
                *(ebx_1 + 0x14) -= var_8_1
                
                if (temp0_1 == var_8_1)
                    *(ebx_1 + 0x10) = *(ebx_1 + 8)
            
            if (*(*arg1 + 0x10) == 0)
                break
    
    return 0
}
