// 函数名称: sub_5ea1a0
// 虚拟地址: 0x5ea1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5ea1a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0x18)
    int32_t ebx = *(arg1 + 0x18)
    int32_t ebx_1 = ebx - 0x180
    int32_t var_58 = ebx_1
    int32_t eax = sub_685f40(float.t(ebx) * fconvert.t(*(arg1 + 8)))
    float* ecx = *(arg1 + 0x10)
    void* i = eax + ecx
    float var_34 = fconvert.s(fconvert.t(*ecx))
    float var_34_1 = fconvert.s(fconvert.t(ecx[1]))
    float var_34_2 = fconvert.s(fconvert.t(ecx[2]))
    int32_t var_20 =
        ((var_34 & 0xff0000) | var_34 u>> 0x10) u>> 8 | (var_34 << 0x10 | (var_34 & 0xff00)) << 8
    float var_34_3 = fconvert.s(fconvert.t(ecx[3]))
    int32_t var_24 = ((var_34_1 & 0xff0000) | var_34_1 u>> 0x10) u>> 8
        | (var_34_1 << 0x10 | (var_34_1 & 0xff00)) << 8
    int32_t var_28 = ((var_34_2 & 0xff0000) | var_34_2 u>> 0x10) u>> 8
        | (var_34_2 << 0x10 | (var_34_2 & 0xff00)) << 8
    int32_t edi = 0
    int32_t var_2c = ((var_34_3 & 0xff0000) | var_34_3 u>> 0x10) u>> 8
        | (var_34_3 << 0x10 | (var_34_3 & 0xff00)) << 8
    float var_34_4 = fconvert.s(fconvert.t(ecx[4]))
    float var_34_5 = fconvert.s(fconvert.t(ecx[5]))
    int32_t var_30 = ((var_34_4 & 0xff0000) | var_34_4 u>> 0x10) u>> 8
        | (var_34_4 << 0x10 | (var_34_4 & 0xff00)) << 8
    int32_t var_34_6 = ((var_34_5 & 0xff0000) | var_34_5 u>> 0x10) u>> 8
        | (var_34_5 << 0x10 | (var_34_5 & 0xff00)) << 8
    float var_54
    float var_50
    float var_4c
    float var_48
    float var_44
    float var_40
    int32_t var_1c
    float var_18
    float var_14
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (ecx u< i)
        long double x87_r7_8 = fconvert.t(0.5)
        void* edx_24 = &ecx[2]
        void* ecx_1 = &ecx[2]
        
        do
            edi += eax
            edx_24 += 0x18
            
            if (edi * 2 s>= ebx_1)
                long double x87_r6_1 = fconvert.t(var_20)
                var_40 = fconvert.s(x87_r6_1)
                long double x87_r5_1 = fconvert.t(var_24)
                var_44 = fconvert.s(x87_r5_1)
                long double x87_r4_1 = fconvert.t(var_28)
                var_48 = fconvert.s(x87_r4_1)
                long double x87_r3_1 = fconvert.t(var_2c)
                var_4c = fconvert.s(x87_r3_1)
                long double x87_r2_1 = fconvert.t(var_30)
                var_50 = fconvert.s(x87_r2_1)
                long double x87_r1_1 = fconvert.t(var_34_6)
                *(ecx_1 - 8) = ((var_40 & 0xff0000) | var_40 u>> 0x10) u>> 8
                    | (var_40 << 0x10 | (var_40 & 0xff00)) << 8
                *(ecx_1 - 4) = ((var_44 & 0xff0000) | var_44 u>> 0x10) u>> 8
                    | (var_44 << 0x10 | (var_44 & 0xff00)) << 8
                *ecx_1 = ((var_48 & 0xff0000) | var_48 u>> 0x10) u>> 8
                    | (var_48 << 0x10 | (var_48 & 0xff00)) << 8
                *(ecx_1 + 4) = ((var_4c & 0xff0000) | var_4c u>> 0x10) u>> 8
                    | (var_4c << 0x10 | (var_4c & 0xff00)) << 8
                *(ecx_1 + 8) = ((var_50 & 0xff0000) | var_50 u>> 0x10) u>> 8
                    | (var_50 << 0x10 | (var_50 & 0xff00)) << 8
                var_54 = fconvert.s(x87_r1_1)
                ecx_1 += 0x18
                *(ecx_1 - 0xc) = ((var_54 & 0xff0000) | var_54 u>> 0x10) u>> 8
                    | (var_54 << 0x10 | (var_54 & 0xff00)) << 8
                float var_8_1 = fconvert.s(fconvert.t(*(edx_24 - 8)))
                var_8 = ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8
                var_20 = fconvert.s((x87_r6_1 + fconvert.t(var_8)) * x87_r7_8)
                float var_c_1 = fconvert.s(fconvert.t(*(edx_24 - 4)))
                var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
                var_24 = fconvert.s((x87_r5_1 + fconvert.t(var_c)) * x87_r7_8)
                float var_10_1 = fconvert.s(fconvert.t(*edx_24))
                var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
                var_28 = fconvert.s((x87_r4_1 + fconvert.t(var_10)) * x87_r7_8)
                float var_14_1 = fconvert.s(fconvert.t(*(edx_24 + 4)))
                var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                    | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
                var_2c = fconvert.s((x87_r3_1 + fconvert.t(var_14)) * x87_r7_8)
                float var_18_1 = fconvert.s(fconvert.t(*(edx_24 + 8)))
                var_18 = ((var_18_1 & 0xff0000) | var_18_1 u>> 0x10) u>> 8
                    | (var_18_1 << 0x10 | (var_18_1 & 0xff00)) << 8
                var_30 = fconvert.s((x87_r2_1 + fconvert.t(var_18)) * x87_r7_8)
                float var_1c_1 = fconvert.s(fconvert.t(*(edx_24 + 0xc)))
                ebx_1 = var_58
                var_1c = ((var_1c_1 & 0xff0000) | var_1c_1 u>> 0x10) u>> 8
                    | (var_1c_1 << 0x10 | (var_1c_1 & 0xff00)) << 8
                edi -= ebx_1
                var_34_6 = fconvert.s((x87_r1_1 + fconvert.t(var_1c)) * x87_r7_8)
        while (ecx_1 - 8 u< i)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, var_58, var_54, var_50, var_4c, var_48, var_44, 
            var_40, eax, i, var_34_6, var_30, var_2c, var_28, var_24, var_20, var_1c, var_18, var_14, 
            var_10, var_c, var_8)
}
