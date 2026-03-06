// 函数名称: sub_5a5780
// 虚拟地址: 0x5a5780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5a5780(void* arg1, long double arg2 @ st0)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    int32_t ecx = *(arg1 + 0x54)
    int32_t eax = *(arg1 + 0x18)
    float var_8 = fconvert.s(fconvert.t(*(arg1 + 0x3c)))
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t var_38 = ecx
    float var_38_1 = fconvert.s(fconvert.t(var_8))
    (&data_8bc4fc)[ecx * 2]()
    int32_t eax_1 = *(arg1 + 0x94)
    int32_t ecx_2 = *(arg1 + 8) + eax_1
    int32_t eax_2 = neg.d(eax_1)
    int32_t ebx = eax_2
    int32_t var_c = eax_2
    float var_14 = fconvert.s(arg2 / fconvert.t(var_8))
    
    while (ebx s< ecx_2)
        long double x87_r0_1 = fconvert.t(0.5)
        float var_18_1 = fconvert.s(fconvert.t(*(arg1 + 0x34)))
        float var_10_1 = fconvert.s(float.t(var_c) + x87_r0_1)
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_686950(mxcsr, x87control, 
            fconvert.d(x87_r0_1 + fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(var_10_1) - fconvert.t(var_14))) * fconvert.t(var_8)
                - fconvert.t(var_18_1)))))
        int32_t eax_3 = sub_685f40(st0_1)
        long double st0_2
        st0_2, x87control = sub_686950(mxcsr, x87control_1, 
            fconvert.d(fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(var_10_1) + fconvert.t(var_14))) * fconvert.t(var_8)
                - fconvert.t(var_18_1))) - fconvert.t(0.5)))
        int32_t eax_4 = sub_685f40(st0_2)
        
        if (eax_4 s>= 0 && eax_3 s< eax)
            int32_t var_38_2 = eax_3
            sub_5a5680(arg1)
            double var_3c_2
            var_3c_2.d = arg1
            x87control = sub_5a1e80(var_3c_2.d, ebx)
            int128_t* ebx_1 = *(arg1 + 0x7c)
            int32_t var_44_1 = 0
            int128_t* eax_9
            int32_t edx_1
            eax_9, edx_1 = sub_5abfc0(ebx_1, 0, *(arg1 + 0x40) * *(arg1 + 0x14) * 4)
            long double x87_r0_12 = float.t(1)
            long double temp2_1 = fconvert.t(*(arg1 + 0x38))
            x87_r0_12 - temp2_1
            eax_9.w = (x87_r0_12 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_12, temp2_1) ? 1 : 0) << 0xa
                | (x87_r0_12 == temp2_1 ? 1 : 0) << 0xe | 0x800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                int128_t* var_38_4 = ebx_1
                sub_5a3060(eax_9, edx_1, arg1)
            else
                sub_5a2980(ebx_1, edx_1, arg1)
            
            if (*(arg1 + 0xac) s< 0)
                sub_5a2910(arg1)
            
            int32_t eax_11 = *(arg1 + 0xa8)
            
            if (eax_4 s> eax_11)
                int32_t edi_1 = *(arg1 + 0xac)
                uint32_t ecx_5 = *(arg1 + 0xa0) u>> 2
                uint32_t var_1c_5 = ecx_5
                
                while (true)
                    int32_t edx_5 = 0
                    int32_t ebx_3 = eax_11 + 1
                    
                    if (edi_1 s>= 0)
                        *(arg1 + 0x8c)
                        edx_5 = mods.dp.d(sx.q(edi_1 - *(arg1 + 0xa4) + eax_11 + 1), *(arg1 + 0x8c))
                    else
                        edi_1 = 0
                        *(arg1 + 0xac) = 0
                        *(arg1 + 0xa4) = ebx_3
                    
                    var_3c_2.d = 0
                    sub_5abfc0(*(arg1 + 0xb0) + ((ecx_5 * edx_5) << 2), 0, *(arg1 + 0xa0))
                    eax_11 = ebx_3
                    *(arg1 + 0xa8) = ebx_3
                    
                    if (eax_4 s<= ebx_3)
                        break
                    
                    ecx_5 = var_1c_5
            
            int32_t var_38_6 = var_c
            sub_5a4e60(arg1, var_c)
            ebx = var_c
        
        ebx += 1
        var_c = ebx
    
    int32_t var_38_7 = *(arg1 + 0x18)
    sub_5a5680(arg1)
}
