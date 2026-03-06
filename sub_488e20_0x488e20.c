// 函数名称: sub_488e20
// 虚拟地址: 0x488e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_488e20(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(arg2[5]) - fconvert.t(arg1[5])))
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(arg2[5]) - fconvert.t(arg1[5])))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg2[4]) - fconvert.t(arg1[4])))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg2[6]) - fconvert.t(arg1[6])))
    long double x87_r7_10 =
        fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6 * x87_r6 + x87_r5 * x87_r5))
    long double temp1 = fconvert.t(9.9999997473787516e-05)
    x87_r7_10 - temp1
    int16_t result
    
    if ((((x87_r7_10 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_10, temp1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        long double x87_r7_19 = fconvert.t(fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg1[3])))
        long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg1)))
        long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg1[1])))
        long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[2])))
        long double x87_r7_24 = fconvert.t(fconvert.s(x87_r7_19 * x87_r7_19 + x87_r6_4 * x87_r6_4
            + x87_r5_2 * x87_r5_2 + x87_r4_2 * x87_r4_2))
        long double temp2_1 = fconvert.t(0.00100000005f)
        x87_r7_24 - temp2_1
        
        if ((((x87_r7_24 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_24, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_24 == temp2_1 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
            result.b = 0
            return result
    
    result.b = 1
    return result
}
