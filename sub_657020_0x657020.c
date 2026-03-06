// 函数名称: sub_657020
// 虚拟地址: 0x657020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_657020(int32_t* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t edx = *arg1
    int32_t edx = *arg1
    long double x87_r7 = fconvert.t(0.5)
    int32_t* ecx = arg1[3]
    void* ebx = arg3 + (edx s>> 1 << 2)
    void* result = arg1[2] + (edx << 2)
    int32_t esi_2 = arg3 - ecx - 8
    void* var_18 = arg3 + 8
    float* edx_2 = ebx + 0xc
    
    do
        int32_t esi_3 = *ecx
        int32_t edi_2 = ecx[1]
        float* esi_4 = ebx + (esi_3 << 2)
        float* edi_3 = ebx + (edi_2 << 2)
        edx_2 -= 0x10
        long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*edi_3) + fconvert.t(*esi_4)))
        long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(*(ebx + (esi_3 << 2) + 4))
            - fconvert.t(*(ebx + (edi_2 << 2) + 4))))
        float var_14_1 =
            fconvert.s(x87_r5_1 * fconvert.t(*(result + 4)) - x87_r4_2 * fconvert.t(*result))
        float var_c_2 = fconvert.s((fconvert.t(*esi_4) - fconvert.t(*edi_3)) * x87_r7)
        long double x87_r6_17 = fconvert.t(fconvert.s(fconvert.t(*result) * x87_r5_1
            + x87_r4_2 * fconvert.t(*(result + 4))))
        long double x87_r4_5 =
            fconvert.t(fconvert.s((fconvert.t(edi_3[1]) + fconvert.t(esi_4[1])) * x87_r7))
        *(esi_2 + ecx + 8) = fconvert.s(x87_r6_17 + x87_r4_5)
        edx_2[-1] = fconvert.s(x87_r4_5 - x87_r6_17)
        long double x87_r6_19 = fconvert.t(var_14_1)
        long double x87_r4_7 = fconvert.t(var_c_2)
        *(var_18 - 4) = fconvert.s(x87_r6_19 + x87_r4_7)
        *edx_2 = fconvert.s(x87_r6_19 - x87_r4_7)
        int32_t esi_7 = ecx[2]
        int32_t edi_4 = ecx[3]
        float* esi_8 = ebx + (esi_7 << 2)
        float* edi_5 = ebx + (edi_4 << 2)
        long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(*(ebx + (esi_7 << 2) + 4))
            - fconvert.t(*(ebx + (edi_4 << 2) + 4))))
        long double x87_r3_5 = fconvert.t(fconvert.s(fconvert.t(*edi_5) + fconvert.t(*esi_8)))
        float var_10_2 =
            fconvert.s(fconvert.t(*(result + 8)) * x87_r3_5 + fconvert.t(*(result + 0xc)) * x87_r5_9)
        float var_14_2 =
            fconvert.s(x87_r3_5 * fconvert.t(*(result + 0xc)) - x87_r5_9 * fconvert.t(*(result + 8)))
        ecx = &ecx[4]
        result += 0x10
        void* esi_10 = var_18 + 0x10
        var_18 = esi_10
        float var_c_4 = fconvert.s((fconvert.t(*esi_8) - fconvert.t(*edi_5)) * x87_r7)
        long double x87_r6_36 = fconvert.t(var_10_2)
        long double x87_r4_14 =
            fconvert.t(fconvert.s((fconvert.t(edi_5[1]) + fconvert.t(esi_8[1])) * x87_r7))
        *(esi_10 - 0x10) = fconvert.s(x87_r6_36 + x87_r4_14)
        edx_2[-3] = fconvert.s(x87_r4_14 - x87_r6_36)
        long double x87_r6_38 = fconvert.t(var_14_2)
        long double x87_r4_16 = fconvert.t(var_c_4)
        *(esi_10 - 0xc) = fconvert.s(x87_r6_38 + x87_r4_16)
        edx_2[-2] = fconvert.s(x87_r6_38 - x87_r4_16)
    while (esi_2 + ecx + 8 u< &edx_2[-3])
    
    return result
}
