// 函数名称: sub_4fe9b0
// 虚拟地址: 0x4fe9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4fe9b0(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t i_1 = arg1
    int32_t i_1 = arg1
    int32_t* ecx = *(arg3 + 0x18)
    uint32_t result = ecx[4]
    
    if (result s<= 0 || result s>= 0x12)
    label_4fe9de:
        int32_t edi_1 = ecx[3]
        
        if (edi_1 == 0)
            sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                "DefinitionGetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* esi_1 = arg2
        
        if (i_1 s> 0)
            int32_t i
            
            do
                int32_t var_14_1 = arg4
                result, ecx = sub_4fe8d0(esi_1, arg3, ecx)
                esi_1 += edi_1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        return result
    
    result -= 1
    
    switch (result)
        case 0, 1, 2, 3, 9, 0xd, 0xe, 0xf
            return result
        case 4, 5, 7, 8, 0xa, 0xb, 0x10
            goto label_4fe9de
        default
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
}
