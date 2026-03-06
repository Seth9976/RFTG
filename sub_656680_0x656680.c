// 函数名称: sub_656680
// 虚拟地址: 0x656680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_656680(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(arg2)
    int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
    int32_t eax_3 = sub_5a881a(edi_1 << 2)
    int32_t eax_4 = sub_5a881a((edi_1 + arg2) * 4)
    float var_8 = fconvert.s(float.t(arg2))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686ac0(mxcsr, x87control, fconvert.t(var_8))
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 = sub_686ac0(mxcsr, x87control_1, fconvert.t(2.0))
    uint32_t var_48
    var_48.q = fconvert.d(fconvert.t(fconvert.d(st0)) / st0_1 + fconvert.t(0.5))
    int16_t x87control_3
    long double st0_2
    st0_2, x87control_3 = sub_686950(mxcsr, x87control_2, var_48)
    int32_t eax_7 = sub_685f40(st0_2)
    long double x87_r7_8 = fconvert.t(3.1415927410125732)
    *arg1 = arg2
    int32_t esi_1 = 0
    char var_18 = eax_7.b
    arg1[1] = eax_7
    arg1[2] = eax_4
    arg1[3] = eax_3
    
    if (edi_1 s> 0)
        int32_t var_c_1 = 0
        float* var_10_1 = eax_4 + (arg2 s>> 1 << 2)
        int32_t var_14_2 = 1
        
        do
            long double x87_r7_11 =
                float.t(var_c_1) * fconvert.t(fconvert.d(x87_r7_8 / fconvert.t(var_8)))
            int16_t x87control_4
            int80_t st0_3
            st0_3, x87control_4 = sub_686860(mxcsr, x87control_3, x87_r7_11)
            *(eax_4 + (esi_1 << 3)) = fconvert.s(st0_3)
            int16_t x87control_5
            long double st0_4
            st0_4, x87control_5 = sub_686ea0(mxcsr, x87control_4, fconvert.t(fconvert.d(x87_r7_11)))
            *(eax_4 + (esi_1 << 3) + 4) = fconvert.s(fneg(st0_4))
            long double x87_r7_17 =
                float.t(var_14_2) * fconvert.t(fconvert.d(x87_r7_8 / float.t(arg2 * 2)))
            int16_t x87control_6
            long double st0_5
            st0_5, x87control_6 = sub_686860(mxcsr, x87control_5, x87_r7_17)
            *var_10_1 = fconvert.s(st0_5)
            long double st0_6
            st0_6, x87control_3 = sub_686ea0(mxcsr, x87control_6, fconvert.t(fconvert.d(x87_r7_17)))
            var_c_1 += 4
            var_10_1[1] = fconvert.s(st0_6)
            var_14_2 += 2
            esi_1 += 1
            var_10_1 = &var_10_1[2]
        while (esi_1 s< edi_1)
        
        x87_r7_8 = fconvert.t(3.1415927410125732)
    
    int32_t ecx_6 = arg2
    int32_t eax_14
    int32_t edx_4
    edx_4:eax_14 = sx.q(ecx_6)
    int32_t i_4 = (eax_14 + (edx_4 & 7)) s>> 3
    int32_t i_5 = i_4
    
    if (i_4 s> 0)
        arg2 = 2
        float* ebx_1 = eax_4 + (ecx_6 << 2)
        int32_t i_2 = i_4
        int32_t i
        
        do
            long double x87_r7_23 = float.t(arg2) * fconvert.t(fconvert.d(x87_r7_8 / fconvert.t(var_8)))
            int16_t x87control_7
            long double st0_7
            st0_7, x87control_7 = sub_686860(mxcsr, x87control_3, x87_r7_23)
            *ebx_1 = fconvert.s(st0_7 * fconvert.t(0.5))
            long double st0_8
            st0_8, x87control_3 = sub_686ea0(mxcsr, x87control_7, fconvert.t(fconvert.d(x87_r7_23)))
            arg2 += 4
            ebx_1 = &ebx_1[2]
            i = i_2
            i_2 -= 1
            ebx_1[-1] = fconvert.s(st0_8 * fconvert.t(-0.5))
        while (i != 1)
        i_4 = i_5
    
    int32_t i_3 = 1 << (var_18 - 2)
    int32_t edx_6 = 0
    
    if (i_4 s> 0)
        do
            int32_t ebx_2 = 0
            int32_t ecx_11 = 0
            
            if (i_3 != 0)
                int32_t i_1 = i_3
                
                do
                    if ((edx_6 & i_1) != 0)
                        ebx_2 |= 1 << ecx_11.b
                    
                    ecx_11 += 1
                    i_1 = i_3 s>> ecx_11.b
                while (i_1 != 0)
            
            *(eax_3 + (edx_6 << 3)) = (not.d(ebx_2) & ((1 << (var_18 - 1)) - 1)) - 1
            *(eax_3 + (edx_6 << 3) + 4) = ebx_2
            edx_6 += 1
        while (edx_6 s< i_5)
    
    arg1[4] = fconvert.s(fconvert.t(4.0) / fconvert.t(var_8))
}
