// 函数名称: sub_5e8fe0
// 虚拟地址: 0x5e8fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e8fe0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t ebx = *(esi + 0x18)
    int32_t ebx_1 = ebx - 0x200
    int32_t var_2c = ebx_1
    int32_t eax = sub_685f40(float.t(ebx) * fconvert.t(*(esi + 8)))
    float* ecx = *(esi + 0x10)
    void* edx = ecx + eax
    float var_c = fconvert.s(fconvert.t(*ecx))
    int32_t edi = 0
    int32_t var_28 = eax
    float var_10 = fconvert.s(fconvert.t(ecx[1]))
    float var_14 = fconvert.s(fconvert.t(ecx[2]))
    float var_18 = fconvert.s(fconvert.t(ecx[3]))
    float var_1c = fconvert.s(fconvert.t(ecx[4]))
    float var_20 = fconvert.s(fconvert.t(ecx[5]))
    arg1 = fconvert.s(fconvert.t(ecx[6]))
    float var_8 = fconvert.s(fconvert.t(ecx[7]))
    
    if (ecx u< edx)
        long double x87_r7_10 = fconvert.t(0.5)
        void* edx_1 = &ecx[2]
        void* ecx_1 = &ecx[2]
        
        while (true)
            edi += eax
            edx_1 += 0x20
            
            if (edi * 2 s>= ebx_1)
                long double x87_r6_1 = fconvert.t(var_c)
                ecx_1 += 0x20
                *(ecx_1 - 0x28) = fconvert.s(x87_r6_1)
                edi -= ebx_1
                long double x87_r5_1 = fconvert.t(var_10)
                *(ecx_1 - 0x24) = fconvert.s(x87_r5_1)
                long double x87_r4_1 = fconvert.t(var_14)
                *(ecx_1 - 0x20) = fconvert.s(x87_r4_1)
                long double x87_r3_1 = fconvert.t(var_18)
                *(ecx_1 - 0x1c) = fconvert.s(x87_r3_1)
                long double x87_r2_1 = fconvert.t(var_1c)
                *(ecx_1 - 0x18) = fconvert.s(x87_r2_1)
                long double x87_r1_1 = fconvert.t(var_20)
                *(ecx_1 - 0x14) = fconvert.s(x87_r1_1)
                *(ecx_1 - 0x10) = fconvert.s(fconvert.t(arg1))
                *(ecx_1 - 0xc) = fconvert.s(fconvert.t(var_8))
                var_c = fconvert.s((x87_r6_1 + fconvert.t(*(edx_1 - 8))) * x87_r7_10)
                var_10 = fconvert.s((x87_r5_1 + fconvert.t(*(edx_1 - 4))) * x87_r7_10)
                var_14 = fconvert.s((x87_r4_1 + fconvert.t(*edx_1)) * x87_r7_10)
                var_18 = fconvert.s((x87_r3_1 + fconvert.t(*(edx_1 + 4))) * x87_r7_10)
                var_1c = fconvert.s((x87_r2_1 + fconvert.t(*(edx_1 + 8))) * x87_r7_10)
                var_20 = fconvert.s((x87_r1_1 + fconvert.t(*(edx_1 + 0xc))) * x87_r7_10)
                arg1 = fconvert.s((fconvert.t(*(edx_1 + 0x10)) + fconvert.t(arg1)) * x87_r7_10)
                var_8 = fconvert.s((fconvert.t(*(edx_1 + 0x14)) + fconvert.t(var_8)) * x87_r7_10)
            
            eax = var_28
            
            if (ecx_1 - 8 u>= edx)
                break
            
            ebx_1 = var_2c
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax
    int32_t eax_3 = *(esi + 0x50)
    
    if (*(esi + (eax_3 << 2) + 0x28) != 0)
        (*(esi + (eax_3 << 2) + 0x28))(esi, arg2)
}
