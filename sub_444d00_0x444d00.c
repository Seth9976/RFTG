// 函数名称: sub_444d00
// 虚拟地址: 0x444d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_444d00(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_b4
    void var_b4
    int32_t eax_1 = __security_cookie ^ &var_b4
    sub_4dad50()
    long double x87_r7 = float.t(0)
    float var_18 = fconvert.s(x87_r7)
    float var_a4 = fconvert.s(fconvert.t(2048f))
    float var_14 = fconvert.s(fconvert.t(3238f))
    float var_1c = fconvert.s(x87_r7)
    float var_10 = var_a4
    int32_t eax_4
    int80_t result
    result, eax_4 = sub_4fb1d0(&var_1c, &var_1c)
    float var_a0
    __builtin_memcpy(&var_a0, eax_4, 0x40)
    void* eax_5 = sub_4f4890(data_307c104)
    float edx_1 = *(eax_5 + 0xc)
    float edx_2 = *(eax_5 + 0x14)
    var_1c = fconvert.s(fconvert.t(*(eax_5 + 0x10)) - fconvert.t(*(eax_5 + 8)))
    float var_ac_2 = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(edx_2) - fconvert.t(edx_1)))))
    long double x87_r5 = fconvert.t(0.5)
    var_1c = fconvert.s(fconvert.t(fconvert.s(fneg(fconvert.t(var_1c)))) * x87_r5)
    float var_18_2 = fconvert.s(x87_r5 * fconvert.t(var_ac_2))
    float var_94
    long double x87_r5_2 = fconvert.t(var_94)
    var_a0 = fconvert.s(fconvert.t(var_1c) * x87_r5_2)
    float var_9c = fconvert.s(x87_r5_2 * fconvert.t(var_18_2))
    void var_100
    __builtin_memcpy(&var_100, &var_a0, 0x40)
    sub_444a50(arg1, arg2)
    void* eax_8 = data_27e7fe4
    __builtin_memcpy(eax_8 + 0x9c, 0x83faf8, 0x40)
    *(eax_8 + 0xdc) = 0
    sub_4e2080()
    sub_5a6aba(eax_1 ^ &var_b4)
    return result
}
