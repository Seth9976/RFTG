// 函数名称: sub_5e89e0
// 虚拟地址: 0x5e89e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e89e0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t ebx = *(arg1 + 0x10)
    float* ecx_1 = ebx + eax - 0x10
    void* edx = ebx + eax_2 - 0x10
    int32_t edi = 0
    
    if (edx u>= ebx)
        long double x87_r7_6 = fconvert.t(0.5)
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(ebx + eax - 4))))
        long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[2])))
        long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[1])))
        long double x87_r3_1 = fconvert.t(fconvert.s(fconvert.t(*ecx_1)))
        
        while (true)
            edi += eax - 0x100
            *(edx + 0xc) = fconvert.s(x87_r6_1)
            edx -= 0x10
            long double x87_r5_3 = x87_r6_1
            *(edx + 0x18) = fconvert.s(x87_r5_1)
            long double x87_r4_2 = x87_r5_1
            *(edx + 0x14) = fconvert.s(x87_r4_1)
            long double x87_r3_8 = x87_r3_1
            long double x87_r6_3 = x87_r4_1
            *(edx + 0x10) = fconvert.s(x87_r3_8)
            
            if (edi * 2 s>= eax_2)
                long double x87_r2_1 = fconvert.t(ecx_1[-1])
                ecx_1 -= 0x10
                edi -= eax_2
                x87_r6_3 = fconvert.t(fconvert.s((x87_r6_3 + fconvert.t(ecx_1[1])) * x87_r7_6))
                x87_r5_3 = fconvert.t(fconvert.s((x87_r5_3 + x87_r2_1) * x87_r7_6))
                x87_r3_8 = fconvert.t(fconvert.s((x87_r3_8 + fconvert.t(*ecx_1)) * x87_r7_6))
                x87_r4_2 = fconvert.t(fconvert.s((x87_r4_2 + fconvert.t(ecx_1[2])) * x87_r7_6))
            
            if (edx u< ebx)
                break
            
            x87_r6_1 = x87_r5_3
            x87_r4_1 = x87_r6_3
            x87_r3_1 = x87_r3_8
            x87_r5_1 = x87_r4_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t eax_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_3 << 2) + 0x28) != 0)
        (*(arg1 + (eax_3 << 2) + 0x28))(arg1, arg2)
}
