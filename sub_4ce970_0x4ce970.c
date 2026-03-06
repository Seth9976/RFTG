// 函数名称: sub_4ce970
// 虚拟地址: 0x4ce970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ce970(int32_t* arg1, int32_t* arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: void* ecx = arg3
    void* ecx = arg3
    int32_t edi = *(ecx + 8)
    int32_t edi_1 = neg.d(edi)
    int32_t edi_4 = neg.d(sbb.d(edi_1, edi_1, edi != 0)) - 1
    int32_t* result
    
    if (edi_4 != 0xffffffff)
        while (true)
            int32_t eax_2 = edi_4 * 0xf
            edi_4 += 1
            result = *(ecx + 4) + (eax_2 << 2)
            int32_t var_10_1 = edi_4
            
            if (edi_4 s>= *(ecx + 8))
                var_10_1 = 0xffffffff
                edi_4 = 0xffffffff
            
            void* ebx_1 = result[3]
            int32_t* ecx_1 = *(ebx_1 + 0x10)
            
            if (ecx_1 == 0xf)
                int32_t* ebx_3 = *result + arg2
                int32_t* esi_1 = *ebx_3
                
                if (esi_1 != 0)
                    void* esi_2 = esi_1 + arg1
                    void* ecx_2 = esi_2
                    void* edi_5 = ecx_2 + 1
                    int32_t edx_1
                    
                    do
                        edx_1.b = *ecx_2
                        ecx_2 += 1
                    while (edx_1.b != 0)
                    
                    if (ecx_2 - edi_5 + esi_1 + 1 s> arg5)
                        result.b = 0
                        return result
                    
                    result = result[8]
                    
                    if (result != 0)
                        edi_4 = var_10_1
                        *ebx_3 = sub_509140(result, esi_2)
                    else if (*esi_2 != result.b)
                        if (result == 0)
                            result = sub_508bc0(esi_2)
                        
                        edi_4 = var_10_1
                        *ebx_3 = sub_509140(result, esi_2)
                    else
                        edi_4 = var_10_1
                        *ebx_3 = result
            else if (ecx_1 s<= 0 || ecx_1 s>= 0x12)
            label_4ceace:
                
                if (ecx_1 == 0x11)
                    sub_4ce6d0()
                    noreturn
                
                if (ecx_1 != 5)
                    if (ecx_1 == 6)
                        result = sub_4ce4c0(arg1, *result + arg2, result[7], result, 0, arg5)
                        goto label_4cebf6
                    
                    if (ecx_1 == 8 || ecx_1 == 0xc)
                        int32_t* eax_10 = *result + arg2
                        int32_t* var_24_6 = arg5
                        result = sub_4ce400(eax_10, eax_10, arg5, arg1)
                        goto label_4cebf6
                    
                    if (ecx_1 == 0xb)
                        int32_t ebx_5
                        ebx_5.b = *(arg2 + *result) != 0
                        result = sub_4ce710(arg1, arg2, result, 0, arg5)
                        goto label_4cebf6
                    
                    if (ecx_1 == 9)
                        int32_t* var_24_4 = arg5
                        int32_t var_28_2 = arg4
                        result = sub_4ce7a0(result, arg1, arg2, arg1, arg2)
                        goto label_4cebf6
                    
                    if (ecx_1 s> 0 && ecx_1 s< 0x12)
                        sub_4c5870("!DefTypeIsBuiltIn(pFieldDefMap)", &data_83f3d3, "DefBin.cpp", 
                            0x40f, "DefBinReadFixupField")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_5 = arg4
                    void* edx_13 = *result + arg2
                    
                    if (esi_5 == 0 && (ecx_1 == 0x13 || ecx_1 == 0x14))
                        esi_5 = result[7]
                    
                    if (ecx_1 s<= 0 || ecx_1 s>= 0x12)
                        if (*(ebx_1 + 0xc) + edx_13 u> arg1 + arg5)
                            result.b = 0
                            return result
                        
                        if (sub_4ce970(arg1, edx_13, ebx_1, esi_5, arg5).b == 0)
                            result.b = 0
                            return result
                        
                        edi_4 = var_10_1
                else
                    *(result[4] + arg2)
                    result = sub_4ce710(arg1, arg2, result, arg4, arg5)
                label_4cebf6:
                    
                    if (result.b == 0)
                        result.b = 0
                        return result
            else
                if (ecx_1 - 1 u> 0x10)
                label_4cec5d:
                    sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                switch (ecx_1 + &jump_table_4cec80[2]:3)
                    case &lookup_table_4cec8c, &lookup_table_4cec8c[1], &lookup_table_4cec8c[2], 
                            &lookup_table_4cec8c[3], &lookup_table_4cec8c[9], 
                            &lookup_table_4cec8c[0xd], &lookup_table_4cec8c[0xf]
                        if (ecx_1 != 1 && ecx_1 != 4 && ecx_1 != 0x10 && ecx_1 != 2 && ecx_1 != 0xe
                                && ecx_1 != 0xa && ecx_1 != 3)
                            sub_4c5870("HaltMsg", "Unable to fixup data type", "DefBin.cpp", 0x147, 
                                "DefBinShallowDefTypeFixup")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                    case &lookup_table_4cec8c[4], &lookup_table_4cec8c[5], &lookup_table_4cec8c[7], 
                            &lookup_table_4cec8c[8], &lookup_table_4cec8c[0xa], 
                            &lookup_table_4cec8c[0xb], &lookup_table_4cec8c[0x10]
                        goto label_4ceace
                    case &lookup_table_4cec8c[6], &lookup_table_4cec8c[0xc]
                        goto label_4cec5d
            
            if (edi_4 == 0xffffffff)
                break
            
            ecx = arg3
    
    result.b = 1
    return result
}
