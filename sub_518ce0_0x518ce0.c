// 函数名称: sub_518ce0
// 虚拟地址: 0x518ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_518ce0(float* arg1, int32_t* arg2, float* arg3 @ esi)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg2[3])
    long double x87_r6 = fconvert.t(arg2[3])
    long double x87_r4 = fconvert.t(*arg2)
    long double x87_r7_2 = x87_r4
    long double x87_r3_1 = fconvert.t(arg2[1])
    long double x87_r5_4 = x87_r3_1
    long double x87_r3_3 = fconvert.t(arg2[2])
    long double x87_r4_6 = x87_r3_3
    long double x87_r3_5 = fconvert.t(fconvert.s(fconvert.t(arg1[1]) * x87_r3_1
        + fconvert.t(*arg1) * x87_r4 + fconvert.t(arg1[3]) * x87_r6 + x87_r3_3 * fconvert.t(arg1[2])))
    long double temp1 = fconvert.t(0f)
    x87_r3_5 - temp1
    float eax_3
    eax_3.w = (x87_r3_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_5, temp1) ? 1 : 0) << 0xa
        | (x87_r3_5 == temp1 ? 1 : 0) << 0xe | 0x2000
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        long double x87_r3_6 = fconvert.t(-1.0)
        x87_r5_4 = fconvert.t(fconvert.s(x87_r5_4 * x87_r3_6))
        x87_r7_2 = fconvert.t(fconvert.s(x87_r7_2 * x87_r3_6))
        x87_r4_6 = fconvert.t(fconvert.s(x87_r4_6 * x87_r3_6))
        x87_r6 = fconvert.t(fconvert.s(x87_r6 * x87_r3_6))
    
    float var_20_2 = fconvert.s(x87_r6 + fconvert.t(arg1[3]))
    float var_28_2 = fconvert.s(x87_r5_4 + fconvert.t(arg1[1]))
    long double x87_r7_10 = x87_r4_6 + fconvert.t(arg1[2])
    *arg3 = fconvert.s(x87_r7_2 + fconvert.t(*arg1))
    arg3[1] = var_28_2
    arg3[2] = fconvert.s(x87_r7_10)
    arg3[3] = var_20_2
    float var_18_2 = fconvert.s(fconvert.t(arg2[5]) + fconvert.t(arg1[5]))
    long double x87_r7_16 = fconvert.t(arg2[6]) + fconvert.t(arg1[6])
    arg3[4] = fconvert.s(fconvert.t(arg1[4]) + fconvert.t(arg2[4]))
    arg3[5] = var_18_2
    arg3[6] = fconvert.s(x87_r7_16)
    float result = fconvert.s(fconvert.t(arg1[8]) + fconvert.t(arg2[8]))
    long double x87_r7_22 = fconvert.t(arg1[9]) + fconvert.t(arg2[9])
    arg3[7] = fconvert.s(fconvert.t(arg1[7]) + fconvert.t(arg2[7]))
    arg3[8] = result
    arg3[9] = fconvert.s(x87_r7_22)
    arg2.b = arg2[0xa].b
    arg3[0xa].b = arg2.b
    return result
}
