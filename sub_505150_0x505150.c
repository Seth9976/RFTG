// 函数名称: sub_505150
// 虚拟地址: 0x505150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_505150(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* ebx_1 = arg4[4] + arg3
    int32_t* ebx_1 = arg4[4] + arg3
    int32_t* edi_1 = *arg4 + arg3
    
    if (arg5 s>= 0)
        int32_t ecx = *ebx_1
        
        if (arg5 s<= ecx)
            int32_t esi = *(arg4[6] + 0xc)
            int128_t* result = *edi_1
            
            if (esi == 0)
                sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
                    "DefinitionGetSize")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int128_t* eax_6
            int32_t edx_1
            eax_6, edx_1 = sub_4cce80((arg6 + ecx) * esi)
            *edi_1 = eax_6
            void* edi_3 = esi * arg5
            void* ebx_4 = (*ebx_1 - arg5) * esi
            
            if (edi_3 s> 0)
                edx_1 = sub_5ab990(eax_6, result, edi_3)
            
            int32_t i_1
            
            if (ebx_4 s<= 0)
                i_1 = arg6
            else
                i_1 = arg6
                edx_1 = sub_5ab990((arg5 + i_1) * esi + *edi_1, edi_3 + result, ebx_4)
            
            if (i_1 s> 0)
                int32_t i
                
                do
                    edx_1 = sub_4fe6f0(*edi_1 + edi_3, edx_1, arg4)
                    edi_3 += esi
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                i_1 = arg6
            
            *ebx_1 += i_1
            
            if (result == 0)
                return result
            
            return _aligned_free_base(result)
    
    sub_4c5870("position >= 0 && position <= *pcount", &data_83f3d3, "DefEditor.cpp", 0x56, 
        "DefinitionVariableArrayInsertItems")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
