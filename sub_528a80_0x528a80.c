// 函数名称: sub_528a80
// 虚拟地址: 0x528a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_528a80(int128_t* arg1)
{
    // 第一条实际指令: sub_5ab990(&data_30d9518, arg1, 0x1018)
    sub_5ab990(&data_30d9518, arg1, 0x1018)
    int32_t* esi = **data_30d74e8
    sub_4fecf0(esi, data_30d74d4, nullptr)
    
    if (esi != 0)
        _aligned_free_base(esi)
    
    void* esi_1 = data_30d74d4
    **(arg1 + 0x1018)
    int32_t eax_2 = *(esi_1 + 0xc)
    
    if (eax_2 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_4 = sub_4cce80(eax_2)
    sub_4ff3b0(eax_4, esi_1)
    **data_30d74e8 = eax_4
    int32_t* eax_5 = sub_521460(data_30d74e8)
    int32_t result = 0
    int32_t i_1 = 0
    
    if (eax_5[1] s> 0)
        int32_t result_1 = 0
        int32_t i
        
        do
            int32_t* eax_6 = result + *eax_5
            int32_t j = 0
            
            if (*eax_6 s> 0)
                do
                    int32_t edx_2 = eax_6[1]
                    
                    if (sub_531280(*(edx_2 + (j << 3)), edx_2, &data_8c00ec) == data_30d74e0)
                        void* edi_3 = *(edx_2 + (j << 3) + 4)
                        
                        if (*(edi_3 + 4) != 0)
                            sub_4c5870("tree->parseState == PARSETREE_NONE", &data_83f3d3, "UI2.cpp", 
                                0xe15, "UI2RestoreUndoState")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (*(edi_3 + 0x15c) != 0)
                            sub_4c5870("tree->numExpressions == 0", &data_83f3d3, "UI2.cpp", 0xe16, 
                                "UI2RestoreUndoState")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (*(edi_3 + 8) != 0)
                            sub_4c5870("tree->root == NULL", &data_83f3d3, "UI2.cpp", 0xe17, 
                                "UI2RestoreUndoState")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    
                    eax_6 = *eax_5 + result_1
                    j += 1
                while (j s< *eax_6)
            
            i = i_1 + 1
            result = result_1 + 0xc
            i_1 = i
            result_1 = result
        while (i s< eax_5[1])
    
    return result
}
