// 函数名称: sub_5bd760
// 虚拟地址: 0x5bd760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5bd760(int32_t* arg1, uint32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: uint32_t esi = arg2
    uint32_t esi = arg2
    int32_t* edi = arg3
    
    if (edi u<= 0 && (edi u< 0 || esi u< 0x16))
        zip_error_set(&arg1[2], 0x13, 0)
        return 0
    
    uint32_t var_c
    
    if (edi u> 0 || edi u> 0 || (edi u>= 0 && esi u>= 0x1002a))
        var_c = 0x1002a
        esi = 0x1002a
        edi = nullptr
    else
        var_c = esi
    
    int32_t* ebx = arg1
    
    if (zip_source_seek(*ebx, neg.d(esi), neg.d(adc.d(edi, 0, esi != 0)), 2) s< 0)
        int32_t* eax_5 = zip_source_error(*ebx)
        int32_t eax_6 = zip_error_code_zip(eax_5)
        int32_t eax_7
        
        if (eax_6 == 4)
            eax_7 = zip_error_code_system(eax_5)
        
        if (eax_6 != 4 || eax_7 != 0x1b)
            sub_5bf010(&ebx[2], eax_5)
            return 0
    
    int32_t* eax_10
    int32_t edx_4
    eax_10, edx_4 = zip_source_tell(*ebx)
    
    if (edx_4 s<= 0 && (edx_4 s< 0 || eax_10 u< 0))
        sub_5bf050(&ebx[2], *ebx)
        return 0
    
    void* eax_12 = &ebx[2]
    char* eax_14 = sub_5c0f50(*ebx, esi, edi, 0, eax_12)
    
    if (eax_14 != 0)
        int32_t var_18_1 = 0xffffffff
        int32_t var_14_1 = 0xffffffff
        arg3 = nullptr
        
        if (edi != 0 || var_c u>= 0x1002a)
            sub_5c1240(eax_14, 0x14, 0)
        
        void var_34
        zip_error_set(&var_34, 0x13, 0)
        
        for (void* i = sub_5bcb20(sub_5c0c80(eax_14, 0, 0), sub_5c0ec0(eax_14) - 0x12, "P", 4); i != 0; 
                i = sub_5bcb20(i + 1, sub_5c0ec0(eax_14) - 0x12, "P", 4))
            int32_t eax_21
            int32_t edx_8
            edx_8:eax_21 = sx.q(i - zip_error_code_system(eax_14))
            sub_5c1240(eax_14, eax_21, edx_8)
            void* var_54_1 = &var_34
            int32_t var_58_2 = edx_4
            int32_t* eax_23 = sub_5bd040(eax_14, eax_10, edx_4, ebx, eax_10)
            int32_t edx_10 = 0
            
            if (eax_23 != 0)
                if (arg3 == 0)
                    arg3 = eax_23
                    
                    if ((ebx[1].b & 4) == 0)
                        var_18_1 = 0
                    else
                        int32_t eax_27
                        eax_27, edx_10 = sub_5bd4e0(ebx, &var_34)
                        ebx = arg1
                        var_18_1 = eax_27
                    
                    var_14_1 = edx_10
                else
                    if (var_14_1 s<= 0 && (var_14_1 s< 0 || var_18_1 u<= 0))
                        int32_t eax_24
                        int32_t edx_11
                        eax_24, edx_11 = sub_5bd4e0(ebx, &var_34)
                        ebx = arg1
                        var_18_1 = eax_24
                        var_14_1 = edx_11
                    
                    int32_t eax_25
                    int32_t edx_12
                    eax_25, edx_12 = sub_5bd4e0(ebx, &var_34)
                    
                    if (var_14_1 s> edx_12 || (var_14_1 s>= edx_12 && var_18_1 u>= eax_25))
                        sub_5bf630(eax_23)
                        ebx = arg1
                    else
                        sub_5bf630(arg3)
                        var_14_1 = edx_12
                        ebx = arg1
                        arg3 = eax_23
                        var_18_1 = eax_25
            
            int32_t eax_30
            int32_t edx_17
            edx_17:eax_30 = sx.q(i + 1 - zip_error_code_system(eax_14))
            sub_5c1240(eax_14, eax_30, edx_17)
        
        sub_5c0c20(eax_14)
        
        if (var_14_1 s> 0)
            return arg3
        
        if (var_14_1 s>= 0 && var_18_1 u>= 0)
            return arg3
        
        sub_5bf010(eax_12, &var_34)
        sub_5bf630(arg3)
    
    return 0
}
