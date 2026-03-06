// 函数名称: sub_5e8870
// 虚拟地址: 0x5e8870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e8870(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t ebx = *(arg1 + 0x10)
    float* edx_1 = ebx + eax - 8
    void* ecx = ebx + eax_2 - 8
    int32_t edi = 0
    
    if (ecx u>= ebx)
        long double x87_r7_4 = fconvert.t(0.5)
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(ebx + eax - 4))))
        long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*edx_1)))
        
        do
            edi += eax - 0x80
            *(ecx + 4) = fconvert.s(x87_r6_1)
            ecx -= 8
            *(ecx + 8) = fconvert.s(x87_r5_1)
            
            if (edi * 2 s>= eax_2)
                long double x87_r4_1 = fconvert.t(edx_1[-1])
                edx_1 -= 8
                edi -= eax_2
                x87_r6_1 = fconvert.t(fconvert.s((x87_r6_1 + x87_r4_1) * x87_r7_4))
                x87_r5_1 = fconvert.t(fconvert.s((x87_r5_1 + fconvert.t(*edx_1)) * x87_r7_4))
        while (ecx u>= ebx)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t eax_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_3 << 2) + 0x28) != 0)
        (*(arg1 + (eax_3 << 2) + 0x28))(arg1, arg2)
}
