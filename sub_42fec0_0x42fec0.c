// 函数名称: sub_42fec0
// 虚拟地址: 0x42fec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_42fec0(char arg1, int32_t arg2)
{
    // 第一条实际指令: void var_18
    void var_18
    int32_t* eax
    int80_t result
    result, eax = sub_4674c0(&var_18, arg1)
    float ecx_1 = eax[1]
    float eax_1 = eax[3]
    long double x87_r5 = fconvert.t(0.5)
    float var_10 = fconvert.s((fconvert.t(eax[2]) + fconvert.t(*eax)) * x87_r5)
    float* entry_ebx
    __builtin_memcpy(entry_ebx, &data_be4c5c, 0x20)
    long double x87_r5_2 = fconvert.t(eax_1)
    long double x87_r3 = fconvert.t(ecx_1)
    entry_ebx[5] = fconvert.s(fconvert.t(var_10))
    entry_ebx[6] = fconvert.s(fconvert.t(fconvert.s(x87_r5 * (x87_r5_2 + x87_r3))))
    entry_ebx[7] = fconvert.s(float.t(0))
    *entry_ebx = fconvert.s(fconvert.t(fconvert.s(x87_r5_2 - x87_r3)) / fconvert.t(data_307cc90))
    return result
}
