// 函数名称: sub_5c3620
// 虚拟地址: 0x5c3620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c3620(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (ebx == 0)
        return ebx + 1
    
    int32_t eax_1 = *ebx
    int32_t eax_2 = ebx[2]
    
    if (eax_2 == 0)
        uint32_t ecx_1 = zx.d(ebx[1].w)
        void* i = nullptr
        eax_2 = 1
        
        if (ecx_1 != 0)
            int32_t edi
            int32_t var_18_1 = edi
            
            do
                char* edi_2 = i + eax_1
                int32_t ecx_2
                ecx_2.b = *edi_2
                
                if ((ecx_2.b u<= 0x1f || ecx_2.b u>= 0x80) && ecx_2.b != 0xd && ecx_2.b != 0xa
                        && ecx_2.b != 9)
                    int32_t edx
                    edx.b = ecx_2.b
                    edx.b &= 0xe0
                    eax_2 = 3
                    
                    if (edx.b != 0xc0)
                        edx.b = ecx_2.b
                        edx.b &= 0xf0
                        
                        if (edx.b == 0xe0)
                            edx = 2
                            goto label_5c36b0
                        
                        ecx_2.b &= 0xf8
                        
                        if (ecx_2.b == 0xf0)
                            edx = 3
                            goto label_5c36b0
                        
                    label_5c36e1:
                        eax_2 = 4
                        break
                    
                    edx = 1
                label_5c36b0:
                    i += edx
                    
                    if (i u>= ecx_1)
                        goto label_5c36e1
                    
                    int32_t ecx_3 = 1
                    
                    if (edx u>= 1)
                        do
                            ebx.b = edi_2[ecx_3]
                            ebx.b &= 0xc0
                            
                            if (ebx.b != 0x80)
                                ebx = arg1
                                goto label_5c36e1
                            
                            ecx_3 += 1
                        while (ecx_3 u<= edx)
                        
                        ebx = arg1
                
                i += 1
            while (i u< zx.d(ebx[1].w))
    
    ebx[2] = eax_2
    
    if (arg2 != 0)
        if (arg2 == 2 && eax_2 == 3)
            ebx[2] = arg2
            return arg2
        
        if (arg2 != eax_2 && eax_2 != 1)
            return 5
    
    return eax_2
}
