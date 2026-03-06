// 函数名称: sub_5d1410
// 虚拟地址: 0x5d1410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5d1410(float arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_28 = ecx
    double var_1c = fconvert.d(fconvert.t(-0.78539816339744828))
    double var_24 = fconvert.d(fconvert.t(0.78539816339744828))
    long double x87_r7_2 = fconvert.t(-0.185407355f)
    float var_28_1 = fconvert.s(x87_r7_2)
    int32_t edx
    int32_t edx_1
    long double st0
    st0, edx_1 = sub_5d1350(arg2, edx, arg1)
    float var_10 = fconvert.s(st0)
    long double x87_r7_4 = fconvert.t(0.185407355f)
    float var_28_2 = fconvert.s(x87_r7_4)
    int32_t ecx_1
    int32_t edx_2
    long double st0_1
    st0_1, ecx_1, edx_2 = sub_5d1350(arg2, edx_1, arg1)
    float var_14 = fconvert.s(st0_1)
    float var_2c_1
    var_2c_1.q = fconvert.d(fconvert.t(-1.5707963267948966))
    long double st0_2 = abs(var_2c_1)
    long double temp1 = fconvert.t(0.034906585039886591)
    st0_2 - temp1
    
    if ((((st0_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0_2, temp1) ? 1 : 0) << 0xa
            | (st0_2 == temp1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
        long double x87_r7_8 = fconvert.t(0.61803398899999995)
        long double x87_r6_1 = fconvert.t(0.38196601100000005)
        long double x87_r5_1 = fconvert.t(fconvert.s(x87_r7_2))
        long double x87_r4_1 = fconvert.t(fconvert.s(x87_r7_4))
        
        while (true)
            long double x87_r3_1 = fconvert.t(var_10)
            int32_t var_28_3 = ecx_1
            long double x87_r2_1 = fconvert.t(var_14)
            x87_r2_1 - x87_r3_1
            float var_c_1
            float var_8_1
            
            if ((((x87_r2_1 < x87_r3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_1, x87_r3_1) ? 1 : 0) << 0xa
                    | (x87_r2_1 == x87_r3_1 ? 1 : 0) << 0xe | 0x1000):1.b & 0x41) != 0)
                var_1c = fconvert.d(x87_r5_1)
                var_8_1 = fconvert.s(x87_r2_1)
                var_10 = fconvert.s(x87_r3_1)
                var_c_1 = fconvert.s(x87_r7_8 * fconvert.t(var_24) + x87_r6_1 * x87_r5_1)
                float var_28_5 = fconvert.s(fconvert.t(var_c_1))
                long double st0_4
                st0_4, ecx_1, edx_2 = sub_5d1350(arg2, edx_2, arg1)
                var_14 = fconvert.s(st0_4)
            else
                var_24 = fconvert.d(x87_r4_1)
                var_c_1 = fconvert.s(x87_r5_1)
                var_14 = fconvert.s(x87_r2_1)
                var_8_1 = fconvert.s(x87_r7_8 * fconvert.t(var_1c) + x87_r6_1 * x87_r4_1)
                float var_28_4 = fconvert.s(fconvert.t(var_8_1))
                long double st0_3
                st0_3, ecx_1, edx_2 = sub_5d1350(arg2, edx_2, arg1)
                var_10 = fconvert.s(st0_3)
            
            float var_2c_2
            var_2c_2.q = fconvert.d(fconvert.t(var_1c) - fconvert.t(var_24))
            long double st0_5 = abs(var_2c_2)
            long double temp2_1 = fconvert.t(0.034906585039886591)
            st0_5 - temp2_1
            
            if ((((st0_5 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(st0_5, temp2_1) ? 1 : 0) << 0xa
                    | (st0_5 == temp2_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                break
            
            x87_r7_8 = fconvert.t(0.61803398899999995)
            x87_r5_1 = fconvert.t(var_8_1)
            x87_r4_1 = fconvert.t(var_c_1)
            x87_r6_1 = fconvert.t(0.38196601100000005)
    
    long double x87_r7_23 = fconvert.t(var_10)
    long double x87_r6_5 = fconvert.t(var_14)
    x87_r6_5 - x87_r7_23
    
    if ((((x87_r6_5 < x87_r7_23 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_23) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_23 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        return fconvert.t(fconvert.s(x87_r7_23))
    
    return fconvert.t(fconvert.s(x87_r6_5))
}
