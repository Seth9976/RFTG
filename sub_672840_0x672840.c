// 函数名称: sub_672840
// 虚拟地址: 0x672840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_672840(int32_t* arg1, uint32_t arg2, char* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t var_8 = __security_cookie ^ &__saved_ebp
    uint32_t esi = arg2
    uint32_t eax_1
    eax_1.b = arg1[2].b
    
    if (eax_1.b != 3)
        uint32_t ecx_1 = zx.d(*(arg1 + 9))
        uint32_t var_28
        uint32_t var_18
        uint32_t ebx_4
        
        if ((eax_1.b & 2) == 0)
            uint32_t ebx_5 = zx.d(arg3[3])
            var_28 = ebx_5
            var_18 = ecx_1 - ebx_5
            ebx_4 = 1
        else
            uint32_t ebx_1 = zx.d(*arg3)
            var_28 = ebx_1
            uint32_t ebx_2 = zx.d(arg3[1])
            var_18 = ecx_1 - ebx_1
            eax_1 = ecx_1 - ebx_2
            uint32_t var_24_1 = ebx_2
            uint32_t ebx_3 = zx.d(arg3[2])
            uint32_t var_20_1 = ebx_3
            uint32_t var_14_1 = eax_1
            uint32_t var_10_1 = ecx_1 - ebx_3
            ebx_4 = 3
        
        uint32_t var_3c_1 = ebx_4
        uint32_t ecx_2
        
        if ((arg1[2].b & 4) != 0)
            ecx_2 = zx.d(arg3[4])
            eax_1 = zx.d(*(arg1 + 9)) - ecx_2
            (&var_18)[ebx_4] = eax_1
            (&var_28)[ebx_4] = ecx_2
            ebx_4 += 1
            var_3c_1 = ebx_4
        
        ecx_2.b = *(arg1 + 9)
        
        if (ecx_2.b u>= 8)
            int32_t edi_3 = *arg1
            
            if (ecx_2.b != 8)
                int32_t edi_7 = edi_3 * ebx_4
                uint32_t var_34_2 = 0
                
                if (edi_7 != 0)
                    do
                        uint32_t temp1_2 = modu.dp.d(0:var_34_2, ebx_4)
                        int32_t edi_8 = (&var_28)[temp1_2]
                        uint32_t eax_12 = zx.d(zx.w(*esi) * 0x100 + zx.w(*(esi + 1)))
                        int32_t var_30_2 = 0
                        int32_t i = (&var_18)[temp1_2]
                        int32_t edx_9 = neg.d(edi_8)
                        
                        if (i s> edx_9)
                            int32_t ecx_22 = neg.d(i)
                            int32_t var_38_3 = ecx_22
                            
                            do
                                if (i s<= 0)
                                    ebx_4.w = eax_12.w u>> ecx_22.b
                                else
                                    ebx_4.w = eax_12.w
                                    ebx_4.w <<= i.b
                                
                                var_30_2.w |= ebx_4.w
                                i -= edi_8
                                ecx_22 = var_38_3 - edx_9
                                var_38_3 = ecx_22
                            while (i s> neg.d(edi_8))
                            
                            ebx_4 = var_3c_1
                        
                        edx_9.b = var_30_2.b
                        *esi = (var_30_2 u>> 8).b
                        eax_1 = var_34_2 + 1
                        *(esi + 1) = edx_9.b
                        esi += 2
                        var_34_2 = eax_1
                    while (eax_1 u< edi_7)
            else
                int32_t edi_4 = edi_3 * ebx_4
                int32_t var_30_1 = 0
                
                if (edi_4 != 0)
                    int32_t eax_9
                    
                    do
                        uint32_t temp1_1 = modu.dp.d(0:var_30_1, ebx_4)
                        uint32_t ecx_7 = zx.d(*esi)
                        int32_t edi_5 = (&var_28)[temp1_1]
                        int32_t edi_6 = neg.d(edi_5)
                        *esi = 0
                        int32_t eax_7 = (&var_18)[temp1_1]
                        
                        if (eax_7 s> edi_6)
                            int32_t ecx_10 = neg.d((&__saved_ebp)[temp1_1 - 9])
                            int32_t ecx_12 = neg.d(eax_7)
                            int32_t var_3c_2 = ecx_12
                            
                            do
                                uint32_t edx_5
                                
                                if (eax_7 s<= 0)
                                    edx_5.w = ecx_7.w u>> ecx_12.b
                                else
                                    edx_5.b = ecx_7.b
                                    edx_5.b <<= eax_7.b
                                
                                eax_7 -= edi_5
                                *esi |= edx_5.b
                                ecx_12 = var_3c_2 - edi_6
                                var_3c_2 = ecx_12
                            while (eax_7 s> ecx_10)
                        
                        eax_9 = var_30_1 + 1
                        esi += 1
                        var_30_1 = eax_9
                    while (eax_9 u< edi_4)
                    
                    sub_5a6aba(var_8 ^ &__saved_ebp)
                    return eax_9
        else
            char* edx_1
            edx_1.b = arg3[3]
            int32_t i_3 = arg1[1]
            eax_1 = esi
            char var_29_1
            
            if (edx_1.b != 1 || ecx_2.b != 2)
                if (ecx_2.b == 4)
                    var_29_1 = 0x11
                
                if (ecx_2.b != 4 || edx_1.b != 3)
                    var_29_1 = 0xff
            else
                var_29_1 = 0x55
            
            if (i_3 != 0)
                int32_t edx_3 = neg.d(var_28)
                int32_t i_2 = i_3
                int32_t i_1
                
                do
                    uint32_t ecx_3 = zx.d(*eax_1)
                    uint32_t esi_1 = var_18
                    uint32_t var_38_1 = ecx_3
                    *eax_1 = 0
                    
                    if (esi_1 s> edx_3)
                        int32_t edi_2 = neg.d(esi_1)
                        
                        while (true)
                            if (esi_1 s<= 0)
                                ebx_4 = ecx_3
                                ecx_3.w = edi_2.w
                                ebx_4.w u>>= ecx_3.b
                                ebx_4.b &= var_29_1
                            else
                                ebx_4.b = ecx_3.b
                                ebx_4.b <<= esi_1.b
                            
                            esi_1 -= var_28
                            *eax_1 |= ebx_4.b
                            edi_2 -= edx_3
                            
                            if (esi_1 s<= edx_3)
                                break
                            
                            ecx_3 = var_38_1
                    
                    eax_1 += 1
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                sub_5a6aba(var_8 ^ &__saved_ebp)
                return eax_1
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return eax_1
}
