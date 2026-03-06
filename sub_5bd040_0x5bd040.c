// 函数名称: sub_5bd040
// 虚拟地址: 0x5bd040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5bd040(char* arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t edx
    eax, edx = sub_5c0fd0(arg1)
    int32_t eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_5c0ec0(arg1)
    int32_t* eax_2
    
    if (edx_1 u> 0 || (edx_1 u>= 0 && eax_1 u>= 0x16))
        eax_2 = sub_5c0c80(arg1, 4, 0)
    
    if ((edx_1 u<= 0 && (edx_1 u< 0 || eax_1 u< 0x16)) || *eax_2 != 0x6054b50)
        zip_error_set(arg5, 0x13, 0)
    else
        if (sub_5c0d30(arg1) != 0)
            zip_error_set(arg5, 1, 0)
            return 0
        
        int32_t eax_5
        
        if (edx != 0 || eax u>= 0x14)
            eax_5 = zip_error_code_system(arg1)
        
        int32_t* result
        
        if ((edx == 0 && eax u< 0x14) || *(eax_5 + eax - 0x14) != 0x7064b50)
            sub_5c1240(arg1, eax, edx)
            int32_t edx_7 = arg2[5]
            int32_t* var_3c_2 = arg5
            int32_t var_40_2 = edx_7
            result = sub_5bcbe0(arg1, edx_7, arg3, arg3.b, arg4)
        else
            sub_5c1240(arg1, eax - 0x14, adc.d(edx, 0xffffffff, eax u>= 0x14))
            result = sub_5bcd40(arg2, arg1, arg5, *arg2, arg3, arg4, arg2[5])
        
        if (result != 0)
            sub_5c1240(arg1, eax + 0x14, adc.d(edx, 0, eax u>= 0xffffffec))
            int16_t eax_12 = sub_5c0cd0(arg1)
            int32_t eax_13 = result[8]
            int32_t eax_16 = adc.d(result[9], result[7], eax_13 + result[6] u< eax_13)
            int32_t ecx_11 = adc.d(edx, arg4, eax + arg3 u< eax)
            
            if (eax_16 u>= ecx_11 && (eax_16 u> ecx_11 || eax_13 + result[6] u> eax + arg3))
                zip_error_set(arg5, 0x15, 0)
                sub_5bf630(result)
                return 0
            
            int32_t* ebx_4
            
            if (eax_12 != 0 || (arg2[1].b & 4) != 0)
                sub_5c1240(arg1, eax + 0x16, adc.d(edx, 0, eax u>= 0xffffffea))
                int32_t eax_20
                int32_t edx_12
                eax_20, edx_12 = sub_5c0ec0(arg1)
                int32_t eax_22
                int32_t edx_13
                edx_13:eax_22 = sx.q(zx.d(eax_12))
                
                if (edx_12 u< edx_13 || (edx_12 u<= edx_13 && eax_20 u< eax_22))
                label_5bd4af:
                    zip_error_set(arg5, 0x15, 0)
                    sub_5bf630(result)
                    return 0
                
                if ((arg2[1].b & 4) != 0 && (eax_20 != eax_22 || edx_12 != edx_13))
                    goto label_5bd4af
                
                ebx_4 = arg5
                
                if (eax_12 != 0)
                    int32_t* eax_24 = sub_5bf2e0(sub_5c0c80(arg1, eax_22, edx_13), eax_12, 0, ebx_4)
                    result[0xa] = eax_24
                    
                    if (eax_24 == 0)
                        sub_5bf630(result)
                        return 0
            else
                ebx_4 = arg5
            
            int32_t eax_26 = result[9]
            int32_t ecx_15 = result[8]
            char* var_8_1
            
            if (eax_26 u< arg4 || (eax_26 u<= arg4 && ecx_15 u< arg3))
                var_8_1 = nullptr
                
                if (zip_source_seek(*arg2, ecx_15, eax_26, 0) s< 0)
                    sub_5bf050(ebx_4, *arg2)
                    sub_5bf630(result)
                    return 0
                
                int32_t eax_36
                int32_t edx_18
                eax_36, edx_18 = zip_source_tell(*arg2)
                
                if (eax_36 != result[8] || edx_18 != result[9])
                    zip_error_set(ebx_4, 0x13, 0)
                    sub_5bf630(result)
                    return 0
            else
                sub_5c1240(arg1, ecx_15 - arg3, sbb.d(eax_26, arg4, ecx_15 u< arg3))
                int32_t eax_28 = sub_5c0c80(arg1, result[6], result[7])
                
                if (eax_28 == 0)
                    zip_error_set(ebx_4, 0x15, eax_28)
                    sub_5bf630(result)
                    return 0
                
                char* eax_30 = sub_5c0ee0(eax_28, result[6], result[7])
                var_8_1 = eax_30
                
                if (eax_30 == 0)
                    zip_error_set(ebx_4, 0xe, eax_30)
                    sub_5bf630(result)
                    return 0
            
            int32_t ebx_5 = 0
            int32_t edi_1 = 0
            int32_t var_10 = result[6]
            int32_t var_c_1 = result[7]
            int32_t temp11 = result[3]
            
            if (temp11 u>= 0)
                if (temp11 u> 0)
                    goto label_5bd35a
                
                if (result[2] u> 0)
                    edi_1 = 0
                label_5bd35a:
                    
                    while (var_c_1 u> 0 || var_10 u> 0)
                        int32_t* eax_39 = sub_5bf870()
                        int32_t ecx_23 = edi_1 * 2
                        *(*result + (ecx_23 << 3)) = eax_39
                        
                        if (eax_39 == 0)
                        label_5bd3e1:
                            sub_5bf630(result)
                            sub_5c0c20(var_8_1)
                            return 0
                        
                        uint32_t eax_43
                        int32_t edx_22
                        eax_43, edx_22 = sub_5bfd40(*(*result + (ecx_23 << 3)), *arg2, var_8_1, 0, arg5)
                        
                        if (edx_22 s< 0)
                            goto label_5bd3e1
                        
                        if (edx_22 s<= 0 && eax_43 u< 0)
                            goto label_5bd3e1
                        
                        int32_t temp16_1 = edi_1
                        edi_1 += 1
                        ebx_5 = adc.d(ebx_5, 0, temp16_1 u>= 0xffffffff)
                        int32_t temp17_1 = var_10
                        var_10 -= eax_43
                        var_c_1 = sbb.d(var_c_1, edx_22, temp17_1 u< eax_43)
                        int32_t temp18_1 = result[3]
                        
                        if (ebx_5 u>= temp18_1)
                            if (ebx_5 u> temp18_1)
                                break
                            
                            if (edi_1 u>= result[2])
                                break
            
            if (edi_1 != result[2] || ebx_5 != result[3])
                zip_error_set(arg5, 0x15, 0)
                sub_5c0c20(var_8_1)
                sub_5bf630(result)
                return 0
            
            if ((arg2[1].b & 4) != 0)
                if (var_8_1 == 0)
                    int32_t eax_51
                    int32_t edx_26
                    eax_51, edx_26 = zip_source_tell(*arg2)
                    
                    if (edx_26 s<= 0 && (edx_26 s< 0 || eax_51 u< 0))
                        sub_5bf050(arg5, *arg2)
                        sub_5c0c20(nullptr)
                        sub_5bf630(result)
                        return 0
                    
                    int32_t ecx_27 = result[8]
                    
                    if (eax_51 != ecx_27 + result[6]
                            || edx_26 != adc.d(result[9], result[7], ecx_27 + result[6] u< ecx_27))
                        goto label_5bd424
                else if (sub_5c0c50(var_8_1) == 0)
                label_5bd424:
                    zip_error_set(arg5, 0x15, 0)
                    sub_5c0c20(var_8_1)
                    sub_5bf630(result)
                    return 0
            
            sub_5c0c20(var_8_1)
            return result
    
    return 0
}
