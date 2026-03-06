// 函数名称: sub_5fe550
// 虚拟地址: 0x5fe550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fe550(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x18)
    int32_t ecx = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x10)
    float var_8 = fconvert.s(fconvert.t(*(esi + ecx - 4)))
    int32_t edx = ecx << 2
    void* ecx_1 = esi + ecx - 0x10
    void* eax_1 = esi + edx - 0x40
    long double result = fconvert.t(((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8
        | (var_8 << 0x10 | (var_8 & 0xff00)) << 8)
    double var_38 = fconvert.d(result)
    float var_8_2 = fconvert.s(fconvert.t(*(ecx_1 + 8)))
    double var_20 = fconvert.d(fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
        | (var_8_2 << 0x10 | (var_8_2 & 0xff00)) << 8))
    float var_8_4 = fconvert.s(fconvert.t(*(ecx_1 + 4)))
    double var_28 = fconvert.d(fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
        | (var_8_4 << 0x10 | (var_8_4 & 0xff00)) << 8))
    float var_8_6 = fconvert.s(fconvert.t(*ecx_1))
    int32_t var_8_7 =
        ((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8 | (var_8_6 << 0x10 | (var_8_6 & 0xff00)) << 8
    double var_30 = fconvert.d(fconvert.t(var_8_7))
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    if (eax_1 u>= esi)
        long double result_2 = fconvert.t(3.0)
        long double x87_r5_1 = fconvert.t(0.25)
        
        do
            float var_8_8 = fconvert.s(fconvert.t(*(ecx_1 + 0xc)))
            var_8_7 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8
            long double result_1 = fconvert.t(var_8_7)
            float var_c_1 = fconvert.s(fconvert.t(*(ecx_1 + 8)))
            var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
            long double x87_r3_2 = fconvert.t(var_c)
            float var_10_1 = fconvert.s(fconvert.t(*(ecx_1 + 4)))
            var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
            long double x87_r2_2 = fconvert.t(var_10)
            float var_14_1 = fconvert.s(fconvert.t(*ecx_1))
            var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
            long double x87_r1_2 = fconvert.t(var_14)
            ecx_1 -= 0x10
            *(eax_1 + 0x3c) = fconvert.s((result * result_2 + result_1) * x87_r5_1)
            *(eax_1 + 0x38) = fconvert.s((fconvert.t(var_20) * result_2 + x87_r3_2) * x87_r5_1)
            eax_1 -= 0x40
            *(eax_1 + 0x74) = fconvert.s((fconvert.t(var_28) * result_2 + x87_r2_2) * x87_r5_1)
            *(eax_1 + 0x70) = fconvert.s((fconvert.t(var_30) * result_2 + x87_r1_2) * x87_r5_1)
            *(eax_1 + 0x6c) = fconvert.s((result + result_1) * fconvert.t(0.5))
            *(eax_1 + 0x68) = fconvert.s((x87_r3_2 + fconvert.t(var_20)) * fconvert.t(0.5))
            *(eax_1 + 0x64) = fconvert.s((fconvert.t(var_28) + x87_r2_2) * fconvert.t(0.5))
            *(eax_1 + 0x60) = fconvert.s((x87_r1_2 + fconvert.t(var_30)) * fconvert.t(0.5))
            *(eax_1 + 0x5c) = fconvert.s((result_1 * result_2 + fconvert.t(var_38)) * x87_r5_1)
            *(eax_1 + 0x58) = fconvert.s((x87_r3_2 * result_2 + fconvert.t(var_20)) * x87_r5_1)
            *(eax_1 + 0x54) = fconvert.s((x87_r2_2 * result_2 + fconvert.t(var_28)) * x87_r5_1)
            *(eax_1 + 0x50) = fconvert.s((x87_r1_2 * result_2 + fconvert.t(var_30)) * x87_r5_1)
            *(eax_1 + 0x4c) = fconvert.s(result_1)
            *(eax_1 + 0x48) = fconvert.s(x87_r3_2)
            *(eax_1 + 0x44) = fconvert.s(x87_r2_2)
            *(eax_1 + 0x40) = fconvert.s(x87_r1_2)
            var_38 = fconvert.d(result_1)
            var_20 = fconvert.d(x87_r3_2)
            var_28 = fconvert.d(x87_r2_2)
            result = result_1
            var_30 = fconvert.d(x87_r1_2)
        while (eax_1 u>= esi)
        
        result = result_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, var_38, var_30, var_28, var_20, edx, var_14, 
            var_10, var_c, var_8_7)
    
    return result
}
