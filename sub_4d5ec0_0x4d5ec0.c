// 函数名称: sub_4d5ec0
// 虚拟地址: 0x4d5ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d5ec0(int32_t arg1, int32_t, float* arg3, float arg4)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg4)
    long double x87_r6 = fconvert.t(arg4)
    float var_48 = fconvert.s(fconvert.t(*arg3) * x87_r6)
    float var_44 = fconvert.s(fconvert.t(arg3[1]) * x87_r6)
    float var_40 = fconvert.s(fconvert.t(arg3[2]) * x87_r6)
    float var_3c = fconvert.s(fconvert.t(arg3[3]) * x87_r6)
    float var_38 = fconvert.s(fconvert.t(arg3[4]) * x87_r6)
    float var_34 = fconvert.s(fconvert.t(arg3[5]) * x87_r6)
    float var_30 = fconvert.s(fconvert.t(arg3[6]) * x87_r6)
    float var_2c = fconvert.s(fconvert.t(arg3[7]) * x87_r6)
    float var_28 = fconvert.s(fconvert.t(arg3[8]) * x87_r6)
    float var_24 = fconvert.s(fconvert.t(arg3[9]) * x87_r6)
    float var_20 = fconvert.s(fconvert.t(arg3[0xa]) * x87_r6)
    float var_1c = fconvert.s(fconvert.t(arg3[0xb]) * x87_r6)
    float var_18 = fconvert.s(fconvert.t(arg3[0xc]) * x87_r6)
    float var_14 = fconvert.s(fconvert.t(arg3[0xd]) * x87_r6)
    float var_10 = fconvert.s(fconvert.t(arg3[0xe]) * x87_r6)
    float var_c = fconvert.s(x87_r6 * fconvert.t(arg3[0xf]))
    __builtin_memcpy(arg1, &var_48, 0x40)
}
