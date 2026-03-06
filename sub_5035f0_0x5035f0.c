// 函数名称: sub_5035f0
// 虚拟地址: 0x5035f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5035f0(void* arg1, int32_t* arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: char* result_4 = arg3
    char* result_4 = arg3
    void* var_24 = arg1
    void* eax_1 = *(*(result_4 + 0x18) + 0xc)
    char* result_3
    
    if (eax_1 == 0)
        result_3 = "DefinitionGetSize"
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, result_3)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = eax_1 + 4
    char* result_2 = result
    char* result_1 = nullptr
    
    if (arg4 s> 0)
        do
            result_3 = result_4
            char** var_c_1 = &result_3
            char** var_38_1 = &result_3
            void** edx
            sub_4c40c0(4, edx)
            char* result_6 = result_3
            int32_t* ecx = "item"
            void* eax_3
            
            do
                eax_3.b = *ecx
                *result_6 = eax_3.b
                ecx += 1
                result_6 = &result_6[1]
            while (eax_3.b != 0)
            
            int32_t* eax_4 = sub_5029b0(eax_3, arg2, ecx, arg2)
            int32_t* esi_1 = data_30785c8
            char* result_7 = *(result_2 + var_24 - 4)
            esi_1[3] += 1
            
            if (*esi_1 == 0)
                sub_5043e0(esi_1)
            
            int32_t* ebx_1 = *esi_1
            *esi_1 = *ebx_1
            __builtin_memset(ebx_1, 0, 0x14)
            
            if (ebx_1 != 0)
                *ebx_1 = &data_83f3d3
                ebx_1[1] = &data_83f3d3
            
            int32_t* var_10 = ebx_1
            sub_4c4590("slot")
            result_3 = &var_10
            sub_518190(&eax_4[1], result_3)
            result_3 = result_1
            void* const var_38_3 = &data_85f660
            sub_4c49b0(&ebx_1[1], result_1)
            int32_t* esi_2 = data_30785c8
            esi_2[3] += 1
            
            if (*esi_2 == 0)
                sub_5043e0(esi_2)
            
            int32_t* ebx_2 = *esi_2
            *esi_2 = *ebx_2
            __builtin_memset(ebx_2, 0, 0x14)
            
            if (ebx_2 != 0)
                *ebx_2 = &data_83f3d3
                ebx_2[1] = &data_83f3d3
            
            var_10 = ebx_2
            sub_4c4590("id")
            result_3 = &var_10
            sub_518190(&eax_4[1], result_3)
            result_3 = result_7
            void* const var_38_4 = &data_85f660
            sub_4c49b0(&ebx_2[1], result_7)
            int32_t* result_5 = *(arg3 + 0x18)
            void* eax_10 = result_5[4]
            char* result_8 = eax_10 - 1
            
            if (result_8 u> 0x2a)
            label_50379a:
                
                if (eax_10 s<= 0)
                    goto label_5037ae
                
                if (eax_10 s>= 0x12)
                    goto label_5037ae
                
                result_3 = "DefTypeCanBeInArray"
                sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0x65, result_3)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result_8 = zx.d(*(result_8 + &lookup_table_5038d8))
            
            switch (result_8)
                case nullptr
                    result_3 = nullptr
                    edx = sub_502ce0(arg2, var_24, result_5, arg2, "value", nullptr, result_3)
                case 1
                label_5037ae:
                    result_3 = result_5
                    char** var_c_3 = &result_3
                    char** var_38_5 = &result_3
                    sub_4c40c0(5, result_8)
                    result_8 = result_3
                    result_5 = "value"
                    
                    do
                        eax_10.b = *result_5
                        *result_8 = eax_10.b
                        result_5 += 1
                        result_8 = &result_8[1]
                    while (eax_10.b != 0)
                    
                    int32_t* eax_12 = sub_5029b0(eax_10, result_8, result_5, eax_4)
                    int32_t edx_5 = *(arg3 + 0x28)
                    
                    if (eax_4[3] s> 0)
                        int32_t* ecx_3 = eax_4[2]
                        
                        if (ecx_3 == 0)
                            result_3 = "XList<struct DefParseItem *>::GetTail"
                            sub_4c5870("mpTail != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 
                                0x5a, result_3)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* ecx_4 = *ecx_3
                        *(ecx_4 + 0x10) = (edx_5 u>> 9).b & 1
                        *(ecx_4 + 0x11) = (edx_5 u>> 0xa).b & 1
                    
                    char* ecx_5 = *(arg3 + 0x18)
                    char* edx_7 = *ecx_5
                    result_3 = nullptr
                    edx = sub_504030(var_24, edx_7, ecx_5, eax_12, var_24, ecx_5, edx_7, result_3)
                case 2
                    goto label_50379a
            
            result_4 = result_2
            var_24 += result_4
            result = &result_1[1]
            result_1 = result
        while (result s< arg4)
    
    return result
}
