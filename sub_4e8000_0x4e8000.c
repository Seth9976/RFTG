// 函数名称: sub_4e8000
// 虚拟地址: 0x4e8000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e8000()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edx = *(eax + 0x2c)
    int32_t ecx_1 = edx[1]
    void* result = nullptr
    int32_t* var_8_1 = edx
    int32_t esi_2
    
    if (ecx_1 == 0)
    label_4e8067:
        esi_2 = 0
    else
        void* esi_1 = *edx
        
        while ((*(esi_1 + 0x90) & 0xffff0000) == 0)
            result += 1
            esi_1 += 0x94
            
            if (result u>= ecx_1)
                goto label_4e8067
        
        esi_2 = *(esi_1 + 0x90)
    
    if (esi_2 != 0)
        while (true)
            int32_t edi_1 = *edx
            int32_t edx_1 = edx[1]
            void* esi_3 = esi_2 & 0xffff
            result = esi_3 + 1
            
            if (result u>= edx_1)
            label_4e80b7:
                esi_2 = 0
            else
                void* ecx_4 = result * 0x94 + edi_1
                
                while ((*(ecx_4 + 0x90) & 0xffff0000) == 0)
                    result += 1
                    ecx_4 += 0x94
                    
                    if (result u>= edx_1)
                        goto label_4e80b7
                
                esi_2 = *(ecx_4 + 0x90)
            
            if (*(esi_3 * 0x94 + edi_1 + 0x7c) != 0)
                result = sub_4e7bb0()
            
            if (esi_2 == 0)
                break
            
            edx = var_8_1
    
    return result
}
