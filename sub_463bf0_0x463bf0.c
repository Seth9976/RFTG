// 函数名称: sub_463bf0
// 虚拟地址: 0x463bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_463bf0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = arg1
    int32_t ebx = arg1
    void* edi = data_27e7a40
    int32_t eax = *(edi + 0x2c4958)
    int32_t ecx = 0
    
    if (eax s> 0)
        void* edx_1 = edi + 0xad8
        
        do
            if (*(edx_1 + 0x1d4) == ebx)
                int32_t esi_1 = *(edx_1 + 0x140)
                int32_t eax_3 = 0
                
                if (esi_1 s> 0)
                    do
                        if (*edx_1 == arg2)
                            return ecx * 0x138a8 + eax_3 * 0x4e28 + edi + 0x51bc
                        
                        eax_3 += 1
                        edx_1 += 0x50
                    while (eax_3 s< esi_1)
                    
                    ebx = arg1
                
                break
            
            ecx += 1
            edx_1 += 0x1f8
        while (ecx s< eax)
    
    int32_t eax_1 = *(edi + 0x317ad0)
    int32_t edx_2 = 0
    
    if (eax_1 s> 0)
        void* ecx_1 = edi + 0x2c9050
        
        do
            if (*(ecx_1 + 0x1d4) == ebx)
                int32_t esi_2 = *(ecx_1 + 0x140)
                int32_t eax_7 = 0
                
                if (esi_2 s> 0)
                    do
                        if (*ecx_1 == arg2)
                            return edx_2 * 0x138a8 + eax_7 * 0x4e28 + edi + 0x2c9834
                        
                        eax_7 += 1
                        ecx_1 += 0x50
                    while (eax_7 s< esi_2)
                
                break
            
            edx_2 += 1
            ecx_1 += 0x1f8
        while (edx_2 s< eax_1)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x695e, "PlayerGamestateByDBID")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
