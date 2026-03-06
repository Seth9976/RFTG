// 函数名称: sub_4fafb0
// 虚拟地址: 0x4fafb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4fafb0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* eax = sub_4fc3d0(&data_be1cb8, arg3)
    void* eax = sub_4fc3d0(&data_be1cb8, arg3)
    int128_t* eax_1 = sub_4f6e90(arg1, eax, &data_83f3d3)
    void* ebx_2 = arg1 * 0x118 + *sub_4f4890(*(eax + 4))
    int32_t eax_4
    int32_t ecx_1
    
    if (eax_1[0x12].d s<= *eax_1)
        eax_4 = *(ebx_2 + 0x8c)
        ecx_1 = *(ebx_2 + 0x88)
    else
        eax_4 = *(eax_1 + 0x12c)
        ecx_1 = eax_1[0x13].d
    
    void* eax_5 = sub_4f4890(*(ebx_2 + 0xa0))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0xc))))
    float ecx_3
    float edx_2
    
    if (*(eax_1 + 0x7c) == 0)
        ecx_3 = fconvert.s(fconvert.t(*(ebx_2 + 0x94)))
        edx_2 = fconvert.s(fconvert.t(*(ebx_2 + 0x90)))
    else
        ecx_3 = eax_1[8].d
        edx_2 = *(eax_1 + 0x84)
    
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0xc))))
    long double x87_r7_29 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(eax_4))) * fconvert.t(
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(eax_5 + 0x10)) - fconvert.t(*(eax_5 + 8))))
        * x87_r6)))) + fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(eax_4 - 1)))
        * fconvert.t(fconvert.s(fconvert.t(ecx_3) * x87_r6_2))))
    long double x87_r7_31 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(ecx_1))) * fconvert.t(
        fconvert.s(x87_r6
        * fconvert.t(fconvert.s(fconvert.t(*(eax_5 + 0x14)) - fconvert.t(*(eax_5 + 0xc)))))))) + fconvert
        .t(fconvert.s(fconvert.t(fconvert.s(float.t(ecx_1 - 1)))
        * fconvert.t(fconvert.s(x87_r6_2 * fconvert.t(edx_2)))))
    float var_2c_1 = fconvert.s(x87_r7_31)
    return fconvert.s(x87_r7_29)
}
