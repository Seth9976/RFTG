// 函数名称: sub_683e40
// 虚拟地址: 0x683e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_683e40(void* arg1, void* arg2, int16_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t ebx
    uint32_t var_154 = ebx
    int16_t* esi = arg3
    int32_t* edi = *(arg2 + 0x50)
    int32_t edx_2 = *(arg1 + 0x144) + 0x80
    int32_t var_140 = edx_2
    int16_t* var_120 = esi
    int32_t* var_11c = edi
    void var_108
    void* eax_4 = &var_108
    int32_t i_2 = 8
    int32_t i
    
    do
        int16_t ecx_1 = esi[8]
        
        if (ecx_1 != 0 || esi[0x10] != ecx_1 || esi[0x18] != ecx_1 || esi[0x20] != ecx_1
                || esi[0x28] != ecx_1 || esi[0x30] != ecx_1 || esi[0x38] != ecx_1)
            int32_t ecx_7 = sx.d(esi[0x10]) * edi[0x10]
            int32_t edx_4 = sx.d(esi[0x30]) * edi[0x30]
            int32_t ebx_2 = (edx_4 + ecx_7) * 0x1151
            int32_t ecx_9 = ecx_7 * 0x187e + ebx_2
            int32_t ebx_3 = ebx_2 - edx_4 * 0x3b21
            int32_t edx_7 = sx.d(*esi) * *edi
            int32_t ecx_11 = sx.d(esi[0x20]) * edi[0x20]
            int32_t ecx_13 = (ecx_11 + edx_7) << 0xd
            int32_t edx_9 = (edx_7 - ecx_11) << 0xd
            int32_t edx_11 = ecx_9 + ecx_13
            int32_t ecx_14 = ecx_13 - ecx_9
            int32_t edx_12 = edx_9 + ebx_3
            int32_t ecx_16 = edx_9 - ebx_3
            int32_t ebx_5 = sx.d(ecx_1) * edi[8]
            int32_t ecx_18 = sx.d(esi[0x38]) * edi[0x38]
            int32_t edx_14 = sx.d(esi[0x28]) * edi[0x28]
            int32_t esi_2 = sx.d(esi[0x18]) * edi[0x18]
            int32_t ebx_6 = ebx_5 + edx_14
            int32_t edi_3 = ecx_18 + esi_2
            int32_t ebx_8 = (ebx_6 + edi_3) * 0x25a1
            int32_t edi_5 = (ecx_18 + ebx_5) * 0xffffe333
            int32_t edi_7 = (edx_14 + esi_2) * 0xffffadfd
            int32_t ebx_9 = ebx_8 - edi_3 * 0x3ec5
            int32_t ecx_21 = ecx_18 * 0x98e + edi_5 + ebx_9
            int32_t ebx_11 = ebx_8 - ebx_6 * 0xc7c
            int32_t edx_17 = edx_14 * 0x41b3 + ebx_11 + edi_7
            int32_t esi_5 = esi_2 * 0x6254 + ebx_9 + edi_7
            int32_t ebx_13 = ebx_11 + ebx_5 * 0x300b + edi_5
            *(eax_4 + 0xe0) = (edx_11 - ebx_13 + 0x400) s>> 0xb
            *eax_4 = (edx_11 + ebx_13 + 0x400) s>> 0xb
            *(eax_4 + 0xc0) = (edx_12 - esi_5 + 0x400) s>> 0xb
            *(eax_4 + 0xa0) = (ecx_16 - edx_17 + 0x400) s>> 0xb
            *(eax_4 + 0x40) = (ecx_16 + edx_17 + 0x400) s>> 0xb
            edi = var_11c
            *(eax_4 + 0x60) = (ecx_14 + ecx_21 + 0x400) s>> 0xb
            esi = var_120
            *(eax_4 + 0x80) = (ecx_14 - ecx_21 + 0x400) s>> 0xb
            edx_2 = var_140
            *(eax_4 + 0x20) = (edx_12 + esi_5 + 0x400) s>> 0xb
        else
            int32_t ecx_5 = sx.d(*esi) * *edi * 4
            *eax_4 = ecx_5
            *(eax_4 + 0x20) = ecx_5
            *(eax_4 + 0x40) = ecx_5
            *(eax_4 + 0x60) = ecx_5
            *(eax_4 + 0x80) = ecx_5
            *(eax_4 + 0xa0) = ecx_5
            *(eax_4 + 0xc0) = ecx_5
            *(eax_4 + 0xe0) = ecx_5
        
        i = i_2 - 1
        esi = &esi[1]
        edi = &edi[1]
        eax_4 += 4
        var_11c = edi
        var_120 = esi
        i_2 = i
    while (i s> 0)
    int32_t i_1 = 0
    void* ecx_23 = &var_108
    int32_t i_3 = 0
    char* result
    
    do
        int32_t esi_12 = *(ecx_23 + 4)
        result = *(arg4 + (i_1 << 2)) + arg5
        
        if (esi_12 != 0 || *(ecx_23 + 8) != esi_12 || *(ecx_23 + 0xc) != esi_12
                || *(ecx_23 + 0x10) != esi_12 || *(ecx_23 + 0x14) != esi_12
                || *(ecx_23 + 0x18) != esi_12 || *(ecx_23 + 0x1c) != esi_12)
            int32_t edx_22 = *(ecx_23 + 8)
            int32_t esi_17 = *(ecx_23 + 0x18)
            int32_t edi_26 = (esi_17 + edx_22) * 0x1151
            int32_t edx_24 = edx_22 * 0x187e + edi_26
            int32_t edx_25 = *(ecx_23 + 0x10)
            int32_t ebx_18 = edi_26 - esi_17 * 0x3b21
            int32_t esi_19 = *ecx_23
            int32_t esi_21 = (esi_19 - edx_25) << 0xd
            int32_t edi_28 = (esi_19 + edx_25) << 0xd
            int32_t esi_22 = edi_28 + edx_24
            int32_t edi_29 = edi_28 - edx_24
            int32_t edx_28 = esi_21 + ebx_18
            int32_t edx_30 = esi_21 - ebx_18
            int32_t ebx_19 = *(ecx_23 + 0x14)
            int32_t edx_31 = *(ecx_23 + 0x1c)
            int32_t ebx_20 = *(ecx_23 + 0xc)
            int32_t ebx_24 = edx_31 + ebx_20
            int32_t ebx_26 = esi_12 + ebx_19
            int32_t ebx_28 = (ebx_26 + ebx_24) * 0x25a1
            int32_t ebx_30 = (edx_31 + esi_12) * 0xffffe333
            int32_t ebx_32 = (ebx_19 + ebx_20) * 0xffffadfd
            int32_t ebx_34 = ebx_28 - ebx_24 * 0x3ec5
            int32_t ebx_36 = ebx_28 - ebx_26 * 0xc7c
            int32_t var_128_3 = ebx_36
            int32_t edx_41 = edx_31 * 0x98e + ebx_30 + ebx_34
            int32_t edx_45 = ebx_19 * 0x41b3 + ebx_36 + ebx_32
            int32_t edx_49 = ebx_20 * 0x6254 + ebx_34 + ebx_32
            int32_t edx_53 = esi_12 * 0x300b + ebx_36 + ebx_30
            edx_2 = var_140
            *result = ((esi_22 + edx_53 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            result[7] = ((esi_22 - edx_53 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            result[1] = ((edx_28 + edx_49 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            result[6] = ((edx_28 - edx_49 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            result[2] = ((edx_30 + edx_45 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            result[5] = ((edx_30 - edx_45 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            result[3] = ((edi_29 + edx_41 + 0x20000) s>> 0x12 & 0x3ff)[edx_2]
            ebx = zx.d(*(((edi_29 - edx_41 + 0x20000) s>> 0x12 & 0x3ff) + edx_2))
            i_1 = i_3
        else
            ebx.b = ((*ecx_23 + 0x10) s>> 5 & 0x3ff)[edx_2]
            *result = ebx.b
            result[1] = ebx.b
            result[2] = ebx.b
            result[3] = ebx.b
            result[5] = ebx.b
            result[6] = ebx.b
            result[7] = ebx.b
        
        i_1 += 1
        ecx_23 += 0x20
        result[4] = ebx.b
        i_3 = i_1
    while (i_1 s< 8)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
