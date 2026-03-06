// 函数名称: sub_4b3d70
// 虚拟地址: 0x4b3d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4b3d70(void* arg1 @ esi)
{
    // 第一条实际指令: double var_c = fconvert.d(float.t(0))
    double var_c = fconvert.d(float.t(0))
    int32_t i = 0
    
    if (*(arg1 + 0x18) + 1 s> 0)
        long double x87_r7_1 = float.t(1)
        long double x87_r6_1 = fconvert.t(-1.0)
        
        do
            int32_t edx_1 = *(arg1 + 0x3c)
            int32_t eax_2 = *(arg1 + 0x40)
            long double x87_r5_1 = fconvert.t(*(edx_1 + (i << 3)))
            long double x87_r4_1 = fconvert.t(*(eax_2 + (i << 3)))
            double* edi_1 = eax_2 + (i << 3)
            x87_r4_1 - x87_r5_1
            eax_2.w = (x87_r4_1 < x87_r5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_1, x87_r5_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                long double x87_r5_3 = fconvert.t(*(edx_1 + (i << 3))) - fconvert.t(*edi_1)
                x87_r7_1 - x87_r5_3
                eax_2.w = (x87_r7_1 < x87_r5_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, x87_r5_3) ? 1 : 0) << 0xa
                    | (x87_r7_1 == x87_r5_3 ? 1 : 0) << 0xe | 0x2800
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    x87_r6_1 - x87_r5_3
                    eax_2.w = (x87_r6_1 < x87_r5_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r5_3) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000
                    bool p_3 = unimplemented  {test ah, 0x44}
                    
                    if (p_3)
                        int32_t j = 0
                        
                        if (*(arg1 + 0x1c) s> 0)
                            do
                                long double x87_r5_10 = (fconvert.t(*(*(arg1 + 0x3c) + (i << 3)))
                                    - fconvert.t(*(*(arg1 + 0x40) + (i << 3))))
                                    * fconvert.t(*(*(*(arg1 + 0x24) + (i << 2)) + (j << 3)))
                                double* edx_8 = *(arg1 + 0x34) + (j << 3)
                                j += 1
                                *edx_8 = fconvert.d(x87_r5_10 + fconvert.t(*edx_8))
                            while (j s< *(arg1 + 0x1c))
                    else
                        int32_t j_1 = 0
                        
                        if (*(arg1 + 0x1c) s> 0)
                            do
                                int32_t edx_5 = *(arg1 + 0x34)
                                long double x87_r5_7 = fconvert.t(*(edx_5 + (j_1 << 3)))
                                    - fconvert.t(*(*(*(arg1 + 0x24) + (i << 2)) + (j_1 << 3)))
                                double* edx_6 = edx_5 + (j_1 << 3)
                                j_1 += 1
                                *edx_6 = fconvert.d(x87_r5_7)
                            while (j_1 s< *(arg1 + 0x1c))
                else
                    int32_t j_2 = 0
                    x87_r6_1 = x87_r5_3
                    
                    if (*(arg1 + 0x1c) s> 0)
                        do
                            double* edx_4 = *(arg1 + 0x34) + (j_2 << 3)
                            long double x87_r5_5 =
                                fconvert.t(*(*(*(arg1 + 0x24) + (i << 2)) + (j_2 << 3)))
                                + fconvert.t(*edx_4)
                            j_2 += 1
                            *edx_4 = fconvert.d(x87_r5_5)
                        while (j_2 s< *(arg1 + 0x1c))
                
                *(*(arg1 + 0x40) + (i << 3)) = fconvert.d(fconvert.t(*(*(arg1 + 0x3c) + (i << 3))))
            
            i += 1
        while (i s< *(arg1 + 0x18) + 1)
    
    int32_t i_1 = 0
    int16_t x87control
    
    if (*(arg1 + 0x1c) s> 0)
        do
            long double x87_r7_2 = fconvert.t(*(*(arg1 + 0x34) + (i_1 << 3)))
            x87control = sub_68b7e9()
            *(*(arg1 + 0x44) + (i_1 << 3)) = fconvert.d(x87_r7_2)
            i_1 += 1
        while (i_1 s< *(arg1 + 0x1c))
    
    int32_t i_2 = 0
    *(arg1 + 0x50) = fconvert.d(float.t(0))
    
    if (*(arg1 + 0x20) s> 0)
        do
            long double x87_r7_4 = float.t(0)
            
            if (*(arg1 + 0x1c) + 1 s> 0)
                double* ecx_1 = *(arg1 + 0x44)
                int32_t* eax_8 = *(arg1 + 0x2c)
                int32_t j_4 = *(arg1 + 0x1c) + 1
                int32_t j_3
                
                do
                    long double x87_r6_2 = fconvert.t(*(*eax_8 + (i_2 << 3)))
                    eax_8 = &eax_8[1]
                    long double x87_r6_3 = x87_r6_2 * fconvert.t(*ecx_1)
                    ecx_1 = &ecx_1[1]
                    j_3 = j_4
                    j_4 -= 1
                    x87_r7_4 = x87_r7_4 + x87_r6_3
                while (j_3 != 1)
            
            if (i_2 == 0)
                var_c = fconvert.d(fneg(x87_r7_4))
            
            int32_t mxcsr
            x87control = sub_6870ac(mxcsr, x87control)
            *(*(arg1 + 0x48) + (i_2 << 3)) = fconvert.d(x87_r7_4 + fconvert.t(var_c))
            long double x87_r7_6 = fconvert.t(*(*(arg1 + 0x48) + (i_2 << 3)))
            i_2 += 1
            *(arg1 + 0x50) = fconvert.d(x87_r7_6 + fconvert.t(*(arg1 + 0x50)))
        while (i_2 s< *(arg1 + 0x20))
    
    int32_t i_3 = 0
    
    if (*(arg1 + 0x20) s<= 0)
        return 
    
    do
        long double x87_r7_9 = fconvert.t(*(*(arg1 + 0x48) + (i_3 << 3))) / fconvert.t(*(arg1 + 0x50))
        i_3 += 1
        *(*(arg1 + 0x4c) + (i_3 << 3) - 8) = fconvert.d(x87_r7_9)
    while (i_3 s< *(arg1 + 0x20))
}
