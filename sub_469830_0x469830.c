// 函数名称: sub_469830
// 虚拟地址: 0x469830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_469830(int32_t arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = *(arg3 + 4)
    int32_t var_1c = eax_3
    int32_t* eax_4 = arg2 + 0x50
    int32_t ecx = 1
    int32_t edi
    int32_t var_180 = edi
    void* var_120 = arg2
    int32_t var_118 = 1
    int32_t i_4 = 0
    int32_t var_10c[0x3c]
    int32_t (* ebx)[0x3c] = &var_10c
    int32_t* var_12c = eax_4
    int32_t* var_114 = eax_4
    int32_t i
    
    do
        if (*eax_4 == 3)
            int128_t var_170[0x4]
            sub_5abfc0(&var_170, 0, 0x3c)
            __builtin_memcpy(&(*ebx)[-1], &var_170, 0x3c)
            int32_t ecx_1 = *ebx
            
            if (ecx_1 == 0xffffffff)
                int32_t var_184_4 = var_10c[i_4 * 0xf]
                int32_t var_188_4 = eax_3
                int32_t eax_21 = sub_4c57f0("
                    Invited someone who isn't friends (or is blocked) playerDBID:%d, friendID:%d")
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_21
            
            (&var_1c)[var_118] = ecx_1
            int32_t eax_6 = var_118 + 1
            var_118 = eax_6
            ecx = eax_6
        
        i = i_4 + 1
        eax_4 = &var_114[3]
        ebx = &(*ebx)[0xf]
        i_4 = i
        var_114 = eax_4
    while (i s< 4)
    int32_t i_1 = 0
    
    if (ecx - 1 s> 0)
        do
            int32_t eax_8 = i_1 + 1
            
            if (eax_8 s< ecx)
                int32_t edi_3 = (&var_1c)[i_1]
                
                do
                    if (edi_3 == (&var_1c)[eax_8])
                        int32_t var_184_5 = edi_3
                        int32_t eax_22 = sub_4c57f0("
                            Tried to create custom game with the same player multiple times %d")
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_22
                    
                    eax_8 += 1
                while (eax_8 s< ecx)
            
            i_1 += 1
        while (i_1 s< ecx - 1)
    
    int128_t* eax_9 = sub_469180()
    int32_t eax_10 = eax_9[0x14].d
    eax_9[0x14].d = eax_10 + 1
    void* esi_2 = &eax_9[eax_10 * 5]
    int32_t var_184_2 = 0x20
    char* var_18c_2 = esi_2 + 0xc
    *esi_2 = *(arg3 + 4)
    char* i_3 = _strncpy(var_18c_2, arg3 + 0x10, var_184_2)
    *(esi_2 + 0x2b) = 0
    *(esi_2 + 0x2c) = *(arg3 + 0x30)
    *(esi_2 + 0x30) = 0
    int32_t* esi_3 = var_12c
    void var_110
    void* edi_5 = &var_110
    int32_t i_5 = 4
    int32_t i_2
    
    do
        if (*esi_3 == 3)
            i_3 = sub_469310(eax_9, edi_5)
        
        esi_3 = &esi_3[3]
        edi_5 += 0x3c
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    char* i_6 = nullptr
    
    if (eax_9[0x14].d s> 0)
        int32_t* edi_6 = eax_9
        
        do
            int32_t ecx_5 = edi_6[0x12]
            void* eax_14
            
            if (ecx_5 != 0)
                void* edx_3 = data_27e7a44
                uint32_t eax_12 = zx.d(ecx_5.w)
                
                if (eax_12 u>= *(edx_3 + 0x20))
                    goto label_4699f2
                
                eax_14 = eax_12 * 0x1c4 + *(edx_3 + 0x1c)
                
                if (*(eax_14 + 0x1c0) != ecx_5 || *(eax_14 + 4) != *edi_6)
                    goto label_4699f2
                
                goto label_469a04
            
        label_4699f2:
            eax_14 = sub_4b7170(*edi_6)
            
            if (eax_14 != 0)
                edi_6[0x12] = *(eax_14 + 0x1c0)
            label_469a04:
                
                if (eax_14 != 0)
                    void* ecx_7 = *eax_14
                    
                    if (ecx_7 != 0)
                        int32_t** edx_5 = data_27e7bb8
                        uint32_t eax_15 = zx.d(ecx_7.w)
                        
                        if (eax_15 u< edx_5[1])
                            void* eax_17 = &(*edx_5)[eax_15 * 0x13]
                            
                            if (*(eax_17 + 0x48) == ecx_7)
                                int32_t var_18
                                int32_t* var_184_3 = &var_18
                                void* var_188_3 = eax_17 + 0x3c
                                int32_t var_14_1 = 0x1f8
                                int32_t var_10_1 = 0xf4249
                                var_18 = 0xfeedface
                                void* ecx_8
                                int32_t** edx_6
                                ecx_8, edx_6 = sub_4c72b0(0xc, edx_5, ecx_7)
                                int128_t* var_18c_3 = eax_9
                                void* var_190_1 = eax_17 + 0x3c
                                sub_4c72b0(0x1f8, edx_6, ecx_8)
            
            i_3 = &i_6[1]
            edi_6 = &edi_6[0x14]
            i_6 = i_3
        while (i_3 s< eax_9[0x14].d)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i_3
}
