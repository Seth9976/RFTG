// 函数名称: sub_651b70
// 虚拟地址: 0x651b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_651b70(int32_t arg1, int32_t arg2, float arg3)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t ecx = 0xffffffff
    int32_t i = arg1
    int32_t edi = 0
    
    while (true)
        ecx += 1
        
        if (ecx s>= 4)
            esi += 2
        else
            esi = *((ecx << 2) + &data_8bbd00)
        
        int32_t i_1 = divs.dp.d(sx.q(i), esi)
        
        if (i == i_1 * esi)
            void* ecx_2 = arg3 i+ (edi << 2)
            
            do
                ecx_2 += 4
                edi += 1
                void* var_24_1 = ecx_2
                *(ecx_2 + 4) = esi
                i = i_1
                
                if (esi == 2 && edi != 1)
                    if (edi s> 1)
                        int32_t j_3 = edi - 1
                        int32_t j
                        
                        do
                            *(ecx_2 + 4) = *ecx_2
                            ecx_2 -= 4
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        ecx_2 = var_24_1
                    
                    *(arg3 i+ 8) = 2
                
                if (i_1 == 1)
                    float result = arg3
                    long double x87_r7_1 = fconvert.t(data_8bbd10) / float.t(arg1)
                    *(result i+ 4) = edi
                    *result = arg1
                    int32_t var_10 = 0
                    int32_t var_8 = 1
                    
                    if (edi != 1 && edi - 1 s> 0)
                        int32_t* var_c_1 = result i+ 8
                        int32_t j_2 = edi - 1
                        int32_t j_1
                        
                        do
                            int32_t esi_1 = *var_c_1
                            int32_t ecx_5 = esi_1 * var_8
                            int32_t temp0_3 = divs.dp.d(sx.q(arg1), ecx_5)
                            int32_t edi_3 = 0
                            int32_t var_30_1 = ecx_5
                            result = esi_1 - 1
                            
                            if (result s> 0)
                                float result_1 = result
                                float* esi_3 = arg2 + (var_10 << 2)
                                float* var_1c_1 = esi_3
                                var_10 += result i* temp0_3
                                
                                while (true)
                                    int32_t edi_4 = edi_3 + var_8
                                    arg3 = fconvert.s(float.t(0))
                                    
                                    if (temp0_3 s> 2)
                                        int32_t k_1 = ((temp0_3 - 3) u>> 1) + 1
                                        int32_t k
                                        
                                        do
                                            arg3 = fconvert.s(fconvert.t(arg3) + fconvert.t(1.0))
                                            float var_18_1 = fconvert.s(fconvert.t(arg3) * fconvert.t(
                                                fconvert.s(float.t(edi_4)
                                                * fconvert.t(fconvert.s(x87_r7_1)))))
                                            int32_t mxcsr
                                            int16_t x87control
                                            int16_t x87control_1
                                            long double st0_1
                                            st0_1, x87control_1 =
                                                sub_686860(mxcsr, x87control, fconvert.t(var_18_1))
                                            *esi_3 = fconvert.s(st0_1)
                                            long double st0_2
                                            st0_2, x87control =
                                                sub_686ea0(mxcsr, x87control_1, fconvert.t(var_18_1))
                                            esi_3[1] = fconvert.s(st0_2)
                                            esi_3 = &esi_3[2]
                                            k = k_1
                                            k_1 -= 1
                                        while (k != 1)
                                        ecx_5 = var_30_1
                                    
                                    result = temp0_3 << 2
                                    esi_3 = var_1c_1 i+ result
                                    float result_2 = result_1
                                    result_1 -= 1
                                    var_1c_1 = esi_3
                                    
                                    if (result_2 == 1)
                                        break
                                    
                                    edi_3 = edi_4
                            
                            var_c_1 = &var_c_1[1]
                            j_1 = j_2
                            j_2 -= 1
                            var_8 = ecx_5
                        while (j_1 != 1)
                    
                    return result
                
                i_1 = divs.dp.d(sx.q(i_1), esi)
            while (i == i_1 * esi)
}
