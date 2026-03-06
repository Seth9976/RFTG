// 函数名称: sub_66a8e0
// 虚拟地址: 0x66a8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66a8e0(char* arg1)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    *(esi + 0xfc) += 1
    uint32_t result = *(esi + 0xfc)
    
    if (result u>= *(esi + 0xec))
        int32_t ebx
        int32_t var_c_1 = ebx
        
        if (esi[0x138] != 0)
            int128_t* ecx_1 = *(esi + 0x104)
            int32_t eax_1 = *(esi + 0xf4) + 1
            *(esi + 0xfc) = 0
            sub_5abfc0(ecx_1, 0, eax_1)
            
            while (true)
                esi[0x139] += 1
                ebx.b = esi[0x139]
                
                if (ebx.b u>= 7)
                    goto label_66a9a9
                
                uint32_t ecx_2 = zx.d(ebx.b)
                uint32_t edi_1 = zx.d(*(ecx_2 + 0x82f024))
                result = divu.dp.d(0:(*(esi + 0xe4) - zx.d(*(ecx_2 + 0x82f01c)) + edi_1 - 1), edi_1)
                bool cond:1_1 = (esi[0x74] & 2) != 0
                *(esi + 0xf8) = result
                
                if (cond:1_1)
                    break
                
                uint32_t edi_2 = zx.d(*(ecx_2 + 0x82f034))
                result = divu.dp.d(0:(*(esi + 0xe8) - zx.d(*(ecx_2 + 0x82f02c)) + edi_2 - 1), edi_2)
                *(esi + 0xec) = result
                
                if (result != 0)
                    if (*(esi + 0xf8) != 0)
                        break
        
        if (esi[0x138] == 0 || ebx.b u>= 7)
        label_66a9a9:
            
            if ((esi[0x70] & 0x20) == 0)
                *(esi + 0x84) = &arg1:3
                *(esi + 0x88) = 1
                
                while (true)
                    if (*(esi + 0x7c) == 0)
                        if (*(esi + 0x120) == 0)
                            uint32_t i
                            
                            do
                                sub_667b40(esi, 0)
                                i = sub_667a40(esi)
                                bool cond:2_1 = *(esi + 0x100) != 0x49444154
                                *(esi + 0x120) = i
                                
                                if (cond:2_1)
                                    sub_664320(esi, "Not enough image data")
                                    noreturn
                            while (i == 0)
                        
                        int32_t eax_6 = *(esi + 0xb4)
                        int32_t ecx_4 = *(esi + 0x120)
                        char* edi_3 = *(esi + 0xb0)
                        *(esi + 0x7c) = eax_6
                        *(esi + 0x78) = edi_3
                        
                        if (eax_6 u> ecx_4)
                            *(esi + 0x7c) = ecx_4
                        
                        int32_t ebx_1 = *(esi + 0x7c)
                        sub_664410(esi, edi_3, ebx_1)
                        sub_662280(esi, edi_3, ebx_1)
                        *(esi + 0x120) -= *(esi + 0x7c)
                    
                    int32_t eax_7 = sub_6754d0(&esi[0x78], 1)
                    
                    if (eax_7 != 1)
                        if (eax_7 != 0)
                            char* eax_9 = *(esi + 0x90)
                            
                            if (eax_9 == 0)
                                eax_9 = "Decompression Error"
                            
                            sub_664320(esi, eax_9)
                            noreturn
                        
                        if (*(esi + 0x88) != eax_7)
                            continue
                        
                        sub_664100(esi, "Extra compressed data")
                    else if (*(esi + 0x88) == 0 || *(esi + 0x7c) != 0 || *(esi + 0x120) != 0)
                        sub_664100(esi, "Extra compressed data")
                    
                    *(esi + 0x6c) |= 8
                    *(esi + 0x70) |= 0x20
                    *(esi + 0x88) = 0
                    break
            
            if (*(esi + 0x120) != 0 || *(esi + 0x7c) != 0)
                sub_664100(esi, "Extra compression data")
            
            result = sub_675210(&esi[0x78])
            *(esi + 0x6c) |= 8
    
    return result
}
