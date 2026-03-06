// 函数名称: sub_649300
// 虚拟地址: 0x649300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649300(int32_t* arg1, int32_t arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: void* esi = arg1[7]
    void* esi = arg1[7]
    long double x87_r7_2 = float.t(1)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg4) + fconvert.t(9.9999999999999995e-08)))
    x87_r6 - x87_r7_2
    int32_t* eax
    eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax:1.b & 1) == 0)
        x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(0.999899983f)))
    
    *(esi + 0xd58) = fconvert.s(x87_r7_2)
    int32_t eax_1 = sub_6489f0(eax, 0, arg2, arg3, fconvert.d(x87_r7_2), esi + 0xd48)
    *(esi + 0xd44) = eax_1
    
    if (eax_1 == 0)
        return 0xffffff7e
    
    sub_649170(arg1, arg3, arg2)
    *(esi + 0xd5c) = 0
    *(esi + 0xd88) = 1
    return 0
}
