// 函数名称: sub_4cae70
// 虚拟地址: 0x4cae70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4cae70(int32_t arg1, float* arg2 @ esi, void* arg3, float arg4)
{
    // 第一条实际指令: float eax
    float eax
    float edx
    eax, edx = sub_4cc680(arg1)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    float var_18 = fconvert.s((fconvert.t(arg2[2]) - x87_r6) * fconvert.t(eax) + x87_r6)
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(arg2[1])))
    float var_14 = fconvert.s((fconvert.t(arg2[3]) - x87_r6_1) * fconvert.t(edx) + x87_r6_1)
    long double x87_r7_10 = fconvert.t(arg4)
    float var_3c = fconvert.s(x87_r7_10)
    long double x87_r6_2 = float.t(0)
    float var_30 = fconvert.s(x87_r6_2)
    float var_24 = fconvert.s(x87_r6_2)
    float var_38 = fconvert.s(x87_r6_2)
    float var_20 = fconvert.s(x87_r6_2)
    float var_2c = fconvert.s(x87_r7_10)
    float var_34 = fconvert.s(fconvert.t(var_18))
    float var_28 = fconvert.s(fconvert.t(var_14))
    float var_1c = fconvert.s(float.t(1))
    float var_60[0x9]
    sub_413350(&var_3c, &var_60, 0x840974)
    return sub_4caaf0(arg1, arg3, &var_60, 0xffffffff, 0xffffffff)
}
