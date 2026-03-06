// 函数名称: sub_5cce60
// 虚拟地址: 0x5cce60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cce60(char* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* ebx = arg1
    
    if (ebx != 0)
        int32_t* eax_1 = sub_5d4520()
        *eax_1 = 1
        sub_5cd270(&eax_1[1], ebx, 0x80)
        eax_1[0x21] = 0
        void* eax_3
        eax_3.b = *ebx
        
        if (eax_3.b != 0)
            void* const* edx_1 = &__return_addr
            char** edi_1 = &arg1
            
            do
                ebx = &ebx[1]
                
                if (eax_3.b == 0x25)
                    while (true)
                        eax_3.b = *ebx
                        
                        if (eax_3.b != 0x2e)
                            if (eax_3.b s< 0x30)
                                break
                            
                            if (eax_3.b s> 0x39)
                                break
                        
                        ebx = &ebx[1]
                    
                    eax_3 = sx.d(*ebx)
                    ebx = &ebx[1]
                    arg1 = ebx
                    
                    switch (eax_3)
                        case nullptr
                            ebx -= 1
                        case 0x58, 0x63, 0x64, 0x69, 0x6f, 0x75, 0x78
                            int32_t ecx_2 = edi_1[1]
                            edi_1 = &edi_1[1]
                            edx_1 = &edx_1[1]
                            *((eax_1[0x21] << 7) + eax_1 + 0x88) = ecx_2
                            eax_1[0x21] += 1
                        case 0x66
                            long double x87_r7_1 = fconvert.t(*(edx_1 + 8))
                            edx_1 = &edx_1[2]
                            edi_1 = &edi_1[2]
                            *((eax_1[0x21] << 7) + eax_1 + 0x88) = fconvert.d(x87_r7_1)
                            eax_1[0x21] += 1
                        case 0x70
                            eax_3 = edi_1[1]
                            edi_1 = &edi_1[1]
                            edx_1 = &edx_1[1]
                            eax_1[eax_1[0x21] * 0x20 + 0x22] = eax_3
                            eax_1[0x21] += 1
                        case 0x73
                            char const* const eax_6 = edi_1[1]
                            edi_1 = &edi_1[1]
                            
                            if (eax_6 == 0)
                                eax_6 = "(null)"
                            
                            sub_5cd270(&eax_1[eax_1[0x21] * 0x20 + 0x22], eax_6, 0x80)
                            edx_1 = &edx_1[1]
                            eax_1[0x21] += 1
                    
                    if (eax_1[0x21] s>= 5)
                        break
                
                eax_3.b = *ebx
            while (eax_3.b != 0)
        
        char* __saved_edi_1 = sub_5cce30()
        sub_5ce940(1, "%s")
    
    return 0xffffffff
}
