// 函数名称: sub_5e8af0
// 虚拟地址: 0x5e8af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e8af0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    int32_t ebx = *(esi + 0x18)
    int32_t ebx_1 = ebx - 0x100
    int32_t var_1c = ebx_1
    int32_t eax = sub_685f40(float.t(ebx) * fconvert.t(*(esi + 8)))
    float* ecx = *(esi + 0x10)
    void* edx = ecx + eax
    arg1 = fconvert.s(fconvert.t(*ecx))
    int32_t edi = 0
    int32_t var_18 = eax
    float var_8 = fconvert.s(fconvert.t(ecx[1]))
    float var_c = fconvert.s(fconvert.t(ecx[2]))
    float var_10 = fconvert.s(fconvert.t(ecx[3]))
    
    if (ecx u< edx)
        long double x87_r7_6 = fconvert.t(0.5)
        float* edx_1 = &ecx[2]
        void* ecx_1 = &ecx[2]
        
        while (true)
            edi += eax
            edx_1 = &edx_1[4]
            
            if (edi * 2 s>= ebx_1)
                long double x87_r6_1 = fconvert.t(arg1)
                ecx_1 += 0x10
                *(ecx_1 - 0x18) = fconvert.s(x87_r6_1)
                edi -= ebx_1
                long double x87_r5_1 = fconvert.t(var_8)
                *(ecx_1 - 0x14) = fconvert.s(x87_r5_1)
                long double x87_r4_1 = fconvert.t(var_c)
                *(ecx_1 - 0x10) = fconvert.s(x87_r4_1)
                long double x87_r3_1 = fconvert.t(var_10)
                *(ecx_1 - 0xc) = fconvert.s(x87_r3_1)
                arg1 = fconvert.s((x87_r6_1 + fconvert.t(edx_1[-2])) * x87_r7_6)
                var_8 = fconvert.s((x87_r5_1 + fconvert.t(edx_1[-1])) * x87_r7_6)
                var_c = fconvert.s((x87_r4_1 + fconvert.t(*edx_1)) * x87_r7_6)
                var_10 = fconvert.s((x87_r3_1 + fconvert.t(edx_1[1])) * x87_r7_6)
            
            eax = var_18
            
            if (ecx_1 - 8 u>= edx)
                break
            
            ebx_1 = var_1c
    
    *(esi + 0x50) += 1
    *(esi + 0x18) = eax
    int32_t eax_3 = *(esi + 0x50)
    
    if (*(esi + (eax_3 << 2) + 0x28) != 0)
        (*(esi + (eax_3 << 2) + 0x28))(esi, arg2)
}
