// 函数名称: sub_4af920
// 虚拟地址: 0x4af920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4af920(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* result = __security_cookie ^ &__saved_ebp
    void* result_2 = result
    int32_t edi = 0
    int32_t var_d4c
    void* result_1
    int32_t var_d44[0x148]
    int32_t var_824[0x6]
    
    if (*(arg1 + 0x458) s> 0)
        result = arg1 + 0x20
        result_1 = result
        int32_t ecx_3
        
        do
            int16_t ebx_1 = *(result + 0x1e)
            int32_t ecx_1 = 0
            var_824[edi] = 0
            
            if (ebx_1 s>= 0)
                int32_t i = sx.d(*(result + 0x24))
                
                while (i != 0xffffffff)
                    var_d44[ecx_1] = i
                    i = sx.d(*(arg1 + ((i * 5 + 0x11d) << 2)))
                    ecx_1 += 1
                
                var_d4c = ecx_1
                int32_t edx_1 = 4
                
                if ((*(*(arg1 + sx.d(ebx_1) * 0x14 + 0x46c) + 0x10) & 0x2000) != 0)
                    edx_1 = 3
                
                if (ecx_1 != edx_1)
                    result = sub_49da80(edi, 2, &var_d44, &var_d4c, 0, 0, ecx_1 - edx_1, 1, 0)
                    bool cond:1_1 = *(arg1 + 0x1ec3) != 0
                    var_824[edi] = 1
                    
                    if (cond:1_1)
                        goto label_4afc76
            
            ecx_3 = sx.d(*(arg1 + 0x458))
            edi += 1
            result = result_1 + 0xb4
            result_1 = result
        while (edi s< ecx_3)
    
    int32_t edi_1 = 0
    
    if (*(arg1 + 0x458) s> 0)
        void* ebx_3 = arg1 + 0x28
        
        do
            int32_t eax_6 = *(*ebx_3 + 0x10)
            
            if (eax_6 != 0)
                eax_6(arg1, edi_1, 0xffffffff)
            
            result = sx.d(*(arg1 + 0x458))
            edi_1 += 1
            ebx_3 += 0xb4
        while (edi_1 s< result)
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (var_824[i_1] != 0)
                sub_49d860(result, 0, arg1, i_1, 2, &var_d44, &result_1, nullptr)
                void* result_3 = result_1
                result = sub_49dbf0(result_3, &var_d44, arg1, i_1, result_3)
            
            i_1 += 1
        while (i_1 s< sx.d(*(arg1 + 0x458)))
    
    int32_t ebx_4 = 0
    var_d4c = 0
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_2 = arg1 + 0x3e
        int32_t edx_11
        
        do
            result = zx.d(*edi_2)
            
            if (result.w s>= 0)
                result = *(arg1 + sx.d(result.w) * 0x14 + 0x46c)
                
                if ((*(result + 0x10) & 0x4000) != 0)
                    int32_t i_2 = sx.d(*(edi_2 + 6))
                    void* result_4 = nullptr
                    
                    while (i_2 != 0xffffffff)
                        var_d44[result_4] = i_2
                        i_2 = sx.d(*(arg1 + ((i_2 * 5 + 0x11d) << 2)))
                        result_4 += 1
                    
                    result_1 = result_4
                    sub_49d720(arg1, ebx_4)
                    int32_t (* eax_8)[0x148] = *(edi_2 + 0x8a)
                    int32_t* var_d60_4
                    void** var_d5c_4
                    
                    if (eax_8 s>= *(edi_2 + 0x86))
                        result = (*(*(edi_2 - 0x16) + 0xc))(arg1, ebx_4, 3, &var_d44, &result_1, 0, 0, 
                            0, 0, 0, 0)
                        
                        if (*(arg1 + 0x1ec3) != 0)
                            break
                        
                        int32_t eax_11 = *(*(edi_2 - 0x16) + 0x10)
                        
                        if (eax_11 != 0)
                            eax_11(arg1, ebx_4, 3)
                        
                        int32_t var_d58_2 = 0
                        var_d5c_4 = &result_1
                        eax_8 = &var_d44
                        var_d60_4 = &var_d44
                    else
                        var_d5c_4 = &result_1
                        var_d60_4 = &var_d44
                    
                    int32_t ecx_10
                    result, ecx_10 = sub_49d860(eax_8, 0, arg1, ebx_4, 3, var_d60_4, var_d5c_4, nullptr)
                    
                    if (*(arg1 + 0x1ec3) != 0)
                        break
                    
                    int32_t edx_7 = var_d44[0]
                    
                    if (edx_7 != 0xffffffff)
                        if (*(arg1 + 0x18) == 0)
                            *edi_2
                            int32_t var_d58_3 = edx_7
                            sub_49bfe0(var_d4c, edx_7)
                            
                            if (*(*(edi_2 - 0x16) + 0x20) != 0)
                                int32_t var_d58_4 = **(arg1 + var_d44[0] * 0x14 + 0x46c)
                                int32_t var_d5c_6 = *(edi_2 - 0x1e)
                                void var_80c
                                sub_5a733b(&var_80c, "%s saves %s.\n")
                                (*(*(edi_2 - 0x16) + 0x20))(arg1, var_d4c, &var_80c, "discard")
                            
                            int32_t var_d58_5 = *(edi_2 - 0x1e)
                            void var_40c
                            sub_5a733b(&var_40c, "%s saves 1 card under Galactic Scavengers.\n")
                            char const* const var_d58_6 = "verbose"
                            void* var_d5c_7 = &var_40c
                            ecx_10 = sub_4c5680("%s (%s)")
                            edx_7 = var_d44[0]
                            ebx_4 = var_d4c
                        
                        int32_t var_d58_7 = 5
                        result = sub_49cc30(arg1, edx_7, ecx_10, ebx_4)
            
            edx_11 = sx.d(*(arg1 + 0x458))
            ebx_4 += 1
            edi_2 += 0xb4
            var_d4c = ebx_4
        while (ebx_4 s< edx_11)
    
    label_4afc76:
    sub_5a6aba(result_2 ^ &__saved_ebp)
    return result
}
