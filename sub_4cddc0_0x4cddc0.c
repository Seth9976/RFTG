// 函数名称: sub_4cddc0
// 虚拟地址: 0x4cddc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4cddc0(void* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t i = *(arg4 + arg3[4])
    int32_t* eax = arg5
    int32_t edi = eax[2]
    int32_t edx_1 = 0
    
    if (edi s> 0)
        int32_t* eax_1 = eax[1]
        
        while (*eax_1 != i)
            edx_1 += 1
            eax_1 = &eax_1[0xf]
            
            if (edx_1 s>= edi)
                return eax_1
        
        int32_t* eax_3 = sub_531280(i, edx_1, arg5)
        eax = eax_3[4]
        
        if (eax != 0xf)
            if (eax s<= 0 || eax s>= 0x12)
            label_4cde5f:
                
                if (eax == 8)
                    int32_t* eax_7 = *arg3
                    *(eax_7 + arg4)
                    arg3[0xa].b
                    return sub_4cd9d0(arg1, *(arg1 + 4) + *arg1 + eax_7)
                
                if (eax s> 0 && eax s< 0x12)
                    sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "DefBin.cpp", 0x222, 
                        "DefBinSerializeTagValue")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_10 = *(arg1 + 0x10)
                
                if (eax_10 != 0 && *eax_10 != 0)
                    sub_4c5870(
                        "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == "
                    "0", 
                        &data_83f3d3, "DefBin.cpp", 0x225, "DefBinSerializeTagValue")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_14 = *(arg1 + 4) + *arg3 + *arg1
                int32_t ecx_11 = (*(arg1 + 8) + 3) & 0xfffffffc
                bool cond:1 = *(arg1 + 0xc) != 0
                *(arg1 + 8) = ecx_11
                
                if (not(cond:1))
                    *eax_14 = ecx_11
                
                int32_t* edi_1 = *(arg4 + *arg3)
                void* eax_17 = sub_4fe2c0(eax_3)
                
                if (*(arg1 + 0xc) == 0)
                    sub_5ab990(*(arg1 + 8) + *arg1, edi_1, eax_17)
                
                int32_t* eax_18 = *(arg1 + 4)
                void* eax_19 = *(arg1 + 8)
                *(arg1 + 4) = eax_19
                *(arg1 + 8) = eax_19 + eax_17
                void* eax_21 = sub_4ce080(edi_1, eax_3, 0, arg1)
                *(arg1 + 4) = eax_18
                return eax_21
            
            if (eax - 1 u> 0x10)
            label_4cdf8d:
                sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax + &jump_table_4cdfa8[2]:3)
                case &lookup_table_4cdfb4[4], &lookup_table_4cdfb4[5], &lookup_table_4cdfb4[7], 
                        &lookup_table_4cdfb4[8], &lookup_table_4cdfb4[0xa], &lookup_table_4cdfb4[0xb], 
                        &lookup_table_4cdfb4[0x10]
                    goto label_4cde5f
                case &lookup_table_4cdfb4[6], &lookup_table_4cdfb4[0xc]
                    goto label_4cdf8d
        else
            int32_t* ecx_3 = *arg3
            eax = arg4
            void* edx_3 = *(ecx_3 + eax)
            
            if (edx_3 != 0)
                *(edx_3 + 0x20)
                return sub_4cd9d0(arg1, *(arg1 + 4) + *arg1 + ecx_3)
    
    return eax
}
