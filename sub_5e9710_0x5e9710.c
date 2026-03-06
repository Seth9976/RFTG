// 函数名称: sub_5e9710
// 虚拟地址: 0x5e9710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e9710(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(esi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* edx = ecx + eax_1 - 0x10
    float var_24 = fconvert.s(fconvert.t(*(ecx + esi - 4)))
    float* ecx_1 = ecx + esi - 0x10
    float var_24_1 = fconvert.s(fconvert.t(*(ecx + esi - 8)))
    float var_24_2 = fconvert.s(fconvert.t(ecx_1[1]))
    int32_t var_18 =
        ((var_24 & 0xff0000) | var_24 u>> 0x10) u>> 8 | (var_24 << 0x10 | (var_24 & 0xff00)) << 8
    float var_24_3 = fconvert.s(fconvert.t(*ecx_1))
    int32_t var_1c = ((var_24_1 & 0xff0000) | var_24_1 u>> 0x10) u>> 8
        | (var_24_1 << 0x10 | (var_24_1 & 0xff00)) << 8
    int32_t var_20 = ((var_24_2 & 0xff0000) | var_24_2 u>> 0x10) u>> 8
        | (var_24_2 << 0x10 | (var_24_2 & 0xff00)) << 8
    int32_t edi = 0
    int32_t var_24_4 = ((var_24_3 & 0xff0000) | var_24_3 u>> 0x10) u>> 8
        | (var_24_3 << 0x10 | (var_24_3 & 0xff00)) << 8
    float var_3c
    float var_38
    float var_34
    float var_30
    float var_14
    float var_10
    int32_t var_c
    int32_t var_8
    
    if (edx u>= ecx)
        long double x87_r7_6 = fconvert.t(0.5)
        long double x87_r6_1 = fconvert.t(var_18)
        long double x87_r5_1 = fconvert.t(var_1c)
        long double x87_r4_1 = fconvert.t(var_20)
        long double x87_r3_1 = fconvert.t(var_24_4)
        
        while (true)
            edi += esi - 0x100
            var_30 = fconvert.s(x87_r6_1)
            edx -= 0x10
            long double x87_r5_3 = x87_r6_1
            var_34 = fconvert.s(x87_r5_1)
            long double x87_r4_2 = x87_r5_1
            var_38 = fconvert.s(x87_r4_1)
            long double x87_r3_8 = x87_r3_1
            long double x87_r6_3 = x87_r4_1
            var_3c = fconvert.s(x87_r3_8)
            *(edx + 0x1c) = ((var_30 & 0xff0000) | var_30 u>> 0x10) u>> 8
                | (var_30 << 0x10 | (var_30 & 0xff00)) << 8
            *(edx + 0x18) = ((var_34 & 0xff0000) | var_34 u>> 0x10) u>> 8
                | (var_34 << 0x10 | (var_34 & 0xff00)) << 8
            *(edx + 0x14) = ((var_38 & 0xff0000) | var_38 u>> 0x10) u>> 8
                | (var_38 << 0x10 | (var_38 & 0xff00)) << 8
            *(edx + 0x10) = ((var_3c & 0xff0000) | var_3c u>> 0x10) u>> 8
                | (var_3c << 0x10 | (var_3c & 0xff00)) << 8
            
            if (edi * 2 s>= eax_1)
                long double x87_r2_1 = fconvert.t(ecx_1[-1])
                ecx_1 -= 0x10
                float var_8_1 = fconvert.s(x87_r2_1)
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                var_18 = fconvert.s((x87_r5_3 + fconvert.t(var_8)) * x87_r7_6)
                float var_c_1 = fconvert.s(fconvert.t(ecx_1[2]))
                var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
                var_1c = fconvert.s((x87_r4_2 + fconvert.t(var_c)) * x87_r7_6)
                float var_10_1 = fconvert.s(fconvert.t(ecx_1[1]))
                var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
                var_20 = fconvert.s((x87_r6_3 + fconvert.t(var_10)) * x87_r7_6)
                float var_14_1 = fconvert.s(fconvert.t(*ecx_1))
                var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                    | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
                var_24_4 = fconvert.s((x87_r3_8 + fconvert.t(var_14)) * x87_r7_6)
                edi -= eax_1
                x87_r6_3 = fconvert.t(var_20)
                x87_r5_3 = fconvert.t(var_18)
                x87_r3_8 = fconvert.t(var_24_4)
                x87_r4_2 = fconvert.t(var_1c)
            
            if (edx u< ecx)
                break
            
            x87_r6_1 = x87_r5_3
            x87_r4_1 = x87_r6_3
            x87_r3_1 = x87_r3_8
            x87_r5_1 = x87_r4_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, esi - 0x100, var_3c, var_38, var_34, var_30, ecx, 
            eax_1, var_24_4, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
