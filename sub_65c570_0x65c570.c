// 函数名称: sub_65c570
// 虚拟地址: 0x65c570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_65c570(int32_t* arg1 @ edi, float* arg2, void* arg3, float* arg4, void* arg5)
{
    // 第一条实际指令: __chkstk(0x1340)
    __chkstk(0x1340)
    void* edx = arg3
    float ebx
    float var_8 = ebx
    float ebx_1 = *(edx + 0x504)
    int32_t esi
    int32_t var_c = esi
    float* esi_1 = *(edx + 0x508)
    int32_t var_10 = *(edx + 0x510)
    float* var_20 = esi_1
    float var_1c = ebx_1
    var_8 = 0f
    float** var_c_1 = nullptr
    float* var_238
    int32_t ecx_2
    int32_t edi
    
    if (ebx_1 s> 0)
        edi, ecx_2 = __memfill_u32(&var_238, 0xffffff38, ebx_1)
    bool cond:0 = ebx_1 != 0
    int32_t var_544[0x41]
    void var_440
    int32_t var_33c[0x41]
    float* var_134
    
    if (ebx_1 s> 0)
        int32_t ecx_4
        int32_t edi_1
        edi_1, ecx_4 = __memfill_u32(&var_134, 0xffffff38, ebx_1)
        __builtin_memset(&var_33c, 0, ebx_1 << 2)
        cond:0 = ebx_1 != 0
        
        if (ebx_1 s> 0)
            int32_t ecx_7
            int32_t edi_2
            edi_2, ecx_7 = __memfill_u32(&var_440, 1, ebx_1)
            __builtin_memset(&var_544, 0xffffffff, ebx_1 << 2)
            cond:0 = ebx_1 != 0
    
    int128_t var_1344[0xe0]
    float* var_18
    float eax_2
    
    if (cond:0)
        int32_t edi_3 = 0
        
        if (ebx_1 - 1 s> 0)
            int128_t* esi_3 = &var_1344
            
            while (true)
                int32_t* var_14_2 = arg1
                void* ecx_11 = *(edx + (edi_3 << 2) + 4)
                var_18 = var_20
                var_20 = arg4
                int32_t eax_7
                int80_t st0_2
                st0_2, eax_7 = sub_65be10(*(edx + (edi_3 << 2)), esi_3, edx, arg5, arg5, var_20, ecx_11)
                var_8 += eax_7
                edi_3 += 1
                esi_3 += 0x38
                
                if (edi_3 s>= ebx_1 - 1)
                    break
                
                edx = arg3
            
            eax_2 = var_8
            goto label_65c665
        
        return 
    
    int32_t* var_14_1 = arg1
    var_18 = esi_1
    int80_t st0_1
    st0_1, eax_2 = sub_65be10(0, &var_1344, arg4, arg1, arg5, arg4, esi_1)
    label_65c665:
    
    if (eax_2 == 0)
        return 
    
    float** var_14_3 = &var_18
    var_18 = &var_8
    var_8 = -nanf
    var_18 = 0xffffff38
    float var_1c_3 = &var_1344
    sub_65bf60(ebx_1 - 1, &var_1344, arg1, var_1c_3, var_18, var_14_3)
    float eax_10 = var_8
    float* esi_4 = eax_10
    var_238 = eax_10
    float* eax_11 = var_18
    var_134 = esi_4
    float* var_130_1 = eax_11
    int32_t* var_14_4 = 2
    
    if (ebx_1 s> 2)
        int32_t* var_c_2 = arg3 + 0x210
        void* eax_32
        
        do
            int32_t eax_14 = *var_c_2
            int32_t edx_3 = var_33c[eax_14]
            int32_t i = *(&var_440 + (eax_14 << 2))
            int32_t var_20_2 = edx_3
            
            if (var_544[edx_3] != i)
                int32_t edi_5 = *(arg3 + (edx_3 << 2) + 0x208)
                int32_t eax_16 = arg1[edx_3 + 0xd1]
                int32_t ecx_16 = arg1[i + 0xd1]
                float* ecx_17 = (&var_238)[edx_3]
                var_544[edx_3] = i
                float* edx_4 = (&var_134)[edx_3]
                
                if (ecx_17 s>= 0)
                    if (edx_4 s>= 0)
                        ecx_17 = (ecx_17 + edx_4) s>> 1
                    
                    var_18 = ecx_17
                else
                    var_18 = edx_4
                
                float* ecx_19 = (&var_238)[i]
                float* ebx_2 = (&var_134)[i]
                
                if (ecx_19 s>= 0)
                    if (ebx_2 s>= 0)
                        ebx_2 = (ebx_2 + ecx_19) s>> 1
                    else
                        ebx_2 = ecx_19
                
                float* ecx_20 = var_18
                
                if (ecx_20 == 0xffffffff || ebx_2 == 0xffffffff)
                    _exit(1)
                    noreturn
                
                var_14_4 = arg1
                var_18 = arg4
                var_1c_3 = arg5
                int32_t eax_17 =
                    sub_65c300(eax_16, arg5, ebx_2, ecx_16, ecx_20, var_1c_3, var_18, var_14_4)
                int32_t* var_24_6
                int32_t* var_20_4
                int32_t eax_23
                float* ecx_30
                float edx_12
                int32_t edi_6
                
                if (eax_17 != 0)
                    float var_2c = -nanf
                    float var_30 = -nanf
                    var_8 = -nanf
                    int32_t var_28 = 0xffffff38
                    var_14_4 = &var_30
                    var_18 = &var_2c
                    int32_t edx_9 = edi_5 * 7
                    int32_t __saved_ebp
                    var_1c_3 = &(&__saved_ebp)[edx_9 * 2 - 0x4d0]
                    int32_t eax_20
                    int80_t st0_4
                    st0_4, eax_20 =
                        sub_65bf60(*var_c_2 - edi_5, edx_9, arg1, var_1c_3, var_18, var_14_4)
                    int32_t var_24_5 = eax_20
                    var_20_4 = &var_28
                    edi_6 = *var_c_2
                    var_24_6 = &var_8
                    int32_t eax_22 = *(arg3 + (i << 2) + 0x208) - edi_6
                    var_28 = &(&__saved_ebp)[edi_6 * 0xe - 0x4d0]
                    int80_t st0_5
                    st0_5, eax_23 = sub_65bf60(eax_22, &(&__saved_ebp)[edi_6 * 0xe - 0x4d0], arg1, 
                        var_28, var_24_6, var_20_4)
                    
                    if (var_24_6 == 0)
                        ecx_30 = var_2c
                        edx_12 = var_30
                    else
                        ecx_30 = var_18
                        edx_12 = var_8
                    
                    if (eax_23 == 0)
                        ebx_2 = var_28
                    else
                        var_8 = edx_12
                
                if (eax_17 != 0 && (var_24_6 == 0 || eax_23 == 0))
                    (&var_134)[var_20_4] = ecx_30
                    
                    if (var_20_4 == 0)
                        var_238 = ecx_30
                    
                    float eax_25 = var_8
                    (&var_238)[var_14_4] = edx_12
                    (&var_134)[var_14_4] = eax_25
                    (&var_238)[i] = ebx_2
                    
                    if (i == 1)
                        var_130_1 = ebx_2
                    
                    if (edx_12 s>= 0 || eax_25 s>= 0)
                        int32_t eax_26 = edi_6 - 1
                        
                        if (eax_26 s>= 0)
                            while (*(&var_440 + (eax_26 << 2)) == i)
                                int32_t temp4_1 = eax_26
                                eax_26 -= 1
                                int32_t var_43c[0x40]
                                var_43c[eax_26] = var_14_4
                                
                                if (temp4_1 - 1 s< 0)
                                    break
                        
                        int32_t eax_29 = *var_c_2 + 1
                        
                        if (eax_29 s>= var_1c_3)
                        label_65c8d2:
                            ebx_1 = var_1c_3
                        else
                            do
                                if (var_33c[eax_29] != var_20_4)
                                    goto label_65c8d2_2
                                
                                var_33c[eax_29] = var_14_4
                                eax_29 += 1
                            while (eax_29 s< var_1c_3)
                            
                            ebx_1 = var_1c_3
                    else
                    label_65c8d2_1:
                        ebx_1 = var_1c_3
                else
                    (&var_134)[var_14_4] = 0xffffff38
                    (&var_238)[var_14_4] = 0xffffff38
                label_65c8d2_2:
                    ebx_1 = var_1c_3
            
            var_c_2 = &var_c_2[1]
            eax_32 = var_14_4 + 1
            var_14_4 = eax_32
        while (eax_32 s< ebx_1)
        esi_4 = var_134
    
    var_18 = arg2
    float** eax_33 = sub_649ad0(var_18, ebx_1 << 2)
    float* ecx_33 = var_238
    
    if (ecx_33 s>= 0)
        if (esi_4 s>= 0)
            esi_4 = (esi_4 + ecx_33) s>> 1
        else
            esi_4 = ecx_33
    
    float* ecx_34 = var_130_1
    *eax_33 = esi_4
    
    if (eax_11 s>= 0)
        if (ecx_34 s>= 0)
            ecx_34 = (ecx_34 + eax_11) s>> 1
        else
            ecx_34 = eax_11
    
    eax_33[1] = ecx_34
    int32_t var_14_7 = 2
    
    if (ebx_1 s<= 2)
        return 
    
    var_8 = &arg1[0xd3]
    void* ebx_6 = arg3 + 0x30c
    int32_t ecx_42
    
    do
        int32_t eax_36 = *(ebx_6 + 0xfc)
        void* edx_15 = arg1[eax_36 + 0xd1]
        int32_t edi_7 = *ebx_6
        int32_t esi_8 = eax_33[eax_36] & 0x7fff
        int32_t ecx_40 = (eax_33[edi_7] & 0x7fff) - esi_8
        int32_t eax_38
        int32_t edx_16
        edx_16:eax_38 = sx.q(ecx_40)
        int32_t temp0_1 = divs.dp.d(sx.q(((eax_38 ^ edx_16) - edx_16) * (*var_8 - edx_15)), 
            arg1[edi_7 + 0xd1] - edx_15)
        int32_t esi_9
        
        if (ecx_40 s>= 0)
            esi_9 = esi_8 + temp0_1
        else
            esi_9 = esi_8 - temp0_1
        
        int32_t eax_44 = (&var_238)[var_14_7]
        
        if (eax_44 s>= 0)
            int32_t edx_23 = (&var_134)[var_14_7]
            
            if (edx_23 s>= 0)
                eax_44 = (eax_44 + edx_23) s>> 1
        else
            eax_44 = (&var_134)[var_14_7]
        
        if (eax_44 s< 0 || esi_9 == eax_44)
            eax_33[var_14_7] = esi_9 | 0x8000
        else
            eax_33[var_14_7] = eax_44
        
        var_8 += 4
        ecx_42 = var_14_7 + 1
        ebx_6 += 4
        var_14_7 = ecx_42
    while (ecx_42 s< var_1c_3)
}
