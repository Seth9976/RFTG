// 函数名称: sub_5d50c0
// 虚拟地址: 0x5d50c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d50c0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_14 = 0
    int32_t var_14 = 0
    int32_t var_18 = 0
    
    if (arg1 == 0)
        char const* const __saved_ebx = "rect"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg2 == 0)
        void* const __saved_esi = &data_6b62b4
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg3 == 0)
        void* const __saved_edi = &data_6b62b0
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg4 == 0)
        void* const var_40_1 = &data_6b62ac
        sub_5cce60("Parameter '%s' is invalid")
    else if (arg5 != 0)
        int32_t eax_5 = arg1[2]
        
        if (eax_5 s> 0 && arg1[3] s> 0)
            int32_t ebx_1 = *arg2
            int32_t esi_1 = *arg3
            int32_t var_10_1 = *arg5
            int32_t edx_3 = *arg1
            int32_t var_8_1 = *arg4
            int32_t edi_2 = arg1[1]
            int32_t eax_10 = arg1[3] + edi_2 - 1
            int32_t var_c_1 = esi_1
            
            if (ebx_1 s>= edx_3)
                if (ebx_1 s<= eax_5 + edx_3 - 1)
                    if (var_8_1 s>= edx_3 && var_8_1 s<= eax_5 + edx_3 - 1 && esi_1 s>= edi_2
                            && esi_1 s<= eax_10 && var_10_1 s>= edi_2 && var_10_1 s<= eax_10)
                        return 1
                    
                    goto label_5d51d8
                
            label_5d51e0:
                
                if (var_8_1 s<= eax_5 + edx_3 - 1)
                    esi_1 = var_c_1
                label_5d51ec:
                    
                    if (esi_1 s>= edi_2 || var_10_1 s>= edi_2)
                        if (esi_1 s<= eax_10)
                            goto label_5d520d
                        
                        if (var_10_1 s<= eax_10)
                            esi_1 = var_c_1
                        label_5d520d:
                            
                            if (esi_1 == var_10_1)
                                if (ebx_1 s< edx_3)
                                    *arg2 = edx_3
                                else if (ebx_1 s> eax_5 + edx_3 - 1)
                                    *arg2 = eax_5 + edx_3 - 1
                                
                                if (var_8_1 s< edx_3)
                                    *arg4 = edx_3
                                    return 1
                                
                                if (var_8_1 s> eax_5 + edx_3 - 1)
                                    *arg4 = eax_5 + edx_3 - 1
                                
                                return 1
                            
                            if (ebx_1 == var_8_1)
                                if (esi_1 s< edi_2)
                                    *arg3 = edi_2
                                else if (esi_1 s> eax_10)
                                    *arg3 = eax_10
                                
                                if (var_10_1 s< edi_2)
                                    *arg5 = edi_2
                                    return 1
                                
                                if (var_10_1 s> eax_10)
                                    *arg5 = eax_10
                                
                                return 1
                            
                            int32_t var_28_1 = sub_5d5080(arg1, esi_1, ebx_1)
                            int32_t eax_24 = sub_5d5080(arg1, var_10_1, var_8_1)
                            int32_t var_24_1 = eax_24
                            
                            while (true)
                                if (var_28_1 == 0 && eax_24 == 0)
                                    *arg2 = ebx_1
                                    *arg3 = var_c_1
                                    *arg4 = var_8_1
                                    *arg5 = var_10_1
                                    return 1
                                
                                if ((var_28_1 & eax_24) != 0)
                                    break
                                
                                if (var_28_1 == 0)
                                    int32_t eax_39
                                    
                                    if ((eax_24.b & 2) == 0)
                                        if ((eax_24.b & 1) != 0)
                                            eax_39 = eax_10
                                            goto label_5d5376
                                        
                                        if ((eax_24.b & 4) != 0)
                                            var_14 = edx_3
                                            var_18 = divs.dp.d(
                                                sx.q((var_10_1 - var_c_1) * (edx_3 - ebx_1)), 
                                                var_8_1 - ebx_1) + var_c_1
                                        else if ((eax_24.b & 8) != 0)
                                            var_14 = eax_5 + edx_3 - 1
                                            var_18 = divs.dp.d(
                                                sx.q((eax_5 + edx_3 - 1 - ebx_1)
                                                    * (var_10_1 - var_c_1)), 
                                                var_8_1 - ebx_1) + var_c_1
                                    else
                                        eax_39 = edi_2
                                    label_5d5376:
                                        var_18 = eax_39
                                        var_14 = divs.dp.d(
                                            sx.q((eax_39 - var_c_1) * (var_8_1 - ebx_1)), 
                                            var_10_1 - var_c_1) + ebx_1
                                    var_8_1 = var_14
                                    var_10_1 = var_18
                                    eax_24 = sub_5d5080(arg1, var_18, var_14)
                                    var_24_1 = eax_24
                                else
                                    int32_t eax_25
                                    
                                    if ((var_28_1.b & 2) == 0)
                                        if ((var_28_1.b & 1) != 0)
                                            eax_25 = eax_10
                                            goto label_5d52f0
                                        
                                        if ((var_28_1.b & 4) != 0)
                                            var_14 = edx_3
                                            var_18 = divs.dp.d(
                                                sx.q((var_10_1 - var_c_1) * (edx_3 - ebx_1)), 
                                                var_8_1 - ebx_1) + var_c_1
                                        else if ((var_28_1.b & 8) != 0)
                                            var_14 = eax_5 + edx_3 - 1
                                            var_18 = divs.dp.d(
                                                sx.q((eax_5 + edx_3 - 1 - ebx_1)
                                                    * (var_10_1 - var_c_1)), 
                                                var_8_1 - ebx_1) + var_c_1
                                    else
                                        eax_25 = edi_2
                                    label_5d52f0:
                                        var_18 = eax_25
                                        var_14 = divs.dp.d(
                                            sx.q((eax_25 - var_c_1) * (var_8_1 - ebx_1)), 
                                            var_10_1 - var_c_1) + ebx_1
                                    ebx_1 = var_14
                                    var_c_1 = var_18
                                    var_28_1 = sub_5d5080(arg1, var_18, var_14)
                                    eax_24 = var_24_1
            else if (var_8_1 s>= edx_3)
            label_5d51d8:
                
                if (ebx_1 s<= eax_5 + edx_3 - 1)
                    goto label_5d51ec
                
                goto label_5d51e0
    else
        void* const var_40_2 = &data_6b62a8
        sub_5cce60("Parameter '%s' is invalid")
    
    return 0
}
