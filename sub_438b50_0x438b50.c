// 函数名称: sub_438b50
// 虚拟地址: 0x438b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_438b50(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_27e7a40
    void* eax = data_27e7a40
    int32_t ecx = *(eax + 8)
    void* esi = *(eax + 0x548)
    int32_t eax_1 = *(eax + 0xc)
    int32_t temp0 = *(esi + 0x2c02c)
    
    if (temp0 s>= eax_1 && (temp0 s> eax_1 || *(esi + 0x2c028) u> ecx))
        eax_1.b = 0
        return eax_1
    
    int32_t eax_2
    long double st0
    st0, eax_2 = sub_438980()
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(st0 * float.t(arg1)))
    x87_r6 - x87_r7_2
    eax_2.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_4
    int32_t edx
    edx:eax_4 = sx.q(sub_685f40(x87_r7_3))
    *(esi + 0x2c028) = eax_4 + ecx
    *(esi + 0x2c02c) = adc.d(edx, eax_1, eax_4 + ecx u< eax_4)
    int32_t eax_5
    eax_5.b = 1
    return eax_5
}
