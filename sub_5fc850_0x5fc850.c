// 函数名称: sub_5fc850
// 虚拟地址: 0x5fc850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5fc850(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x10)
    float* esi = edi + eax - 8
    float var_c = fconvert.s(fconvert.t(*(edi + eax - 4)))
    int32_t edx = eax * 2
    float* i = edi + edx - 0x10
    long double x87_r7_1 = fconvert.t(((var_c & 0xff0000) | var_c u>> 0x10) u>> 8
        | ((var_c & 0xff00) | var_c << 0x10) << 8)
    float var_c_2 = fconvert.s(fconvert.t(*esi))
    int32_t var_c_3 =
        ((var_c_2 & 0xff0000) | var_c_2 u>> 0x10) u>> 8 | ((var_c_2 & 0xff00) | var_c_2 << 0x10) << 8
    long double x87_r6_1 = fconvert.t(var_c_3)
    int32_t var_8
    
    if (i u>= edi)
        long double x87_r5_1 = fconvert.t(0.5)
        int32_t eax_8
        int32_t edx_11
        edx_11:eax_8 = sx.q(i - edi + 0x10)
        
        if ((eax_8 + (edx_11 & 0xf)) s>> 4 s>= 4)
            do
                float var_8_1 = fconvert.s(fconvert.t(esi[1]))
                long double x87_r4_2 = fconvert.t(((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8)
                float var_c_4 = fconvert.s(fconvert.t(*esi))
                long double x87_r3_2 = fconvert.t(((var_c_4 & 0xff0000) | var_c_4 u>> 0x10) u>> 8
                    | (var_c_4 << 0x10 | (var_c_4 & 0xff00)) << 8)
                i[3] = fconvert.s((x87_r7_1 + x87_r4_2) * x87_r5_1)
                i[2] = fconvert.s((x87_r6_1 + x87_r3_2) * x87_r5_1)
                i[1] = fconvert.s(x87_r4_2)
                *i = fconvert.s(x87_r3_2)
                float var_8_3 = fconvert.s(fconvert.t(esi[-1]))
                long double x87_r4_6 = fconvert.t(((var_8_3 & 0xff0000) | var_8_3 u>> 0x10) u>> 8
                    | (var_8_3 << 0x10 | (var_8_3 & 0xff00)) << 8)
                float var_c_6 = fconvert.s(fconvert.t(esi[-2]))
                long double x87_r3_7 = fconvert.t(((var_c_6 & 0xff0000) | var_c_6 u>> 0x10) u>> 8
                    | (var_c_6 << 0x10 | (var_c_6 & 0xff00)) << 8)
                i[-1] = fconvert.s((x87_r4_2 + x87_r4_6) * x87_r5_1)
                i[-2] = fconvert.s((x87_r3_2 + x87_r3_7) * x87_r5_1)
                i[-3] = fconvert.s(x87_r4_6)
                i[-4] = fconvert.s(x87_r3_7)
                float var_8_5 = fconvert.s(fconvert.t(esi[-3]))
                long double x87_r4_10 = fconvert.t(((var_8_5 & 0xff0000) | var_8_5 u>> 0x10) u>> 8
                    | (var_8_5 << 0x10 | (var_8_5 & 0xff00)) << 8)
                float var_c_8 = fconvert.s(fconvert.t(esi[-4]))
                long double x87_r3_12 = fconvert.t(((var_c_8 & 0xff0000) | var_c_8 u>> 0x10) u>> 8
                    | (var_c_8 << 0x10 | (var_c_8 & 0xff00)) << 8)
                i[-5] = fconvert.s((x87_r4_6 + x87_r4_10) * x87_r5_1)
                i[-6] = fconvert.s((x87_r3_7 + x87_r3_12) * x87_r5_1)
                i[-7] = fconvert.s(x87_r4_10)
                i[-8] = fconvert.s(x87_r3_12)
                float var_8_7 = fconvert.s(fconvert.t(esi[-5]))
                var_8 = ((var_8_7 & 0xff0000) | var_8_7 u>> 0x10) u>> 8
                    | (var_8_7 << 0x10 | (var_8_7 & 0xff00)) << 8
                long double x87_r4_14 = fconvert.t(var_8)
                float var_c_10 = fconvert.s(fconvert.t(esi[-6]))
                var_c_3 = ((var_c_10 & 0xff0000) | var_c_10 u>> 0x10) u>> 8
                    | (var_c_10 << 0x10 | (var_c_10 & 0xff00)) << 8
                long double x87_r3_17 = fconvert.t(var_c_3)
                i -= 0x40
                esi -= 0x20
                i[7] = fconvert.s((x87_r4_10 + x87_r4_14) * x87_r5_1)
                i[6] = fconvert.s((x87_r3_12 + x87_r3_17) * x87_r5_1)
                i[5] = fconvert.s(x87_r4_14)
                x87_r7_1 = x87_r4_14
                i[4] = fconvert.s(x87_r3_17)
                x87_r6_1 = x87_r3_17
            while (i s>= edi + 0x30)
        
        if (i u>= edi)
            void* edx_53 = &i[2]
            int32_t ecx_3 = ((i - edi) u>> 4) + 1
            
            while (true)
                long double x87_r4_17 = fconvert.t(esi[1])
                esi -= 8
                float var_8_8 = fconvert.s(x87_r4_17)
                edx_53 -= 0x10
                var_8 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8
                long double x87_r4_18 = fconvert.t(var_8)
                float var_c_11 = fconvert.s(fconvert.t(esi[2]))
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                var_c_3 = ((var_c_11 & 0xff0000) | var_c_11 u>> 0x10) u>> 8
                    | (var_c_11 << 0x10 | (var_c_11 & 0xff00)) << 8
                long double x87_r3_22 = fconvert.t(var_c_3)
                *(edx_53 + 0x14) = fconvert.s((x87_r7_1 + x87_r4_18) * x87_r5_1)
                *(edx_53 + 0x10) = fconvert.s((x87_r6_1 + x87_r3_22) * x87_r5_1)
                *(edx_53 + 0xc) = fconvert.s(x87_r4_18)
                x87_r7_1 = x87_r4_18
                *(edx_53 + 8) = fconvert.s(x87_r3_22)
                
                if (temp1_1 == 1)
                    break
                
                x87_r6_1 = x87_r3_22
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_5 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_5 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_5 << 2) + 0x28))(arg1, arg2, edx, var_c_3, var_8)
}
