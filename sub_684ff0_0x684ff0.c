// 函数名称: sub_684ff0
// 虚拟地址: 0x684ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_684ff0(void* arg1, void* arg2, void* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* eax_4 = *(arg1 + 0x144) + 0x80
    int32_t* edx_1 = *(arg2 + 0x50)
    int16_t* esi_1 = arg3 + 0x60
    int32_t i = 8
    void* ebx = &(&__saved_ebp)[-0x19]
    int32_t i_2 = 8
    void* var_a4 = ebx
    
    do
        if (i != 4)
            int16_t eax_8 = esi_1[-0x28]
            int32_t eax_12
            
            if (eax_8 != 0 || esi_1[-0x20] != eax_8 || esi_1[-0x18] != eax_8 || esi_1[-8] != eax_8
                    || *esi_1 != eax_8 || esi_1[8] != eax_8)
                int32_t ebx_2 = sx.d(esi_1[-0x18]) * edx_1[0x18]
                int32_t eax_15 = (sx.d(esi_1[-0x30]) * *edx_1) << 0xe
                int32_t ecx_4 =
                    sx.d(esi_1[-0x20]) * edx_1[0x10] * 0x3b21 - sx.d(*esi_1) * edx_1[0x30] * 0x187e
                int32_t edi_4 = ecx_4 + eax_15
                int32_t eax_16 = eax_15 - ecx_4
                int32_t ecx_6 = sx.d(esi_1[-8]) * edx_1[0x28]
                int32_t eax_18 = sx.d(esi_1[8]) * edx_1[0x38]
                int32_t eax_21 = sx.d(esi_1[-0x28]) * edx_1[8]
                int32_t ecx_10 = ecx_6 * 0x2e75 - ebx_2 * 0x4587 + eax_21 * 0x21f9 - eax_18 * 0x6c2
                int32_t eax_25 = eax_21 * 0x5203 + ebx_2 * 0x1ccd - ecx_6 * 0x133e - eax_18 * 0x1050
                ebx = var_a4
                *(ebx - 0x20) = (edi_4 + eax_25 + 0x800) s>> 0xc
                *(ebx + 0x40) = (edi_4 - eax_25 + 0x800) s>> 0xc
                i = i_2
                *ebx = (eax_16 + ecx_10 + 0x800) s>> 0xc
                eax_12 = (eax_16 - ecx_10 + 0x800) s>> 0xc
            else
                eax_12 = sx.d(esi_1[-0x30]) * *edx_1 * 4
                *(ebx - 0x20) = eax_12
                *ebx = eax_12
                *(ebx + 0x40) = eax_12
            
            *(ebx + 0x20) = eax_12
        
        i -= 1
        ebx += 4
        esi_1 = &esi_1[1]
        edx_1 = &edx_1[1]
        var_a4 = ebx
        i_2 = i
    while (i s> 0)
    
    int32_t i_1 = 0
    void var_88
    void* ecx_11 = &var_88
    int32_t i_3 = 0
    char* result
    
    do
        result = *(arg4 + (i_1 << 2)) + arg5
        int32_t edx_3 = *(ecx_11 + 4)
        char* result_1 = result
        
        if (edx_3 != 0 || *(ecx_11 + 8) != edx_3 || *(ecx_11 + 0xc) != edx_3
                || *(ecx_11 + 0x14) != edx_3 || *(ecx_11 + 0x18) != edx_3 || *(ecx_11 + 0x1c) != edx_3)
            int32_t ebx_14 = *(ecx_11 + 0xc)
            int32_t eax_34 = *(ecx_11 + 8) * 0x3b21 - *(ecx_11 + 0x18) * 0x187e
            int32_t edi_12 = *ecx_11 << 0xe
            int32_t esi_4 = eax_34 + edi_12
            int32_t edi_13 = edi_12 - eax_34
            int32_t eax_35 = *(ecx_11 + 0x1c)
            int32_t eax_36 = *(ecx_11 + 0x14)
            int32_t eax_40 = eax_36 * 0x2e75 - ebx_14 * 0x4587 + edx_3 * 0x21f9 - eax_35 * 0x6c2
            int32_t edx_11 = edx_3 * 0x5203 + ebx_14 * 0x1ccd - eax_36 * 0x133e - eax_35 * 0x1050
            *result_1 = *(((esi_4 + edx_11 + 0x40000) s>> 0x13 & 0x3ff) + eax_4)
            result_1[3] = *(((esi_4 - edx_11 + 0x40000) s>> 0x13 & 0x3ff) + eax_4)
            i_1 = i_3
            result_1[1] = *(((edi_13 + eax_40 + 0x40000) s>> 0x13 & 0x3ff) + eax_4)
            result.b = *(((edi_13 - eax_40 + 0x40000) s>> 0x13 & 0x3ff) + eax_4)
            result_1[2] = result.b
        else
            char* edx_7
            edx_7.b = *(((*ecx_11 + 0x10) s>> 5 & 0x3ff) + eax_4)
            *result = edx_7.b
            result[1] = edx_7.b
            result[2] = edx_7.b
            result[3] = edx_7.b
        
        i_1 += 1
        ecx_11 += 0x20
        i_3 = i_1
    while (i_1 s< 4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
