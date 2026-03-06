// 函数名称: sub_5e8e60
// 虚拟地址: 0x5e8e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e8e60(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(esi + 8)))
    int32_t ebx = *(esi + 0x10)
    float* ecx_1 = ebx + eax - 0x20
    void* edx = ebx + eax_2 - 0x20
    int32_t edi = 0
    arg1 = fconvert.s(fconvert.t(ecx_1[1]))
    float var_8 = fconvert.s(fconvert.t(*ecx_1))
    
    if (edx u>= ebx)
        long double x87_r7_10 = fconvert.t(0.5)
        long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*(ebx + eax - 4))))
        long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[6])))
        long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[5])))
        long double x87_r3_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[4])))
        long double x87_r2_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[3])))
        long double x87_r1_1 = fconvert.t(fconvert.s(fconvert.t(ecx_1[2])))
        
        while (true)
            edi += eax - 0x200
            *(edx + 0x1c) = fconvert.s(x87_r6_1)
            edx -= 0x20
            long double x87_r5_3 = x87_r6_1
            *(edx + 0x38) = fconvert.s(x87_r5_1)
            long double x87_r4_3 = x87_r5_1
            *(edx + 0x34) = fconvert.s(x87_r4_1)
            long double x87_r3_3 = x87_r4_1
            *(edx + 0x30) = fconvert.s(x87_r3_1)
            long double x87_r2_2 = x87_r3_1
            *(edx + 0x2c) = fconvert.s(x87_r2_1)
            long double x87_r1_14 = x87_r1_1
            long double x87_r6_3 = x87_r2_1
            *(edx + 0x28) = fconvert.s(x87_r1_14)
            *(edx + 0x24) = fconvert.s(fconvert.t(arg1))
            *(edx + 0x20) = fconvert.s(fconvert.t(var_8))
            
            if (edi * 2 s>= eax_2)
                long double x87_r0_3 = fconvert.t(ecx_1[-1])
                ecx_1 -= 0x20
                edi -= eax_2
                arg1 = fconvert.s((fconvert.t(ecx_1[1]) + fconvert.t(arg1)) * x87_r7_10)
                var_8 = fconvert.s((fconvert.t(*ecx_1) + fconvert.t(var_8)) * x87_r7_10)
                x87_r6_3 = fconvert.t(fconvert.s((x87_r6_3 + fconvert.t(ecx_1[3])) * x87_r7_10))
                x87_r5_3 = fconvert.t(fconvert.s((x87_r5_3 + x87_r0_3) * x87_r7_10))
                x87_r4_3 = fconvert.t(fconvert.s((x87_r4_3 + fconvert.t(ecx_1[6])) * x87_r7_10))
                x87_r3_3 = fconvert.t(fconvert.s((x87_r3_3 + fconvert.t(ecx_1[5])) * x87_r7_10))
                x87_r1_14 = fconvert.t(fconvert.s((x87_r1_14 + fconvert.t(ecx_1[2])) * x87_r7_10))
                x87_r2_2 = fconvert.t(fconvert.s((x87_r2_2 + fconvert.t(ecx_1[4])) * x87_r7_10))
            
            if (edx u< ebx)
                break
            
            x87_r6_1 = x87_r5_3
            x87_r5_1 = x87_r4_3
            x87_r4_1 = x87_r3_3
            x87_r2_1 = x87_r6_3
            x87_r1_1 = x87_r1_14
            x87_r3_1 = x87_r2_2
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax_2
    int32_t eax_3 = *(esi + 0x50)
    
    if (*(esi + (eax_3 << 2) + 0x28) != 0)
        (*(esi + (eax_3 << 2) + 0x28))(esi, arg2)
}
