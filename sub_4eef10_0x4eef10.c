// 函数名称: sub_4eef10
// 虚拟地址: 0x4eef10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4eef10()
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
    
    int32_t* edx = *(eax + 0x30)
    int32_t ecx_1 = edx[1]
    int32_t result = 0
    int32_t* var_8_1 = edx
    int32_t esi_2
    
    if (ecx_1 == 0)
    label_4eef71:
        esi_2 = 0
    else
        void* esi_1 = *edx
        
        while ((*(esi_1 + 0x78) & 0xffff0000) == 0)
            result += 1
            esi_1 += 0x7c
            
            if (result u>= ecx_1)
                goto label_4eef71
        
        esi_2 = *(esi_1 + 0x78)
    
    if (esi_2 != 0)
        while (true)
            int32_t edi_1 = *edx
            int32_t edx_1 = edx[1]
            int32_t esi_3 = esi_2 & 0xffff
            result = esi_3 + 1
            
            if (result u>= edx_1)
            label_4eefb4:
                esi_2 = 0
            else
                void* ecx_4 = result * 0x7c + edi_1
                
                while ((*(ecx_4 + 0x78) & 0xffff0000) == 0)
                    result += 1
                    ecx_4 += 0x7c
                    
                    if (result u>= edx_1)
                        goto label_4eefb4
                
                esi_2 = *(ecx_4 + 0x78)
            
            if (*(esi_3 * 0x7c + edi_1 + 0x76) != 0)
                result = sub_4eb650()
            
            if (esi_2 == 0)
                break
            
            edx = var_8_1
    
    return result
}
