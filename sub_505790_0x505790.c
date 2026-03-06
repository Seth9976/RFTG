// 函数名称: sub_505790
// 虚拟地址: 0x505790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_505790(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    int32_t var_1c = 0
    
    if (arg3 s<= 0)
        return 
    
    while (true)
        int32_t* eax_3 = arg1 + *(arg2 + (ecx << 3)) * 0x1c
        int32_t* entry_ebx
        *eax_3 = entry_ebx
        char* ecx_1 = *(arg2 + (ecx << 3) + 4)
        
        if (entry_ebx[1] != 0x1e)
            break
        
        if (*entry_ebx == 0)
            sub_520800(eax_3, arg2.b, entry_ebx, 0)
            
            if (*entry_ebx == 0)
                sub_509540(entry_ebx)
        
        int32_t* eax_5 = **entry_ebx
        int32_t ecx_3 = eax_5[1]
        int32_t edi_1 = 0
        int32_t* var_10_1 = eax_5
        int32_t esi_3 = 0
        
        while (true)
            if (edi_1 s>= ecx_3)
                char* const eax_13 = entry_ebx[8]
                
                if (eax_13 == 0)
                    eax_13 = &data_83f3d3
                
                char* const var_2c = eax_13
                char* var_30 = ecx_1
                sub_4c57f0("couldn't find element %s in %s")
                sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0x1d2, "UILayoutGetElementIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* ecx_4 = ecx_1
            char* eax_6 = *(esi_3 + *eax_5 + 8)
            int32_t eax_8
            
            while (true)
                int32_t edx_3
                edx_3.b = *eax_6
                char temp0_1 = *ecx_4
                bool c_1 = edx_3.b u< temp0_1
                
                if (edx_3.b == temp0_1)
                    if (edx_3.b == 0)
                        eax_8 = 0
                        break
                    
                    edx_3.b = eax_6[1]
                    char temp3_1 = ecx_4[1]
                    c_1 = edx_3.b u< temp3_1
                    
                    if (edx_3.b == temp3_1)
                        eax_6 = &eax_6[2]
                        ecx_4 = &ecx_4[2]
                        
                        if (edx_3.b != 0)
                            continue
                        
                        eax_8 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_8 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
                break
            
            if (eax_8 == 0)
                eax_3[1] = edi_1
                int32_t eax_11 = var_1c + 1
                var_1c = eax_11
                
                if (eax_11 s>= arg3)
                    return 
                
                ecx = var_1c
                break
            
            eax_5 = var_10_1
            edi_1 += 1
            esi_3 += 0x118
    
    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, "UIDefGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
