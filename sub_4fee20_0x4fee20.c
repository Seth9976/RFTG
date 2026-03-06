// 函数名称: sub_4fee20
// 虚拟地址: 0x4fee20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fee20(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int128_t* result = *(arg1 + arg2[4])
    int128_t* result = *(arg1 + arg2[4])
    
    if (result != 0xffffffff)
        void* ecx
        result = sub_531280(result, arg2, ecx)
        int32_t ecx_1 = result[1].d
        
        if (ecx_1 s<= 0 || ecx_1 s>= 0x12)
        label_4fee66:
            
            if (ecx_1 == 8)
                int32_t* eax_1 = *arg2
                return sub_4fedb0(*(eax_1 + arg1), eax_1 + arg3)
            
            if (ecx_1 s<= 0 || ecx_1 s>= 0x12)
                int32_t* esi_1 = *arg2
                int32_t* edi_2 = *(esi_1 + arg1)
                void* eax_3 = sub_4fe2c0(result)
                int128_t* eax_4 = sub_4cce80(eax_3)
                *(esi_1 + arg3) = eax_4
                sub_5ab990(eax_4, edi_2, eax_3)
                return sub_4ff350(*(esi_1 + arg3), result, 0, edi_2)
            
            sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0x27b, 
                "DefDeepCopyTagValue")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx_1 - 1 u> 0x10)
        label_4fef16:
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (ecx_1 + &jump_table_4fef30[2]:3)
            case &lookup_table_4fef3c[4], &lookup_table_4fef3c[5], &lookup_table_4fef3c[7], 
                    &lookup_table_4fef3c[8], &lookup_table_4fef3c[0xa], &lookup_table_4fef3c[0xb], 
                    &lookup_table_4fef3c[0x10]
                goto label_4fee66
            case &lookup_table_4fef3c[6], &lookup_table_4fef3c[0xc]
                goto label_4fef16
    
    return result
}
