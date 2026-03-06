// 函数名称: sub_48b920
// 虚拟地址: 0x48b920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_48b920(float* arg1)
{
    // 第一条实际指令: float var_34[0x5]
    float var_34[0x5]
    float* eax = sub_4131a0(arg1, &var_34)
    float ecx = *eax
    float edx = eax[1]
    float eax_1 = eax[2]
    float var_44[0x4]
    float* eax_2
    int16_t x87control
    eax_2, x87control = sub_4131a0(&data_8409cc, &var_44)
    long double x87_r7_4 = float.t(1)
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(eax_2[1]) * fconvert.t(edx)
        + fconvert.t(ecx) * fconvert.t(*eax_2) + fconvert.t(eax_2[2]) * fconvert.t(eax_1)))
    x87_r6_4 - x87_r7_4
    float eax_3
    eax_3.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_3:1.b & 1) == 0)
        return float.t(0)
    
    long double x87_r6_5 = fconvert.t(-1f)
    x87_r6_5 - x87_r7_4
    eax_3.w = (x87_r6_5 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800
    int32_t mxcsr
    
    if ((eax_3:1.b & 1) != 0)
        return fconvert.t(fconvert.s(sub_687140(mxcsr, x87control, x87_r7_4)))
    return fconvert.t(data_be1acc)
}
