// 函数名称: sub_685380
// 虚拟地址: 0x685380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_685380(void* arg1, void* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* eax_4 = *(arg1 + 0x144) + 0x80
    int32_t* ecx_1 = *(arg2 + 0x50)
    int32_t ebx
    int32_t var_5c = ebx
    int16_t* eax_7 = arg3 + 0x30
    int32_t esi = 6
    int32_t var_4c = 6
    void* edi = &(&__saved_ebp)[-0x10]
    
    do
        if (esi != 4 && esi != 2 && esi != 0)
            int16_t edx_4 = eax_7[-0x10]
            int32_t edx_8
            
            if (edx_4 != 0 || *eax_7 != edx_4 || eax_7[0x10] != edx_4 || eax_7[0x20] != edx_4)
                int32_t esi_6 = sx.d(eax_7[0x10]) * ecx_1[0x28] * 0x1b37
                    - sx.d(eax_7[0x20]) * ecx_1[0x38] * 0x1712 + sx.d(eax_7[-0x10]) * ecx_1[8] * 0x73fc
                    - sx.d(*eax_7) * ecx_1[0x18] * 0x28ba
                int32_t edx_11 = (sx.d(eax_7[-0x18]) * *ecx_1) << 0xf
                esi = var_4c
                *(edi - 4) = (esi_6 + edx_11 + 0x1000) s>> 0xd
                edx_8 = (edx_11 - esi_6 + 0x1000) s>> 0xd
            else
                edx_8 = sx.d(eax_7[-0x18]) * *ecx_1 * 4
                *(edi - 4) = edx_8
            
            *(edi + 0x1c) = edx_8
        
        if (esi != 5 && esi != 3 && esi != 1)
            int16_t edx_15 = eax_7[-0xf]
            int32_t edx_19
            
            if (edx_15 != 0 || eax_7[1] != edx_15 || eax_7[0x11] != edx_15 || eax_7[0x21] != edx_15)
                int32_t esi_12 = sx.d(eax_7[0x11]) * ecx_1[0x29] * 0x1b37
                    - sx.d(eax_7[0x21]) * ecx_1[0x39] * 0x1712 - sx.d(eax_7[1]) * ecx_1[0x19] * 0x28ba
                    + sx.d(eax_7[-0xf]) * ecx_1[9] * 0x73fc
                int32_t edx_22 = (sx.d(eax_7[-0x17]) * ecx_1[1]) << 0xf
                esi = var_4c
                *edi = (esi_12 + edx_22 + 0x1000) s>> 0xd
                edx_19 = (edx_22 - esi_12 + 0x1000) s>> 0xd
            else
                edx_19 = sx.d(eax_7[-0x17]) * ecx_1[1] * 4
                *edi = edx_19
            
            *(edi + 0x20) = edx_19
        
        if (esi != 6 && esi != 4 && esi != 2)
            int16_t edx_25 = eax_7[-0xe]
            int32_t edx_29
            
            if (edx_25 != 0 || eax_7[2] != edx_25 || eax_7[0x12] != edx_25 || eax_7[0x22] != edx_25)
                int32_t esi_18 = sx.d(eax_7[0x12]) * ecx_1[0x2a] * 0x1b37
                    - sx.d(eax_7[0x22]) * ecx_1[0x3a] * 0x1712 - sx.d(eax_7[2]) * ecx_1[0x1a] * 0x28ba
                    + sx.d(eax_7[-0xe]) * ecx_1[0xa] * 0x73fc
                int32_t edx_32 = (sx.d(eax_7[-0x16]) * ecx_1[2]) << 0xf
                esi = var_4c
                *(edi + 4) = (esi_18 + edx_32 + 0x1000) s>> 0xd
                edx_29 = (edx_32 - esi_18 + 0x1000) s>> 0xd
            else
                edx_29 = sx.d(eax_7[-0x16]) * ecx_1[2] * 4
                *(edi + 4) = edx_29
            
            *(edi + 0x24) = edx_29
        
        if (esi != 7 && esi != 5 && esi != 3)
            int16_t edx_36 = eax_7[-0xd]
            int32_t edx_40
            
            if (edx_36 != 0 || eax_7[3] != edx_36 || eax_7[0x13] != edx_36 || eax_7[0x23] != edx_36)
                int32_t esi_24 = sx.d(eax_7[0x13]) * ecx_1[0x2b] * 0x1b37
                    - sx.d(eax_7[0x23]) * ecx_1[0x3b] * 0x1712 - sx.d(eax_7[3]) * ecx_1[0x1b] * 0x28ba
                    + sx.d(eax_7[-0xd]) * ecx_1[0xb] * 0x73fc
                int32_t edx_43 = (sx.d(eax_7[-0x15]) * ecx_1[3]) << 0xf
                esi = var_4c
                *(edi + 8) = (esi_24 + edx_43 + 0x1000) s>> 0xd
                edx_40 = (edx_43 - esi_24 + 0x1000) s>> 0xd
            else
                edx_40 = sx.d(eax_7[-0x15]) * ecx_1[3] * 4
                *(edi + 8) = edx_40
            
            *(edi + 0x28) = edx_40
        
        esi -= 4
        eax_7 = &eax_7[4]
        ecx_1 = &ecx_1[4]
        edi += 0x10
        var_4c = esi
    while (esi + 2 s> 0)
    
    char* edx_48 = *arg4 + arg5
    int32_t var_44
    int32_t var_3c
    int32_t var_34
    int32_t var_2c
    char* eax_9
    int32_t var_48
    
    if (var_44 != 0 || var_3c != 0 || var_34 != 0 || var_2c != 0)
        int32_t ecx_10 = var_44 * 0x73fc - var_3c * 0x28ba + var_34 * 0x1b37 - var_2c * 0x1712
        int32_t eax_11 = var_48 << 0xf
        char* ecx_13
        ecx_13.b = *(((ecx_10 + eax_11 + 0x80000) s>> 0x14 & 0x3ff) + eax_4)
        *edx_48 = ecx_13.b
        eax_9.b = *(((eax_11 - ecx_10 + 0x80000) s>> 0x14 & 0x3ff) + eax_4)
    else
        eax_9.b = *(((var_48 + 0x10) s>> 5 & 0x3ff) + eax_4)
        *edx_48 = eax_9.b
    edx_48[1] = eax_9.b
    char* edx_50 = arg4[1] + arg5
    int32_t var_28
    int32_t var_24
    int32_t var_1c
    int32_t var_14
    int32_t var_c
    
    if (var_24 == 0 && var_1c == 0 && var_14 == 0 && var_c == 0)
        char* eax_18
        eax_18.b = *(((var_28 + 0x10) s>> 5 & 0x3ff) + eax_4)
        *edx_50 = eax_18.b
        edx_50[1] = eax_18.b
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_18
    
    int32_t esi_30 = var_24 * 0x73fc + var_14 * 0x1b37 - var_1c * 0x28ba - var_c * 0x1712
    int32_t eax_20 = var_28 << 0xf
    char* ecx_24
    ecx_24.b = *(((esi_30 + eax_20 + 0x80000) s>> 0x14 & 0x3ff) + eax_4)
    *edx_50 = ecx_24.b
    char* eax_24
    eax_24.b = *(((eax_20 - esi_30 + 0x80000) s>> 0x14 & 0x3ff) + eax_4)
    edx_50[1] = eax_24.b
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_24
}
