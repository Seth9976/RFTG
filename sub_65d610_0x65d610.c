// 函数名称: sub_65d610
// 虚拟地址: 0x65d610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_65d610(int32_t* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t* ecx = arg3
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t ebx = ecx[2]
    int32_t __saved_edi_1
    int32_t __saved_edi = __saved_edi_1
    int32_t edi = arg1[7]
    
    if (*(ebx + (edi << 2)) != 0)
        return 
    
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(*(*(*(arg1[0x10] + 4) + 0x1c) + (edi << 2)))
    int32_t __saved_esi_2
    int32_t __saved_esi_1 = __saved_esi_2
    int32_t esi_1 = (eax_3 - edx_2) s>> 1
    long double x87_r6_1 = fconvert.t(0.5)
    long double x87_r7_2 = float.t(*(arg2 + 4)) * x87_r6_1
    double var_1c_1 = fconvert.d(x87_r6_1 * float.t(*(arg2 + 4)))
    double var_24_1 = fconvert.d(float.t(*ecx))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 =
        sub_686720(mxcsr, x87control, x87_r7_2 * x87_r7_2 * fconvert.t(1.8499999754340024e-08))
    int16_t x87control_2
    long double st0_2
    st0_2, x87control_2 =
        sub_686720(mxcsr, x87control_1, fconvert.t(var_1c_1) * fconvert.t(0.00073999998858198524))
    void* var_34_1 = (esi_1 << 2) + 4
    var_1c_1:4.d = fconvert.s(fconvert.t(var_24_1) / (st0_2 * fconvert.t(13.100000381469727)
        + fconvert.t(fconvert.d(st0_1 * fconvert.t(2.2400000095367432)))
        + fconvert.t(var_1c_1) * fconvert.t(9.9999997473787516e-05)))
    *(ebx + (edi << 2)) = sub_5a881a()
    int32_t ebx_1 = 0
    double var_10_1
    var_10_1:4.d = 0
    
    if (esi_1 s> 0)
        do
            long double x87_r5_1 = fconvert.t(0.5)
            var_10_1:4.d = fconvert.s(float.t(var_10_1:4.d))
            long double x87_r4_3 = fconvert.t(var_10_1:4.d)
            long double x87_r6_9 =
                float.t(*(arg2 + 4)) * x87_r5_1 / fconvert.t(fconvert.s(float.t(esi_1))) * x87_r4_3
            long double x87_r5_2 = x87_r5_1 * float.t(*(arg2 + 4))
            var_10_1 = fconvert.d(x87_r5_2 / x87_r5_2 * x87_r4_3)
            int16_t x87control_3
            long double st0_3
            st0_3, x87control_3 = sub_686720(mxcsr, x87control_2, 
                x87_r6_9 * x87_r6_9 * fconvert.t(1.8499999754340024e-08))
            int16_t x87control_4
            long double st0_4
            st0_4, x87control_4 = sub_686720(mxcsr, x87control_3, 
                fconvert.t(var_10_1) * fconvert.t(0.00073999998858198524))
            long double st0_5
            st0_5, x87control_2 = sub_686950(mxcsr, x87control_4, 
                fconvert.d((st0_4 * fconvert.t(13.100000381469727)
                    + fconvert.t(fconvert.d(st0_3 * fconvert.t(2.2400000095367432)))
                    + fconvert.t(var_10_1) * fconvert.t(9.9999997473787516e-05))
                    * fconvert.t(var_1c_1:4.d)))
            int32_t eax_9 = sub_685f40(st0_5)
            int32_t ecx_2 = *arg3
            
            if (eax_9 s>= ecx_2)
                eax_9 = ecx_2 - 1
            
            *(*(arg3[2] + (edi << 2)) + (ebx_1 << 2)) = eax_9
            ebx_1 += 1
            var_10_1:4.d = ebx_1
        while (ebx_1 s< esi_1)
    
    *(*(arg3[2] + (edi << 2)) + (ebx_1 << 2)) = 0xffffffff
    arg3[edi + 3] = esi_1
}
