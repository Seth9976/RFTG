// 函数名称: sub_569c80
// 虚拟地址: 0x569c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_569c80()
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
    
    void* ecx_1 = *(eax + 4)
    int32_t edx = *(ecx_1 + 4)
    int32_t eax_2 = 0
    void* var_8_1 = ecx_1
    int32_t esi_2
    
    if (edx == 0)
    label_569ce1:
        esi_2 = 0
    else
        void* esi_1 = *ecx_1
        
        while ((*(esi_1 + 0x68) & 0xffff0000) == 0)
            eax_2 += 1
            esi_1 += 0x6c
            
            if (eax_2 u>= edx)
                goto label_569ce1
        
        esi_2 = *(esi_1 + 0x68)
    
    int32_t edi = esi_2
    
    if (esi_2 == 0)
        return eax_2
    
    while (true)
        int32_t ebx_1 = *ecx_1
        int32_t edx_1 = *(ecx_1 + 4)
        int32_t edi_1 = edi & 0xffff
        int32_t eax_3 = edi_1 + 1
        void* esi_5 = edi_1 * 0x6c + ebx_1
        
        if (eax_3 u>= edx_1)
        label_569d31:
            edi = 0
        else
            ecx_1 = eax_3 * 0x6c + ebx_1
            
            while ((*(ecx_1 + 0x68) & 0xffff0000) == 0)
                eax_3 += 1
                ecx_1 += 0x6c
                
                if (eax_3 u>= edx_1)
                    goto label_569d31
            
            edi = *(ecx_1 + 0x68)
        
        int32_t eax_4 = sub_569b60(ecx_1, esi_5)
        
        if (eax_4 u> 5)
            break
        
        *(esi_5 + 0x64) = not.b((*(data_307920c + (eax_4 << 2) + 4) u>> 2).b) & 1
        
        if (edi == 0)
            return eax_4
        
        ecx_1 = var_8_1
    
    sub_4c5870("filterGroup >= 0 && filterGroup < FILTER_COUNT", &data_83f3d3, "Editor\EditMode.cpp", 
        0x76c, "EditModeGetLayoutFilter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
