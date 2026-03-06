// 函数名称: sub_647af0
// 虚拟地址: 0x647af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_647af0(void* arg1, double arg2, double* arg3)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    int32_t eax = sub_685f40(x87_r7)
    void* ecx_1 = *(arg1 + 0x1c)
    arg2:4.d = eax
    long double x87_r7_1 = x87_r7 - float.t(arg2:4.d)
    double* eax_1 = &arg3[eax]
    long double x87_r6_2 = float.t(1)
    int32_t entry_ebx
    __builtin_memcpy(ecx_1 + 0xb34, sub_685f40(fconvert.t(*eax_1)) * 0x1ec + entry_ebx, 0x1ec)
    long double x87_r7_3 = x87_r7_1 * fconvert.t(eax_1[1]) + (x87_r6_2 - x87_r7_1) * fconvert.t(*eax_1)
    int32_t ecx_2 = sub_685f40(x87_r7_3)
    arg2:4.d = ecx_2
    long double x87_r7_4 = x87_r7_3 - float.t(arg2:4.d)
    long double x87_r4_1 = float.t(0)
    x87_r4_1 - x87_r7_4
    int32_t eax_4
    eax_4.w = (x87_r4_1 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p) && ecx_2 s> 0)
        ecx_2 -= 1
        x87_r6_2 = x87_r7_4
    
    long double x87_r6_4 = x87_r6_2 - x87_r7_4
    int32_t eax_6 = ecx_2 * 0x7b
    *(ecx_1 + 0xb38) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 4)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x1f0)) * x87_r7_4)
    *(ecx_1 + 0xb54) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x20)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x20c)) * x87_r7_4)
    *(ecx_1 + 0xb3c) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 8)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x1f4)) * x87_r7_4)
    *(ecx_1 + 0xb58) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x24)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x210)) * x87_r7_4)
    *(ecx_1 + 0xb40) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 0xc)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x1f8)) * x87_r7_4)
    *(ecx_1 + 0xb5c) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x28)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x214)) * x87_r7_4)
    *(ecx_1 + 0xb44) = fconvert.s(fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x10)) * x87_r6_4
        + fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x1fc)) * x87_r7_4)
    *(ecx_1 + 0xb60) = fconvert.s(x87_r7_4 * fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x218))
        + x87_r6_4 * fconvert.t(*(entry_ebx + (eax_6 << 2) + 0x2c)))
    *(ecx_1 + 0xb78) = fconvert.s(fconvert.t(*(ecx_1 + 0xdb8)))
}
