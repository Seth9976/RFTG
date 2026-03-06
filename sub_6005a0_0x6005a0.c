// 函数名称: sub_6005a0
// 虚拟地址: 0x6005a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_6005a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x18)
    int32_t ecx = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    float var_8 = fconvert.s(fconvert.t(*(esi + ecx - 4)))
    int32_t edx = ecx << 2
    void* ecx_1 = esi + ecx - 0x20
    void* eax_1 = esi + edx - 0x80
    long double result = fconvert.t(((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8
        | (var_8 << 0x10 | (var_8 & 0xff00)) << 8)
    double var_90 = fconvert.d(result)
    float var_8_2 = fconvert.s(fconvert.t(*(ecx_1 + 0x18)))
    double var_6c = fconvert.d(fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
        | (var_8_2 << 0x10 | (var_8_2 & 0xff00)) << 8))
    float var_8_4 = fconvert.s(fconvert.t(*(ecx_1 + 0x14)))
    double var_4c = fconvert.d(fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
        | (var_8_4 << 0x10 | (var_8_4 & 0xff00)) << 8))
    float var_8_6 = fconvert.s(fconvert.t(*(ecx_1 + 0x10)))
    double var_74 = fconvert.d(fconvert.t(((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8
        | (var_8_6 << 0x10 | (var_8_6 & 0xff00)) << 8))
    float var_8_8 = fconvert.s(fconvert.t(*(ecx_1 + 0xc)))
    double var_54 = fconvert.d(fconvert.t(((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
        | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8))
    float var_8_10 = fconvert.s(fconvert.t(*(ecx_1 + 8)))
    double var_64 = fconvert.d(fconvert.t(((var_8_10 & 0xff0000) | var_8_10 u>> 0x10) u>> 8
        | (var_8_10 << 0x10 | (var_8_10 & 0xff00)) << 8))
    float var_8_12 = fconvert.s(fconvert.t(*(ecx_1 + 4)))
    double var_84 = fconvert.d(fconvert.t(((var_8_12 & 0xff0000) | var_8_12 u>> 0x10) u>> 8
        | (var_8_12 << 0x10 | (var_8_12 & 0xff00)) << 8))
    float var_8_14 = fconvert.s(fconvert.t(*ecx_1))
    int32_t var_8_15 = ((var_8_14 & 0xff0000) | var_8_14 u>> 0x10) u>> 8
        | (var_8_14 << 0x10 | (var_8_14 & 0xff00)) << 8
    double var_7c = fconvert.d(fconvert.t(var_8_15))
    double var_5c
    double var_44
    double var_3c
    double var_34
    double var_2c
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    if (eax_1 u>= esi)
        long double x87_r6_14 = fconvert.t(3.0)
        long double result_2 = fconvert.t(0.25)
        long double x87_r4_1 = fconvert.t(0.5)
        
        do
            float var_8_16 = fconvert.s(fconvert.t(*(ecx_1 + 0x1c)))
            var_8_15 = ((var_8_16 & 0xff0000) | var_8_16 u>> 0x10) u>> 8
                | (var_8_16 << 0x10 | (var_8_16 & 0xff00)) << 8
            long double result_1 = fconvert.t(var_8_15)
            float var_18_1 = fconvert.s(fconvert.t(*(ecx_1 + 0x18)))
            var_18 = ((var_18_1 & 0xff0000) | var_18_1 u>> 0x10) u>> 8
                | (var_18_1 << 0x10 | (var_18_1 & 0xff00)) << 8
            long double x87_r2_2 = fconvert.t(var_18)
            float var_20_1 = fconvert.s(fconvert.t(*(ecx_1 + 0x14)))
            var_20 = ((var_20_1 & 0xff0000) | var_20_1 u>> 0x10) u>> 8
                | (var_20_1 << 0x10 | (var_20_1 & 0xff00)) << 8
            long double x87_r1_2 = fconvert.t(var_20)
            float var_c_1 = fconvert.s(fconvert.t(*(ecx_1 + 0x10)))
            var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
            var_5c = fconvert.d(fconvert.t(var_c))
            float var_10_1 = fconvert.s(fconvert.t(*(ecx_1 + 0xc)))
            var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
            var_3c = fconvert.d(fconvert.t(var_10))
            float var_14_1 = fconvert.s(fconvert.t(*(ecx_1 + 8)))
            var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
            var_2c = fconvert.d(fconvert.t(var_14))
            float var_1c_1 = fconvert.s(fconvert.t(*(ecx_1 + 4)))
            var_1c = ((var_1c_1 & 0xff0000) | var_1c_1 u>> 0x10) u>> 8
                | (var_1c_1 << 0x10 | (var_1c_1 & 0xff00)) << 8
            var_34 = fconvert.d(fconvert.t(var_1c))
            float var_24_1 = fconvert.s(fconvert.t(*ecx_1))
            var_24 = ((var_24_1 & 0xff0000) | var_24_1 u>> 0x10) u>> 8
                | (var_24_1 << 0x10 | (var_24_1 & 0xff00)) << 8
            ecx_1 -= 0x20
            var_44 = fconvert.d(fconvert.t(var_24))
            *(eax_1 + 0x7c) = fconvert.s((result * x87_r6_14 + result_1) * result_2)
            *(eax_1 + 0x78) = fconvert.s((fconvert.t(var_6c) * x87_r6_14 + x87_r2_2) * result_2)
            *(eax_1 + 0x74) = fconvert.s((fconvert.t(var_4c) * x87_r6_14 + x87_r1_2) * result_2)
            *(eax_1 + 0x70) =
                fconvert.s((fconvert.t(var_74) * x87_r6_14 + fconvert.t(var_5c)) * result_2)
            *(eax_1 + 0x6c) =
                fconvert.s((fconvert.t(var_54) * x87_r6_14 + fconvert.t(var_3c)) * result_2)
            *(eax_1 + 0x68) =
                fconvert.s((fconvert.t(var_64) * x87_r6_14 + fconvert.t(var_2c)) * result_2)
            *(eax_1 + 0x64) =
                fconvert.s((fconvert.t(var_84) * x87_r6_14 + fconvert.t(var_34)) * result_2)
            *(eax_1 + 0x60) =
                fconvert.s((fconvert.t(var_7c) * x87_r6_14 + fconvert.t(var_44)) * result_2)
            *(eax_1 + 0x5c) = fconvert.s((result_1 + fconvert.t(var_90)) * x87_r4_1)
            *(eax_1 + 0x58) = fconvert.s((fconvert.t(var_6c) + x87_r2_2) * x87_r4_1)
            *(eax_1 + 0x54) = fconvert.s((x87_r1_2 + fconvert.t(var_4c)) * x87_r4_1)
            *(eax_1 + 0x50) = fconvert.s((fconvert.t(var_5c) + fconvert.t(var_74)) * x87_r4_1)
            *(eax_1 + 0x4c) = fconvert.s((fconvert.t(var_3c) + fconvert.t(var_54)) * x87_r4_1)
            *(eax_1 + 0x48) = fconvert.s((fconvert.t(var_2c) + fconvert.t(var_64)) * x87_r4_1)
            *(eax_1 + 0x44) = fconvert.s((fconvert.t(var_34) + fconvert.t(var_84)) * x87_r4_1)
            *(eax_1 + 0x40) = fconvert.s((fconvert.t(var_44) + fconvert.t(var_7c)) * x87_r4_1)
            *(eax_1 + 0x3c) = fconvert.s((result_1 * x87_r6_14 + fconvert.t(var_90)) * result_2)
            *(eax_1 + 0x38) = fconvert.s((x87_r2_2 * x87_r6_14 + fconvert.t(var_6c)) * result_2)
            *(eax_1 + 0x34) = fconvert.s((x87_r1_2 * x87_r6_14 + fconvert.t(var_4c)) * result_2)
            *(eax_1 + 0x30) =
                fconvert.s((fconvert.t(var_5c) * x87_r6_14 + fconvert.t(var_74)) * result_2)
            *(eax_1 + 0x2c) =
                fconvert.s((fconvert.t(var_3c) * x87_r6_14 + fconvert.t(var_54)) * result_2)
            *(eax_1 + 0x28) =
                fconvert.s((fconvert.t(var_2c) * x87_r6_14 + fconvert.t(var_64)) * result_2)
            eax_1 -= 0x80
            *(eax_1 + 0xa4) =
                fconvert.s((fconvert.t(var_34) * x87_r6_14 + fconvert.t(var_84)) * result_2)
            *(eax_1 + 0xa0) =
                fconvert.s((fconvert.t(var_44) * x87_r6_14 + fconvert.t(var_7c)) * result_2)
            *(eax_1 + 0x9c) = fconvert.s(result_1)
            *(eax_1 + 0x98) = fconvert.s(x87_r2_2)
            *(eax_1 + 0x94) = fconvert.s(x87_r1_2)
            long double x87_r1_91 = fconvert.t(var_5c)
            *(eax_1 + 0x90) = fconvert.s(x87_r1_91)
            *(eax_1 + 0x8c) = fconvert.s(fconvert.t(var_3c))
            *(eax_1 + 0x88) = fconvert.s(fconvert.t(var_2c))
            *(eax_1 + 0x84) = fconvert.s(fconvert.t(var_34))
            *(eax_1 + 0x80) = fconvert.s(fconvert.t(var_44))
            var_90 = fconvert.d(result_1)
            result = result_1
            var_6c = fconvert.d(x87_r2_2)
            var_4c = fconvert.d(x87_r1_2)
            var_74 = fconvert.d(x87_r1_91)
            var_54 = fconvert.d(fconvert.t(var_3c))
            var_64 = fconvert.d(fconvert.t(var_2c))
            var_84 = fconvert.d(fconvert.t(var_34))
            var_7c = fconvert.d(fconvert.t(var_44))
        while (eax_1 u>= esi)
        
        result = result_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, var_90, edx, var_84, var_7c, var_74, var_6c, 
            var_64, var_5c, var_54, var_4c, var_44, var_3c, var_34, var_2c, var_24, var_20, var_1c, 
            var_18, var_14, var_10, var_c, var_8_15)
    
    return result
}
