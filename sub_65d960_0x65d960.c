// 函数名称: sub_65d960
// 虚拟地址: 0x65d960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_65d960(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, float arg7, float arg8)
{
    // 第一条实际指令: long double x87_r7 = float.t(arg4)
    long double x87_r7 = float.t(arg4)
    int32_t esi = 0
    int32_t edi
    int32_t var_24 = edi
    int32_t mxcsr
    int16_t x87control
    
    if (arg6 s> 0)
        do
            long double st0_1
            st0_1, x87control = sub_686860(mxcsr, x87control, fconvert.t(*(arg5 + (esi << 2))))
            esi += 1
            *(arg5 + (esi << 2) - 4) = fconvert.s(st0_1 + st0_1)
        while (esi s< arg6)
    
    int32_t edi_3 = 0
    
    if (arg3 s<= 0)
        return 
    
    int32_t i = *arg2
    int32_t* esi_1 = nullptr
    
    do
        long double x87_r7_5 = fconvert.t(0.5f)
        float var_8_1 = fconvert.s(x87_r7_5)
        arg4 = fconvert.s(x87_r7_5)
        long double x87_r6_1 = fconvert.t(2.0)
        int32_t eax_2 = 1
        long double x87_r6_3 = fconvert.t(fconvert.s(sub_686860(mxcsr, x87control, 
            float.t(i) * fconvert.t(fconvert.s(fconvert.t(3.1415927410125732) / x87_r7))) * x87_r6_1))
        
        if (arg6 s> 1)
            do
                long double x87_r5_2 = x87_r6_3 - fconvert.t(*(arg5 + (eax_2 << 2) - 4))
                eax_2 += 2
                arg4 = fconvert.s(x87_r5_2 * fconvert.t(arg4))
                var_8_1 = fconvert.s((x87_r6_3 - fconvert.t(*(arg5 + (eax_2 << 2) - 8)))
                    * fconvert.t(var_8_1))
            while (eax_2 s< arg6)
        
        float var_8_2
        long double x87_r7_16
        
        if (eax_2 != arg6)
            long double x87_r4_1 = fconvert.t(var_8_1)
            var_8_2 = fconvert.s((x87_r6_1 - x87_r6_3) * x87_r4_1 * x87_r4_1)
            long double x87_r6_8 = fconvert.t(arg4)
            x87_r7_16 = (x87_r6_1 + x87_r6_3) * x87_r6_8 * x87_r6_8
        else
            long double x87_r6_7 = fconvert.t(var_8_1)
            var_8_2 = fconvert.s((fconvert.t(4.0) - x87_r6_1 * x87_r6_1) * x87_r6_7 * x87_r6_7)
            long double x87_r7_15 = fconvert.t(fconvert.s((x87_r6_1
                - fconvert.t(*(arg5 + (eax_2 << 2) - 4))) * fconvert.t(arg4)))
            x87_r7_16 = x87_r7_15 * x87_r7_15
        
        int16_t x87control_1
        long double st0_3
        st0_3, x87control_1 = __CIasin_default(fconvert.t(fconvert.s(x87_r7_16)) + fconvert.t(var_8_2))
        x87control = sub_6870ac(mxcsr, x87control_1)
        long double x87_r6_9 = fconvert.t(fconvert.s((fconvert.t(fconvert.d(fconvert.t(arg7))) / st0_3
            - fconvert.t(arg8)) * fconvert.t(0.1151292473077774)))
        int32_t i_1 = i
        edi_3 += 1
        *(esi_1 + arg1) = fconvert.s(fconvert.t(*(esi_1 + arg1)) * x87_r6_9)
        esi_1 = edi_3 << 2
        
        for (i = *(esi_1 + arg2); i == i_1; i = *(esi_1 + arg2))
            edi_3 += 1
            *(esi_1 + arg1) = fconvert.s(fconvert.t(*(esi_1 + arg1)) * x87_r6_9)
            esi_1 = edi_3 << 2
    while (edi_3 s< arg3)
}
