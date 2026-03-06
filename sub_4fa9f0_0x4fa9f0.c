// 函数名称: sub_4fa9f0
// 虚拟地址: 0x4fa9f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4fa9f0(int32_t arg1, int32_t* arg2, int32_t arg3, float arg4, float arg5)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_b0 = esi
    void var_a4
    void var_64
    __builtin_memcpy(&var_64, sub_4fab00(esi, &var_a4, arg1, arg4), 0x40)
    void var_14
    int32_t* eax_5 = sub_4f4990(&var_14, arg4, 
        arg1 * 0x118 + *sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg3) + 4)) + 0x1c, &var_14, arg4)
    long double x87_r7 = fconvert.t(eax_5[2])
    long double x87_r5 = fconvert.t(*eax_5)
    float* eax_6 = arg5
    long double x87_r5_2 = fconvert.t(eax_5[3])
    long double x87_r3 = fconvert.t(eax_5[1])
    long double x87_r4_3 = x87_r3
    long double x87_r3_6 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7 - x87_r5)) / fconvert.t(*eax_6)))
    long double x87_r2_1 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_2 - x87_r3)) / fconvert.t(eax_6[1])))
    x87_r2_1 - x87_r3_6
    eax_6.w = (x87_r2_1 < x87_r3_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_1, x87_r3_6) ? 1 : 0) << 0xa
        | (x87_r2_1 == x87_r3_6 ? 1 : 0) << 0xe | 0x1000
    
    if ((eax_6:1.b & 0x41) != 0)
        x87_r4_3 = x87_r2_1
    else
        x87_r3_6 = x87_r2_1
    
    long double x87_r4_5 = fconvert.t(0.5)
    __builtin_memcpy(arg2, &var_64, 0x40)
    float var_c_1 = fconvert.s((x87_r7 + x87_r5) * x87_r4_5)
    float var_8_2 = fconvert.s(x87_r4_5 * (x87_r4_3 + x87_r5_2))
    arg2[3] = fconvert.s(fconvert.t(fconvert.s(x87_r3_6)))
    long double x87_r7_6 = float.t(0)
    *arg2 = var_c_1
    arg2[4] = fconvert.s(x87_r7_6)
    arg2[1] = var_8_2
    arg2[5] = fconvert.s(x87_r7_6)
    return arg2
}
