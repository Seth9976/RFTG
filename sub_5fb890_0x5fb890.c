// 函数名称: sub_5fb890
// 虚拟地址: 0x5fb890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fb890(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x18)
    int32_t ecx = *(arg1 + 0x18)
    int32_t edx = *(arg1 + 0x10)
    long double result = fconvert.t(*(edx + ecx - 4))
    double var_6c = fconvert.d(result)
    int32_t edi = ecx << 2
    float* ecx_1 = edx + ecx - 0x20
    double var_34 = fconvert.d(fconvert.t(*(edx + ecx - 8)))
    void* eax = edx + edi - 0x80
    double var_3c = fconvert.d(fconvert.t(ecx_1[5]))
    double var_44 = fconvert.d(fconvert.t(ecx_1[4]))
    double var_4c = fconvert.d(fconvert.t(ecx_1[3]))
    double var_54 = fconvert.d(fconvert.t(ecx_1[2]))
    double var_5c = fconvert.d(fconvert.t(ecx_1[1]))
    double var_64 = fconvert.d(fconvert.t(*ecx_1))
    
    if (eax u>= edx)
        long double x87_r6_7 = fconvert.t(3.0)
        long double result_2 = fconvert.t(0.25)
        long double x87_r4_1 = fconvert.t(0.5)
        
        do
            long double result_1 = fconvert.t(ecx_1[7])
            ecx_1 -= 0x20
            long double x87_r2_1 = fconvert.t(ecx_1[0xe])
            long double x87_r1_1 = fconvert.t(ecx_1[0xd])
            double var_2c_1 = fconvert.d(fconvert.t(ecx_1[0xc]))
            double var_c_1 = fconvert.d(fconvert.t(ecx_1[0xb]))
            double var_14_1 = fconvert.d(fconvert.t(ecx_1[0xa]))
            double var_1c_1 = fconvert.d(fconvert.t(ecx_1[9]))
            double var_24_1 = fconvert.d(fconvert.t(ecx_1[8]))
            *(eax + 0x7c) = fconvert.s((result * x87_r6_7 + result_1) * result_2)
            *(eax + 0x78) = fconvert.s((fconvert.t(var_34) * x87_r6_7 + x87_r2_1) * result_2)
            *(eax + 0x74) = fconvert.s((fconvert.t(var_3c) * x87_r6_7 + x87_r1_1) * result_2)
            *(eax + 0x70) =
                fconvert.s((fconvert.t(var_44) * x87_r6_7 + fconvert.t(var_2c_1)) * result_2)
            *(eax + 0x6c) = fconvert.s((fconvert.t(var_4c) * x87_r6_7 + fconvert.t(var_c_1)) * result_2)
            *(eax + 0x68) =
                fconvert.s((fconvert.t(var_54) * x87_r6_7 + fconvert.t(var_14_1)) * result_2)
            *(eax + 0x64) =
                fconvert.s((fconvert.t(var_5c) * x87_r6_7 + fconvert.t(var_1c_1)) * result_2)
            *(eax + 0x60) =
                fconvert.s((fconvert.t(var_64) * x87_r6_7 + fconvert.t(var_24_1)) * result_2)
            *(eax + 0x5c) = fconvert.s((result_1 + fconvert.t(var_6c)) * x87_r4_1)
            *(eax + 0x58) = fconvert.s((fconvert.t(var_34) + x87_r2_1) * x87_r4_1)
            *(eax + 0x54) = fconvert.s((x87_r1_1 + fconvert.t(var_3c)) * x87_r4_1)
            *(eax + 0x50) = fconvert.s((fconvert.t(var_2c_1) + fconvert.t(var_44)) * x87_r4_1)
            *(eax + 0x4c) = fconvert.s((fconvert.t(var_c_1) + fconvert.t(var_4c)) * x87_r4_1)
            *(eax + 0x48) = fconvert.s((fconvert.t(var_14_1) + fconvert.t(var_54)) * x87_r4_1)
            *(eax + 0x44) = fconvert.s((fconvert.t(var_1c_1) + fconvert.t(var_5c)) * x87_r4_1)
            eax -= 0x80
            *(eax + 0xc0) = fconvert.s((fconvert.t(var_24_1) + fconvert.t(var_64)) * x87_r4_1)
            *(eax + 0xbc) = fconvert.s((result_1 * x87_r6_7 + fconvert.t(var_6c)) * result_2)
            *(eax + 0xb8) = fconvert.s((x87_r2_1 * x87_r6_7 + fconvert.t(var_34)) * result_2)
            *(eax + 0xb4) = fconvert.s((x87_r1_1 * x87_r6_7 + fconvert.t(var_3c)) * result_2)
            *(eax + 0xb0) =
                fconvert.s((fconvert.t(var_2c_1) * x87_r6_7 + fconvert.t(var_44)) * result_2)
            *(eax + 0xac) = fconvert.s((fconvert.t(var_c_1) * x87_r6_7 + fconvert.t(var_4c)) * result_2)
            *(eax + 0xa8) =
                fconvert.s((fconvert.t(var_14_1) * x87_r6_7 + fconvert.t(var_54)) * result_2)
            *(eax + 0xa4) =
                fconvert.s((fconvert.t(var_1c_1) * x87_r6_7 + fconvert.t(var_5c)) * result_2)
            *(eax + 0xa0) =
                fconvert.s((fconvert.t(var_24_1) * x87_r6_7 + fconvert.t(var_64)) * result_2)
            *(eax + 0x9c) = fconvert.s(result_1)
            *(eax + 0x98) = fconvert.s(x87_r2_1)
            *(eax + 0x94) = fconvert.s(x87_r1_1)
            long double x87_r1_90 = fconvert.t(var_2c_1)
            *(eax + 0x90) = fconvert.s(x87_r1_90)
            *(eax + 0x8c) = fconvert.s(fconvert.t(var_c_1))
            *(eax + 0x88) = fconvert.s(fconvert.t(var_14_1))
            *(eax + 0x84) = fconvert.s(fconvert.t(var_1c_1))
            *(eax + 0x80) = fconvert.s(fconvert.t(var_24_1))
            var_6c = fconvert.d(result_1)
            result = result_1
            var_34 = fconvert.d(x87_r2_1)
            var_3c = fconvert.d(x87_r1_1)
            var_44 = fconvert.d(x87_r1_90)
            var_4c = fconvert.d(fconvert.t(var_c_1))
            var_54 = fconvert.d(fconvert.t(var_14_1))
            var_5c = fconvert.d(fconvert.t(var_1c_1))
            var_64 = fconvert.d(fconvert.t(var_24_1))
        while (eax u>= edx)
        
        result = result_2
    
    *(arg1 + 0x50) += 1
    int32_t eax_1 = *(arg1 + 0x50)
    *(arg1 + 0x18) = edi
    
    if (*(arg1 + (eax_1 << 2) + 0x28) != 0)
        (*(arg1 + (eax_1 << 2) + 0x28))(arg1, arg2)
    
    return result
}
