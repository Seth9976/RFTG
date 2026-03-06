// 函数名称: sub_5c3090
// 虚拟地址: 0x5c3090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c3090(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: __chkstk(0x200c)
    __chkstk(0x200c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_18_6
    int32_t var_14_9
    int32_t entry_ebx
    
    switch (arg6)
        case 0
            if (arg2[0x1c].b != 0)
            label_5c3196:
                int32_t ecx_13 = arg2[1]
                arg2[4] = *arg2
                arg2[5] = ecx_13
                sub_5a6aba(entry_ebx ^ &__saved_ebp)
                return 0
            
            int32_t ebx_3 = 0
            int32_t edi_1 = 0
            int32_t temp6_1 = arg2[1]
            
            if (temp6_1 u< 0)
                goto label_5c3196
            
            if (temp6_1 u<= 0 && *arg2 u<= 0)
                goto label_5c3196
            
            while (true)
                int32_t eax_7 = *arg2
                int32_t eax_8 = eax_7 - ebx_3
                int32_t ecx_9 = sbb.d(arg2[1], edi_1, eax_7 u< ebx_3)
                
                if (ecx_9 != 0 || eax_8 u> 0x2000)
                    eax_8 = 0x2000
                    ecx_9 = 0
                
                void var_2008
                int32_t eax_9
                int32_t edx_4
                eax_9, edx_4 = zip_source_read(arg1, &var_2008, eax_8, ecx_9)
                
                if (edx_4 s< 0)
                    goto label_5c31bf
                
                if (edx_4 s<= 0 && eax_9 u< 0)
                    goto label_5c31bf
                
                if ((eax_9 | edx_4) == 0)
                    break
                
                int32_t temp13_1 = ebx_3
                ebx_3 += eax_9
                edi_1 = adc.d(edi_1, edx_4, temp13_1 + eax_9 u< temp13_1)
                int32_t temp14_1 = arg2[1]
                
                if (edi_1 u>= temp14_1)
                    if (edi_1 u> temp14_1)
                        goto label_5c3196
                    
                    if (ebx_3 u>= *arg2)
                        goto label_5c3196
            
            goto label_5c3269
        case 1
            int32_t edx_7 = arg2[4]
            int32_t ecx_16 = arg2[2]
            int32_t edi_2 = arg5
            int32_t ecx_17 = ecx_16 - edx_7
            int32_t eax_13 = sbb.d(arg2[3], arg2[5], ecx_16 u< edx_7)
            int32_t ebx_5
            
            if (edi_2 u< eax_13)
                ebx_5 = arg4
            else
                if (edi_2 u<= eax_13)
                    ebx_5 = arg4
                
                if (edi_2 u> eax_13 || ebx_5 u> ecx_17)
                    ebx_5 = ecx_17
                    edi_2 = eax_13
            
            if ((ebx_5 | edi_2) == 0)
                sub_5a6aba(entry_ebx ^ &__saved_ebp)
                return 0
            
            if (arg2[0x1c].b != 0 && zip_source_seek(arg1, edx_7, arg2[5], 0) s< 0)
            label_5c31bf:
                sub_5bf050(&arg2[0x16], arg1)
                goto label_5c3347
            
            int32_t eax_19
            int32_t edx_8
            eax_19, edx_8 = zip_source_read(arg1, arg3, ebx_5, edi_2)
            
            if (edx_8 s<= 0 && (edx_8 s< 0 || eax_19 u< 0))
            label_5c3269:
                var_14_9 = 0
                var_18_6 = 0x11
                goto label_5c333f
            
            int32_t temp11_1 = arg2[4]
            arg2[4] += eax_19
            arg2[5] = adc.d(arg2[5], edx_8, temp11_1 + eax_19 u< temp11_1)
            
            if ((eax_19 | edx_8) != 0)
                sub_5a6aba(entry_ebx ^ &__saved_ebp)
                return eax_19
            
            int32_t ecx_22 = arg2[5]
            int32_t temp12_1 = arg2[3]
            
            if (ecx_22 u<= temp12_1 && (ecx_22 u< temp12_1 || arg2[4] u< arg2[2]))
                goto label_5c3269
            
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return eax_19
        case 2
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 0
        case 3
            void* var_14_8 = &arg2[0x16]
            sub_5bf560(arg3, &arg2[6])
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 0
        case 4
            int32_t eax_5 = zip_error_to_data(&arg2[0x16], arg3, arg4, arg5)
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return eax_5
        case 5
            __free_base(arg2)
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 0
        case 6
            int32_t eax_20 = *arg2
            int32_t ecx_24 = arg2[1]
            int32_t edx_12 = arg2[2]
            int32_t edx_14 = arg2[4]
            int32_t eax_23
            int32_t edx_16
            eax_23, edx_16 = zip_source_seek_compute_offset(edx_14 - eax_20, 
                sbb.d(arg2[5], ecx_24, edx_14 u< eax_20), edx_12 - eax_20, 
                sbb.d(arg2[3], ecx_24, edx_12 u< eax_20), arg3, arg4, arg5, &arg2[0x16])
            
            if (edx_16 s<= 0)
                if (edx_16 s>= 0 && eax_23 u>= 0)
                    goto label_5c32b6
                
                goto label_5c3347
            
        label_5c32b6:
            int32_t ecx_25 = *arg2
            arg2[5] = adc.d(arg2[1], edx_16, ecx_25 + eax_23 u< ecx_25)
            arg2[4] = ecx_25 + eax_23
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 0
        case 7
            int32_t eax_30 = arg2[4] - *arg2
            *arg2
            arg2[5]
            arg2[1]
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return eax_30
        case 0xe
            int32_t eax_28 = arg2[0x1a]
            arg2[0x1b]
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return eax_28
        default
            var_14_9 = 0
            var_18_6 = 0x1c
        label_5c333f:
            zip_error_set(&arg2[0x16], var_18_6, var_14_9)
        label_5c3347:
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 0xffffffff
}
