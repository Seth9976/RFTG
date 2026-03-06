// 函数名称: sub_4ad800
// 虚拟地址: 0x4ad800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ad800(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg1
    int32_t* var_814 = esi
    sub_4ad290(esi)
    void* i = nullptr
    
    if (esi[0x116].b s> 0)
        void* ebx_1 = &esi[0xa]
        
        do
            int32_t eax_3 = *(*ebx_1 + 8)
            
            if (eax_3 != 0)
                eax_3(esi, i, 5, 0)
            
            i += 1
            ebx_1 += 0xb4
        while (i s< sx.d(esi[0x116].b))
    
    char* i_1 = nullptr
    
    if (esi[0x116].b s> 0)
        i = &esi[0x2e]
        
        do
            *(i + 4) = 0
            *i = 0
            *(esi + 0x1ec1) = i_1.b
            int32_t j
            
            do
                j = sub_4acd10(esi, i_1)
            while (j != 0)
            i_1 = &i_1[1]
            i += 0xb4
        while (i_1 s< sx.d(esi[0x116].b))
    
    sub_4ad440(esi)
    int32_t i_3 = 0
    
    if (esi[0x116].b s> 0)
        void* ebx_2 = &esi[0x2e]
        int32_t i_2
        
        do
            if (esi[6].b == 0 && (*ebx_2 != 0 || *(ebx_2 + 4) != 0))
                int32_t var_828_2 = *(ebx_2 - 0x98)
                char var_40c[0x404]
                sub_5a733b(&var_40c, "%s receives ")
                int16_t eax_4 = *ebx_2
                void var_80c
                void var_40d
                char j_3
                
                if (eax_4 != 0)
                    char* const ecx_3 = &data_83f3d3
                    
                    if (eax_4 != 1)
                        ecx_3 = &data_85f840
                    
                    char* const var_828_3 = ecx_3
                    int32_t var_82c_1 = sx.d(eax_4)
                    sub_5a733b(&var_80c, "%d card%s ")
                    void* eax_5 = &var_80c
                    char j_1
                    
                    do
                        j_1 = *eax_5
                        eax_5 += 1
                    while (j_1 != 0)
                    int32_t eax_6 = eax_5 - &var_80c
                    void* edi_1 = &var_40d
                    char j_2
                    
                    do
                        j_2 = *(edi_1 + 1)
                        edi_1 += 1
                    while (j_2 != 0)
                    int32_t esi_1
                    int32_t edi_2
                    edi_2, esi_1 = __builtin_memcpy(edi_1, &var_80c, eax_6 u>> 2 << 2)
                    bool cond:1_1 = *(ebx_2 + 4) == 0
                    __builtin_memcpy(edi_2, esi_1, eax_6 & 3)
                    
                    if (not(cond:1_1))
                        void* eax_7 = &var_40d
                        
                        do
                            j_3 = *(eax_7 + 1)
                            eax_7 += 1
                        while (j_3 != 0)
                        
                        __builtin_strncpy(eax_7, "and ", 5)
                    
                    esi = var_814
                
                int16_t eax_8 = *(ebx_2 + 4)
                
                if (eax_8 != 0)
                    int32_t var_828_4 = sx.d(eax_8)
                    sub_5a733b(&var_80c, "%d prestige ")
                    void* eax_10 = &var_80c
                    char j_4
                    
                    do
                        j_4 = *eax_10
                        eax_10 += 1
                    while (j_4 != 0)
                    int32_t eax_11 = eax_10 - &var_80c
                    void* edi_3 = &var_40d
                    char j_5
                    
                    do
                        j_5 = *(edi_3 + 1)
                        edi_3 += 1
                    while (j_5 != 0)
                    int32_t esi_2
                    int32_t edi_4
                    edi_4, esi_2 = __builtin_memcpy(edi_3, &var_80c, eax_11 u>> 2 << 2)
                    __builtin_memcpy(edi_4, esi_2, eax_11 & 3)
                    esi = var_814
                
                void* eax_12 = &var_40d
                
                do
                    j_3 = *(eax_12 + 1)
                    eax_12 += 1
                while (j_3 != 0)
                
                __builtin_strcpy(eax_12, "for Produce phase.\n")
                sub_4c5680(&var_40c)
                int32_t ecx_13 = sx.d(*(ebx_2 + 4))
                int32_t edx_2 = sx.d(*ebx_2)
                void* eax_16 =
                    (i_3 + (sx.d(*(esi + 0x1ec2)) << 2)) * 0x1c0 + *(data_27e7a40 + 0x548) + 0x2c0c0
                *(eax_16 + 0x168) = 1
                *(eax_16 + 0x19c) = edx_2
                *(eax_16 + 0x1a0) = ecx_13
            
            i_2 = i_3 + 1
            ebx_2 += 0xb4
            i_3 = i_2
        while (i_2 s< sx.d(esi[0x116].b))
    
    sub_49d660(esi)
    sub_4ae980()
    sub_49d1f0()
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
