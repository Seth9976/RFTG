// 函数名称: sub_5266a0
// 虚拟地址: 0x5266a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5266a0(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_10 = nullptr
    void* var_10 = nullptr
    
    if (arg4 s<= 0)
        return 
    
    int32_t* esi_1 = arg1 + 0xc
    int32_t* var_8_1 = esi_1
    
    do
        *arg3
        void* eax = &esi_1[-3]
        void* ebx_2 = sub_526640(arg2, eax, esi_1[-2])
        
        if (ebx_2 == 0)
            int32_t eax_2 = *arg3
            
            if (eax_2 s>= 0xff)
                sub_4c5870("numStateVars < MAX_STATES", &data_83f3d3, "UI2.cpp", 0xaa8, 
                    "U2StateVarsMerge")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ebx_2 = &arg2[eax_2 * 5]
            *arg3 = eax_2 + 1
        
        char* ecx_3 = *ebx_2
        char* const edx_3 = &data_83f3d3
        
        if (ecx_3 != 0)
            edx_3 = ecx_3
        
        char* const eax_5 = *eax
        
        if (eax_5 == 0)
            eax_5 = &data_83f3d3
        
        if (edx_3 != eax_5)
            if (ecx_3 != 0 && *ecx_3 != 0)
                void* eax_7 = sub_4c4060(ebx_2)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_3 = *(eax_7 + 0xc) + 0x10
                    sub_4f4430(eax_7, sub_4f4380(esi_3), esi_3)
                    esi_1 = var_8_1
            
            char* eax_10 = *eax
            *ebx_2 = eax_10
            
            if (eax_10 != 0 && *eax_10 != 0)
                void* eax_12 = sub_4c4060(ebx_2)
                *(eax_12 + 4) += 1
        
        *(ebx_2 + 4) = esi_1[-2]
        *(ebx_2 + 8) = esi_1[-1]
        char* ecx_6 = *(ebx_2 + 0xc)
        char* const edi_4 = &data_83f3d3
        
        if (ecx_6 != 0)
            edi_4 = ecx_6
        
        char* const edx_5 = *esi_1
        
        if (edx_5 == 0)
            edx_5 = &data_83f3d3
        
        if (edi_4 != edx_5)
            if (ecx_6 != 0 && *ecx_6 != 0)
                void* eax_15 = sub_4c4060(ebx_2 + 0xc)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_5 = *(eax_15 + 0xc) + 0x10
                    sub_4f4430(eax_15, sub_4f4380(esi_5), esi_5)
                    esi_1 = var_8_1
            
            char* ecx_8 = *esi_1
            *(ebx_2 + 0xc) = ecx_8
            
            if (ecx_8 != 0 && *ecx_8 != 0)
                void* eax_19 = sub_4c4060(ebx_2 + 0xc)
                *(eax_19 + 4) += 1
        
        *(ebx_2 + 0x10) = fconvert.s(fconvert.t(esi_1[1]))
        *(ebx_2 + 0x10) = esi_1[1]
        int32_t edx_6 = esi_1[1]
        arg1 = var_10 + 1
        esi_1 = &esi_1[5]
        *(ebx_2 + 0x10) = edx_6
        var_10 = arg1
        var_8_1 = esi_1
    while (arg1 s< arg4)
}
