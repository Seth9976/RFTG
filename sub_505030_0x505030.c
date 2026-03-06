// 函数名称: sub_505030
// 虚拟地址: 0x505030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_505030(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* result = arg4[4] + arg3
    int32_t* result = arg4[4] + arg3
    int32_t* esi_1 = *arg4 + arg3
    
    if (arg5 s>= 0)
        int32_t ecx = *result
        
        if (arg5 s<= ecx)
            int32_t ebx = *(arg4[6] + 0xc)
            int128_t* edx_1 = *esi_1
            
            if (ebx == 0)
                sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                    "DefinitionGetSize")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int128_t* eax_5 = sub_4cce80((ecx + 1) * ebx)
            *esi_1 = eax_5
            void* esi_3 = ebx * arg5
            void* edi_3 = (*result - arg5) * ebx
            
            if (esi_3 s> 0)
                sub_5ab990(eax_5, edx_1, esi_3)
            
            int128_t* edi_4
            
            if (edi_3 s<= 0)
                edi_4 = edx_1
            else
                edi_4 = edx_1
                sub_5ab990((arg5 + 1) * ebx + *esi_1, esi_3 + edi_4, edi_3)
            
            sub_4fe6f0(*esi_1 + esi_3, esi_1, arg4)
            *result += 1
            
            if (edi_4 == 0)
                return result
            
            return _aligned_free_base(edi_4)
    
    sub_4c5870("position >= 0 && position <= *pcount", &data_83f3d3, "DefEditor.cpp", 0x29, 
        "DefinitionVariableArrayAddItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
