// 函数名称: sub_5fcf80
// 虚拟地址: 0x5fcf80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fcf80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x10)
    float* esi = edi + eax - 8
    float var_c = fconvert.s(fconvert.t(*(edi + eax - 4)))
    int32_t edx = eax << 2
    float* i = edi + edx - 0x20
    long double result = fconvert.t(((var_c & 0xff0000) | var_c u>> 0x10) u>> 8
        | ((var_c & 0xff00) | var_c << 0x10) << 8)
    float var_c_2 = fconvert.s(fconvert.t(*esi))
    int32_t var_c_3 =
        ((var_c_2 & 0xff0000) | var_c_2 u>> 0x10) u>> 8 | ((var_c_2 & 0xff00) | var_c_2 << 0x10) << 8
    long double x87_r6_1 = fconvert.t(var_c_3)
    int32_t var_8
    
    if (i u>= edi)
        long double x87_r5_1 = fconvert.t(3.0)
        long double result_3 = fconvert.t(0.25)
        long double x87_r3_1 = fconvert.t(0.5)
        int32_t eax_8
        int32_t edx_11
        edx_11:eax_8 = sx.q(i - edi + 0x20)
        
        if ((eax_8 + (edx_11 & 0x1f)) s>> 5 s>= 4)
            do
                float var_8_1 = fconvert.s(fconvert.t(esi[1]))
                long double x87_r2_2 = fconvert.t(((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8)
                float var_c_4 = fconvert.s(fconvert.t(*esi))
                long double x87_r1_2 = fconvert.t(((var_c_4 & 0xff0000) | var_c_4 u>> 0x10) u>> 8
                    | (var_c_4 << 0x10 | (var_c_4 & 0xff00)) << 8)
                i[7] = fconvert.s((result * x87_r5_1 + x87_r2_2) * result_3)
                i[6] = fconvert.s((x87_r6_1 * x87_r5_1 + x87_r1_2) * result_3)
                i[5] = fconvert.s((x87_r2_2 + result) * x87_r3_1)
                i[4] = fconvert.s((x87_r1_2 + x87_r6_1) * x87_r3_1)
                i[3] = fconvert.s((result + x87_r2_2 * x87_r5_1) * result_3)
                i[2] = fconvert.s((x87_r6_1 + x87_r1_2 * x87_r5_1) * result_3)
                i[1] = fconvert.s(x87_r2_2)
                *i = fconvert.s(x87_r1_2)
                float var_8_3 = fconvert.s(fconvert.t(esi[-1]))
                long double x87_r2_6 = fconvert.t(((var_8_3 & 0xff0000) | var_8_3 u>> 0x10) u>> 8
                    | (var_8_3 << 0x10 | (var_8_3 & 0xff00)) << 8)
                float var_c_6 = fconvert.s(fconvert.t(esi[-2]))
                long double x87_r1_8 = fconvert.t(((var_c_6 & 0xff0000) | var_c_6 u>> 0x10) u>> 8
                    | (var_c_6 << 0x10 | (var_c_6 & 0xff00)) << 8)
                i[-1] = fconvert.s((x87_r2_2 * x87_r5_1 + x87_r2_6) * result_3)
                i[-2] = fconvert.s((x87_r1_2 * x87_r5_1 + x87_r1_8) * result_3)
                i[-3] = fconvert.s((x87_r2_6 + x87_r2_2) * x87_r3_1)
                i[-4] = fconvert.s((x87_r1_8 + x87_r1_2) * x87_r3_1)
                i[-5] = fconvert.s((x87_r2_2 + x87_r2_6 * x87_r5_1) * result_3)
                i[-6] = fconvert.s((x87_r1_2 + x87_r1_8 * x87_r5_1) * result_3)
                i[-7] = fconvert.s(x87_r2_6)
                i[-8] = fconvert.s(x87_r1_8)
                float var_8_5 = fconvert.s(fconvert.t(esi[-3]))
                long double x87_r2_10 = fconvert.t(((var_8_5 & 0xff0000) | var_8_5 u>> 0x10) u>> 8
                    | (var_8_5 << 0x10 | (var_8_5 & 0xff00)) << 8)
                float var_c_8 = fconvert.s(fconvert.t(esi[-4]))
                long double x87_r1_14 = fconvert.t(((var_c_8 & 0xff0000) | var_c_8 u>> 0x10) u>> 8
                    | (var_c_8 << 0x10 | (var_c_8 & 0xff00)) << 8)
                i[-9] = fconvert.s((x87_r2_6 * x87_r5_1 + x87_r2_10) * result_3)
                i[-0xa] = fconvert.s((x87_r1_8 * x87_r5_1 + x87_r1_14) * result_3)
                i[-0xb] = fconvert.s((x87_r2_10 + x87_r2_6) * x87_r3_1)
                i[-0xc] = fconvert.s((x87_r1_14 + x87_r1_8) * x87_r3_1)
                i[-0xd] = fconvert.s((x87_r2_6 + x87_r2_10 * x87_r5_1) * result_3)
                i[-0xe] = fconvert.s((x87_r1_8 + x87_r1_14 * x87_r5_1) * result_3)
                i[-0xf] = fconvert.s(x87_r2_10)
                i[-0x10] = fconvert.s(x87_r1_14)
                float var_8_7 = fconvert.s(fconvert.t(esi[-5]))
                var_8 = ((var_8_7 & 0xff0000) | var_8_7 u>> 0x10) u>> 8
                    | (var_8_7 << 0x10 | (var_8_7 & 0xff00)) << 8
                long double result_1 = fconvert.t(var_8)
                float var_c_10 = fconvert.s(fconvert.t(esi[-6]))
                var_c_3 = ((var_c_10 & 0xff0000) | var_c_10 u>> 0x10) u>> 8
                    | (var_c_10 << 0x10 | (var_c_10 & 0xff00)) << 8
                long double x87_r1_20 = fconvert.t(var_c_3)
                i[-0x11] = fconvert.s((x87_r2_10 * x87_r5_1 + result_1) * result_3)
                i = &i[-0x20]
                esi -= 0x20
                i[0xe] = fconvert.s((x87_r1_14 * x87_r5_1 + x87_r1_20) * result_3)
                i[0xd] = fconvert.s((result_1 + x87_r2_10) * x87_r3_1)
                i[0xc] = fconvert.s((x87_r1_20 + x87_r1_14) * x87_r3_1)
                i[0xb] = fconvert.s((x87_r2_10 + result_1 * x87_r5_1) * result_3)
                i[0xa] = fconvert.s((x87_r1_14 + x87_r1_20 * x87_r5_1) * result_3)
                i[9] = fconvert.s(result_1)
                result = result_1
                i[8] = fconvert.s(x87_r1_20)
                x87_r6_1 = x87_r1_20
            while (i s>= edi + 0x60)
        
        if (i u>= edi)
            void* eax_28 = &i[6]
            int32_t ecx_3 = ((i - edi) u>> 5) + 1
            
            while (true)
                long double x87_r2_16 = fconvert.t(esi[1])
                esi -= 8
                float var_8_8 = fconvert.s(x87_r2_16)
                eax_28 -= 0x20
                var_8 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8
                long double result_2 = fconvert.t(var_8)
                float var_c_11 = fconvert.s(fconvert.t(esi[2]))
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                var_c_3 = ((var_c_11 & 0xff0000) | var_c_11 u>> 0x10) u>> 8
                    | (var_c_11 << 0x10 | (var_c_11 & 0xff00)) << 8
                long double x87_r1_26 = fconvert.t(var_c_3)
                *(eax_28 + 0x24) = fconvert.s((result * x87_r5_1 + result_2) * result_3)
                *(eax_28 + 0x20) = fconvert.s((x87_r6_1 * x87_r5_1 + x87_r1_26) * result_3)
                *(eax_28 + 0x1c) = fconvert.s((result_2 + result) * x87_r3_1)
                *(eax_28 + 0x18) = fconvert.s((x87_r1_26 + x87_r6_1) * x87_r3_1)
                *(eax_28 + 0x14) = fconvert.s((result + result_2 * x87_r5_1) * result_3)
                *(eax_28 + 0x10) = fconvert.s((x87_r6_1 + x87_r1_26 * x87_r5_1) * result_3)
                *(eax_28 + 0xc) = fconvert.s(result_2)
                result = result_2
                *(eax_28 + 8) = fconvert.s(x87_r1_26)
                
                if (temp1_1 == 1)
                    break
                
                x87_r6_1 = x87_r1_26
            
            result = result_3
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_5 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_5 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_5 << 2) + 0x28))(arg1, arg2, edx, var_c_3, var_8)
    
    return result
}
