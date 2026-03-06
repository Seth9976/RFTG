// 函数名称: sub_5c27b0
// 虚拟地址: 0x5c27b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c27b0(void* arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    
    if (edi == 0)
        return 0
    
    if (arg2 != 0)
        int32_t temp0_1 = arg2[0xd]
        
        if (arg4 u<= temp0_1 && (arg4 u< temp0_1 || arg3 u< arg2[0xc]))
            int32_t ebx = arg5
            
            if ((ebx.b & 8) == 0)
                int32_t edi_1 = arg2[0x10]
                int32_t eax_3 = arg3 * 2
                
                if (*(edi_1 + (eax_3 << 3) + 8) != 0 || *(edi_1 + (eax_3 << 3) + 0xc) != 0)
                    zip_error_set(arg1 + 8, 0xf, 0)
                    return 0
                
                edi = arg1
            
            void var_58
            
            if (zip_stat_index(arg2, arg3, arg4, ebx | 8, &var_58) s< 0)
                zip_error_set(edi + 8, 0x14, 0)
                return 0
            
            if ((ebx.b & 0x20) != 0)
                ebx |= 4
            
            if (arg7 u> 0)
            label_5c2883:
                
                if ((ebx.b & 4) != 0)
                    zip_error_set(arg1 + 8, 0x12, 0)
                    return 0
            else if (arg7 u< 0)
                if (arg9 != 0 || arg8 != 0)
                    goto label_5c2883
            else if (arg6 != 0 || arg9 != 0 || arg8 != 0)
                goto label_5c2883
            
            int32_t var_40
            int32_t var_3c
            
            if (arg7 u> 0 || (arg7 u>= 0 && arg6 != 0) || arg9 != 0 || arg8 != 0)
                int32_t ecx_6 = arg6 + arg8
                int32_t eax_12 = adc.d(arg7, arg9, arg6 + arg8 u< arg6)
                
                if (eax_12 u< arg7)
                    zip_error_set(arg1 + 8, 0x12, 0)
                    return 0
                
                if (eax_12 u> arg7)
                    if (eax_12 u> var_3c)
                        zip_error_set(arg1 + 8, 0x12, 0)
                        return 0
                else if (ecx_6 u< arg6 || eax_12 u> var_3c)
                    zip_error_set(arg1 + 8, 0x12, 0)
                    return 0
                
                if (eax_12 u>= var_3c && ecx_6 u> var_40)
                    zip_error_set(arg1 + 8, 0x12, 0)
                    return 0
            
            void* var_8 = nullptr
            int32_t var_22
            
            if ((ebx.b & 0x20) == 0)
                int16_t eax_13 = var_22.w
                
                if (eax_13 != 0)
                    if (arg10 == 0)
                        zip_error_set(arg1 + 8, 0x1a, 0)
                        return 0
                    
                    void* eax_15 = sub_5c4bb0(eax_13)
                    var_8 = eax_15
                    
                    if (eax_15 == 0)
                        zip_error_set(arg1 + 8, 0x18, eax_15)
                        return 0
            
            int32_t eax_20 = ebx & 4
            int32_t var_c = 0
            int32_t var_18 = eax_20
            int16_t var_24
            
            if (eax_20 == 0)
                eax_20.w = var_24
                
                if (eax_20.w != 0)
                    int32_t eax_21 = sub_5c26d0(zx.d(eax_20.w))
                    var_c = eax_21
                    
                    if (eax_21 == 0)
                        zip_error_set(arg1 + 8, 0x10, eax_21)
                        return 0
            
            void* var_a8_5 = arg1 + 8
            int32_t eax_24
            int32_t edx_8
            eax_24, edx_8 = sub_5beed0(arg2, arg3, arg4)
            
            if ((eax_24 | edx_8) != 0)
                int32_t var_38
                int32_t var_34
                int32_t esi_4 = var_38 | var_34
                
                if (esi_4 == 0)
                    return zip_source_buffer(arg1, esi_4, esi_4, esi_4, esi_4)
                
                int32_t esi_6 = arg6 + arg8
                int32_t esi_7 = arg9
                int32_t ebx_2 = adc.d(arg7, esi_7, arg6 + arg8 u< arg6)
                
                if (ebx_2 != 0)
                    if (var_8 != 0 || var_c != 0)
                        goto label_5c2a76
                    
                    goto label_5c29ff
                
                int32_t* esi_9
                int32_t* edi_6
                
                if (esi_6 u<= 0 || var_8 != 0 || var_c != 0)
                label_5c2a76:
                    edi_6 = arg2
                    esi_9 = sub_5c33e0(*edi_6, eax_24, edx_8, var_38, var_34, &var_58, arg1 + 8)
                    
                    if (esi_9 != 0)
                    label_5c2a9a:
                        
                        if (sub_5c3500(esi_9, edi_6) s< 0)
                            zip_source_free(esi_9)
                            return 0
                        
                        if (var_8 == 0)
                            goto label_5c2ae1
                        
                        int32_t* eax_34 = var_8(arg1, esi_9, var_22, 0, arg10)
                        zip_source_free(esi_9)
                        
                        if (eax_34 != 0)
                            esi_9 = eax_34
                        label_5c2ae1:
                            
                            if (var_c == 0)
                                goto label_5c2b05
                            
                            int32_t* eax_36 = var_c(arg1, esi_9, zx.d(var_24), 0)
                            zip_source_free(esi_9)
                            
                            if (eax_36 != 0)
                                esi_9 = eax_36
                            label_5c2b05:
                                
                                if (var_18 != 0 && var_24 != 0)
                                    goto label_5c2b46
                                
                                int32_t eax_37 = arg8
                                int32_t ecx_16 = arg9
                                
                                if ((eax_37 | ecx_16) != 0 && (eax_37 != var_38 || ecx_16 != var_34))
                                    goto label_5c2b4c
                                
                                int32_t* eax_38 = sub_5c2640(arg1, esi_9, 1)
                                zip_source_free(esi_9)
                                
                                if (eax_38 != 0)
                                    esi_9 = eax_38
                                label_5c2b46:
                                    eax_37 = arg8
                                    ecx_16 = arg9
                                label_5c2b4c:
                                    
                                    if ((ebx_2 u<= 0 && esi_6 u<= 0) || (var_c == 0 && var_8 == 0))
                                        return esi_9
                                    
                                    if ((eax_37 | ecx_16) == 0)
                                        eax_37 = var_40 - arg6
                                        ecx_16 = sbb.d(var_3c, arg7, var_40 u< arg6)
                                    
                                    int32_t* eax_41 =
                                        sub_5c3570(arg1, esi_9, arg6, arg7, eax_37, ecx_16)
                                    zip_source_free(esi_9)
                                    
                                    if (eax_41 != 0)
                                        return eax_41
                else
                label_5c29ff:
                    int32_t ecx_12 = arg8
                    
                    if ((ecx_12 | esi_7) == 0)
                        ecx_12 = var_40 - arg6
                        esi_7 = sbb.d(var_3c, arg7, var_40 u< arg6)
                    
                    edi_6 = arg2
                    int16_t var_64_1 = 0
                    void* eax_27 = *edi_6
                    int32_t var_30
                    int32_t var_70_1 = var_30
                    int32_t var_7c_1 = esi_7
                    int32_t var_80_1 = ecx_12
                    int32_t var_78_1 = ecx_12
                    int32_t var_74_1 = esi_7
                    int32_t var_2c
                    int32_t var_6c_1 = var_2c
                    int32_t var_98 = 0x5c
                    int32_t var_94_1 = 0
                    esi_9 = sub_5c33e0(eax_27, eax_24 + arg6, 
                        adc.d(edx_8, arg7, eax_24 + arg6 u< eax_24), ecx_12, esi_7, &var_98, arg1 + 8)
                    
                    if (esi_9 != 0)
                        goto label_5c2a9a
            
            return 0
    
    zip_error_set(edi + 8, 0x12, 0)
    return 0
}
