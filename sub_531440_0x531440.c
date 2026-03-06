// 函数名称: sub_531440
// 虚拟地址: 0x531440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_531440()
{
    // 第一条实际指令: void* eax_4 = data_27e7fcc
    void* eax_4 = data_27e7fcc
    
    if (eax_4 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *(eax_4 + 0x10)
    int32_t ecx = edi[1]
    void* result = nullptr
    int32_t i_1
    
    if (ecx == 0)
    label_5314a1:
        i_1 = 0
    else
        void* edx_1 = *edi
        
        while ((*(edx_1 + 0x10) & 0xffff0000) == 0)
            result += 1
            edx_1 += 0x14
            
            if (result u>= ecx)
                goto label_5314a1
        
        i_1 = *(edx_1 + 0x10)
    
    int32_t i = i_1
    
    if (i_1 != 0)
        int32_t ebx
        int32_t var_c_1 = ebx
        
        do
            int32_t edx_2 = *edi
            int32_t esi = i & 0xffff
            int32_t ecx_2 = edi[1]
            int32_t eax_2 = esi + 1
            
            if (eax_2 u>= ecx_2)
            label_5314e1:
                i = 0
            else
                void* edx_3 = edx_2 + eax_2 * 0x14
                
                while ((*(edx_3 + 0x10) & 0xffff0000) == 0)
                    eax_2 += 1
                    edx_3 += 0x14
                    
                    if (eax_2 u>= ecx_2)
                        goto label_5314e1
                
                i = *(edx_3 + 0x10)
            
            result = sub_531880(*(edx_2 + esi * 0x14 + 0x10))
        while (i != 0)
    
    return result
}
