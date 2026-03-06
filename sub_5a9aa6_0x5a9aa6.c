// 函数名称: sub_5a9aa6
// 虚拟地址: 0x5a9aa6
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a9aa6(int128_t* arg1, void* arg2, int32_t arg3, uint32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_20 = edi
    char* var_c = arg1
    void* var_8 = arg2
    
    if (arg3 != 0 && arg4 != 0)
        if (arg1 == 0)
            *__errno() = 0x16
        else if (arg5 == 0 || arg4 u> divu.dp.d(0:0xffffffff, arg3))
            if (arg2 != 0xffffffff)
                sub_5abfc0(arg1, 0, arg2)
            
            if (arg5 != 0 && arg4 u<= divu.dp.d(0:0xffffffff, arg3))
                goto label_5a9b19
            
            *__errno() = 0x16
        else
        label_5a9b19:
            void* edi_3 = arg3 * arg4
            void* var_14_1 = edi_3
            void* ebx_1 = edi_3
            int32_t var_10_1
            
            if ((arg5[3] & 0x10c) == 0)
                var_10_1 = 0x1000
            else
                var_10_1 = arg5[6]
            
            if (edi_3 == 0)
                return arg4
            
            while (true)
                void* eax_8
                
                if ((arg5[3] & 0x10c) != 0)
                    eax_8 = arg5[1]
                
                if ((arg5[3] & 0x10c) != 0 && eax_8 != 0)
                    if (eax_8 s< 0)
                    label_5a9c4a:
                        arg5[3] |= 0x20
                        return divu.dp.d(0:(edi_3 - ebx_1), arg3)
                    
                    void* edi_4 = ebx_1
                    
                    if (ebx_1 u>= eax_8)
                        edi_4 = eax_8
                    
                    if (edi_4 u> var_8)
                        break
                    
                    sub_5ac3ca(var_c, var_8, *arg5, edi_4)
                    arg5[1] -= edi_4
                    *arg5 += edi_4
                    var_c += edi_4
                    ebx_1 -= edi_4
                    var_8 -= edi_4
                    edi_3 = var_14_1
                else if (ebx_1 u< var_10_1)
                    uint32_t eax_15 = sub_5b1ded(arg5)
                    
                    if (eax_15 == 0xffffffff)
                        return divu.dp.d(0:(edi_3 - ebx_1), arg3)
                    
                    if (var_8 == 0)
                        break
                    
                    char* ecx_3 = var_c
                    var_c = &var_c[1]
                    *ecx_3 = eax_15.b
                    ebx_1 -= 1
                    var_8 -= 1
                    var_10_1 = arg5[6]
                else
                    void* eax_12
                    
                    if (var_10_1 == 0)
                        eax_12 = 0x7fffffff
                        
                        if (ebx_1 u<= 0x7fffffff)
                            eax_12 = ebx_1
                    else
                        int32_t edx_5 = 0
                        void* eax_10
                        uint32_t edx_6
                        
                        if (ebx_1 u<= 0x7fffffff)
                            edx_6 = modu.dp.d(edx_5:ebx_1, var_10_1)
                            eax_10 = ebx_1
                        else
                            edx_6 = modu.dp.d(edx_5:0x7fffffff, var_10_1)
                            eax_10 = 0x7fffffff
                        
                        eax_12 = eax_10 - edx_6
                    
                    if (eax_12 u> var_8)
                        break
                    
                    int32_t eax_14 = sub_5b4386(__fileno(arg5), var_c, eax_12)
                    
                    if (eax_14 == 0)
                        arg5[3] |= 0x10
                        return divu.dp.d(0:(edi_3 - ebx_1), arg3)
                    
                    if (eax_14 == 0xffffffff)
                        goto label_5a9c4a
                    
                    var_c = &var_c[eax_14]
                    ebx_1 -= eax_14
                    var_8 -= eax_14
                
                if (ebx_1 == 0)
                    return arg4
            
            if (arg2 != 0xffffffff)
                sub_5abfc0(arg1, 0, arg2)
            
            *__errno() = 0x22
        
        __invalid_parameter_noinfo()
    
    return 0
}
