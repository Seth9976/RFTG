// 函数名称: sub_4da360
// 虚拟地址: 0x4da360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4da360(float arg1, float arg2, float arg3, float arg4, float arg5)
{
    // 第一条实际指令: float var_4c[0x9]
    float var_4c[0x9]
    float* esi = &var_4c
    sub_4db600(esi, fconvert.s(fconvert.t(arg1)), fconvert.s(fconvert.t(arg2)), 
        fconvert.s(fconvert.t(arg3)), fconvert.s(fconvert.t(arg4)), fconvert.s(fconvert.t(arg5)))
    long double x87_r7_5 = float.t(0)
    data_307c784
    float var_14 = fconvert.s(x87_r7_5)
    long double x87_r7_6 = float.t(1)
    float var_10 = fconvert.s(x87_r7_6)
    float var_28 = fconvert.s(x87_r7_5)
    float var_c = fconvert.s(x87_r7_6)
    float var_24 = var_14
    float var_20 = var_10
    float var_1c = var_c
    return sub_4d9b80(var_c, var_10, nullptr, esi, &var_28, &data_be4aac)
}
