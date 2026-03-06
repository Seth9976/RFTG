// 函数名称: sub_5ea5d0
// 虚拟地址: 0x5ea5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5ea5d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(esi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* edx = ecx + eax_1 - 0x20
    float var_44 = fconvert.s(fconvert.t(*(ecx + esi - 4)))
    float* ecx_1 = ecx + esi - 0x20
    float var_44_1 = fconvert.s(fconvert.t(*(ecx + esi - 8)))
    float var_44_2 = fconvert.s(fconvert.t(ecx_1[5]))
    int32_t var_30 =
        ((var_44 & 0xff0000) | var_44 u>> 0x10) u>> 8 | (var_44 << 0x10 | (var_44 & 0xff00)) << 8
    float var_44_3 = fconvert.s(fconvert.t(ecx_1[4]))
    int32_t var_34 = ((var_44_1 & 0xff0000) | var_44_1 u>> 0x10) u>> 8
        | (var_44_1 << 0x10 | (var_44_1 & 0xff00)) << 8
    int32_t var_38 = ((var_44_2 & 0xff0000) | var_44_2 u>> 0x10) u>> 8
        | (var_44_2 << 0x10 | (var_44_2 & 0xff00)) << 8
    int32_t edi = 0
    int32_t var_3c = ((var_44_3 & 0xff0000) | var_44_3 u>> 0x10) u>> 8
        | (var_44_3 << 0x10 | (var_44_3 & 0xff00)) << 8
    float var_44_4 = fconvert.s(fconvert.t(ecx_1[3]))
    float var_44_5 = fconvert.s(fconvert.t(ecx_1[2]))
    float var_2c = fconvert.s(fconvert.t(ecx_1[1]))
    int32_t var_40 = ((var_44_4 & 0xff0000) | var_44_4 u>> 0x10) u>> 8
        | (var_44_4 << 0x10 | (var_44_4 & 0xff00)) << 8
    float var_2c_1 = fconvert.s(fconvert.t(*ecx_1))
    int32_t var_44_6 = ((var_44_5 & 0xff0000) | var_44_5 u>> 0x10) u>> 8
        | (var_44_5 << 0x10 | (var_44_5 & 0xff00)) << 8
    int32_t var_24 =
        ((var_2c & 0xff0000) | var_2c u>> 0x10) u>> 8 | (var_2c << 0x10 | (var_2c & 0xff00)) << 8
    int32_t var_2c_2 = ((var_2c_1 & 0xff0000) | var_2c_1 u>> 0x10) u>> 8
        | (var_2c_1 << 0x10 | (var_2c_1 & 0xff00)) << 8
    float var_6c
    float var_68
    float var_64
    float var_60
    float var_5c
    float var_58
    float var_54
    float var_50
    float var_28
    float var_20
    float var_1c
    int32_t var_18
    float var_14
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (edx u>= ecx)
        long double x87_r7_10 = fconvert.t(0.5)
        long double x87_r6_1 = fconvert.t(var_30)
        long double x87_r5_1 = fconvert.t(var_34)
        long double x87_r4_1 = fconvert.t(var_38)
        long double x87_r3_1 = fconvert.t(var_3c)
        long double x87_r2_1 = fconvert.t(var_40)
        long double x87_r1_1 = fconvert.t(var_44_6)
        
        while (true)
            var_50 = fconvert.s(x87_r6_1)
            long double x87_r5_3 = x87_r6_1
            var_54 = fconvert.s(x87_r5_1)
            long double x87_r4_3 = x87_r5_1
            var_58 = fconvert.s(x87_r4_1)
            long double x87_r3_3 = x87_r4_1
            var_5c = fconvert.s(x87_r3_1)
            long double x87_r2_2 = x87_r3_1
            var_60 = fconvert.s(x87_r2_1)
            long double x87_r1_14 = x87_r1_1
            long double x87_r6_3 = x87_r2_1
            *(edx + 0x1c) = ((var_50 & 0xff0000) | var_50 u>> 0x10) u>> 8
                | (var_50 << 0x10 | (var_50 & 0xff00)) << 8
            *(edx + 0x18) = ((var_54 & 0xff0000) | var_54 u>> 0x10) u>> 8
                | (var_54 << 0x10 | (var_54 & 0xff00)) << 8
            *(edx + 0x14) = ((var_58 & 0xff0000) | var_58 u>> 0x10) u>> 8
                | (var_58 << 0x10 | (var_58 & 0xff00)) << 8
            *(edx + 0x10) = ((var_5c & 0xff0000) | var_5c u>> 0x10) u>> 8
                | (var_5c << 0x10 | (var_5c & 0xff00)) << 8
            *(edx + 0xc) = ((var_60 & 0xff0000) | var_60 u>> 0x10) u>> 8
                | (var_60 << 0x10 | (var_60 & 0xff00)) << 8
            var_64 = fconvert.s(x87_r1_14)
            edi += esi - 0x200
            var_68 = fconvert.s(fconvert.t(var_24))
            var_6c = fconvert.s(fconvert.t(var_2c_2))
            *(edx + 8) = ((var_64 & 0xff0000) | var_64 u>> 0x10) u>> 8
                | (var_64 << 0x10 | (var_64 & 0xff00)) << 8
            *(edx + 4) = ((var_68 & 0xff0000) | var_68 u>> 0x10) u>> 8
                | (var_68 << 0x10 | (var_68 & 0xff00)) << 8
            *edx = ((var_6c & 0xff0000) | var_6c u>> 0x10) u>> 8
                | (var_6c << 0x10 | (var_6c & 0xff00)) << 8
            edx -= 0x20
            
            if (edi * 2 s>= eax_1)
                long double x87_r0_3 = fconvert.t(ecx_1[-1])
                ecx_1 -= 0x20
                float var_8_1 = fconvert.s(x87_r0_3)
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                var_30 = fconvert.s((x87_r5_3 + fconvert.t(var_8)) * x87_r7_10)
                float var_c_1 = fconvert.s(fconvert.t(ecx_1[6]))
                var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
                var_34 = fconvert.s((x87_r4_3 + fconvert.t(var_c)) * x87_r7_10)
                float var_10_1 = fconvert.s(fconvert.t(ecx_1[5]))
                var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
                var_38 = fconvert.s((x87_r3_3 + fconvert.t(var_10)) * x87_r7_10)
                float var_14_1 = fconvert.s(fconvert.t(ecx_1[4]))
                var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                    | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
                var_3c = fconvert.s((x87_r2_2 + fconvert.t(var_14)) * x87_r7_10)
                float var_18_1 = fconvert.s(fconvert.t(ecx_1[3]))
                var_18 = ((var_18_1 & 0xff0000) | var_18_1 u>> 0x10) u>> 8
                    | (var_18_1 << 0x10 | (var_18_1 & 0xff00)) << 8
                var_40 = fconvert.s((x87_r6_3 + fconvert.t(var_18)) * x87_r7_10)
                float var_1c_1 = fconvert.s(fconvert.t(ecx_1[2]))
                var_1c = ((var_1c_1 & 0xff0000) | var_1c_1 u>> 0x10) u>> 8
                    | (var_1c_1 << 0x10 | (var_1c_1 & 0xff00)) << 8
                var_44_6 = fconvert.s((x87_r1_14 + fconvert.t(var_1c)) * x87_r7_10)
                float var_20_1 = fconvert.s(fconvert.t(ecx_1[1]))
                var_20 = ((var_20_1 & 0xff0000) | var_20_1 u>> 0x10) u>> 8
                    | (var_20_1 << 0x10 | (var_20_1 & 0xff00)) << 8
                var_24 = fconvert.s((fconvert.t(var_20) + fconvert.t(var_24)) * x87_r7_10)
                float var_28_1 = fconvert.s(fconvert.t(*ecx_1))
                edi -= eax_1
                var_28 = ((var_28_1 & 0xff0000) | var_28_1 u>> 0x10) u>> 8
                    | (var_28_1 << 0x10 | (var_28_1 & 0xff00)) << 8
                var_2c_2 = fconvert.s((fconvert.t(var_28) + fconvert.t(var_2c_2)) * x87_r7_10)
                x87_r6_3 = fconvert.t(var_40)
                x87_r5_3 = fconvert.t(var_30)
                x87_r4_3 = fconvert.t(var_34)
                x87_r3_3 = fconvert.t(var_38)
                x87_r1_14 = fconvert.t(var_44_6)
                x87_r2_2 = fconvert.t(var_3c)
            
            if (edx u< ecx)
                break
            
            x87_r6_1 = x87_r5_3
            x87_r5_1 = x87_r4_3
            x87_r4_1 = x87_r3_3
            x87_r2_1 = x87_r6_3
            x87_r1_1 = x87_r1_14
            x87_r3_1 = x87_r2_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_1
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, esi - 0x200, var_6c, var_68, var_64, var_60, 
            var_5c, var_58, var_54, var_50, ecx, eax_1, var_44_6, var_40, var_3c, var_38, var_34, 
            var_30, var_2c_2, var_28, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
