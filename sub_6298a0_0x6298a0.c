// 函数名称: sub_6298a0
// 虚拟地址: 0x6298a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* (*sub_6298a0(void* arg1))(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = *(arg1 + 4)
    int32_t* edi = *(arg1 + 4)
    int32_t* eax_1 = *(arg1 + 0x34)
    int32_t* ebx = *(*eax_1 + 4)
    void* ecx
    ecx.b = ebx[2].b
    
    if (ecx.b u>= 8)
        int32_t edx_2 = eax_1[0x11] & 0xffff8fff
        
        if (edx_2 == 0)
            if (ecx.b == 8)
                eax_1.b = *(edi + 9)
                
                if (eax_1.b == 4)
                    if (edi[3] == 0xff0000 && edi[4] == 0xff00 && edi[5] == 0xff)
                        return sub_6206b0
                    
                    if (eax_1.b == 4 && edi[3] == 0x3ff00000 && edi[4] == 0xffc00 && edi[5] == 0x3ff)
                        return sub_620a40
                
                return sub_6213f0
            
            void* esi = 1
            arg1 = 1
            
            if (ebx[6] != 0)
                int32_t edx_3
                edx_3.b = edi[6] != 0
                arg1 = edx_3 * 2 + 2
                esi = edx_3 * 2 + 2
            
            int32_t* eax_11 = *((zx.d(*(edi + 9)) << 2) + &data_6bbe1c)
            int32_t edx_5 = 0
            int32_t* var_c = eax_11
            int32_t var_8 = 0
            
            if (eax_11[3] != 0)
                while (true)
                    int32_t ecx_1 = *eax_11
                    
                    if (edi[3] == ecx_1 || ecx_1 == 0)
                        int32_t ecx_2 = eax_11[1]
                        
                        if (edi[4] == ecx_2 || ecx_2 == 0)
                            int32_t ecx_3 = eax_11[2]
                            
                            if (edi[5] == ecx_3 || ecx_3 == 0)
                                int32_t ecx_4 = eax_11[4]
                                
                                if (ebx[3] == ecx_4 || ecx_4 == 0)
                                    int32_t ecx_5 = eax_11[5]
                                    
                                    if (ebx[4] == ecx_5 || ecx_5 == 0)
                                        int32_t ecx_6 = eax_11[6]
                                        
                                        if ((ebx[5] == ecx_6 || ecx_6 == 0)
                                                && zx.d(*(ebx + 9)) == eax_11[3]
                                                && (eax_11[9] & esi) == esi)
                                            int32_t esi_1 = eax_11[7]
                                            int32_t eax_12 = sub_612570()
                                            edx_5 = var_8
                                            int32_t eax_13 = neg.d(eax_12)
                                            esi = arg1
                                            
                                            if ((neg.d(sbb.d(eax_13, eax_13, eax_12 != 0)) & esi_1)
                                                    == esi_1)
                                                eax_11 = var_c
                                                break
                    
                    edx_5 += 1
                    int32_t eax_17 = edx_5 * 5
                    eax_11 = &var_c[eax_17 * 2]
                    var_8 = edx_5
                    
                    if (var_c[eax_17 * 2 + 3] == 0)
                        eax_11 = var_c
                        break
            
            int32_t* (* result)(int32_t* arg1) = eax_11[edx_5 * 0xa + 8]
            
            if (result == sub_622d90)
                if (*edi == 0x16372004)
                    return sub_627f20
                
                if (*ebx == 0x16372004)
                    return sub_628a10
                
                if (*(edi + 9) == 4 && *(ebx + 9) == 4 && edi[3] == ebx[3] && edi[4] == ebx[4]
                        && edi[5] == ebx[5])
                    return sub_622b90
                
                if (esi == 4)
                    return sub_6242a0
            
            return result
        
        if (edx_2 == 0x100)
            if (*(edi + 9) == 2 && eax_1[1] != 0)
                return sub_625530
            
            if (*(ebx + 9) == 1)
                return sub_6245f0
            
            if (edi[6] != 0 && ebx[6] != 0)
                return sub_626670
            
            return sub_6256a0
    
    return 0
}
