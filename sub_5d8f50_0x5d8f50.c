// 函数名称: sub_5d8f50
// 虚拟地址: 0x5d8f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d8f50(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* edi
    void* edi
    
    if (arg1 == 0 || (arg1 & 0xf0000000) == 0x10000000)
        int32_t eax_3 = arg1 u>> 0x14 & 0xf
        int32_t ebx_1
        
        if (eax_3 == 3 || eax_3 == 4 || eax_3 == 7 || eax_3 == 8)
            ebx_1 = 1
        else
            ebx_1 = 0
        
        int32_t edi_1 = *(arg2 + 0x70)
        int32_t edx_2 = 0
        
        if (edi_1 != 0)
            void* esi_3 = arg2 + 0x74
            
            do
                int32_t eax_5 = *esi_3
                
                if (eax_5 == 0 || eax_5 u>> 0x1c == 1)
                    int32_t eax_7 = eax_5 u>> 0x14 & 0xf
                    int32_t eax_8
                    
                    if (eax_7 == 3 || eax_7 == 4 || eax_7 == 7 || eax_7 == 8)
                        eax_8 = 1
                    else
                        eax_8 = 0
                    
                    if (eax_8 == ebx_1)
                        return *(arg2 + (edx_2 << 2) + 0x74)
                
                edx_2 += 1
                esi_3 += 4
            while (edx_2 u< edi_1)
            
            return *(arg2 + 0x74)
        
        edi = arg2
    else
        edi = arg2
        int32_t esi_1 = *(edi + 0x70)
        
        if (esi_1 != 0)
            void* edx_1 = edi + 0x74
            int32_t ecx_3 = 0
            
            do
                if (*edx_1 == arg1)
                    return *(edi + (ecx_3 << 2) + 0x74)
                
                ecx_3 += 1
                edx_1 += 4
            while (ecx_3 u< esi_1)
    
    return *(edi + 0x74)
}
