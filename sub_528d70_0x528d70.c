// 函数名称: sub_528d70
// 虚拟地址: 0x528d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_528d70()
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    void* ecx
    int32_t edx
    eax, ecx, edx = sub_521460(data_30d74e8)
    int32_t* entry_ebx
    void* eax_1 = entry_ebx[0x515]
    
    if (eax_1 == 0)
        sub_4c5870("el.parent", &data_83f3d3, "UI2.cpp", 0xe94, "UI2DeleteElement")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t i = 0
    
    if (*(eax_1 + 0x19d0) s> 0)
        int32_t* esi_1 = 0x15d0
        
        do
            edx = *(esi_1 + entry_ebx[0x515])
            eax_1 = sub_530500(ecx, edx)
            
            if (eax_1 == entry_ebx)
                void* eax_4 = entry_ebx[0x515]
                edx = sub_5a6c10(eax_4 + (i << 2) + 0x15d0, eax_4 + (i << 2) + 0x15d4, 
                    ((*(eax_4 + 0x19d0) - i) << 2) + 0xfffffffc)
                void* eax_6 = entry_ebx[0x515]
                *(eax_6 + 0x19d0) -= 1
                eax_1 = entry_ebx[0x515]
                *(eax_1 + 0x19d4) -= 1
                break
            
            ecx = entry_ebx[0x515]
            i += 1
            esi_1 = &esi_1[1]
        while (i s< *(ecx + 0x19d0))
    
    void* ecx_2 = entry_ebx[0x515]
    int32_t i_1 = 0
    
    if (*(ecx_2 + 0x19d0) s> 0)
        int32_t* esi_2 = 0x15d0
        
        do
            edx = *(esi_2 + entry_ebx[0x515])
            ecx_2 = sub_530500(ecx_2, edx)
            eax_1 = entry_ebx[0x515]
            i_1 += 1
            esi_2 = &esi_2[1]
        while (i_1 s< *(eax_1 + 0x19d0))
    
    int32_t esi_3 = entry_ebx[1]
    void* eax_7 = sub_528c70(eax_1, edx, eax, esi_3)
    
    if (eax_7 != 0)
        *(eax_7 + 8) -= 1
    
    char const (** var_18_3)[0xa] = &data_8c00ec
    int32_t* eax_9
    int32_t ecx_4
    eax_9, ecx_4 = sub_4fff30(data_315f70c, 0)
    sub_505290(eax, eax_9, ecx_4, esi_3)
    void* eax_11 = nullptr
    
    while (true)
        void* edx_6 = data_be1ed8
        int32_t ecx_9
        
        while (true)
            if (eax_11 != 0)
                eax_11 += 0x19e0
            else
                eax_11 = edx_6
            
            void* ecx_7 = data_be1edc * 0x19e0 + edx_6
            
            if (eax_11 u>= ecx_7)
            label_528ef3:
                sub_530620(entry_ebx)
                int32_t result = data_be1ee4
                data_be1ee4 = zx.d(entry_ebx[0x677].w)
                entry_ebx[0x677] = result
                data_be1ee8 -= 1
                return result
            
            while ((*(eax_11 + 0x19dc) & 0xffff0000) == 0)
                eax_11 += 0x19e0
                
                if (eax_11 u>= ecx_7)
                    goto label_528ef3
            
            if (*eax_11 == *entry_ebx)
                ecx_9 = *(eax_11 + 4)
                
                if (ecx_9 s>= entry_ebx[1])
                    break
        
        *(eax_11 + 4) = ecx_9 - 1
}
