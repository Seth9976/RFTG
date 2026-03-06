// 函数名称: sub_4e80e0
// 虚拟地址: 0x4e80e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e80e0(char* arg1, void* arg2)
{
    // 第一条实际指令: if (data_27e7fcc == 0)
    if (data_27e7fcc == 0)
        return 
    
    char** eax_1 = sub_509140(0x18, arg1)
    void* eax_2 = data_27e7fcc
    
    if (eax_2 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t* ebx_1 = *(eax_2 + 0x2c)
    int32_t ecx_1 = ebx_1[1]
    char** eax = nullptr
    int32_t* var_8_1 = ebx_1
    int32_t edx_3
    
    if (ecx_1 == 0)
    label_4e8167:
        edx_3 = 0
    else
        void* edx_2 = *ebx_1
        
        while ((*(edx_2 + 0x90) & 0xffff0000) == 0)
            eax += 1
            edx_2 += 0x94
            
            if (eax u>= ecx_1)
                goto label_4e8167
        
        edx_3 = *(edx_2 + 0x90)
    
    int32_t edi_1 = edx_3
    
    if (edx_3 == 0)
        return 
    
    while (true)
        int32_t edx_4 = ebx_1[1]
        int32_t edi_2 = edi_1 & 0xffff
        int32_t edi_3 = *ebx_1
        int32_t eax_5 = edi_2 + 1
        void* esi_3 = edi_2 * 0x94 + edi_3
        
        if (eax_5 u>= edx_4)
        label_4e81c7:
            edi_1 = 0
        else
            void* ecx_5 = eax_5 * 0x94 + edi_3
            
            while ((*(ecx_5 + 0x90) & 0xffff0000) == 0)
                eax_5 += 1
                ecx_5 += 0x94
                
                if (eax_5 u>= edx_4)
                    goto label_4e81c7
            
            edi_1 = *(ecx_5 + 0x90)
        
        if (*esi_3 == eax_1)
            int32_t eax_6 = *(esi_3 + 0x6c)
            
            if (eax_6 s> 0 && eax_6 != *(arg2 + 0x14))
                sub_4e7a20(esi_3)
                int32_t eax_7 = *(esi_3 + 0x6c)
                
                if (*(esi_3 + 0x78) s>= eax_7)
                    *(esi_3 + 0x78) = eax_7 - 1
            
            int32_t ecx_7 = *(esi_3 + 0xc)
            eax = *(arg2 + 0x2c)
            
            if (ecx_7 s>= eax)
                *(esi_3 + 0xc) = eax - 1
                *(esi_3 + 0x10) = 1
            else if (*(esi_3 + 0x10) + ecx_7 s>= eax)
                *(esi_3 + 0x10) = eax - ecx_7
        
        if (edi_1 == 0)
            break
        
        ebx_1 = var_8_1
}
