// 函数名称: sub_4ce7a0
// 虚拟地址: 0x4ce7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4ce7a0(int32_t* arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* esi_1 = arg1[4] + arg3
    int32_t edx
    void* eax_1 = sub_531280(*esi_1, edx, arg4)
    int32_t eax_2 = *(eax_1 + 0x10)
    int32_t* result
    
    if (eax_2 == 0xf)
        *arg1
        result = sub_4ce460(arg1[8], arg5)
    else if (eax_2 s<= 0 || eax_2 s>= 0x12)
    label_4ce85d:
        
        if (eax_2 != 8)
            if (eax_2 s> 0 && eax_2 s< 0x12)
                sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "DefBin.cpp", 0x39f, 
                    "DefBinReadFixupTagValue")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t** esi_5 = *arg1 + arg3
            int32_t* edi_1 = *esi_5
            
            if (sub_4fe2c0(eax_1) + edi_1 s> arg5)
                result.b = 0
                return result
            
            result = arg2 + edi_1
            
            if (result s<= arg3)
                result.b = 0
                return result
            
            *esi_5 = result
            int32_t ecx_6 = *(eax_1 + 0x10)
            
            if (ecx_6 s> 0 && ecx_6 s< 0x12)
                result.b = 1
                return result
            
            if (*(eax_1 + 0xc) + result u> arg2 + arg5)
                result.b = 0
                return result
            
            result = sub_4ce970(arg2, result, eax_1, 0, arg5)
        else
            int32_t* var_1c_2 = arg5
            result = sub_4ce400(arg5, *arg1 + arg3, arg2, arg2)
    else
        if (eax_2 - 1 u> 0x10)
        label_4ce92e:
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_2 + &jump_table_4ce948[2]:3)
            case &lookup_table_4ce954, &lookup_table_4ce954[1], &lookup_table_4ce954[2], 
                    &lookup_table_4ce954[3], &lookup_table_4ce954[9], &lookup_table_4ce954[0xd], 
                    &lookup_table_4ce954[0xf]
                int32_t esi_3 = *esi_1
                
                if (esi_3 s>= 0 && esi_3 s< *(arg4 + 0x10))
                    sub_4cd970(eax_1)
                    result.b = 1
                    return result
                
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case &lookup_table_4ce954[4], &lookup_table_4ce954[5], &lookup_table_4ce954[7], 
                    &lookup_table_4ce954[8], &lookup_table_4ce954[0xa], &lookup_table_4ce954[0xb], 
                    &lookup_table_4ce954[0x10]
                goto label_4ce85d
            case &lookup_table_4ce954[6], &lookup_table_4ce954[0xc]
                goto label_4ce92e
    
    if (result.b != 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
