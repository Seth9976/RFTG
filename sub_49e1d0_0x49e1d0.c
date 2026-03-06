// 函数名称: sub_49e1d0
// 虚拟地址: 0x49e1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49e1d0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: switch (arg3)
    switch (arg3)
        case 0
            if (*(arg1 + 6) != 2)
                return 0
            
            int32_t esi_1 = sx.d(*(arg1 + 0x15))
            int32_t edx = 0
            
            if (esi_1 s<= 0)
                return 0
            
            void* eax_1 = arg1 + 0x28
            
            while (true)
                if (*(eax_1 - 0x10) == 3 && *(eax_1 - 8) == 0x100 && *(eax_1 - 4) == 0)
                    arg3.b = *eax_1
                    
                    if (arg3.b == 1)
                        break
                    
                    if (arg3.b == 2)
                        break
                
                edx += 1
                eax_1 += 0x18
                
                if (edx s>= esi_1)
                    return 0
            
            return 1
        case 1
            if (*(arg1 + 6) != 1)
                return 0
            
            char ecx = (*(arg1 + 0x10)).b
            
            if ((ecx & 2) == 0 || (ecx & 1) == 0)
                return 0
        case 2
            if (*(arg1 + 6) != 1)
                return 0
            
            char ecx_1 = (*(arg1 + 0x10)).b
            
            if ((ecx_1 & 2) == 0)
                return 0
            
            if ((ecx_1 & 1) != 0)
                return 0
        case 3
            if (*(arg1 + 6) == 1)
                return *(arg1 + 0x10) & 0x800
            
            return 0
        case 4
            if (*(arg1 + 6) != 1)
                return 0
            
            arg1.b = *(arg1 + 0xe)
            
            if (arg1.b != 5 && arg1.b != 1)
                return 0
            
            return 1
        case 5
            int32_t ebx = sx.d(*(arg1 + 0x15))
            int32_t edi_1 = 0
            
            if (ebx s> 0)
                void* edx_1 = arg1 + 0x20
                
                do
                    if (*(edx_1 - 8) == 4)
                        int32_t eax_8
                        
                        if (*(edx_1 + 9) s<= 1)
                            eax_8 = *edx_1
                            int32_t var_8_1 = *(edx_1 + 4)
                        
                        if (*(edx_1 + 9) s> 1 || (eax_8 & 0x10000) != 0)
                            eax_8 = *edx_1
                            int32_t var_8_2 = *(edx_1 + 4)
                            
                            if ((eax_8 & 0x7c00) != 0 || (eax_8 & 0xe0000) != 0)
                                return 1
                        else if ((eax_8 & 0xe0000) != 0)
                            return 1
                    
                    edi_1 += 1
                    edx_1 += 0x18
                while (edi_1 s< ebx)
            
            return 0
        case 6
            if (*(arg1 + 6) != 1 || (*(arg1 + 0x10) & 1) == 0)
                return 0
            
            int32_t edx_2
            edx_2.b = *(arg1 + 7) s>= 5
            return edx_2
        case 7
            if (*(arg1 + 6) != 2 || *(arg1 + 7) != 6)
                return 0
            
            int32_t ecx_10
            ecx_10.b = *(arg1 + 0x90) != 0
            return ecx_10
        case 8
            int32_t edi_2 = sx.d(*(arg1 + 0x15))
            int32_t esi_2 = 0
            
            if (edi_2 s<= 0)
                return 0
            
            void* edx_3 = arg1 + 0x18
            
            while (*edx_3 != 3 || (*(edx_3 + 0xc) & 0x1bc) == 0)
                esi_2 += 1
                edx_3 += 0x18
                
                if (esi_2 s>= edi_2)
                    return 0
            
            return 1
    
    arg1.b = *(arg1 + 7)
    
    if (arg1.b s< 1 || arg1.b s> 2)
        return 0
    
    return 1
}
