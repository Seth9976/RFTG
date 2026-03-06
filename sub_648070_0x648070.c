// 函数名称: sub_648070
// 虚拟地址: 0x648070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_648070(int32_t arg1 @ esi, void* arg2, double arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg3)
    long double x87_r7 = fconvert.t(arg3)
    int32_t eax = sub_685f40(x87_r7)
    void* edi = *(*(arg2 + 0x1c) + (arg4 << 2) + 0xb24)
    arg3:4.d = eax
    long double x87_r7_1 = x87_r7 - float.t(arg3:4.d)
    long double result_1 = float.t(1)
    long double x87_r7_3 = x87_r7_1 * fconvert.t(*(arg1 + (eax << 3) + 8))
        + (result_1 - x87_r7_1) * fconvert.t(*(arg1 + (eax << 3)))
    int32_t edx_1 = sub_685f40(x87_r7_3)
    arg3:4.d = edx_1
    long double result = x87_r7_3 - float.t(arg3:4.d)
    long double x87_r4_1 = float.t(0)
    x87_r4_1 - result
    int32_t eax_1
    eax_1.w = (x87_r4_1 < result ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, result) ? 1 : 0) << 0xa
        | (x87_r4_1 == result ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p) && edx_1 s> 0)
        edx_1 -= 1
        result_1 = result
    
    long double x87_r6_2 = result_1 - result
    void* eax_4 = ((edx_1 * 5 + 5) << 5) + arg5
    void* ecx_2 = edi + 0x154
    int32_t i_1 = 4
    int32_t i
    
    do
        long double x87_r5_6 = float.t(*(eax_4 - 0xa0))
        eax_4 += 0x28
        ecx_2 += 0x28
        i = i_1
        i_1 -= 1
        *(ecx_2 - 0x2c) = fconvert.s(x87_r5_6 * x87_r6_2 + float.t(*(eax_4 - 0x28)) * result)
        *(ecx_2 - 0x28) =
            fconvert.s(float.t(*(eax_4 - 0x24)) * result + float.t(*(eax_4 - 0xc4)) * x87_r6_2)
        *(ecx_2 - 0x24) =
            fconvert.s(float.t(*(eax_4 - 0x20)) * result + float.t(*(eax_4 - 0xc0)) * x87_r6_2)
        *(ecx_2 - 0x20) =
            fconvert.s(float.t(*(eax_4 - 0x1c)) * result + float.t(*(eax_4 - 0xbc)) * x87_r6_2)
        *(ecx_2 - 0x1c) =
            fconvert.s(float.t(*(eax_4 - 0x18)) * result + float.t(*(eax_4 - 0xb8)) * x87_r6_2)
        *(ecx_2 - 0x18) =
            fconvert.s(float.t(*(eax_4 - 0x14)) * result + float.t(*(eax_4 - 0xb4)) * x87_r6_2)
        *(ecx_2 - 0x14) =
            fconvert.s(float.t(*(eax_4 - 0x10)) * result + float.t(*(eax_4 - 0xb0)) * x87_r6_2)
        *(ecx_2 - 0x10) =
            fconvert.s(float.t(*(eax_4 - 0xc)) * result + float.t(*(eax_4 - 0xac)) * x87_r6_2)
        *(ecx_2 - 0xc) =
            fconvert.s(float.t(*(eax_4 - 8)) * result + float.t(*(eax_4 - 0xa8)) * x87_r6_2)
        *(ecx_2 - 8) = fconvert.s(float.t(*(eax_4 - 4)) * result + float.t(*(eax_4 - 0xa4)) * x87_r6_2)
    while (i != 1)
    return result
}
