// 函数名称: sub_56a430
// 虚拟地址: 0x56a430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_56a430()
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    sub_4c6230(&var_c)
    int32_t* ebx = data_3079210
    ebx[0xb] = var_c
    int32_t var_8
    ebx[0xc] = var_8
    
    while (ebx[0xf] != 0)
        void* i = sub_4db440(&ebx[0xd])
        void* eax_2 = data_3079210
        int32_t* ecx_1 = *(eax_2 + 0xc)
        
        if (ecx_1 == 0)
        label_56a48b:
            ecx_1 = nullptr
        else
            while (*ecx_1 != i)
                ecx_1 = ecx_1[1]
                
                if (ecx_1 == 0)
                    goto label_56a48b
        
        sub_4e7520(eax_2 + 0xc, i, ecx_1)
        ebx = data_3079210
    
    void* eax_4 = data_27e7fcc
    
    if (eax_4 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi_1 = *(eax_4 + 4)
    int32_t ecx_2 = edi_1[1]
    int32_t eax_6 = 0
    int32_t* var_8_1 = edi_1
    int32_t edx_3
    
    if (ecx_2 == 0)
    label_56a4f8:
        edx_3 = 0
    else
        void* edx_2 = *edi_1
        
        while ((*(edx_2 + 0x68) & 0xffff0000) == 0)
            eax_6 += 1
            edx_2 += 0x6c
            
            if (eax_6 u>= ecx_2)
                goto label_56a4f8
        
        edx_3 = *(edx_2 + 0x68)
    
    int32_t esi = edx_3
    
    if (edx_3 == 0)
        return eax_6
    
    int32_t* i_1
    
    while (true)
        int32_t edi_2 = *edi_1
        int32_t esi_1 = esi & 0xffff
        int32_t esi_2 = var_8_1[1]
        int32_t eax_8 = esi_1 + 1
        void* edx_6 = esi_1 * 0x6c + edi_2
        
        if (eax_8 u>= esi_2)
        label_56a547:
            esi = 0
        else
            void* ecx_6 = eax_8 * 0x6c + edi_2
            
            while ((*(ecx_6 + 0x68) & 0xffff0000) == 0)
                eax_8 += 1
                ecx_6 += 0x6c
                
                if (eax_8 u>= esi_2)
                    goto label_56a547
            
            esi = *(ecx_6 + 0x68)
        
        i_1 = data_307920c
        int32_t ecx_7 = *(edx_6 + 0x68)
        
        if (*i_1 != 1)
        label_56a571:
            
            for (i_1 = *(*ebx + (((ecx_7 s>> 4 | ecx_7) & ebx[1]) << 2)); i_1 != 0; i_1 = i_1[5])
                if (ecx_7 == *i_1)
                    int32_t* i_2 = i_1
                    i_1 = &i_1[1]
                    
                    if (i_2 != 0xfffffffc)
                        i_1 = sub_569b60(ecx_7, edx_6)
                        
                        if (i_1 u> 5)
                            sub_4c5870("filterGroup >= 0 && filterGroup < FILTER_COUNT", &data_83f3d3, 
                                "Editor\EditMode.cpp", 0x76c, "EditModeGetLayoutFilter")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    
                    break
            
            ebx = data_3079210
        else if (ebx[0x1c] != ecx_7 && ebx[0x1d] != ecx_7 && ebx[0x1e] != ecx_7)
            goto label_56a571
        
        if (esi == 0)
            break
        
        edi_1 = var_8_1
    
    return i_1
}
