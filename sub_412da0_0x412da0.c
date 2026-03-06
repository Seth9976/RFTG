// 函数名称: sub_412da0
// 虚拟地址: 0x412da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_412da0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_c0 = sub_4ddf40(data_27e7a70)
    sub_4dda80(fconvert.s(float.t(1)))
    long double x87_r7_1 = fconvert.t(-0f)
    float var_3c = fconvert.s(x87_r7_1)
    float var_38 = fconvert.s(x87_r7_1)
    float var_34 = fconvert.s(fconvert.t(-1f))
    float var_18 = var_3c
    int32_t* const var_c0_2 = &data_840b64
    float var_14 = var_38
    float var_10 = var_34
    sub_4ddb00(0, var_34)
    long double x87_r7_3 = float.t(1)
    float var_1c = fconvert.s(x87_r7_3)
    var_18 = fconvert.s(x87_r7_3)
    float ecx_3 = var_18
    float var_14_1 = fconvert.s(x87_r7_3)
    var_3c = var_1c
    float var_38_1 = ecx_3
    float var_30 = fconvert.s(float.t(0))
    float var_34_1 = var_14_1
    sub_4dd9d0(&var_3c)
    float* eax_6
    int32_t edx_2
    eax_6, edx_2 = sub_4126f0()
    float var_2c[0x4]
    __builtin_memcpy(&var_2c, eax_6, 0x20)
    int128_t var_ac[0x4]
    sub_406370(&var_ac, edx_2, &var_2c)
    void* eax_8 = data_27e7fe4
    void var_6c
    __builtin_memcpy(&var_6c, &var_ac, 0x40)
    *(eax_8 + 0xdc) = 1
    __builtin_memcpy(eax_8 + 0x9c, &var_6c, 0x40)
    sub_4e2000(&var_18)
    void var_fc
    __builtin_memcpy(&var_fc, sub_412c80(&var_ac), 0x40)
    sub_412870()
    void* eax_11 = data_27e7fe4
    __builtin_memcpy(eax_11 + 0x9c, 0x83faf8, 0x40)
    *(eax_11 + 0xdc) = 0
    int32_t result = sub_4e2080()
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
