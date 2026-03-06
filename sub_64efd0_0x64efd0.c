// 函数名称: sub_64efd0
// 虚拟地址: 0x64efd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_64efd0(void* arg1, float* arg2 @ edi, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    // 第一条实际指令: void* ebx = *(arg1 + 4)
    void* ebx = *(arg1 + 4)
    int32_t esi = arg8
    __alloca_probe_16(esi << 2)
    int32_t edx = 0
    int32_t __saved_esi
    int32_t* var_10 = &__saved_esi
    int32_t var_c = 0
    int32_t eax_2
    
    if (*(ebx + 0x1f4) != 0)
        eax_2 = *(ebx + 0x1f8) - arg7
    
    if (*(ebx + 0x1f4) == 0 || eax_2 s> esi)
        eax_2 = esi
    
    int32_t ebx_1 = arg9
    float arg_14 = fconvert.s(float.t(0))
    int32_t var_8 = 0
    int32_t mxcsr
    
    if (eax_2 s> 0)
        int32_t* edx_2 = arg6 - arg2
        int32_t* ecx_6 = ebx_1 - arg2
        float* esi_1 = arg2
        int32_t* var_20_1 = edx_2
        int32_t var_1c_1 = eax_2
        var_8 = eax_2
        
        while (true)
            if (arg6 == 0 || *(edx_2 + esi_1) == 0)
                long double x87_r7_3 = float.t(0)
                long double temp1_1 = fconvert.t(*(arg4 - arg2 + esi_1))
                x87_r7_3 - temp1_1
                eax_2.w = (x87_r7_3 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp1_1 ? 1 : 0) << 0xe
                long double x87_r7_4 =
                    fconvert.t(fconvert.s(fconvert.t(*esi_1) / fconvert.t(*(arg5 - arg2 + esi_1))))
                
                if ((eax_2:1.b & 0x41) != 0)
                    int16_t x87control_2
                    long double st0_3
                    st0_3, x87control_2 = __CIasin_default(x87_r7_4)
                    *(ecx_6 + esi_1) =
                        sub_685f40(sub_686950(mxcsr, x87control_2, fconvert.d(st0_3 + fconvert.t(0.5))))
                else
                    int16_t x87control_1
                    long double st0_1
                    st0_1, x87control_1 = __CIasin_default(x87_r7_4)
                    *(ecx_6 + esi_1) = sub_685f40(fneg(sub_686950(mxcsr, x87control_1, 
                        fconvert.d(st0_1 + fconvert.t(0.5)))))
            
            esi_1 = &esi_1[1]
            int32_t temp2_1 = var_1c_1
            var_1c_1 -= 1
            
            if (temp2_1 == 1)
                break
            
            edx_2 = var_20_1
        
        edx = var_8
        esi = arg8
    
    if (edx s< esi)
        float* eax_6 = arg5 - ebx_1
        float* ecx_10 = arg4 - ebx_1
        float* eax_8 = arg2 - ebx_1
        int32_t* esi_2 = ebx_1 + (edx << 2)
        float* var_18_2 = ecx_10
        
        do
            if (arg6 == 0 || *(arg6 - arg4 + ecx_10 + esi_2) == 0)
                void* ebx_3 = eax_8 + esi_2
                long double x87_r7_14 = fconvert.t(0.25f)
                long double x87_r6_1 =
                    fconvert.t(fconvert.s(fconvert.t(*(eax_8 + esi_2)) / fconvert.t(*(eax_6 + esi_2))))
                x87_r6_1 - x87_r7_14
                float* eax_11
                eax_11.w = (x87_r6_1 < x87_r7_14 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_14) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_14 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1 || (arg6 != 0 && edx s< arg3 - arg7))
                    long double x87_r6_2 = float.t(0)
                    long double temp3_1 = fconvert.t(*(ecx_10 + esi_2))
                    x87_r6_2 - temp3_1
                    eax_11.w = (x87_r6_2 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                    long double x87_r7_19
                    
                    if ((eax_11:1.b & 0x41) != 0)
                        int16_t x87control_4
                        long double st0_7
                        st0_7, x87control_4 = __CIasin_default(x87_r7_14)
                        x87_r7_19 = sub_686950(mxcsr, x87control_4, fconvert.d(st0_7 + fconvert.t(0.5)))
                    else
                        int16_t x87control_3
                        long double st0_5
                        st0_5, x87control_3 = __CIasin_default(x87_r7_14)
                        x87_r7_19 =
                            fneg(sub_686950(mxcsr, x87control_3, fconvert.d(st0_5 + fconvert.t(0.5))))
                    
                    int32_t eax_15 = sub_685f40(x87_r7_19)
                    ecx_10 = var_18_2
                    *esi_2 = eax_15
                    *ebx_3 = fconvert.s(float.t(eax_15 * eax_15) * fconvert.t(*(eax_6 + esi_2)))
                else
                    var_10[var_c] = ebx_3
                    arg_14 = fconvert.s(x87_r7_14 + fconvert.t(arg_14))
                    var_c += 1
                
                edx = var_8
                ebx_1 = arg9
            
            edx += 1
            esi_2 = &esi_2[1]
            var_8 = edx
        while (edx s< arg8)
        
        if (var_c != 0)
            sub_5a7ac0(var_10, var_c, 0x64ef0000000004)
            int32_t ecx_12 = 0
            int32_t var_8_1 = 0
            
            if (var_c s> 0)
                long double x87_r6_3 = fconvert.t(arg_14)
                long double result = float.t(0)
                
                while (true)
                    long double temp4_1 = fconvert.t(*(ebx + 0x200))
                    x87_r6_3 - temp4_1
                    int32_t esi_5 = (var_10[ecx_12] - arg2) s>> 2
                    void* eax_19
                    eax_19.w = (x87_r6_3 < temp4_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == temp4_1 ? 1 : 0) << 0xe | 0x2800
                    long double x87_r5_3
                    
                    if ((eax_19:1.b & 1) != 0)
                        *(ebx_1 + (esi_5 << 2)) = 0
                        arg2[esi_5] = fconvert.s(result)
                        x87_r5_3 = x87_r6_3
                    else
                        ecx_12 = var_8_1
                        *(ebx_1 + (esi_5 << 2)) = sub_685f40(fconvert.t((
                            fconvert.s(fconvert.t(*(arg4 + (esi_5 << 2)))) & 0xbf800000) | 0x3f800000))
                        arg2[esi_5] = fconvert.s(fconvert.t(*(arg5 + (esi_5 << 2))))
                        x87_r5_3 = fconvert.t(fconvert.s(x87_r6_3 - float.t(1)))
                    
                    ecx_12 += 1
                    var_8_1 = ecx_12
                    
                    if (ecx_12 s>= var_c)
                        break
                    
                    result = result
                    x87_r6_3 = x87_r5_3
                
                return result
    
    return fconvert.t(arg_14)
}
