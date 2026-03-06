// 函数名称: sub_5d4ee0
// 虚拟地址: 0x5d4ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d4ee0(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t edx = 0
    int32_t ebx = 0
    int32_t esi = 0
    int32_t var_8 = 0
    
    if (edi != 0)
        if (arg2 s< 1)
            char const* const var_30_2 = "count"
            sub_5cce60("Parameter '%s' is invalid")
            return 0
        
        if (arg3 == 0)
            int32_t* eax_7 = arg4
            
            if (eax_7 == 0)
                return 1
            
            esi = *edi
            edx = edi[1]
            int32_t ecx_6 = 1
            ebx = esi
            int32_t var_c_2 = ebx
            var_8 = edx
            
            if (arg2 s> 1)
                while (true)
                    int32_t eax_8 = edi[ecx_6 * 2]
                    int32_t edi_6 = edi[ecx_6 * 2 + 1]
                    
                    if (eax_8 s>= var_c_2)
                        ebx = var_c_2
                        
                        if (eax_8 s> esi)
                            esi = eax_8
                    else
                        ebx = eax_8
                        var_c_2 = ebx
                    
                    if (edi_6 s< var_8)
                        var_8 = edi_6
                    else if (edi_6 s> edx)
                        edx = edi_6
                    
                    ecx_6 += 1
                    
                    if (ecx_6 s>= arg2)
                        break
                    
                    edi = arg1
                
            label_5d5055:
                eax_7 = arg4
            
            if (eax_7 == 0)
                return 1
            
            *eax_7 = ebx
            eax_7[1] = var_8
            eax_7[2] = esi - ebx + 1
            eax_7[3] = edx - var_8 + 1
            return 1
        
        int32_t ecx_1 = arg3[1]
        int32_t edi_1 = *arg3
        int32_t ecx_2 = arg3[2]
        int32_t eax_4 = arg3[3]
        int32_t var_c_1 = 0
        
        if (ecx_2 s> 0 && eax_4 s> 0)
            int32_t ecx_3 = 0
            int32_t var_14_1 = 0
            
            if (arg2 s> 0)
                do
                    int32_t eax_5 = arg1[ecx_3 * 2]
                    int32_t ecx_4 = arg1[ecx_3 * 2 + 1]
                    
                    if (eax_5 s>= edi_1 && eax_5 s<= ecx_2 + edi_1 - 1 && ecx_4 s>= ecx_1
                            && ecx_4 s<= eax_4 + ecx_1 - 1)
                        if (var_c_1 != 0)
                            if (eax_5 s< ebx)
                                ebx = eax_5
                            else if (eax_5 s> esi)
                                esi = eax_5
                            
                            if (ecx_4 s< var_8)
                                var_8 = ecx_4
                            else if (ecx_4 s> edx)
                                edx = ecx_4
                        else
                            if (arg4 == 0)
                                return 1
                            
                            esi = eax_5
                            ebx = eax_5
                            var_8 = ecx_4
                            var_c_1 = 1
                            edx = ecx_4
                    
                    ecx_3 = var_14_1 + 1
                    var_14_1 = ecx_3
                while (ecx_3 s< arg2)
            
            if (arg2 s<= 0 || var_c_1 == 0)
                return 0
            
            goto label_5d5055
    else
        char const* const var_30_1 = "points"
        sub_5cce60("Parameter '%s' is invalid")
    
    return 0
}
