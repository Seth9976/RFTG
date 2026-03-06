// 函数名称: sub_5bcd40
// 虚拟地址: 0x5bcd40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5bcd40(int32_t arg1, char* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* esi = arg2
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_5c0fd0(esi)
    sub_5c0c80(esi, 8, 0)
    int32_t eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_5c0da0(esi)
    int32_t var_4c = edx_1
    int32_t edi_2
    
    if (edx_1 u<= 0x7fffffff && (edx_1 u< 0x7fffffff || eax_4 u<= 0xffffffff))
        edi_2 = adc.d(edx_1, 0, eax_4 u>= 0xffffffc8)
    
    if (edx_1 u> 0x7fffffff || (edx_1 u>= 0x7fffffff && eax_4 u> 0xffffffff) || edi_2 u< edx_1
            || (edi_2 u<= edx_1 && eax_4 + 0x38 u< eax_4))
        zip_error_set(arg3, 4, 0x1b)
    else
        int32_t ebx_1 = eax_3 + arg5
        int32_t ecx_2 = adc.d(edx, arg6, eax_3 + arg5 u< eax_3)
        
        if (edi_2 u< ecx_2 || (edi_2 u<= ecx_2 && eax_4 + 0x38 u<= ebx_1))
            if (edx_1 u< arg6 || (edx_1 u<= arg6 && eax_4 u< arg5))
                goto label_5bce37
            
            int32_t eax_7
            int32_t edx_3
            eax_7, edx_3 = sub_5c1270(esi)
            int32_t edx_4 = adc.d(edx_3, arg6, eax_7 + arg5 u< eax_7)
            char var_41_1
            int32_t ebx_2
            int32_t* edi_3
            
            if (edi_2 u<= edx_4 && (edi_2 u< edx_4 || eax_4 + 0x38 u<= eax_7 + arg5))
                sub_5c1240(esi, eax_4 - arg5, sbb.d(var_4c, arg6, eax_4 u< arg5))
                edi_3 = arg3
                ebx_2.b = 0
                var_41_1 = 0
                goto label_5bce8e
            
            edx_1 = var_4c
        label_5bce37:
            
            if (zip_source_seek(arg4, eax_4, edx_1, 0) s< 0)
                sub_5bf050(arg3, arg4)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 0
            
            edi_3 = arg3
            void var_40
            esi = sub_5c0f50(arg4, 0x38, 0, &var_40, edi_3)
            
            if (esi != 0)
                var_41_1 = 1
                ebx_2.b = 1
            label_5bce8e:
                int32_t* eax_14 = sub_5c0c80(esi, 4, 0)
                int32_t eax_15
                int32_t eax_16
                int32_t ecx_8
                int32_t edx_8
                
                if (*eax_14 == 0x6064b50)
                    eax_15, edx_8 = sub_5c0da0(esi)
                    ecx_8 = arg7 & 4
                    
                    if (ecx_8 != 0)
                        eax_16 = eax_15 + eax_4
                
                if (*eax_14 != 0x6064b50 || (ecx_8 != 0 && (eax_16 + 0xc != ebx_1 ||
                        adc.d(adc.d(edx_8, var_4c, eax_15 + eax_4 u< eax_15), 0, eax_16 u>= 0xfffffff4)
                        != ecx_2)))
                    zip_error_set(edi_3, 0x15, 0)
                    
                    if (ebx_2.b != 0)
                        sub_5c0c20(esi)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                else
                    sub_5c0c80(esi, 0xc, 0)
                    int32_t eax_19
                    int32_t edx_11
                    eax_19, edx_11 = sub_5c0da0(esi)
                    int32_t eax_20
                    int32_t edx_12
                    eax_20, edx_12 = sub_5c0da0(esi)
                    int32_t* var_84_7
                    int32_t var_80_5
                    
                    if (eax_19 != eax_20 || edx_11 != edx_12)
                        int32_t var_7c_8 = 0
                        var_80_5 = 1
                        var_84_7 = arg3
                    label_5bcf2c:
                        zip_error_set(var_84_7, var_80_5, 0)
                        
                        if (var_41_1 != 0)
                            sub_5c0c20(esi)
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                    else
                        int32_t eax_22
                        int32_t edx_13
                        eax_22, edx_13 = sub_5c0da0(esi)
                        int32_t eax_23
                        int32_t edx_14
                        eax_23, edx_14 = sub_5c0da0(esi)
                        
                        if (xff67edc5::_Atomic_load_uchar::operator[]::_Atomic_load_uchar(esi) == 0)
                            int32_t var_7c_11 = 0
                            var_80_5 = 0x14
                            var_84_7 = arg3
                            goto label_5bcf2c
                        
                        if (var_41_1 != 0)
                            sub_5c0c20(esi)
                        
                        int32_t eax_26
                        int32_t ecx_15
                        
                        if (edx_14 u<= 0x7fffffff && (edx_14 u< 0x7fffffff || eax_23 u<= 0xffffffff))
                            ecx_15 = eax_23 + eax_22
                            eax_26 = adc.d(edx_14, edx_13, eax_23 + eax_22 u< eax_23)
                        
                        if (edx_14 u> 0x7fffffff || (edx_14 u>= 0x7fffffff && eax_23 u> 0xffffffff)
                                || eax_26 u< edx_14 || (eax_26 u<= edx_14 && ecx_15 u< eax_23))
                            zip_error_set(arg3, 4, 0x1b)
                        else if (ecx_8 == 0 || (ecx_15 == eax_4 && eax_26 == var_4c))
                            int32_t* result = sub_5bf6a0(eax_19, edx_11, arg3)
                            
                            if (result != 0)
                                result[9] = edx_14
                                result[6] = eax_22
                                result[8] = eax_23
                                result[7] = edx_13
                                sub_5a6aba(eax_1 ^ &__saved_ebp)
                                return result
                        else
                            zip_error_set(arg3, 0x15, 0)
        else
            zip_error_set(arg3, 0x15, 0)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
