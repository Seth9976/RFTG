// 函数名称: sub_413350
// 虚拟地址: 0x413350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_413350(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: float var_28 = fconvert.s(fconvert.t(*arg3) * fconvert.t(*arg1) + fconvert.t(arg3[1]) * fconvert.t(arg1[3]) + fconvert.t(arg3[2]) * fconvert.t(arg1[6]))
    float var_28 = fconvert.s(fconvert.t(*arg3) * fconvert.t(*arg1)
        + fconvert.t(arg3[1]) * fconvert.t(arg1[3]) + fconvert.t(arg3[2]) * fconvert.t(arg1[6]))
    float var_24 = fconvert.s(fconvert.t(*arg3) * fconvert.t(arg1[1])
        + fconvert.t(arg3[1]) * fconvert.t(arg1[4]) + fconvert.t(arg1[7]) * fconvert.t(arg3[2]))
    float var_20 = fconvert.s(fconvert.t(arg1[5]) * fconvert.t(arg3[1])
        + fconvert.t(arg1[2]) * fconvert.t(*arg3) + fconvert.t(arg1[8]) * fconvert.t(arg3[2]))
    float var_1c = fconvert.s(fconvert.t(arg3[3]) * fconvert.t(*arg1)
        + fconvert.t(arg3[4]) * fconvert.t(arg1[3]) + fconvert.t(arg3[5]) * fconvert.t(arg1[6]))
    float var_18 = fconvert.s(fconvert.t(arg3[3]) * fconvert.t(arg1[1])
        + fconvert.t(arg3[4]) * fconvert.t(arg1[4]) + fconvert.t(arg3[5]) * fconvert.t(arg1[7]))
    float var_14 = fconvert.s(fconvert.t(arg1[5]) * fconvert.t(arg3[4])
        + fconvert.t(arg1[2]) * fconvert.t(arg3[3]) + fconvert.t(arg3[5]) * fconvert.t(arg1[8]))
    float var_10 = fconvert.s(fconvert.t(arg3[7]) * fconvert.t(arg1[3])
        + fconvert.t(arg3[6]) * fconvert.t(*arg1) + fconvert.t(arg3[8]) * fconvert.t(arg1[6]))
    float var_c = fconvert.s(fconvert.t(arg3[7]) * fconvert.t(arg1[4])
        + fconvert.t(arg3[6]) * fconvert.t(arg1[1]) + fconvert.t(arg1[7]) * fconvert.t(arg3[8]))
    float var_8 = fconvert.s(fconvert.t(arg3[7]) * fconvert.t(arg1[5])
        + fconvert.t(arg3[6]) * fconvert.t(arg1[2]) + fconvert.t(arg3[8]) * fconvert.t(arg1[8]))
    __builtin_memcpy(arg2, &var_28, 0x24)
}
