// 函数名称: sub_413450
// 虚拟地址: 0x413450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_413450(float* arg1, float* arg2, float* arg3, float* arg4 @ esi, int32_t arg5)
{
    // 第一条实际指令: float var_14 = fconvert.s(fconvert.t(arg4[2]) * fconvert.t(arg2[1]) - fconvert.t(arg4[1]) * fconvert.t(arg2[2]))
    float var_14 = fconvert.s(fconvert.t(arg4[2]) * fconvert.t(arg2[1])
        - fconvert.t(arg4[1]) * fconvert.t(arg2[2]))
    float var_10 =
        fconvert.s(fconvert.t(*arg4) * fconvert.t(arg2[2]) - fconvert.t(*arg2) * fconvert.t(arg4[2]))
    float var_c =
        fconvert.s(fconvert.t(*arg2) * fconvert.t(arg4[1]) - fconvert.t(*arg4) * fconvert.t(arg2[1]))
    float var_20 = fconvert.s(fconvert.t(arg3[2]) * fconvert.t(arg1[1])
        - fconvert.t(arg3[1]) * fconvert.t(arg1[2]))
    float var_1c =
        fconvert.s(fconvert.t(arg1[2]) * fconvert.t(*arg3) - fconvert.t(arg3[2]) * fconvert.t(*arg1))
    float var_18 =
        fconvert.s(fconvert.t(arg3[1]) * fconvert.t(*arg1) - fconvert.t(arg1[1]) * fconvert.t(*arg3))
    float var_68 = fconvert.s(fconvert.t(*arg4))
    float var_64 = fconvert.s(fconvert.t(arg4[1]))
    float var_60 = fconvert.s(fconvert.t(arg4[2]))
    float var_5c = fconvert.s(fconvert.t(*arg2))
    float var_58 = fconvert.s(fconvert.t(arg2[1]))
    float var_54 = fconvert.s(fconvert.t(arg2[2]))
    float var_50 = fconvert.s(fconvert.t(var_14))
    float var_4c = fconvert.s(fconvert.t(var_10))
    float var_48 = fconvert.s(fconvert.t(var_c))
    float var_44 = fconvert.s(fconvert.t(*arg3))
    float var_34 = fconvert.s(fconvert.t(arg1[1]))
    float var_24 = fconvert.s(fconvert.t(var_18))
    float var_40_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg1))))
    float var_38_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3[1]))))))
    float var_3c_1 = fconvert.s(fconvert.t(var_20))
    float var_2c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3[2]))))))
    float* result = &var_68
    float var_30_1 = fconvert.s(fconvert.t(var_1c))
    float var_28 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[2]))))))
    sub_413350(result, arg5, &var_44)
    return result
}
