// 函数名称: sub_657190
// 虚拟地址: 0x657190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_657190(float* arg1, void* arg2, float arg3)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t eax = *ebx
    int32_t eax_1 = eax s>> 2
    int32_t esi_1 = eax s>> 1
    float* edx_1 = arg3 i+ ((eax_1 + esi_1) << 2)
    int32_t edi_1 = eax_1 << 2
    void* eax_3 = ebx[2] + edi_1
    void* ecx_1 = arg2 + (esi_1 << 2) - 0x1c
    arg1 = edx_1
    
    do
        edx_1 -= 0x10
        long double x87_r7_2 = fneg(fconvert.t(*(ecx_1 + 8)))
        ecx_1 -= 0x20
        long double x87_r7_3 = x87_r7_2 * fconvert.t(*(eax_3 + 0xc))
        eax_3 += 0x10
        *edx_1 = fconvert.s(x87_r7_3 - fconvert.t(*(ecx_1 + 0x20)) * fconvert.t(*(eax_3 - 8)))
        edx_1[1] = fconvert.s(fconvert.t(*(ecx_1 + 0x20)) * fconvert.t(*(eax_3 - 4))
            - fconvert.t(*(eax_3 - 8)) * fconvert.t(*(ecx_1 + 0x28)))
        edx_1[2] = fconvert.s(fneg(fconvert.t(*(ecx_1 + 0x38))) * fconvert.t(*(eax_3 - 0xc))
            - fconvert.t(*(eax_3 - 0x10)) * fconvert.t(*(ecx_1 + 0x30)))
        edx_1[3] = fconvert.s(fconvert.t(*(eax_3 - 0xc)) * fconvert.t(*(ecx_1 + 0x30))
            - fconvert.t(*(ecx_1 + 0x38)) * fconvert.t(*(eax_3 - 0x10)))
    while (ecx_1 u>= arg2)
    
    float* edx_2 = arg1
    void* eax_5 = ebx[2] + edi_1
    void* ecx_2 = arg2 + (esi_1 << 2) - 0x20
    
    do
        long double x87_r7_15 = fconvert.t(*(eax_5 - 8))
        eax_5 -= 0x10
        long double x87_r7_16 = x87_r7_15 * fconvert.t(*(ecx_2 + 0x18))
        ecx_2 -= 0x20
        edx_2 = &edx_2[4]
        edx_2[-4] = fconvert.s(x87_r7_16 + fconvert.t(*(eax_5 + 0xc)) * fconvert.t(*(ecx_2 + 0x30)))
        edx_2[-3] = fconvert.s(fconvert.t(*(eax_5 + 8)) * fconvert.t(*(ecx_2 + 0x30))
            - fconvert.t(*(ecx_2 + 0x38)) * fconvert.t(*(eax_5 + 0xc)))
        edx_2[-2] = fconvert.s(fconvert.t(*(ecx_2 + 0x20)) * fconvert.t(*(eax_5 + 4))
            + fconvert.t(*eax_5) * fconvert.t(*(ecx_2 + 0x28)))
        edx_2[-1] = fconvert.s(fconvert.t(*(ecx_2 + 0x20)) * fconvert.t(*eax_5)
            - fconvert.t(*(eax_5 + 4)) * fconvert.t(*(ecx_2 + 0x28)))
    while (ecx_2 u>= arg2)
    
    int32_t eax_6 = arg3 i+ (esi_1 << 2)
    int32_t var_1c = esi_1
    int32_t var_20 = eax_6
    sub_657020(ebx, sub_656f20(ebx, edx_2, ecx_2), arg3)
    float* eax_10 = ebx[2] + (esi_1 << 2)
    float* edi_4 = arg1
    void* ecx_6 = arg3 i+ 0xc
    void* edx_5 = &arg1[2]
    
    while (true)
        edx_5 -= 0x10
        long double x87_r7_28 = fconvert.t(eax_10[1]) * fconvert.t(*(ecx_6 - 0xc))
        long double x87_r6_17 = fconvert.t(*(ecx_6 - 8))
        ecx_6 += 0x20
        long double x87_r6_18 = x87_r6_17 * fconvert.t(*eax_10)
        eax_10 = &eax_10[8]
        *(edx_5 + 4) = fconvert.s(x87_r7_28 - x87_r6_18)
        *edi_4 = fconvert.s(fneg(fconvert.t(*(ecx_6 - 0x2c)) * fconvert.t(eax_10[-8])
            + fconvert.t(*(ecx_6 - 0x28)) * fconvert.t(eax_10[-7])))
        *edx_5 = fconvert.s(fconvert.t(*(ecx_6 - 0x24)) * fconvert.t(eax_10[-5])
            - fconvert.t(eax_10[-6]) * fconvert.t(*(ecx_6 - 0x20)))
        edi_4[1] = fconvert.s(fneg(fconvert.t(*(ecx_6 - 0x24)) * fconvert.t(eax_10[-6])
            + fconvert.t(eax_10[-5]) * fconvert.t(*(ecx_6 - 0x20))))
        *(edx_5 - 4) = fconvert.s(fconvert.t(*(ecx_6 - 0x1c)) * fconvert.t(eax_10[-3])
            - fconvert.t(*(ecx_6 - 0x18)) * fconvert.t(eax_10[-4]))
        edi_4[2] = fconvert.s(fneg(fconvert.t(*(ecx_6 - 0x18)) * fconvert.t(eax_10[-3])
            + fconvert.t(*(ecx_6 - 0x1c)) * fconvert.t(eax_10[-4])))
        *(edx_5 - 8) = fconvert.s(fconvert.t(*(ecx_6 - 0x14)) * fconvert.t(eax_10[-1])
            - fconvert.t(*(ecx_6 - 0x10)) * fconvert.t(eax_10[-2]))
        edi_4[3] = fconvert.s(fneg(fconvert.t(*(ecx_6 - 0x10)) * fconvert.t(eax_10[-1])
            + fconvert.t(*(ecx_6 - 0x14)) * fconvert.t(eax_10[-2])))
        
        if (ecx_6 - 0xc u>= edx_5 - 8)
            break
        
        edi_4 = &edi_4[4]
    
    void* ecx_8 = edi_1 i+ arg3 + 8
    float* i = arg1
    void* edx_8 = &i[2 - esi_1]
    
    do
        long double x87_r7_55 = fconvert.t(i[-1])
        i -= 0x10
        edx_8 -= 0x10
        long double x87_r7_56 = fconvert.t(fconvert.s(x87_r7_55))
        ecx_8 += 0x10
        *(edx_8 + 4) = fconvert.s(x87_r7_56)
        *(ecx_8 - 0x18) = fconvert.s(fneg(x87_r7_56))
        long double x87_r7_59 = fconvert.t(fconvert.s(fconvert.t(i[2])))
        *edx_8 = fconvert.s(x87_r7_59)
        *(ecx_8 - 0x14) = fconvert.s(fneg(x87_r7_59))
        long double x87_r7_62 = fconvert.t(fconvert.s(fconvert.t(i[1])))
        *(edx_8 - 4) = fconvert.s(x87_r7_62)
        *(ecx_8 - 0x10) = fconvert.s(fneg(x87_r7_62))
        long double x87_r7_65 = fconvert.t(fconvert.s(fconvert.t(*i)))
        *(edx_8 - 8) = fconvert.s(x87_r7_65)
        *(ecx_8 - 0xc) = fconvert.s(fneg(x87_r7_65))
    while (ecx_8 - 8 u< i)
    
    float* result = arg1
    void* ecx_9 = &arg1[2]
    
    do
        result -= 0x10
        *result = fconvert.s(fconvert.t(*(ecx_9 + 4)))
        ecx_9 += 0x10
        result[1] = fconvert.s(fconvert.t(*(ecx_9 - 0x10)))
        result[2] = fconvert.s(fconvert.t(*(ecx_9 - 0x14)))
        result[3] = fconvert.s(fconvert.t(*(ecx_9 - 0x18)))
    while (result u> eax_6)
    
    return result
}
