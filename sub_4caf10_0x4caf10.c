// 函数名称: sub_4caf10
// 虚拟地址: 0x4caf10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4caf10(int32_t arg1, int32_t arg2, float* arg3, void* arg4, int32_t arg5, int32_t* arg6, int32_t* arg7, float arg8)
{
    // 第一条实际指令: float eax
    float eax
    float edx
    eax, edx = sub_4cc680(arg1)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    int32_t ebx = *arg7
    float var_1c = fconvert.s((fconvert.t(arg3[2]) - x87_r6) * fconvert.t(eax) + x87_r6)
    int32_t esi_1 = *arg6
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    float var_18 = fconvert.s((fconvert.t(arg3[3]) - x87_r6_1) * fconvert.t(edx) + x87_r6_1)
    long double x87_r7_10 = fconvert.t(arg8)
    float var_40 = fconvert.s(x87_r7_10)
    long double x87_r6_2 = float.t(0)
    float var_34 = fconvert.s(x87_r6_2)
    float var_28 = fconvert.s(x87_r6_2)
    float var_3c = fconvert.s(x87_r6_2)
    float var_24 = fconvert.s(x87_r6_2)
    float var_30 = fconvert.s(x87_r7_10)
    float var_38 = fconvert.s(fconvert.t(var_1c))
    float var_2c = fconvert.s(fconvert.t(var_18))
    float var_20 = fconvert.s(float.t(1))
    float var_64[0x9]
    sub_413350(&var_40, &var_64, 0x840974)
    return sub_4caaf0(arg1, arg4, &var_64, esi_1, ebx)
}
