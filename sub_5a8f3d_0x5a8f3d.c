// 函数名称: sub_5a8f3d
// 虚拟地址: 0x5a8f3d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a8f3d(void* arg1, int32_t arg2, uint32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_1c = edi
    
    if (arg2 != 0 && arg3 != 0)
        if (arg4 != 0 && arg1 != 0 && arg3 u<= divu.dp.d(0:0xffffffff, arg2))
            void* edi_3 = arg2 * arg3
            void* var_8_1 = arg1
            void* var_10_1 = edi_3
            void* ebx_1 = edi_3
            int32_t var_c_1
            
            if ((arg4[3] & 0x10c) == 0)
                var_c_1 = 0x1000
            else
                var_c_1 = arg4[6]
            
            if (edi_3 != 0)
                while (true)
                    int32_t ecx_3 = arg4[3] & 0x108
                    void* eax_6
                    
                    if (ecx_3 != 0)
                        eax_6 = arg4[1]
                    
                    void* eax_17
                    
                    if (ecx_3 != 0 && eax_6 != 0)
                        if (eax_6 s>= 0)
                            void* edi_4 = ebx_1
                            
                            if (ebx_1 u>= eax_6)
                                edi_4 = eax_6
                            
                            sub_5ab990(*arg4, var_8_1, edi_4)
                            arg4[1] -= edi_4
                            *arg4 += edi_4
                            ebx_1 -= edi_4
                            var_8_1 += edi_4
                            goto label_5a903b
                        
                        arg4[3] |= 0x20
                        eax_17 = edi_3
                    else if (ebx_1 u< var_c_1)
                        int32_t* var_20_4 = arg4
                        
                        if (sub_5ad3b0(sx.d(*var_8_1)) != 0xffffffff)
                            var_8_1 += 1
                            int32_t eax_15 = arg4[6]
                            ebx_1 -= 1
                            var_c_1 = eax_15
                            
                            if (eax_15 s<= 0)
                                var_c_1 = 1
                            
                            goto label_5a9069
                        
                        eax_17 = edi_3
                    else
                        int32_t eax_7
                        
                        if (ecx_3 != 0)
                            eax_7 = sub_5a910e(arg4)
                        
                        if (ecx_3 != 0 && eax_7 != 0)
                            eax_17 = edi_3
                        else
                            void* edi_5 = ebx_1
                            
                            if (var_c_1 != 0)
                                edi_5 -= modu.dp.d(0:ebx_1, var_c_1)
                            
                            void* eax_11 = sub_5b03d0(__fileno(arg4), var_8_1, edi_5)
                            
                            if (eax_11 != 0xffffffff)
                                void* ecx_6 = edi_5
                                
                                if (eax_11 u<= edi_5)
                                    ecx_6 = eax_11
                                
                                var_8_1 += ecx_6
                                ebx_1 -= ecx_6
                            
                            if (eax_11 == 0xffffffff || eax_11 u< edi_5)
                                arg4[3] |= 0x20
                                eax_17 = var_10_1
                            else
                            label_5a903b:
                                edi_3 = var_10_1
                            label_5a9069:
                                
                                if (ebx_1 == 0)
                                    break
                                
                                continue
                    
                    return divu.dp.d(0:(eax_17 - ebx_1), arg2)
            
            return arg3
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
    
    return 0
}
