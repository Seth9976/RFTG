// 函数名称: sub_405a60
// 虚拟地址: 0x405a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_405a60(int32_t* arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    void* eax = data_27e7fd0
    float var_20 = fconvert.s(x87_r7)
    float var_68 = fconvert.s(x87_r7)
    float var_18 = fconvert.s(float.t(*(eax + 0x14)))
    float var_6c = var_20
    float var_64 = var_18
    float var_60 = fconvert.s(float.t(*(eax + 0x18)))
    void* eax_3 = data_27e7a40
    *(eax_3 + 0x40)
    long double x87_r6 = float.t(1)
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(eax_3 + 0x3c))))
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r6 / x87_r6)) * x87_r6_1))
    float var_7c = fconvert.s(fneg(x87_r6_3))
    float var_78 = fconvert.s(fneg(x87_r6_1))
    var_18 = fconvert.s(x87_r6_3)
    float var_70 = fconvert.s(x87_r6_1)
    float var_74 = var_18
    int32_t var_40 = 0
    int32_t var_38 = 0
    int32_t var_3c = 0
    int32_t var_34 = 0x3f800000
    int32_t var_2c = 0
    int32_t var_30 = 0
    int32_t var_28 = 0
    void var_5c
    __builtin_memcpy(&var_5c, &var_40, 0x1c)
    int32_t edx_2
    int80_t st0
    st0, edx_2 = sub_4c6230(&var_18)
    int32_t* eax_6 = sub_4e4c10(&var_18, edx_2, &var_7c, &var_18)
    *arg1 = *eax_6
    arg1[1] = eax_6[1]
    arg1[2] = eax_6[2]
    arg1[3] = eax_6[3]
    int32_t eax_7 = eax_6[5]
    arg1[4] = eax_6[4]
    arg1[5] = eax_7
    return arg1
}
