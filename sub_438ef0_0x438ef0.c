// 函数名称: sub_438ef0
// 虚拟地址: 0x438ef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_438ef0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = data_27e7a40
    void* ecx_1 = *(eax + 0x548)
    int32_t esi = *(eax + 8)
    
    if (*(ecx_1 + 0x2c048) != arg1)
        int32_t edx_3 = *(eax + 0xc)
        int32_t temp0_1 = *(ecx_1 + 0x2c054)
        
        if (temp0_1 s> edx_3)
            eax.b = 0
            return eax
        
        if (temp0_1 s>= edx_3 && *(ecx_1 + 0x2c050) u>= esi)
            eax.b = 0
            return eax
        
        *(ecx_1 + 0x2c048) = arg1
        esi = *(eax + 8)
    
    int32_t edi_1 = *(eax + 0xc)
    int32_t eax_1
    long double st0
    st0, eax_1 = sub_438980()
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(st0 * fconvert.t(500.0)))
    x87_r6 - x87_r7_2
    eax_1.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(sub_685f40(x87_r7_3))
    void* eax_5 = *(data_27e7a40 + 0x548)
    *(eax_5 + 0x2c050) = eax_3 + esi
    *(eax_5 + 0x2c054) = adc.d(edx_1, edi_1, eax_3 + esi u< eax_3)
    eax_5.b = 1
    return eax_5
}
