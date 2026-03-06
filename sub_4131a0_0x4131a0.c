// 函数名称: sub_4131a0
// 虚拟地址: 0x4131a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4131a0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r7 = fconvert.t(arg1[1])
    int32_t ecx
    int32_t var_20 = ecx
    long double x87_r6 = fconvert.t(*arg1)
    long double x87_r5 = fconvert.t(arg1[2])
    long double x87_r7_6 = fconvert.t(9.99999975e-06f)
    long double x87_r6_4 = fconvert.t(fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(
        x87_r7 * x87_r7 + x87_r6 * x87_r6 + x87_r5 * x87_r5))))))
    x87_r6_4 - x87_r7_6
    
    if ((((x87_r6_4 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
        long double x87_r6_5 = float.t(1)
        long double x87_r6_6 = fconvert.t(fconvert.s(x87_r6_5 / x87_r6_5))
        *arg2 = fconvert.s(fconvert.t(*arg1) * x87_r6_6)
        arg2[1] = fconvert.s(x87_r6_6 * fconvert.t(arg1[1]))
        arg2[2] = fconvert.s(x87_r6_6 * fconvert.t(arg1[2]))
        return arg2
    
    sub_4c5870("length > EPSILON", &data_83f3d3, "c:\ax2010\engine\Vec3.cpp", 0x12e, "Norm")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
