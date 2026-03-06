// 函数名称: sub_673570
// 虚拟地址: 0x673570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_673570(int32_t* arg1 @ esi)
{
    // 第一条实际指令: void* i_5 = arg1[0xb]
    void* i_5 = arg1[0xb]
    void* i_6 = i_5
    
    while (true)
        int32_t eax_1 = arg1[0x1b]
        void* ebx_3 = arg1[0xf] - arg1[0x1d] - eax_1
        void* var_8_1 = ebx_3
        
        if (eax_1 u>= i_5 + arg1[0xb] - 0x106)
            int128_t* eax_2 = arg1[0xe]
            sub_5ab990(eax_2, eax_2 + i_5, i_5)
            int32_t i_3 = arg1[0x13]
            int32_t eax_3 = arg1[0x11]
            arg1[0x1c] -= i_5
            arg1[0x1b] -= i_5
            arg1[0x17] -= i_5
            int16_t* ecx_3 = eax_3 + (i_3 << 1)
            int32_t i
            
            do
                uint32_t eax_4 = zx.d(ecx_3[-1])
                ecx_3 -= 2
                int16_t eax_5
                
                if (eax_4 u< i_5)
                    eax_5 = 0
                else
                    eax_5 = eax_4.w - i_5.w
                
                i = i_3
                i_3 -= 1
                *ecx_3 = eax_5
            while (i != 1)
            void* i_4 = i_5
            int16_t* ecx_5 = arg1[0x10] + (i_5 << 1)
            void* i_1
            
            do
                uint32_t eax_6 = zx.d(ecx_5[-1])
                ecx_5 -= 2
                int16_t eax_7
                
                if (eax_6 u< i_5)
                    eax_7 = 0
                else
                    eax_7 = eax_6.w - i_5.w
                
                i_1 = i_4
                i_4 -= 1
                *ecx_5 = eax_7
            while (i_1 != 1)
            var_8_1 = ebx_3 + i_5
        
        void** edi = *arg1
        
        if (edi[1] == 0)
            break
        
        void* ecx_6 = edi[1]
        char* eax_10 = arg1[0x1d] + arg1[0x1b] + arg1[0xe]
        void* ebx_5 = ecx_6
        
        if (ebx_5 u> var_8_1)
            ebx_5 = var_8_1
        
        if (ebx_5 != 0)
            int128_t* var_20_2 = *edi
            edi[1] = ecx_6 - ebx_5
            sub_5ab990(eax_10, var_20_2, ebx_5)
            int32_t eax_12 = *(edi[7] + 0x18)
            
            if (eax_12 == 1)
                edi[0xc] = sub_6783e0(edi[0xc], eax_10, ebx_5)
            else if (eax_12 == 2)
                edi[0xc] = sub_673170(edi[0xc], eax_10, ebx_5)
            
            *edi += ebx_5
            edi[2] += ebx_5
        
        arg1[0x1d] += ebx_5
        int32_t edi_1 = arg1[0x5ad]
        
        if (edi_1 + arg1[0x1d] u>= 3)
            void* ebx_6 = arg1[0xe]
            char ecx_10 = (arg1[0x16]).b
            int32_t edx_7 = arg1[0x1b] - edi_1
            uint32_t eax_16 = zx.d(*(ebx_6 + edx_7))
            arg1[0x12] = eax_16
            arg1[0x12] = (eax_16 << ecx_10 ^ zx.d(*(ebx_6 + edx_7 + 1))) & arg1[0x15]
            
            if (edi_1 != 0)
                int32_t i_2
                
                do
                    int32_t ebx_7 = arg1[0x10]
                    int32_t ecx_13 = arg1[0x11]
                    int32_t eax_23 =
                        (zx.d(*(arg1[0xe] + edx_7 + 2)) ^ arg1[0x12] << (arg1[0x16]).b) & arg1[0x15]
                    int32_t edi_4 = arg1[0xd]
                    arg1[0x12] = eax_23
                    eax_23.w = *(ecx_13 + (eax_23 << 1))
                    *(ebx_7 + ((edi_4 & edx_7) << 1)) = eax_23.w
                    *(arg1[0x11] + (arg1[0x12] << 1)) = edx_7.w
                    arg1[0x5ad] -= 1
                    i_2 = arg1[0x5ad]
                    edx_7 += 1
                    
                    if (arg1[0x1d] + i_2 u< 3)
                        break
                while (i_2 != 0)
        
        if (arg1[0x1d] u>= 0x106)
            break
        
        if (*(*arg1 + 4) == 0)
            break
        
        i_5 = i_6
    
    int128_t* eax_28 = arg1[0x5b0]
    int32_t ecx_17 = arg1[0xf]
    
    if (eax_28 u< ecx_17)
        int32_t edi_7 = arg1[0x1d] + arg1[0x1b]
        
        if (eax_28 u< edi_7)
            int32_t ebx_8 = ecx_17 - edi_7
            
            if (ebx_8 u> 0x102)
                ebx_8 = 0x102
            
            int128_t* eax_27 = sub_5abfc0(arg1[0xe] + edi_7, 0, ebx_8)
            arg1[0x5b0] = ebx_8 + edi_7
            return eax_27
        
        if (eax_28 u< edi_7 + 0x102)
            void* edi_9 = edi_7 - eax_28 + 0x102
            void* ecx_19 = ecx_17 - eax_28
            
            if (edi_9 u> ecx_19)
                edi_9 = ecx_19
            
            eax_28 = sub_5abfc0(arg1[0xe] + eax_28, 0, edi_9)
            arg1[0x5b0] += edi_9
    
    return eax_28
}
