// 函数名称: sub_503b50
// 虚拟地址: 0x503b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_503b50(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void* i = arg2[3]
    void* i = arg2[3]
    int32_t* ebx_1 = *arg2 + arg1
    uint32_t ecx_1 = *(i + 0x10) - 1
    void* ecx_2
    int32_t edx
    int32_t* esi_1
    
    if (ecx_1 u> 0x10)
    label_503bfb:
        void* esi_2 = arg2[9]
        
        if (ebx_1 == esi_2)
            i.b = 1
            return i
        
        if (esi_2 == 0)
            int32_t esi_3 = *(i + 8)
            int32_t esi_4 = neg.d(esi_3)
            int32_t esi_7 = neg.d(sbb.d(esi_4, esi_4, esi_3 != 0)) - 1
            
            if (esi_7 == 0xffffffff)
                i.b = 1
                return i
            
            while (true)
                void* eax_3 = arg2[3]
                int32_t edx_3 = esi_7 * 0xf
                esi_7 += 1
                
                if (esi_7 s>= *(eax_3 + 8))
                    esi_7 = 0xffffffff
                
                if (sub_503b50(ebx_1, *(eax_3 + 4) + (edx_3 << 2)).b == 0)
                    break
                
                if (esi_7 == 0xffffffff)
                    i.b = 1
                    return i
            
            goto label_503bf3
        
        i = sub_4fe2c0(i)
        ecx_2 = esi_2
        esi_1 = ebx_1
        
        while (i u>= 4)
            if (*esi_1 != *ecx_2)
                goto label_503bf3
            
            i -= 4
            ecx_2 += 4
            esi_1 = &esi_1[1]
    else
        switch (ecx_1)
            case 0
                i = arg2[0xd]
                ecx_2 = &arg2[9]
                esi_1 = ebx_1
                
                while (i u>= 4)
                    if (*esi_1 != *ecx_2)
                        goto label_503bf3
                    
                    i -= 4
                    ecx_2 += 4
                    esi_1 = &esi_1[1]
            case 1
            label_503bf3:
                i.b = 0
                return i
            case 2
                char* edi_2 = arg2[9]
                char* ebx_2 = *ebx_1
                
                while (true)
                    i.b = *ebx_2
                    char temp1_1 = *edi_2
                    bool c_1 = i.b u< temp1_1
                    
                    if (i.b == temp1_1)
                        if (i.b == 0)
                            i = nullptr
                            break
                        
                        i.b = ebx_2[1]
                        char temp4_1 = edi_2[1]
                        c_1 = i.b u< temp4_1
                        
                        if (i.b == temp4_1)
                            ebx_2 = &ebx_2[2]
                            edi_2 = &edi_2[2]
                            
                            if (i.b != 0)
                                continue
                            
                            i = nullptr
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    i = sbb.d(sbb.d(i, i, c_1), 0xffffffff, c_2)
                    break
                
                if (i != 0)
                    goto label_503bf3
                
                i.b = 1
                return i
            case 3
                int32_t eax_1 = sub_4fe300(arg2[8], edx, arg2[9])
                eax_1.b = *ebx_1 == eax_1
                return eax_1
            case 4
                goto label_503bfb
    
    if (i == 0)
        i.b = 1
        return i
    
    edx.b = *ecx_2
    
    if (edx.b != *esi_1)
        goto label_503bf3
    
    if (i u<= 1)
        i.b = 1
        return i
    
    edx.b = *(ecx_2 + 1)
    
    if (edx.b != *(esi_1 + 1))
        goto label_503bf3
    
    if (i u<= 2)
        i.b = 1
        return i
    
    i.b = *(ecx_2 + 2)
    
    if (i.b != *(esi_1 + 2))
        goto label_503bf3
    
    i.b = 1
    return i
}
