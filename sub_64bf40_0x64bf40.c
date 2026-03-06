// 函数名称: sub_64bf40
// 虚拟地址: 0x64bf40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_64bf40(void* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* ecx = arg3 + 4
    void* ecx = arg3 + 4
    float* edi_1 = arg1 - arg3
    float* edx = arg1 + 0xc
    int32_t i_1 = 0xe
    int32_t i
    
    do
        long double x87_r7_1 = fconvert.t(edx[-3])
        long double x87_r6_1 = fconvert.t(*(ecx - 4))
        x87_r6_1 - x87_r7_1
        arg1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            *(ecx - 4) = fconvert.s(fconvert.t(edx[-3]))
        
        long double x87_r7_3 = fconvert.t(*(edi_1 + ecx))
        long double x87_r6_2 = fconvert.t(*ecx)
        x87_r6_2 - x87_r7_3
        arg1.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            *ecx = fconvert.s(fconvert.t(*(edi_1 + ecx)))
        
        long double x87_r7_5 = fconvert.t(edx[-1])
        long double x87_r6_3 = fconvert.t(*(ecx + 4))
        x87_r6_3 - x87_r7_5
        arg1.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
        bool p_3 = unimplemented  {test ah, 0x5}
        
        if (not(p_3))
            *(ecx + 4) = fconvert.s(fconvert.t(edx[-1]))
        
        long double x87_r7_7 = fconvert.t(*edx)
        long double x87_r6_4 = fconvert.t(*(ecx + 8))
        x87_r6_4 - x87_r7_7
        arg1.w = (x87_r6_4 < x87_r7_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r7_7) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_7 ? 1 : 0) << 0xe
        bool p_4 = unimplemented  {test ah, 0x5}
        
        if (not(p_4))
            *(ecx + 8) = fconvert.s(fconvert.t(*edx))
        
        ecx += 0x10
        edx = &edx[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    return arg1
}
