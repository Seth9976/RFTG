// 函数名称: sub_50cb70
// 虚拟地址: 0x50cb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50cb70(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    arg1[0x17] += 1
    int32_t i = 0
    arg1[0x11f] = 0
    int32_t* result = *arg1
    
    if (result != 0)
        int32_t edx_1
        result, edx_1 = sub_50c140(result)
        int32_t* result_1 = result
        int32_t i_1 = 0
        
        if (result[1] s> 0)
            int32_t var_18_1 = 0
            
            do
                int32_t* edi_2 = *result + var_18_1
                int128_t* eax_4
                eax_4, edx_1 = sub_50c830(i, edx_1, arg1)
                int32_t eax_5 = *edi_2
                
                if (eax_5 == 2)
                    arg1[0x133]
                    edx_1 = sub_4f93c0(sub_510860(i), *(eax_4 + 0x4c8))
                else if (eax_5 == 5)
                    int32_t var_2c_1
                    int32_t var_28_1
                    int32_t var_24_1
                    int32_t ecx_3
                    
                    if (*(eax_4 + 0x6c) s<= *(eax_4 + 0x5c))
                        edx_1 = edi_2[0x21]
                        var_28_1 = edi_2[0x20]
                        var_2c_1 = edi_2[0x1f]
                        var_24_1 = edx_1
                        ecx_3 = edx_1
                    else
                        edx_1 = *(eax_4 + 0x74)
                        var_2c_1 = eax_4[7].d
                        ecx_3 = *(eax_4 + 0x78)
                        var_28_1 = edx_1
                        var_24_1 = ecx_3
                    
                    int32_t eax_10 = 0
                    int32_t var_38_1 = 0
                    
                    if (var_2c_1 s> 0)
                        edx_1 = var_28_1
                        
                        do
                            int32_t ebx = 0
                            
                            if (edx_1 s> 0)
                                do
                                    int32_t esi_3 = 0
                                    
                                    if (ecx_3 s> 0)
                                        do
                                            bool cond:1_1 = *edi_2[0x24] == 0
                                            int32_t var_14 = eax_10
                                            int32_t var_10_1 = ebx
                                            int32_t var_c_1 = esi_3
                                            
                                            if (not(cond:1_1))
                                                sub_50cb70(sub_50c900(&var_14, eax_4, edi_2, &var_14))
                                                ecx_3 = var_24_1
                                                eax_10 = var_38_1
                                            
                                            esi_3 += 1
                                        while (esi_3 s< ecx_3)
                                        
                                        edx_1 = var_28_1
                                    
                                    ebx += 1
                                while (ebx s< edx_1)
                            
                            eax_10 += 1
                            var_38_1 = eax_10
                        while (eax_10 s< var_2c_1)
                        
                        i = i_1
                
                result = result_1
                var_18_1 += 0xb8
                i += 1
                i_1 = i
            while (i s< result[1])
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
