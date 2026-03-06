// 函数名称: sub_4cadc0
// 虚拟地址: 0x4cadc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4cadc0(float* arg1 @ esi, void* arg2)
{
    // 第一条实际指令: data_307cb1c
    data_307cb1c
    float eax
    float edx
    eax, edx = sub_4cc680(4)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg1)))
    float var_1c = fconvert.s((fconvert.t(arg1[2]) - x87_r6) * fconvert.t(eax) + x87_r6)
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(arg1[1])))
    float var_18 = fconvert.s((fconvert.t(arg1[3]) - x87_r6_1) * fconvert.t(edx) + x87_r6_1)
    long double x87_r7_10 = float.t(1)
    float var_40 = fconvert.s(x87_r7_10)
    long double x87_r6_2 = float.t(0)
    float var_34 = fconvert.s(x87_r6_2)
    float var_28 = fconvert.s(x87_r6_2)
    float var_3c = fconvert.s(x87_r6_2)
    float var_24 = fconvert.s(x87_r6_2)
    float var_30 = fconvert.s(x87_r7_10)
    float var_38 = fconvert.s(fconvert.t(var_1c))
    float var_2c = fconvert.s(fconvert.t(var_18))
    float var_20 = fconvert.s(x87_r7_10)
    float var_64[0x9]
    sub_413350(&var_40, &var_64, 0x840974)
    return sub_4caaf0(4, arg2, &var_64, 0xffffffff, 0xffffffff)
}
