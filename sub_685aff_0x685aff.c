// 函数名称: sub_685aff
// 虚拟地址: 0x685aff
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_685aff(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_58 = edi
    int32_t var_44 = 0
    int32_t var_48 = 0
    int32_t result
    
    if (arg3 != 0)
        int32_t result_2
        uint32_t edx
        edx:result_2 = sx.q(arg3[5])
        int32_t result_1 = result_2
        uint32_t var_30_1 = edx
        int32_t eax_5 = adc.d(edx, 0xffffffff, result_2 u>= 0x45)
        
        if (eax_5 u> 0 || (eax_5 u>= 0 && result_2 - 0x45 u> 0x408))
            *__errno() = 0x16
            result = 0xffffffff
        else
            int32_t eax_6 = arg3[4]
            int32_t eax_11
            int32_t result_5
            
            if (eax_6 s< 0 || eax_6 s> 0xb)
                int32_t eax_7
                int32_t edx_1
                edx_1:eax_7 = sx.q(eax_6)
                int32_t temp1_1 = mods.dp.d(edx_1:eax_7, 0xc)
                int32_t eax_9
                int32_t edx_3
                edx_3:eax_9 = sx.q(divs.dp.d(edx_1:eax_7, 0xc))
                int32_t result_7 = result_1
                result_1 += eax_9
                arg3[4] = temp1_1
                var_30_1 = adc.d(var_30_1, edx_3, result_7 + eax_9 u< result_7)
                
                if (temp1_1 s< 0)
                    int32_t result_8 = result_1
                    result_1 -= 1
                    arg3[4] = temp1_1 + 0xc
                    var_30_1 = adc.d(var_30_1, 0xffffffff, result_8 u>= 1)
                
                result_5 = result_1
                eax_11 = adc.d(var_30_1, 0xffffffff, result_5 u>= 0x45)
            
            if ((eax_6 s< 0 || eax_6 s> 0xb)
                    && (eax_11 u> 0 || (eax_11 u>= 0 && result_5 - 0x45 u> 0x408)))
                *__errno() = 0x16
                result = 0xffffffff
            else
                int32_t esi_1 = arg3[4]
                int32_t eax_13
                int32_t edx_4
                edx_4:eax_13 = sx.q(*((esi_1 << 2) + &data_8b9564))
                int32_t var_40_1 = eax_13
                int32_t var_3c_1 = edx_4
                uint32_t eax_14
                int32_t edx_5
                eax_14, edx_5 = __allrem(result_1, var_30_1, 4, 0)
                uint32_t eax_16
                int32_t edx_6
                
                if ((eax_14 | edx_5) == 0)
                    eax_16, edx_6 = __allrem(result_1, var_30_1, 0x64, 0)
                
                uint32_t eax_19
                int32_t edx_7
                
                if ((eax_14 | edx_5) != 0 || (eax_16 | edx_6) == 0)
                    int32_t result_3 = result_1
                    eax_19, edx_7 = __allrem(result_3 + 0x76c, 
                        adc.d(var_30_1, 0, result_3 u>= 0xfffff894), 0x190, 0)
                
                if ((((eax_14 | edx_5) == 0 && (eax_16 | edx_6) != 0) || (eax_19 | edx_7) == 0)
                        && esi_1 s> 1)
                    int32_t temp19_1 = var_40_1
                    var_40_1 += 1
                    var_3c_1 = adc.d(var_3c_1, 0, temp19_1 u>= 0xffffffff)
                
                int32_t result_6 = result_1
                uint32_t eax_22 = sbb.d(var_30_1, 0, result_6 u< 1)
                int32_t result_4 = result_1
                int32_t var_50_1 = result_6 - 1
                uint32_t eax_24
                int32_t edx_10
                eax_24, edx_10 =
                    __alldiv(result_4 + 0x12b, adc.d(var_30_1, 0, result_4 u>= 0xfffffed5), 0x190, 0)
                int32_t eax_26
                int32_t edx_11
                edx_11:eax_26 = sx.q(arg3[3])
                int32_t ebx_2 = eax_24 + eax_26
                uint32_t eax_29
                int32_t edx_12
                eax_29, edx_12 = __alldiv(result_6 - 1, eax_22, 0x64, 0)
                int32_t ebx_3 = ebx_2 - eax_29
                uint32_t eax_32
                int32_t edx_13
                eax_32, edx_13 = __alldiv(result_6 - 1, eax_22, 4, 0)
                int32_t ebx_4 = ebx_3 + eax_32
                int32_t eax_35
                int32_t edx_14
                eax_35, edx_14 = __allmul(result_1, var_30_1, 0x16d, 0)
                int32_t ebx_5 = ebx_4 + eax_35
                int32_t ebx_6 = ebx_5 + var_40_1
                int32_t eax_38 = adc.d(
                    adc.d(
                        adc.d(
                            sbb.d(adc.d(edx_10, edx_11, eax_24 + eax_26 u< eax_24), edx_12, 
                                ebx_2 u< eax_29), 
                            edx_13, ebx_3 + eax_32 u< ebx_3), 
                        edx_14, ebx_4 + eax_35 u< ebx_4), 
                    var_3c_1, ebx_5 + var_40_1 u< ebx_5)
                int32_t eax_40
                int32_t edx_15
                eax_40, edx_15 = __allmul(ebx_6 - 0x63df, sbb.d(eax_38, 0, ebx_6 u< 0x63df), 0x18, 0)
                int32_t eax_42
                int32_t edx_16
                edx_16:eax_42 = sx.q(arg3[2])
                int32_t eax_44
                int32_t edx_18
                eax_44, edx_18 =
                    __allmul(eax_42 + eax_40, adc.d(edx_16, edx_15, eax_42 + eax_40 u< eax_42), 0x3c, 0)
                int32_t eax_46
                int32_t edx_19
                edx_19:eax_46 = sx.q(arg3[1])
                int32_t eax_48
                int32_t edx_21
                eax_48, edx_21 =
                    __allmul(eax_46 + eax_44, adc.d(edx_19, edx_18, eax_46 + eax_44 u< eax_46), 0x3c, 0)
                int32_t eax_50
                int32_t edx_22
                edx_22:eax_50 = sx.q(*arg3)
                result_1 = eax_50 + eax_48
                int32_t var_30_2 = adc.d(edx_22, edx_21, eax_50 + eax_48 u< eax_50)
                int128_t var_2c[0x2]
                int32_t eax_60
                
                if (arg4 == 0)
                    eax_60 = sub_6872fb(&var_2c, &result_1)
                label_685d7b:
                    
                    if (eax_60 != 0)
                        *__errno() = 0x16
                        result = 0xffffffff
                    else
                        result = result_1
                        __builtin_memcpy(arg3, &var_2c, 0x24)
                else
                    sub_5b8c0c()
                    int32_t eax_52 = sub_5b84b9(&var_44)
                    int32_t eax_53
                    
                    if (eax_52 == 0)
                        eax_53 = sub_5b84e6(&var_48)
                    
                    if (eax_52 != 0 || eax_53 != 0)
                        int32_t var_70
                        __builtin_memset(&var_70, 0, 0x14)
                        sub_5ad34e()
                        noreturn
                    
                    int32_t eax_55
                    int32_t edx_24
                    edx_24:eax_55 = sx.q(var_48)
                    int32_t result_9 = result_1
                    result_1 += eax_55
                    var_30_2 = adc.d(var_30_2, edx_24, result_9 + eax_55 u< result_9)
                    
                    if (sub_685850(&var_2c, &result_1) != 0)
                        *__errno() = 0x16
                        result = 0xffffffff
                    else
                        int32_t eax_57 = arg3[8]
                        int32_t var_c
                        
                        if (eax_57 s> 0 || (eax_57 s< 0 && var_c s> 0))
                            int32_t eax_59
                            int32_t edx_25
                            edx_25:eax_59 = sx.q(var_44)
                            int32_t result_10 = result_1
                            result_1 += eax_59
                            var_30_2 = adc.d(var_30_2, edx_25, result_10 + eax_59 u< result_10)
                            eax_60 = sub_685850(&var_2c, &result_1)
                            goto label_685d7b
                        
                        result = result_1
                        __builtin_memcpy(arg3, &var_2c, 0x24)
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
