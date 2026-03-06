// 函数名称: sub_5fa250
// 虚拟地址: 0x5fa250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fa250(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x18)
    int32_t ecx = *(arg1 + 0x18)
    int32_t edx = *(arg1 + 0x10)
    long double result = fconvert.t(*(edx + ecx - 4))
    int32_t edi = ecx << 2
    double var_24 = fconvert.d(result)
    float* ecx_1 = edx + ecx - 0x10
    double var_c = fconvert.d(fconvert.t(*(edx + ecx - 8)))
    void* eax = edx + edi - 0x40
    double var_14 = fconvert.d(fconvert.t(ecx_1[1]))
    double var_1c = fconvert.d(fconvert.t(*ecx_1))
    
    if (eax u>= edx)
        long double result_2 = fconvert.t(3.0)
        long double x87_r5_1 = fconvert.t(0.25)
        
        do
            long double result_1 = fconvert.t(ecx_1[3])
            eax -= 0x40
            long double x87_r3_1 = fconvert.t(ecx_1[2])
            ecx_1 -= 0x10
            long double x87_r2_1 = fconvert.t(ecx_1[5])
            long double x87_r1_1 = fconvert.t(ecx_1[4])
            *(eax + 0x7c) = fconvert.s((result * result_2 + result_1) * x87_r5_1)
            *(eax + 0x78) = fconvert.s((fconvert.t(var_c) * result_2 + x87_r3_1) * x87_r5_1)
            *(eax + 0x74) = fconvert.s((fconvert.t(var_14) * result_2 + x87_r2_1) * x87_r5_1)
            *(eax + 0x70) = fconvert.s((fconvert.t(var_1c) * result_2 + x87_r1_1) * x87_r5_1)
            *(eax + 0x6c) = fconvert.s((result + result_1) * fconvert.t(0.5))
            *(eax + 0x68) = fconvert.s((x87_r3_1 + fconvert.t(var_c)) * fconvert.t(0.5))
            *(eax + 0x64) = fconvert.s((fconvert.t(var_14) + x87_r2_1) * fconvert.t(0.5))
            *(eax + 0x60) = fconvert.s((x87_r1_1 + fconvert.t(var_1c)) * fconvert.t(0.5))
            *(eax + 0x5c) = fconvert.s((result_1 * result_2 + fconvert.t(var_24)) * x87_r5_1)
            *(eax + 0x58) = fconvert.s((x87_r3_1 * result_2 + fconvert.t(var_c)) * x87_r5_1)
            *(eax + 0x54) = fconvert.s((x87_r2_1 * result_2 + fconvert.t(var_14)) * x87_r5_1)
            *(eax + 0x50) = fconvert.s((x87_r1_1 * result_2 + fconvert.t(var_1c)) * x87_r5_1)
            *(eax + 0x4c) = fconvert.s(result_1)
            *(eax + 0x48) = fconvert.s(x87_r3_1)
            *(eax + 0x44) = fconvert.s(x87_r2_1)
            *(eax + 0x40) = fconvert.s(x87_r1_1)
            var_24 = fconvert.d(result_1)
            var_c = fconvert.d(x87_r3_1)
            var_14 = fconvert.d(x87_r2_1)
            result = result_1
            var_1c = fconvert.d(x87_r1_1)
        while (eax u>= edx)
        
        result = result_2
    
    *(arg1 + 0x50) += 1
    int32_t eax_1 = *(arg1 + 0x50)
    *(arg1 + 0x18) = edi
    
    if (*(arg1 + (eax_1 << 2) + 0x28) != 0)
        (*(arg1 + (eax_1 << 2) + 0x28))(arg1, arg2)
    
    return result
}
