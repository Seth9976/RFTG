// 函数名称: sub_4db6b0
// 虚拟地址: 0x4db6b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4db6b0()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    long double x87_r7 = fconvert.t(*(entry_ebx + 0xa0))
    long double x87_r6 = fconvert.t(data_27e8394)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        long double x87_r7_1 = fconvert.t(*(entry_ebx + 0xa4))
        long double x87_r6_1 = fconvert.t(data_27e8398)
        x87_r6_1 - x87_r7_1
        eax.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r7_2 = fconvert.t(*(entry_ebx + 0xa8))
            long double x87_r6_2 = fconvert.t(data_27e839c)
            x87_r6_2 - x87_r7_2
            eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                long double x87_r7_3 = fconvert.t(*(entry_ebx + 0xac))
                long double x87_r6_3 = fconvert.t(data_27e83a0)
                x87_r6_3 - x87_r7_3
                eax.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    long double x87_r7_4 = fconvert.t(*(entry_ebx + 0x120))
                    long double x87_r6_4 = fconvert.t(data_27e83a4)
                    x87_r6_4 - x87_r7_4
                    eax.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_4) && sub_4e3b20(&data_27e83b8, entry_ebx + 0x124) == 0
                            && sub_4e3b20(&data_27e83c8, entry_ebx + 0x134) == 0)
                        void* eax_3 = &data_27e84cc
                        int32_t ecx_1 = 0x40
                        
                        while (*(entry_ebx - &data_27e84cc + eax_3 + 0xb0) == *eax_3)
                            ecx_1 -= 4
                            eax_3 += 4
                            
                            if (ecx_1 u< 4)
                                void* eax_4 = &data_27e850c
                                int32_t ecx_2 = 0x30
                                
                                while (*(entry_ebx - &data_27e850c + eax_4 + 0xf0) == *eax_4)
                                    ecx_2 -= 4
                                    eax_4 += 4
                                    
                                    if (ecx_2 u< 4)
                                        break
                                
                                break
    
    char eax_5 = sub_4e3a00(entry_ebx + 8, 0x27e80ac)
    bool p_5
    
    if (eax_5 != 0)
        fconvert.t(*(entry_ebx + 0x168)) - fconvert.t(data_27e8480)
        p_5 = unimplemented  {test ah, 0x44}
    
    if (eax_5 == 0 || p_5)
        __builtin_memcpy(0x27e80ac, entry_ebx + 8, 0x40)
        __builtin_memcpy(0x27e816c, 0x27e82b4, 0x40)
        data_27e8480 = fconvert.s(fconvert.t(*(entry_ebx + 0x168)))
        long double x87_r6_6 = fconvert.t(data_27e8480)
        data_27e8174 = fconvert.s(fconvert.t(data_27e82bc) * x87_r6_6)
        data_27e8184 = fconvert.s(fconvert.t(data_27e8184) * x87_r6_6)
        data_27e8194 = fconvert.s(x87_r6_6 * fconvert.t(data_27e8194))
        float var_4c[0x10]
        sub_406020(&var_4c, 0x27e816c, 0x27e80ac)
        __builtin_memcpy(0x27e80ec, &var_4c, 0x40)
        sub_406020(&var_4c, 0x27e81ec, 0x27e816c)
        __builtin_memcpy(0x27e81ac, &var_4c, 0x40)
        sub_406020(&var_4c, 0x27e81ec, 0x27e80ec)
        __builtin_memcpy(0x27e812c, &var_4c, 0x40)
    
    data_27e8444 = *(entry_ebx + 0x48)
    int32_t eax_10
    int32_t ecx_4
    eax_10, ecx_4 = sub_54c2d0(*(entry_ebx + 0x48))
    int32_t* eax_11 = sub_54c4b0(ecx_4, eax_10)
    
    if (eax_11[0x3e0].b == 0)
        sub_5349c0(eax_11, eax_10, &eax_11[1], *eax_11)
        eax_11[0x3e0].b = 1
    
    int32_t i = 0
    int32_t* ecx_7 = &data_27e83fc - entry_ebx
    data_27e83fc = &eax_11[1]
    int32_t i_1 = 0
    void* edi = entry_ebx + 0x4c
    int32_t* var_c = ecx_7
    
    do
        if (*edi != 0)
            int32_t edx_8 = *edi
            *(ecx_7 + edi) = edx_8
            sub_534b50(i, edx_8, data_27e83fc, i + 0x53, *edi)
            ecx_7 = var_c
            i = i_1
        
        i += 1
        edi += 4
        i_1 = i
    while (i s< 8)
    
    if (*(entry_ebx + 0x6c) != 0)
        int32_t* esi_8 = *(entry_ebx + 0x6c)
        data_27e8468 = esi_8
        data_27e846c = *(entry_ebx + 0x70)
        data_27e8470 = *(entry_ebx + 0x74)
        data_27e8474 = *(entry_ebx + 0x78)
        data_27e8478 = *(entry_ebx + 0x7c)
        void* eax_13
        int32_t edx_11
        eax_13, edx_11 = sub_54c640(esi_8)
        int32_t eax_14 = *(eax_13 + 0x28)
        void* eax_15
        int32_t edx_12
        eax_15, edx_12 = sub_534b50(eax_14, edx_11, data_27e83fc, 0x58, eax_14)
        sub_534b50(eax_15, edx_12, data_27e83fc, 0x59, *(eax_13 + 0x2c))
        int32_t eax_16 = data_27e8470
        int32_t ecx_14 = data_27e8474
        data_27e83d8 = data_27e846c
        int32_t edx_14 = data_27e8478
        data_27e83dc = eax_16
        data_27e83e0 = ecx_14
        data_27e83e4 = edx_14
    
    data_27e83a8 = *(entry_ebx + 0x80)
    data_27e83ac = *(entry_ebx + 0x84)
    data_27e83b0 = *(entry_ebx + 0x88)
    data_27e83b4 = *(entry_ebx + 0x8c)
    data_27e83ec = *(entry_ebx + 0x90)
    data_27e83f0 = *(entry_ebx + 0x94)
    data_27e83f4 = *(entry_ebx + 0x98)
    data_27e83f8 = *(entry_ebx + 0x9c)
    data_27e8394 = *(entry_ebx + 0xa0)
    data_27e8398 = *(entry_ebx + 0xa4)
    data_27e839c = *(entry_ebx + 0xa8)
    data_27e83a0 = *(entry_ebx + 0xac)
    data_27e83a4 = fconvert.s(fconvert.t(*(entry_ebx + 0x120)))
    data_27e83b8 = *(entry_ebx + 0x124)
    data_27e83bc = *(entry_ebx + 0x128)
    data_27e83c0 = *(entry_ebx + 0x12c)
    data_27e83c4 = *(entry_ebx + 0x130)
    data_27e83c8 = *(entry_ebx + 0x134)
    data_27e83cc = *(entry_ebx + 0x138)
    data_27e83d0 = *(entry_ebx + 0x13c)
    data_27e83d4 = *(entry_ebx + 0x140)
    __builtin_memcpy(&data_27e8354, entry_ebx + 0xb0, 0x40)
    __builtin_memcpy(&data_27e8324, entry_ebx + 0xf0, 0x30)
    int32_t* ecx_22 = data_3078804
    data_27e83e8 = *(entry_ebx + 0x160)
    data_27e8400 = entry_ebx
    return (*(*ecx_22 + 0x40))(0x27e80ac)
}
