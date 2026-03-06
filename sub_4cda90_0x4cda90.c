// 函数名称: sub_4cda90
// 虚拟地址: 0x4cda90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4cda90(void* arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: void* edx = arg4
    void* edx = arg4
    void* ecx = *(edx + 0x18)
    uint32_t result = *(ecx + 0x10)
    
    if (result s<= 0 || result s>= 0x12)
    label_4cdacf:
        int32_t ecx_1 = *(ecx + 0xc)
        
        if (ecx_1 == 0)
            sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                "DefinitionGetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* edi_1 = arg2
        uint32_t result_1 = 0
        
        if (arg3 s> 0)
            while (true)
                void* eax_2 = *(edx + 0x18)
                int32_t ecx_2 = *(eax_2 + 0x10)
                
                if (ecx_2 == 0xf)
                    void* ecx_3 = *edi_1
                    
                    if (ecx_3 != 0)
                        *(ecx_3 + 0x20)
                        sub_4cd9d0(arg1, *(arg1 + 4) + *arg1)
                else if (ecx_2 != 8)
                    if (ecx_2 s> 0 && ecx_2 s< 0x12)
                        sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, "DefBin.cpp", 
                            0x1aa, "DefBinSerializeArray")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_4ce080(edi_1, eax_2, arg5, arg1)
                else
                    *edi_1
                    *(edx + 0x28)
                    sub_4cd9d0(arg1, *(arg1 + 4) + *arg1)
                
                *(arg1 + 4) += ecx_1
                edi_1 += ecx_1
                result = result_1 + 1
                result_1 = result
                
                if (result s>= arg3)
                    break
                
                edx = arg4
        
        return result
    
    if (result - 1 u> 0x10)
    label_4cdbed:
        sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    result = zx.d(*(result + &jump_table_4cdc10[2]:3))
    
    switch (result)
        case 0
            if (*(ecx + 0x10) != 0xf)
                return result
            
            goto label_4cdacf
        case 1
            goto label_4cdacf
        case 2
            goto label_4cdbed
}
