// 函数名称: sub_684480
// 虚拟地址: 0x684480
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_684480(void* arg1, void* arg2, int16_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int16_t* esi = arg3
    int32_t* edx_1 = *(arg2 + 0x50)
    int32_t edi_1 = *(arg1 + 0x144) + 0x80
    int32_t var_134 = edi_1
    void var_108
    void* ecx_1 = &var_108
    int32_t i_2 = 8
    int32_t i
    
    do
        int16_t eax_4 = esi[8]
        int32_t eax_6
        
        if (eax_4 != 0 || esi[0x10] != eax_4 || esi[0x18] != eax_4 || esi[0x20] != eax_4
                || esi[0x28] != eax_4 || esi[0x30] != eax_4 || esi[0x38] != eax_4)
            int32_t ebx_2 = sx.d(esi[0x20]) * edx_1[0x20]
            int32_t edi_3 = sx.d(*esi) * *edx_1
            int32_t eax_8 = sx.d(esi[0x10]) * edx_1[0x10]
            int32_t ebx_4 = sx.d(esi[0x30]) * edx_1[0x30]
            int32_t ebx_6 = ebx_2 + edi_3
            int32_t edi_4 = edi_3 - ebx_2
            int32_t ebx_8 = ebx_4 + eax_8
            int32_t eax_12 = (((eax_8 - ebx_4) * 0x16a) s>> 8) - ebx_8
            int32_t eax_14 = ebx_8 + ebx_6
            int32_t ebx_10 = ebx_6 - ebx_8
            int32_t ebx_11 = eax_12 + edi_4
            int32_t edi_5 = edi_4 - eax_12
            int32_t edi_7 = sx.d(esi[8]) * edx_1[8]
            int32_t eax_18 = sx.d(esi[0x18]) * edx_1[0x18]
            int32_t ebx_13 = sx.d(esi[0x38]) * edx_1[0x38]
            int32_t eax_20 = sx.d(esi[0x28]) * edx_1[0x28]
            int32_t ebx_15 = eax_18 + eax_20
            int32_t eax_21 = eax_20 - eax_18
            int32_t eax_22 = ebx_13 + edi_7
            int32_t edi_8 = edi_7 - ebx_13
            int32_t edi_10 = ebx_15 + eax_22
            int32_t ebx_20 = ((edi_8 + eax_21) * 0x1d9) s>> 8
            int32_t edi_15 = ((eax_21 * 0xfffffd63) s>> 8) - edi_10 + ebx_20
            int32_t eax_26 = (((eax_22 - ebx_15) * 0x16a) s>> 8) - edi_15
            int32_t edi_20 = ((edi_8 * 0x115) s>> 8) - ebx_20 + eax_26
            *ecx_1 = edi_10 + eax_14
            *(ecx_1 + 0xe0) = eax_14 - edi_10
            *(ecx_1 + 0xc0) = ebx_11 - edi_15
            *(ecx_1 + 0x20) = edi_15 + ebx_11
            *(ecx_1 + 0xa0) = edi_5 - eax_26
            *(ecx_1 + 0x40) = eax_26 + edi_5
            eax_6 = ebx_10 - edi_20
            edi_1 = var_134
            *(ecx_1 + 0x80) = edi_20 + ebx_10
        else
            eax_6 = sx.d(*esi) * *edx_1
            *ecx_1 = eax_6
            *(ecx_1 + 0x20) = eax_6
            *(ecx_1 + 0x40) = eax_6
            *(ecx_1 + 0x80) = eax_6
            *(ecx_1 + 0xa0) = eax_6
            *(ecx_1 + 0xc0) = eax_6
            *(ecx_1 + 0xe0) = eax_6
        
        *(ecx_1 + 0x60) = eax_6
        i = i_2 - 1
        esi = &esi[1]
        edx_1 = &edx_1[1]
        ecx_1 += 4
        i_2 = i
    while (i s> 0)
    int32_t i_1 = 0
    void* ecx_2 = &var_108
    int32_t i_3 = 0
    char* result
    
    do
        int32_t edx_3 = *(ecx_2 + 4)
        result = *(arg4 + (i_1 << 2)) + arg5
        char* edx_6
        
        if (edx_3 != 0 || *(ecx_2 + 8) != edx_3 || *(ecx_2 + 0xc) != edx_3 || *(ecx_2 + 0x10) != edx_3
                || *(ecx_2 + 0x14) != edx_3 || *(ecx_2 + 0x18) != edx_3 || *(ecx_2 + 0x1c) != edx_3)
            int32_t edi_28 = *(ecx_2 + 0x10)
            int32_t edx_7 = *ecx_2
            int32_t esi_1 = edx_7 + edi_28
            int32_t edx_8 = edx_7 - edi_28
            int32_t edx_9 = *(ecx_2 + 8)
            int32_t ebx_25 = *(ecx_2 + 0x18) + edx_9
            int32_t var_110_4 = ebx_25
            int32_t edx_13 = (((edx_9 - *(ecx_2 + 0x18)) * 0x16a) s>> 8) - ebx_25
            int32_t edx_14 = ebx_25 + esi_1
            int32_t esi_2 = esi_1 - ebx_25
            int32_t ebx_26 = *(ecx_2 + 0x1c)
            int32_t esi_3 = edx_13 + edx_8
            int32_t edi_30 = edx_8 - edx_13
            int32_t edx_16 = *(ecx_2 + 0xc)
            int32_t esi_4 = *(ecx_2 + 0x14)
            int32_t edi_31 = esi_4 + edx_16
            int32_t esi_5 = esi_4 - edx_16
            int32_t edi_32 = *(ecx_2 + 4)
            int32_t edx_17 = ebx_26 + edi_32
            int32_t edi_33 = edi_32 - ebx_26
            int32_t ebx_28 = edi_31 + edx_17
            int32_t ebx_31 = ((edi_33 + esi_5) * 0x1d9) s>> 8
            int32_t esi_9 = ((esi_5 * 0xfffffd63) s>> 8) - ebx_28 + ebx_31
            int32_t edx_21 = (((edx_17 - edi_31) * 0x16a) s>> 8) - esi_9
            int32_t edi_37 = ((edi_33 * 0x115) s>> 8) - ebx_31 + edx_21
            edi_1 = var_134
            *result = ((ebx_28 + edx_14) s>> 5 & 0x3ff)[edi_1]
            result[7] = ((edx_14 - ebx_28) s>> 5 & 0x3ff)[edi_1]
            result[1] = ((esi_9 + esi_3) s>> 5 & 0x3ff)[edi_1]
            result[6] = ((esi_3 - esi_9) s>> 5 & 0x3ff)[edi_1]
            result[2] = ((edx_21 + edi_30) s>> 5 & 0x3ff)[edi_1]
            result[5] = ((edi_30 - edx_21) s>> 5 & 0x3ff)[edi_1]
            result[4] = ((edi_37 + esi_2) s>> 5 & 0x3ff)[edi_1]
            edx_6 = zx.d(*(((esi_2 - edi_37) s>> 5 & 0x3ff) + edi_1))
            i_1 = i_3
        else
            edx_6.b = (*ecx_2 s>> 5 & 0x3ff)[edi_1]
            *result = edx_6.b
            result[1] = edx_6.b
            result[2] = edx_6.b
            result[4] = edx_6.b
            result[5] = edx_6.b
            result[6] = edx_6.b
            result[7] = edx_6.b
        
        i_1 += 1
        ecx_2 += 0x20
        result[3] = edx_6.b
        i_3 = i_1
    while (i_1 s< 8)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
