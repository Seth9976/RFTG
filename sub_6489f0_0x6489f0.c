// 函数名称: sub_6489f0
// 虚拟地址: 0x6489f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6489f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, double arg5, double* arg6)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    long double x87_r7_1
    
    if (arg2 == 0)
        x87_r7_1 = fconvert.t(arg5)
    else
        x87_r7_1 = fconvert.t(arg5) / float.t(arg3)
    
    do
        int32_t* eax = (&data_820208)[ebx]
        int32_t ecx_1 = eax[3]
        
        if ((ecx_1 == 0xffffffff || ecx_1 == arg3) && arg4 s>= eax[4] && arg4 s<= eax[5])
            void* esi_1 = *eax
            double* edi_1
            
            if (arg2 == 0)
                edi_1 = eax[2]
            else
                edi_1 = eax[1]
            
            long double temp0_1 = fconvert.t(*edi_1)
            x87_r7_1 - temp0_1
            eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                long double temp1_1 = fconvert.t(edi_1[esi_1])
                x87_r7_1 - temp1_1
                eax.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax:1.b & 0x41) != 0)
                    int32_t i = 0
                    int32_t i_1 = 0
                    
                    if (esi_1 s>= 4)
                        void* edx = &edi_1[2]
                        
                        do
                            long double temp3_1 = fconvert.t(*(edx - 0x10))
                            x87_r7_1 - temp3_1
                            eax.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax:1.b & 1) == 0)
                                long double temp6_1 = fconvert.t(*(edx - 8))
                                x87_r7_1 - temp6_1
                                eax.w = (x87_r7_1 < temp6_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_2 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_2))
                                    goto label_648b00
                            
                            long double temp5_1 = fconvert.t(*(edx - 8))
                            x87_r7_1 - temp5_1
                            eax.w = (x87_r7_1 < temp5_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax:1.b & 1) == 0)
                                long double temp8_1 = fconvert.t(*edx)
                                x87_r7_1 - temp8_1
                                eax.w = (x87_r7_1 < temp8_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_1, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r7_1 == temp8_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_3 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_3))
                                    i += 1
                                    goto label_648b00
                            
                            long double temp7_1 = fconvert.t(*edx)
                            x87_r7_1 - temp7_1
                            eax.w = (x87_r7_1 < temp7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp7_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp7_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax:1.b & 1) == 0)
                                long double temp10_1 = fconvert.t(*(edx + 8))
                                x87_r7_1 - temp10_1
                                eax.w = (x87_r7_1 < temp10_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_1, temp10_1) ? 1 : 0) << 0xa
                                    | (x87_r7_1 == temp10_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_4 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_4))
                                    i += 2
                                    goto label_648b00
                            
                            long double temp9_1 = fconvert.t(*(edx + 8))
                            x87_r7_1 - temp9_1
                            eax.w = (x87_r7_1 < temp9_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp9_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax:1.b & 1) == 0)
                                long double temp11_1 = fconvert.t(*(edx + 0x10))
                                x87_r7_1 - temp11_1
                                eax.w = (x87_r7_1 < temp11_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_1, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_1 == temp11_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_5 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_5))
                                    i += 3
                                    goto label_648b00
                            
                            i += 4
                            edx += 0x20
                        while (i s< esi_1 - 3)
                        
                        i_1 = i
                    
                    bool cond:0_1 = i != esi_1
                    
                    if (i s< esi_1)
                        do
                            long double temp2_1 = fconvert.t(edi_1[i])
                            x87_r7_1 - temp2_1
                            eax.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800
                            
                            if ((eax:1.b & 1) == 0)
                                long double temp4_1 = fconvert.t(edi_1[i + 1])
                                x87_r7_1 - temp4_1
                                eax.w = (x87_r7_1 < temp4_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_1, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_1 == temp4_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_6 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_6))
                                    break
                            
                            i += 1
                        while (i s< esi_1)
                        
                    label_648b00:
                        i_1 = i
                        cond:0_1 = i != esi_1
                    
                    if (not(cond:0_1))
                        *arg6 = fconvert.d(float.t(i_1) - fconvert.t(0.001))
                        return (&data_820208)[ebx]
                    
                    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(edi_1[i])))
                    *arg6 = fconvert.d(fconvert.t(fconvert.s((x87_r7_1 - x87_r6_1)
                        / (fconvert.t(fconvert.s(fconvert.t(edi_1[i + 1]))) - x87_r6_1))) + float.t(i_1))
                    return (&data_820208)[ebx]
        
        ebx += 1
    while ((&data_820208)[ebx] != 0)
    
    return 0
}
