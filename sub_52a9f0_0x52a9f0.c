// 函数名称: sub_52a9f0
// 虚拟地址: 0x52a9f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_52a9f0(int32_t arg1, int32_t arg2, int32_t* arg3, char** arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_44 = 0
    char* edx = *sub_521460(*arg3)
    int32_t* esi_1 = &edx[arg3[1] * 0xc]
    void* eax_2 = sub_531280(arg1, edx, &data_8c00ec)
    int32_t eax_3 = *(eax_2 + 0x10)
    int32_t* eax_4 = data_be1ef8
    int32_t* var_4c
    
    if (eax_4 != 0)
        char* ecx_2 = arg3[0x531]
        
        if (*ecx_2 != 0)
            char* var_84_1 = ecx_2
            var_4c = sub_524de0(eax_4, edx)
            eax_4 = data_be1ef8
        else
            var_4c = nullptr
    else
        var_4c = nullptr
    
    char* edx_1 = *esi_1
    int32_t ecx_3 = 0
    
    if (edx_1 s> 0)
        int32_t* eax_6 = esi_1[1]
        
        do
            if (*eax_6 == arg1)
                eax_4 = data_be1ef8
                goto label_52aa97
            
            ecx_3 += 1
            eax_6 = &eax_6[2]
        while (ecx_3 s< edx_1)
        
        eax_4 = data_be1ef8
    
    if (var_4c != 0 && arg1 != 3)
        esi_1 = var_4c
    
    label_52aa97:
    int32_t* ebx_1
    
    if (eax_4 == 0)
        ebx_1 = nullptr
    else if (eax_4 != *arg3)
        int32_t ebx_2 = arg3[0x530]
        char const* const var_84_2
        
        if (ebx_2 == 3)
            var_84_2 = "Text"
            ebx_1 = sub_524de0(eax_4, edx_1)
        else if (ebx_2 == 5)
            var_84_2 = "Button"
            ebx_1 = sub_524de0(eax_4, edx_1)
        else
            ebx_1 = nullptr
    else
        ebx_1 = nullptr
    
    int32_t eax_8 = *esi_1
    
    if (eax_8 s<= 0)
    label_52aaec:
        
        if (ebx_1 != 0 && arg1 != 3)
            esi_1 = ebx_1
    else
        int32_t* edx_2 = esi_1[1]
        int32_t ecx_6 = 0
        
        while (*edx_2 != arg1)
            ecx_6 += 1
            edx_2 = &edx_2[2]
            
            if (ecx_6 s>= eax_8)
                goto label_52aaec
    
    int64_t var_98
    int64_t var_90
    int64_t var_88
    
    if (eax_3 - 1 u<= 0x28)
        switch (eax_3 + &jump_table_52ad10[6]:3)
            case &lookup_table_52ad2c
                int32_t eax_11 = sub_530e40(esi_1, arg1)
                
                if (arg1 s>= 0 && arg1 s< data_8c00fc)
                    void* edx_4 = *(*(data_8c00f8 + (arg1 << 2)) + 0x1c)
                    
                    if (edx_4 != 0)
                        sub_4c4330(sub_554aa0(edx_4, edx_4, eax_11), edx_4, arg4)
                        return arg4
                    
                    int32_t var_84_3 = eax_11
                    var_88.d = &data_85f660
                    var_90:4.d = arg4
                    sub_4c4a50()
                    return arg4
                
                char const* const var_84_4 = "AttribTagGetField"
                var_88.d = 0x8b
                var_90:4.d = "AttribMap.cpp"
                var_90.d = &data_83f3d3
                var_98:4.d = "(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize"
                sub_4c5870()
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case &lookup_table_52ad2c[3]
                var_90:4.d = &data_880728
                var_90.d = arg4
                sub_4c4a50(var_90, fconvert.d(sub_530fb0(esi_1, arg1)))
                return arg4
            case &lookup_table_52ad2c[7]
                char* eax_21
                int32_t edx_6
                eax_21, edx_6 = sub_531070(esi_1, arg1)
                sub_4c4330(eax_21, edx_6, arg4)
                return arg4
            case &lookup_table_52ad2c[0xe]
                int32_t eax_17
                int32_t edx_5
                eax_17, edx_5 = sub_5311d0(esi_1, arg1)
                
                if (eax_17 == 0)
                    sub_4c4330(&data_83f3d3, edx_5, arg4)
                    return arg4
                
                int32_t var_84_5 = eax_17 + 0x20
                sub_4c4300(arg4)
                return arg4
            case &lookup_table_52ad2c[0x15]
                int32_t var_84_6 = data_315f6e4
                float* eax_23 = sub_531120(esi_1, arg1)
                double var_88_1 = fconvert.d(fconvert.t(eax_23[3]))
                double var_90_1 = fconvert.d(fconvert.t(eax_23[2]))
                double var_98_1 = fconvert.d(fconvert.t(eax_23[1]))
                double var_a0 = fconvert.d(fconvert.t(*eax_23))
                char const* const var_a4 = "%g %g %g %g"
                sub_4c4a50(arg4, "%g %g %g %g")
                return arg4
            case &lookup_table_52ad2c[0x28]
                int32_t var_84_7 = data_30d72f4
                char* eax_26 = sub_531120(esi_1, arg1)
                uint32_t var_84_8 = zx.d(eax_26[3])
                var_88.d = zx.d(eax_26[2])
                var_90:4.d = zx.d(eax_26[1])
                var_90.d = zx.d(*eax_26)
                var_98:4.d = "%d %d %d %d"
                var_98.d = arg4
                sub_4c4a50(var_98, var_90, var_88)
                return arg4
    
    int32_t eax_29 = data_30d74e0
    char* edi_1
    
    if (eax_2 != eax_29)
        edi_1 = "unknown type"
    else
        int32_t var_84_9 = eax_29
        edi_1 = *sub_531120(esi_1, arg1)
        
        if (edi_1 == 0)
            char const* const var_84_10 = "XString::XString"
            var_88.d = 0x8f
            var_90:4.d = "xString.cpp"
            var_90.d = &data_83f3d3
            var_98:4.d = &data_879ec4
            sub_4c5870()
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c42b0(arg4, edi_1)
    return arg4
}
