// 函数名称: sub_5fb2d0
// 虚拟地址: 0x5fb2d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fb2d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x18)
    int32_t ecx = *(arg1 + 0x18)
    int32_t edx = *(arg1 + 0x10)
    long double result = fconvert.t(*(edx + ecx - 4))
    int32_t edi = ecx * 2
    float* ecx_1 = edx + ecx - 0x20
    double var_24 = fconvert.d(fconvert.t(*(edx + ecx - 8)))
    void* eax = edx + edi - 0x40
    double var_2c = fconvert.d(fconvert.t(ecx_1[5]))
    double var_34 = fconvert.d(fconvert.t(ecx_1[4]))
    double var_3c = fconvert.d(fconvert.t(ecx_1[3]))
    double var_44 = fconvert.d(fconvert.t(ecx_1[2]))
    double var_4c = fconvert.d(fconvert.t(ecx_1[1]))
    double var_54 = fconvert.d(fconvert.t(*ecx_1))
    
    if (eax u>= edx)
        long double result_2 = fconvert.t(0.5)
        
        do
            long double result_1 = fconvert.t(ecx_1[7])
            eax -= 0x40
            long double x87_r4_1 = fconvert.t(ecx_1[6])
            ecx_1 -= 0x20
            long double x87_r3_1 = fconvert.t(ecx_1[0xd])
            long double x87_r2_1 = fconvert.t(ecx_1[0xc])
            long double x87_r1_1 = fconvert.t(ecx_1[0xb])
            double var_1c_1 = fconvert.d(fconvert.t(ecx_1[0xa]))
            double var_c_1 = fconvert.d(fconvert.t(ecx_1[9]))
            double var_14_1 = fconvert.d(fconvert.t(ecx_1[8]))
            *(eax + 0x7c) = fconvert.s((result + result_1) * result_2)
            *(eax + 0x78) = fconvert.s((x87_r4_1 + fconvert.t(var_24)) * result_2)
            *(eax + 0x74) = fconvert.s((x87_r3_1 + fconvert.t(var_2c)) * result_2)
            *(eax + 0x70) = fconvert.s((fconvert.t(var_34) + x87_r2_1) * result_2)
            *(eax + 0x6c) = fconvert.s((x87_r1_1 + fconvert.t(var_3c)) * result_2)
            *(eax + 0x68) = fconvert.s((fconvert.t(var_1c_1) + fconvert.t(var_44)) * result_2)
            *(eax + 0x64) = fconvert.s((fconvert.t(var_c_1) + fconvert.t(var_4c)) * result_2)
            *(eax + 0x60) = fconvert.s((fconvert.t(var_14_1) + fconvert.t(var_54)) * result_2)
            *(eax + 0x5c) = fconvert.s(result_1)
            *(eax + 0x58) = fconvert.s(x87_r4_1)
            *(eax + 0x54) = fconvert.s(x87_r3_1)
            *(eax + 0x50) = fconvert.s(x87_r2_1)
            *(eax + 0x4c) = fconvert.s(x87_r1_1)
            long double x87_r1_25 = fconvert.t(var_1c_1)
            *(eax + 0x48) = fconvert.s(x87_r1_25)
            *(eax + 0x44) = fconvert.s(fconvert.t(var_c_1))
            *(eax + 0x40) = fconvert.s(fconvert.t(var_14_1))
            var_24 = fconvert.d(x87_r4_1)
            var_2c = fconvert.d(x87_r3_1)
            var_34 = fconvert.d(x87_r2_1)
            var_3c = fconvert.d(x87_r1_1)
            result = result_1
            var_44 = fconvert.d(x87_r1_25)
            var_4c = fconvert.d(fconvert.t(var_c_1))
            var_54 = fconvert.d(fconvert.t(var_14_1))
        while (eax u>= edx)
        
        result = result_2
    
    *(arg1 + 0x50) += 1
    int32_t eax_1 = *(arg1 + 0x50)
    *(arg1 + 0x18) = edi
    
    if (*(arg1 + (eax_1 << 2) + 0x28) != 0)
        (*(arg1 + (eax_1 << 2) + 0x28))(arg1, arg2)
    
    return result
}
