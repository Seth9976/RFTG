// 函数名称: sub_5ff240
// 虚拟地址: 0x5ff240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5ff240(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    float* eax_3 = *(arg1 + 0x10)
    int32_t esi_1 = (eax_1 - edx) s>> 1
    float var_8 = fconvert.s(fconvert.t(*eax_3))
    int32_t var_20 = esi_1
    long double result = fconvert.t(((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8
        | (var_8 << 0x10 | (var_8 & 0xff00)) << 8)
    void* edi = eax_3 + esi_1
    float var_8_2 = fconvert.s(fconvert.t(eax_3[1]))
    double var_28 = fconvert.d(fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
        | (var_8_2 << 0x10 | (var_8_2 & 0xff00)) << 8))
    float var_8_4 = fconvert.s(fconvert.t(eax_3[2]))
    double var_30 = fconvert.d(fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
        | (var_8_4 << 0x10 | (var_8_4 & 0xff00)) << 8))
    float var_8_6 = fconvert.s(fconvert.t(eax_3[3]))
    double var_38 = fconvert.d(fconvert.t(((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8
        | (var_8_6 << 0x10 | (var_8_6 & 0xff00)) << 8))
    float var_8_8 = fconvert.s(fconvert.t(eax_3[4]))
    double var_40 = fconvert.d(fconvert.t(((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
        | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8))
    float var_8_10 = fconvert.s(fconvert.t(eax_3[5]))
    int32_t var_8_11 = ((var_8_10 & 0xff0000) | var_8_10 u>> 0x10) u>> 8
        | (var_8_10 << 0x10 | (var_8_10 & 0xff00)) << 8
    double var_50 = fconvert.d(fconvert.t(var_8_11))
    double var_48
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    if (eax_3 u< edi)
        long double result_2 = fconvert.t(0.5)
        void* esi_2 = &eax_3[2]
        void* ecx_25 = &eax_3[2]
        int32_t i_1 = (edi - eax_3 - 1) u/ 0x18 + 1
        int32_t i
        
        do
            float var_8_12 = fconvert.s(fconvert.t(*(ecx_25 - 8)))
            var_8_11 = ((var_8_12 & 0xff0000) | var_8_12 u>> 0x10) u>> 8
                | (var_8_12 << 0x10 | (var_8_12 & 0xff00)) << 8
            long double result_1 = fconvert.t(var_8_11)
            float var_c_1 = fconvert.s(fconvert.t(*(ecx_25 - 4)))
            var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
            long double x87_r4_2 = fconvert.t(var_c)
            float var_10_1 = fconvert.s(fconvert.t(*ecx_25))
            var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
            long double x87_r3_2 = fconvert.t(var_10)
            float var_14_1 = fconvert.s(fconvert.t(*(ecx_25 + 4)))
            var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
            long double x87_r2_2 = fconvert.t(var_14)
            float var_18_1 = fconvert.s(fconvert.t(*(ecx_25 + 8)))
            var_18 = ((var_18_1 & 0xff0000) | var_18_1 u>> 0x10) u>> 8
                | (var_18_1 << 0x10 | (var_18_1 & 0xff00)) << 8
            long double x87_r1_2 = fconvert.t(var_18)
            ecx_25 += 0x30
            esi_2 += 0x18
            float var_1c_1 = fconvert.s(fconvert.t(*(ecx_25 - 0x24)))
            i = i_1
            i_1 -= 1
            var_1c = ((var_1c_1 & 0xff0000) | var_1c_1 u>> 0x10) u>> 8
                | (var_1c_1 << 0x10 | (var_1c_1 & 0xff00)) << 8
            var_48 = fconvert.d(fconvert.t(var_1c))
            *(esi_2 - 0x20) = fconvert.s((result + result_1) * result_2)
            *(esi_2 - 0x1c) = fconvert.s((x87_r4_2 + fconvert.t(var_28)) * result_2)
            *(esi_2 - 0x18) = fconvert.s((x87_r3_2 + fconvert.t(var_30)) * result_2)
            *(esi_2 - 0x14) = fconvert.s((fconvert.t(var_38) + x87_r2_2) * result_2)
            *(esi_2 - 0x10) = fconvert.s((x87_r1_2 + fconvert.t(var_40)) * result_2)
            *(esi_2 - 0xc) = fconvert.s((fconvert.t(var_48) + fconvert.t(var_50)) * result_2)
            var_28 = fconvert.d(x87_r4_2)
            var_30 = fconvert.d(x87_r3_2)
            var_38 = fconvert.d(x87_r2_2)
            result = result_1
            var_40 = fconvert.d(x87_r1_2)
            var_50 = fconvert.d(fconvert.t(var_48))
        while (i != 1)
        esi_1 = var_20
        result = result_2
    
    *(arg1 + 0x50) += 1
    int32_t ecx_26 = *(arg1 + 0x50)
    *(arg1 + 0x18) = esi_1
    
    if (*(arg1 + (ecx_26 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_26 << 2) + 0x28))(arg1, arg2, var_50, var_48, var_40, var_38, var_30, var_28, 
            var_20, var_1c, var_18, var_14, var_10, var_c, var_8_11)
    
    return result
}
