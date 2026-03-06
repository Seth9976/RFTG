// 函数名称: sub_4ff150
// 虚拟地址: 0x4ff150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4ff150(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* edi = arg2[3]
    void* edi = arg2[3]
    int32_t esi = *(edi + 0x10)
    
    if (esi s<= 0 || esi s>= 0x12)
    label_4ff182:
        int32_t esi_2 = *(edi + 0x10)
        
        if (esi_2 - 5 u<= 0xc)
            switch (esi_2 + &jump_table_4ff318[5]:3)
                case &lookup_table_4ff334
                    sub_4ff0a0(arg1, arg2, arg1, arg3, arg2, arg4, *(arg2[4] + arg1))
                case &lookup_table_4ff334[1]
                    void* ecx_7 = *arg2
                    int32_t var_1c_2 = arg1 + ecx_7
                    int32_t var_20_2 = 0
                    int32_t edx = arg2[7]
                    sub_4fef50(ecx_7 + arg3, edx, ecx_7, edx, arg2)
                case &lookup_table_4ff334[2], &lookup_table_4ff334[5], &lookup_table_4ff334[8], 
                        &lookup_table_4ff334[9], &lookup_table_4ff334[0xa], &lookup_table_4ff334[0xb]
                    goto label_4ff267
                case &lookup_table_4ff334[3], &lookup_table_4ff334[7]
                    int32_t* edx_1 = *arg2
                    sub_4fedb0(*(edx_1 + arg1), edx_1 + arg3)
                case &lookup_table_4ff334[4]
                    int32_t var_1c_5 = arg3
                    sub_4fee20(arg1, arg2, arg4)
                case &lookup_table_4ff334[6]
                    void* const ebx_1
                    ebx_1.b = *(arg1 + *arg2) != 0
                    sub_4ff0a0(arg1, arg2, arg1, arg3, arg2, 0, ebx_1)
                case &lookup_table_4ff334[0xc]
                    sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x2d9, "DefDeepCopyField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            return 
        
    label_4ff267:
        
        if (esi_2 s> 0 && esi_2 s< 0x12)
            sub_4c5870("!DefTypeIsBuiltIn(pField->pDefMap)", &data_83f3d3, "Definition.cpp", 0x302, 
                "DefDeepCopyField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_13 = arg4
        
        if (ecx_13 == 0 && (esi_2 == 0x13 || esi_2 == 0x14))
            ecx_13 = arg2[7]
        
        int32_t edx_2 = *arg2
        sub_4ff350(edx_2 + arg3, edi, ecx_13, arg1 + edx_2)
        return 
    
    if (esi - 1 u> 0x10)
    label_4ff2de:
        sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (esi + &jump_table_4ff2f8[2]:3)
        case &lookup_table_4ff304, &lookup_table_4ff304[1], &lookup_table_4ff304[2], 
                &lookup_table_4ff304[3], &lookup_table_4ff304[9], &lookup_table_4ff304[0xd], 
                &lookup_table_4ff304[0xe], &lookup_table_4ff304[0xf]
            return 
        case &lookup_table_4ff304[4], &lookup_table_4ff304[5], &lookup_table_4ff304[7], 
                &lookup_table_4ff304[8], &lookup_table_4ff304[0xa], &lookup_table_4ff304[0xb], 
                &lookup_table_4ff304[0x10]
            goto label_4ff182
        case &lookup_table_4ff304[6], &lookup_table_4ff304[0xc]
            goto label_4ff2de
}
