// 函数名称: sub_4e7c30
// 虚拟地址: 0x4e7c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4e7c30(int32_t* arg1)
{
    // 第一条实际指令: float var_194
    float var_194
    int32_t var_c = __security_cookie ^ &var_194
    int32_t* ebx = arg1
    ebx[2] = fconvert.s(fconvert.t(ebx[1]))
    int32_t* var_184 = ebx
    long double result_6 = fconvert.t(fconvert.s(fconvert.t(ebx[5]) + fconvert.t(ebx[1])))
    ebx[1] = fconvert.s(result_6)
    long double result_4 = float.t(0)
    long double temp1 = fconvert.t(ebx[5])
    result_4 - temp1
    int32_t eax_1
    eax_1.w = (result_4 < temp1 ? 1 : 0) << 8 | (is_unordered.t(result_4, temp1) ? 1 : 0) << 0xa
        | (result_4 == temp1 ? 1 : 0) << 0xe | 0x3000
    long double result_2 = float.t(1)
    bool p = unimplemented  {test ah, 0x5}
    long double result
    
    if (p)
        long double temp2_1 = fconvert.t(ebx[5])
        result_2 - temp2_1
        eax_1.w = (result_2 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(result_2, temp2_1) ? 1 : 0) << 0xa
            | (result_2 == temp2_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_1:1.b & 0x41) != 0)
            result = result_2
        else
            int32_t eax_3 = ebx[6]
            
            if (eax_3 == 0)
                result_2 - result_6
                eax_3.w = (result_2 < result_6 ? 1 : 0) << 8
                    | (is_unordered.t(result_2, result_6) ? 1 : 0) << 0xa
                    | (result_2 == result_6 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_3:1.b & 0x41) != 0)
                    result = result_6
                else
                    long double x87_r6_1 = float.t(1)
                    int32_t ecx_2 = ebx[7]
                    long double result_3 = fconvert.t(ebx[1])
                    bool p_4
                    
                    do
                        result_3 = result_3 + x87_r6_1
                        ecx_2 += 1
                        result_3 - result_6
                        eax_3.w = (result_3 < result_6 ? 1 : 0) << 8
                            | (is_unordered.t(result_3, result_6) ? 1 : 0) << 0xa
                            | (result_3 == result_6 ? 1 : 0) << 0xe | 0x2800
                        p_4 = unimplemented  {test ah, 0x5}
                    while (not(p_4))
                    result = result_3
                    ebx[7] = ecx_2
                    ebx[1] = fconvert.s(x87_r6_1)
            else if (eax_3 == 1)
                result_2 - result_6
                eax_3.w = (result_2 < result_6 ? 1 : 0) << 8
                    | (is_unordered.t(result_2, result_6) ? 1 : 0) << 0xa
                    | (result_2 == result_6 ? 1 : 0) << 0xe | 0x3000
                result = result_2
                
                if ((eax_3:1.b & 0x41) != 0)
                    result = result_6
                else
                    ebx[1] = fconvert.s(result_6)
                    ebx[0x1f].b = 1
                    ebx[7] = 1
            else if (eax_3 != 2)
                result = result_2
            else
                result_2 - result_6
                eax_3.w = (result_2 < result_6 ? 1 : 0) << 8
                    | (is_unordered.t(result_2, result_6) ? 1 : 0) << 0xa
                    | (result_2 == result_6 ? 1 : 0) << 0xe | 0x3000
                result = result_2
                
                if ((eax_3:1.b & 0x41) != 0)
                    result = result_6
                else
                    ebx[1] = fconvert.s(result_6)
                    ebx[7] = 1
    else
        int32_t eax_2 = ebx[6]
        
        if (eax_2 == 0)
            result_4 - result_2
            eax_2.w = (result_4 < result_2 ? 1 : 0) << 8
                | (is_unordered.t(result_4, result_2) ? 1 : 0) << 0xa
                | (result_4 == result_2 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                result = result_2
            else
                long double result_5 = float.t(1)
                int32_t ecx_1 = ebx[7]
                long double x87_r5 = fconvert.t(ebx[1])
                
                do
                    x87_r5 = x87_r5 - result_5
                    ecx_1 += 1
                    x87_r5 - result_2
                    eax_2.w = (x87_r5 < result_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5, result_2) ? 1 : 0) << 0xa
                        | (x87_r5 == result_2 ? 1 : 0) << 0xe | 0x2800
                while ((eax_2:1.b & 0x41) == 0)
                
                ebx[7] = ecx_1
                result = result_5
                ebx[1] = fconvert.s(x87_r5)
        else if (eax_2 == 1)
            result_4 - result_2
            eax_2.w = (result_4 < result_2 ? 1 : 0) << 8
                | (is_unordered.t(result_4, result_2) ? 1 : 0) << 0xa
                | (result_4 == result_2 ? 1 : 0) << 0xe | 0x3000
            result = result_4
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                result = result_2
            else
                ebx[1] = fconvert.s(result_2)
                ebx[0x1f].b = 1
                ebx[7] = 1
        else if (eax_2 != 2)
            result = result_2
        else
            result_4 - result_2
            eax_2.w = (result_4 < result_2 ? 1 : 0) << 8
                | (is_unordered.t(result_4, result_2) ? 1 : 0) << 0xa
                | (result_4 == result_2 ? 1 : 0) << 0xe | 0x3000
            result = result_4
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                result = result_2
            else
                ebx[1] = fconvert.s(result_2)
                ebx[7] = 1
    
    int32_t eax_4 = ebx[0x1d]
    
    if (eax_4 s> 0)
        ebx[0x1d] = eax_4 - 1
    
    void* eax_6 = sub_4e7210(*ebx)
    void* var_188 = eax_6
    int32_t i_1 = 0
    
    if (*(eax_6 + 0x14) s> 0)
        int32_t var_190_1 = 0
        int32_t i
        
        do
            int32_t* ecx_5 = ebx[0x1a] + var_190_1 + 0x5c
            
            if (*ecx_5 != 0)
                int32_t* var_1a4_1 = ecx_5
                int32_t var_180
                int32_t eax_8
                int32_t edx_3
                long double result_1
                result_1, eax_8, edx_3 =
                    sub_4e88f0(&var_180, ebx[4], ebx[3], fconvert.s(fconvert.t(ebx[1])))
                result = result_1
                float var_178
                
                if (*(ebx + 0x8d) != 0)
                    var_178 = fconvert.s(float.t(0))
                
                long double x87_r7_7 = fconvert.t(var_178)
                long double x87_r6_2 = float.t(0)
                x87_r6_2 - x87_r7_7
                eax_8.w = (x87_r6_2 < x87_r7_7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe
                bool p_5 = unimplemented  {test ah, 0x44}
                float var_170
                int32_t* var_130
                int16_t x87control_1
                
                if (p_5)
                    int32_t edx_5 = sub_4e8c00(i_1, edx_3, var_180, var_188, &var_170)
                    void var_100
                    int32_t** var_1ac_1 = &var_100
                    void* var_1b0 = var_188
                    int32_t var_17c
                    x87control_1 = sub_4e8c00(i_1, edx_5, var_17c, var_1b0, var_1ac_1)
                    sub_4e9580(&var_130, &var_100, fconvert.s(fconvert.t(var_178)))
                    ebx = var_184
                else
                    x87control_1 = sub_4e8c00(i_1, var_188, var_180, var_188, &var_130)
                
                float var_120
                int32_t mxcsr
                int16_t x87control_2
                long double st0_1
                st0_1, x87control_2 = sub_686860(mxcsr, x87control_1, fconvert.t(var_120))
                var_194 = fconvert.s(st0_1)
                float var_128
                float var_50_1 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_128))
                int16_t x87control_3
                long double st0_2
                st0_2, x87control_3 = sub_686ea0(mxcsr, x87control_2, fconvert.t(var_120))
                var_194 = fconvert.s(st0_2)
                float var_44_1 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_128))
                float var_11c
                int16_t x87control_4
                long double st0_3
                st0_3, x87control_4 = sub_686ea0(mxcsr, x87control_3, fconvert.t(var_11c))
                var_194 = fconvert.s(st0_3)
                float var_124
                float var_4c = fconvert.s(fneg(fconvert.t(var_194)) * fconvert.t(var_124))
                var_194 = fconvert.s(sub_686860(mxcsr, x87control_4, fconvert.t(var_11c)))
                float var_40_1 = fconvert.s(fconvert.t(var_194) * fconvert.t(var_124))
                var_170 = fconvert.s(fconvert.t(var_50_1))
                float var_16c_1 = fconvert.s(fconvert.t(var_4c))
                long double x87_r7_28 = float.t(0)
                float var_168_1 = fconvert.s(x87_r7_28)
                float var_164_1 = fconvert.s(fconvert.t(var_130))
                long double x87_r6_4 = fconvert.t(var_44_1)
                float var_160_1 = fconvert.s(x87_r6_4)
                long double x87_r5_1 = fconvert.t(var_40_1)
                float var_15c_1 = fconvert.s(x87_r5_1)
                float var_158_1 = fconvert.s(x87_r7_28)
                float var_12c
                long double x87_r4_1 = fconvert.t(var_12c)
                float var_154_1 = fconvert.s(x87_r4_1)
                float var_150_1 = fconvert.s(x87_r7_28)
                float var_14c_1 = fconvert.s(x87_r7_28)
                float var_148_1 = fconvert.s(float.t(1))
                float var_144_1 = fconvert.s(x87_r7_28)
                float var_138_1 = fconvert.s(x87_r7_28)
                float var_140_1 = fconvert.s(x87_r6_4)
                float var_13c_1 = fconvert.s(x87_r5_1)
                float var_134_1 = fconvert.s(x87_r4_1)
                float var_90[0x10]
                __builtin_memcpy(&var_90, &var_170, 0x40)
                sub_406020(&var_170, &var_90, &ebx[8])
                float var_d0[0x10]
                __builtin_memcpy(&var_d0, &var_170, 0x40)
                float* eax_13
                int32_t edx_7
                eax_13, edx_7 = sub_4d5f60(&var_d0)
                void var_2c
                __builtin_memcpy(&var_2c, eax_13, 0x20)
                sub_532a00(eax_13, edx_7, ecx_5, &var_2c)
                ebx = var_184
                eax_6 = var_188
            
            var_190_1 += 0x60
            i = i_1 + 1
            i_1 = i
        while (i s< *(eax_6 + 0x14))
    
    sub_5a6aba(var_c ^ &var_194)
    return result
}
