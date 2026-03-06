// 函数名称: sub_5a5400
// 虚拟地址: 0x5a5400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5a5400(void* arg1, long double arg2 @ st0)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    float var_8 = fconvert.s(fconvert.t(*(arg1 + 0x3c)))
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t ecx
    int32_t var_30 = ecx
    long double x87_r6 = float.t(1)
    float var_30_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6 / x87_r6)))
    (&data_8bc4fc)[*(arg1 + 0x54) * 2]()
    int32_t i_1 = 0
    float var_14 = fconvert.s(arg2 * fconvert.t(var_8))
    
    if (*(arg1 + 0x18) s<= 0)
        return 
    
    int32_t i
    
    do
        long double x87_r0_1 = fconvert.t(0.5)
        float var_18_1 = fconvert.s(fconvert.t(*(arg1 + 0x34)))
        float var_10_1 = fconvert.s(float.t(i_1) + x87_r0_1)
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_686950(mxcsr, x87control, 
            fconvert.d(x87_r0_1 + fconvert.t(fconvert.s((
                fconvert.t(fconvert.s(fconvert.t(var_10_1) - fconvert.t(var_14)))
                + fconvert.t(var_18_1)) / fconvert.t(var_8)))))
        int32_t j = sub_685f40(st0_1)
        int32_t j_1 = sub_685f40(sub_686950(mxcsr, x87control_1, 
            fconvert.d(fconvert.t(fconvert.s((
                fconvert.t(fconvert.s(fconvert.t(var_10_1) + fconvert.t(var_14)))
                + fconvert.t(var_18_1)) / fconvert.t(var_8))) - fconvert.t(0.5))))
        int32_t j_2 = j_1
        
        if (*(arg1 + 0xac) s>= 0 && j s> *(arg1 + 0xa4))
            int32_t ecx_2 = *(arg1 + 0xa8)
            
            do
                int32_t eax_1 = *(arg1 + 0xa4)
                
                if (eax_1 == ecx_2)
                    *(arg1 + 0xac) = 0xffffffff
                    *(arg1 + 0xa4) = 0
                    *(arg1 + 0xa8) = 0
                    goto label_5a550b
                
                *(arg1 + 0xa4) = eax_1 + 1
                int32_t eax_5
                int32_t edx_1
                edx_1:eax_5 = sx.q(*(arg1 + 0xac) + 1)
                j_1 = divs.dp.d(edx_1:eax_5, *(arg1 + 0x8c))
                *(arg1 + 0xac) = mods.dp.d(edx_1:eax_5, *(arg1 + 0x8c))
            while (j s> *(arg1 + 0xa4))
        
        double var_34_2
        
        if (*(arg1 + 0xac) s< 0 || *(arg1 + 0xac) s< 0)
        label_5a550b:
            var_34_2.d = arg1
            sub_5a1e80(var_34_2.d, j)
            long double x87_r0_12 = float.t(1)
            long double temp2_1 = fconvert.t(*(arg1 + 0x38))
            x87_r0_12 - temp2_1
            int32_t eax_6
            eax_6.w = (x87_r0_12 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_12, temp2_1) ? 1 : 0) << 0xa
                | (x87_r0_12 == temp2_1 ? 1 : 0) << 0xe | 0x800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                int128_t* eax_7
                int32_t edx_4
                eax_7, edx_4 = sub_5a2910(arg1)
                int128_t* var_30_3 = eax_7
                int80_t st0_4
                st0_4, j_1 = sub_5a3060(eax_7, edx_4, arg1)
            else
                int32_t edx_3
                j_1, edx_3 = sub_5a2910(arg1)
                sub_5a2980(j_1, edx_3, arg1)
        
        int32_t j_3 = j_2
        
        if (j_3 s> *(arg1 + 0xa8))
            do
                int32_t ebx_2 = *(arg1 + 0xa8) + 1
                var_34_2.d = arg1
                sub_5a1e80(var_34_2.d, ebx_2)
                float.t(1) - fconvert.t(*(arg1 + 0x38))
                bool p_2 = unimplemented  {test ah, 0x5}
                int32_t eax_8 = *(arg1 + 0xac)
                
                if (p_2)
                    int32_t edx_9
                    
                    if (eax_8 s>= 0)
                        *(arg1 + 0x8c)
                        edx_9 =
                            mods.dp.d(sx.q(eax_8 - *(arg1 + 0xa4) + *(arg1 + 0xa8) + 1), *(arg1 + 0x8c))
                    else
                        *(arg1 + 0xac) = 0
                        edx_9 = 0
                        *(arg1 + 0xa4) = ebx_2
                    
                    int32_t eax_19 = *(arg1 + 0xa0)
                    int128_t* edi_1 = *(arg1 + 0xb0) + (((eax_19 u>> 2) * edx_9) << 2)
                    var_34_2.d = 0
                    int128_t* eax_20
                    int32_t edx_12
                    eax_20, edx_12 = sub_5abfc0(edi_1, 0, eax_19)
                    int128_t* var_30_7 = edi_1
                    *(arg1 + 0xa8) = ebx_2
                    int80_t st0_6
                    st0_6, j_3 = sub_5a3060(eax_20, edx_12, arg1)
                else
                    int32_t edx_5
                    
                    if (eax_8 s>= 0)
                        *(arg1 + 0x8c)
                        edx_5 =
                            mods.dp.d(sx.q(eax_8 - *(arg1 + 0xa4) + *(arg1 + 0xa8) + 1), *(arg1 + 0x8c))
                    else
                        *(arg1 + 0xac) = 0
                        edx_5 = 0
                        *(arg1 + 0xa4) = ebx_2
                    
                    int32_t eax_13 = *(arg1 + 0xa0)
                    int128_t* edi = *(arg1 + 0xb0) + (((eax_13 u>> 2) * edx_5) << 2)
                    var_34_2.d = 0
                    int32_t edx_8 = sub_5abfc0(edi, 0, eax_13)
                    *(arg1 + 0xa8) = ebx_2
                    int80_t st0_5
                    st0_5, j_3 = sub_5a2980(edi, edx_8, arg1)
                
                j_1 = j_2
            while (j_1 s> *(arg1 + 0xa8))
        
        void* var_30_8 = arg1
        int80_t st0_7
        st0_7, x87control = sub_5a4700(j_1, j_3, i_1)
        i = i_1 + 1
        i_1 = i
    while (i s< *(arg1 + 0x18))
}
