// 函数名称: sub_4169a0
// 虚拟地址: 0x4169a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4169a0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    float* edi = data_27e7a50
    long double x87_r6 = fconvert.t(9.0)
    long double x87_r6_2 = float.t(0)
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(*edi) * x87_r6))
    x87_r5 - x87_r6_2
    int32_t eax
    eax.w = (x87_r5 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
    long double x87_r4 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r5_1
    
    if (p)
        x87_r5_1 = x87_r5 + x87_r4
    else
        x87_r5_1 = x87_r5 - x87_r4
    
    *(arg1 + 0x314) = sub_685f40(x87_r5_1)
    long double x87_r5_4 = fconvert.t(fconvert.s(x87_r6 * fconvert.t(edi[1])))
    x87_r5_4 - x87_r6_2
    int32_t eax_1
    eax_1.w = (x87_r5_4 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_4, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r5_4 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_6
    
    if (p_1)
        x87_r7_6 = x87_r5_4 + x87_r6_2
    else
        x87_r7_6 = x87_r6_2 - x87_r5_4
    
    *(arg1 + 0x318) = sub_685f40(x87_r7_6)
    int32_t result = edi[4]
    *(arg1 + 0x320) = result
    *(arg1 + 0x31c) = edi[3]
    return result
}
