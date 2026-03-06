// 函数名称: sub_5033c0
// 虚拟地址: 0x5033c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5033c0(int32_t* arg1, char* arg2, int32_t arg3, char* arg4)
{
    // 第一条实际指令: int32_t* var_18 = arg1
    int32_t* var_18 = arg1
    void* entry_ebx
    void* result = *(entry_ebx + 0x18)
    int32_t esi = *(result + 0xc)
    int32_t var_10 = esi
    char const* const var_24
    
    if (esi == 0)
        var_24 = "DefinitionGetSize"
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, var_24)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result_1 = nullptr
    
    if (arg3 s> 0)
        do
            void* ecx_2 = *(entry_ebx + 0x18)
            void* eax_1 = *(ecx_2 + 0x10)
            uint32_t edx_1 = eax_1 - 1
            
            if (edx_1 u> 0x2a)
            label_50343c:
                
                if (eax_1 s<= 0)
                    goto label_503449
                
                if (eax_1 s>= 0x12)
                    goto label_503449
                
                var_24 = "DefTypeCanBeInArray"
                sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0x65, var_24)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            edx_1 = zx.d(lookup_table_5035b8[edx_1])
            
            switch (edx_1)
                case 0
                    char* eax_2 = *(entry_ebx + 4)
                    var_24 = nullptr
                    sub_502ce0(eax_2, var_18, ecx_2, arg2, eax_2, nullptr, var_24)
                case 1
                label_503449:
                    char* esi_1 = *(entry_ebx + 4)
                    var_24 = ecx_2
                    char const* const* var_c_1 = &var_24
                    
                    if (esi_1 == 0)
                        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*esi_1 != 0)
                        char* eax_3 = esi_1
                        void** edx_4 = &eax_3[1]
                        
                        do
                            ecx_2.b = *eax_3
                            eax_3 = &eax_3[1]
                        while (ecx_2.b != 0)
                        
                        char const* const* var_28_1 = &var_24
                        sub_4c40c0(eax_3 - edx_4, edx_4)
                        edx_1 = var_24
                        ecx_2 = esi_1
                        
                        do
                            eax_1.b = *ecx_2
                            *edx_1 = eax_1.b
                            ecx_2 += 1
                            edx_1 += 1
                        while (eax_1.b != 0)
                    else
                        var_24 = &data_83f3d3
                    
                    int32_t* eax_5 = sub_5029b0(eax_1, edx_1, ecx_2, arg2)
                    int32_t edx_5 = *(entry_ebx + 0x28)
                    
                    if (*(arg2 + 0xc) s> 0)
                        int32_t* ecx_4 = *(arg2 + 8)
                        
                        if (ecx_4 == 0)
                            var_24 = "XList<struct DefParseItem *>::GetTail"
                            sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 
                                0x5a, var_24)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* ecx_5 = *ecx_4
                        *(ecx_5 + 0x10) = (edx_5 u>> 9).b & 1
                        *(ecx_5 + 0x11) = (edx_5 u>> 0xa).b & 1
                    
                    char** ecx_6 = *(entry_ebx + 0x18)
                    char* eax_8 = *ecx_6
                    var_24 = arg4
                    char* ecx_7 = var_18
                    sub_504030(eax_8, arg4, ecx_7, eax_5, ecx_7, ecx_6, eax_8, var_24)
                    esi = var_10
                case 2
                    goto label_50343c
            
            var_18 += esi
            result = result_1 + 1
            result_1 = result
        while (result s< arg3)
    
    return result
}
