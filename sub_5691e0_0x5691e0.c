// 函数名称: sub_5691e0
// 虚拟地址: 0x5691e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5691e0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_18 = ecx
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[2])))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg1[1])))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg1[3])))
    long double x87_r7_12 = sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6
        + x87_r6 * x87_r6 + x87_r5 * x87_r5)))) + fconvert.t(*arg1)
    long double x87_r6_4 = fconvert.t(*arg2)
    x87_r6_4 - x87_r7_12
    int16_t result
    
    if ((((x87_r6_4 < x87_r7_12 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_12) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_12 ? 1 : 0) << 0xe):1.b & 1) != 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}
