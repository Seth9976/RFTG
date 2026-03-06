// 函数名称: sub_4fef50
// 虚拟地址: 0x4fef50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fef50(int128_t** arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int128_t** esi = arg1
    int128_t** esi = arg1
    void* ecx = *(arg3 + 0x18)
    int128_t* result = *(ecx + 0x10)
    
    if (result s<= 0 || result s>= 0x12)
    label_4fef85:
        int32_t ecx_1 = *(ecx + 0xc)
        
        if (ecx_1 == 0)
            sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                "DefinitionGetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ebx_1 = 0
        
        if (arg2 s> 0)
            int32_t* edi_2 = arg5 - esi
            int32_t* var_8_1 = edi_2
            
            do
                void* eax_3 = *(arg3 + 0x18)
                
                if (*(eax_3 + 0x10) != 8)
                    int32_t ecx_3 = *(eax_3 + 0x10)
                    
                    if (ecx_3 s> 0 && ecx_3 s< 0x12)
                        sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, 
                            "Definition.cpp", 0x2a2, "DefDeepCopyArray")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    result = sub_4ff350(esi, eax_3, arg4, edi_2 + esi)
                else
                    result = sub_4fedb0(*(edi_2 + esi), esi)
                    edi_2 = var_8_1
                
                esi += ecx_1
                ebx_1 += 1
            while (ebx_1 s< arg2)
        
        return result
    
    result -= 1
    
    switch (result)
        case nullptr, 1, 2, 3, 9, 0xd, 0xe, 0xf
            return result
        case 4, 5, 7, 8, 0xa, 0xb, 0x10
            goto label_4fef85
        default
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
}
