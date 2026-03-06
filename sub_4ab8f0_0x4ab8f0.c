// 函数名称: sub_4ab8f0
// 虚拟地址: 0x4ab8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ab8f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    void* j = __security_cookie ^ &__saved_ebp
    void* j_5 = j
    int32_t* edi = arg1
    int32_t i = 0
    int32_t* var_810 = edi
    
    if (edi[0x116].b s> 0)
        int32_t* ebx_1 = &edi[0xa]
        
        do
            j = *(*ebx_1 + 8)
            
            if (j != 0)
                j = j(edi, i, 4, 0)
            
            i += 1
            ebx_1 = &ebx_1[0x2d]
        while (i s< sx.d(edi[0x116].b))
    
    char* i_1 = nullptr
    
    if (edi[0x116].b s> 0)
        void* esi = &edi[0x2e]
        
        do
            *(edi + 0x1ec1) = i_1.b
            *esi = 0
            *(esi + 4) = 0
            int32_t edx_2 = *(esi - 0x8c) & 0x7f
            
            if (edx_2.b != 7)
                j = *(esi - 0x88) & 0x7f
            
            if (edx_2.b == 7 || j.b == 7)
                j, edx_2 = sub_4a8940(j, edx_2, i_1, edi, 0, 1)
                
                if (*(var_810 + 0x1ec3) != 0)
                    sub_5a6aba(j_5 ^ &__saved_ebp)
                    return 0
                
                edi = var_810
            
            do
                j, edx_2 = sub_4ab170(j, edx_2, edi, i_1)
            while (j != 0)
            
            if (*(edi + 0x1ec3) != j.b)
                sub_5a6aba(j_5 ^ &__saved_ebp)
                return 0
            
            i_1 = &i_1[1]
            esi += 0xb4
        while (i_1 s< sx.d(edi[0x116].b))
    
    int32_t i_3 = 0
    
    if (edi[0x116].b s> 0)
        void* ebx_2 = &edi[0x2f]
        void* var_814_1 = ebx_2
        int32_t i_2
        
        do
            if (edi[6].b == 0 && (*(ebx_2 - 4) != 0 || *(ebx_2 - 2) != 0 || *ebx_2 != 0))
                int32_t var_828_2 = *(ebx_2 - 0x9c)
                char var_40c[0x404]
                sub_5a733b(&var_40c, "%s receives ")
                int16_t eax_4 = *(ebx_2 - 4)
                void var_80c
                void var_40d
                char j_2
                
                if (eax_4 != 0)
                    char* const ecx_4 = &data_83f3d3
                    
                    if (eax_4 != 1)
                        ecx_4 = &data_85f840
                    
                    char* const var_828_3 = ecx_4
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
                    
                    do
                        j_1 = *(edi_1 + 1)
                        edi_1 += 1
                    while (j_1 != 0)
                    
                    int32_t esi_1
                    int32_t edi_2
                    edi_2, esi_1 = __builtin_memcpy(edi_1, &var_80c, eax_6 u>> 2 << 2)
                    bool cond:2_1 = *(ebx_2 - 2) != 0
                    __builtin_memcpy(edi_2, esi_1, eax_6 & 3)
                    
                    if (cond:2_1 || *ebx_2 != 0)
                        void* eax_7 = &var_40d
                        
                        do
                            j_2 = *(eax_7 + 1)
                            eax_7 += 1
                        while (j_2 != 0)
                        
                        __builtin_strncpy(eax_7, "and ", 5)
                
                int16_t eax_8 = *(ebx_2 - 2)
                
                if (eax_8 == 0)
                label_4abb4d:
                    int16_t eax_13 = *ebx_2
                    
                    if (eax_13 != 0)
                        int32_t var_828_5 = sx.d(eax_13)
                        sub_5a733b(&var_80c, "%d prestige ")
                        void* eax_14 = &var_80c
                        char j_3
                        
                        do
                            j_3 = *eax_14
                            eax_14 += 1
                        while (j_3 != 0)
                        
                        int32_t eax_15 = eax_14 - &var_80c
                        void* edi_5 = &var_40d
                        
                        do
                            j_3 = *(edi_5 + 1)
                            edi_5 += 1
                        while (j_3 != 0)
                        
                        int32_t esi_3
                        int32_t edi_6
                        edi_6, esi_3 = __builtin_memcpy(edi_5, &var_80c, eax_15 u>> 2 << 2)
                        __builtin_memcpy(edi_6, esi_3, eax_15 & 3)
                else
                    char* const ecx_9 = &data_83f3d3
                    
                    if (eax_8 != 1)
                        ecx_9 = &data_85f840
                    
                    char* const var_828_4 = ecx_9
                    int32_t var_82c_2 = sx.d(eax_8)
                    sub_5a733b(&var_80c, "%d VP%s ")
                    void* eax_10 = &var_80c
                    char j_4
                    
                    do
                        j_4 = *eax_10
                        eax_10 += 1
                    while (j_4 != 0)
                    
                    int32_t eax_11 = eax_10 - &var_80c
                    void* edi_3 = &var_40d
                    
                    do
                        j_4 = *(edi_3 + 1)
                        edi_3 += 1
                    while (j_4 != 0)
                    
                    int32_t esi_2
                    int32_t edi_4
                    edi_4, esi_2 = __builtin_memcpy(edi_3, &var_80c, eax_11 u>> 2 << 2)
                    bool cond:3_1 = *ebx_2 == 0
                    __builtin_memcpy(edi_4, esi_2, eax_11 & 3)
                    
                    if (not(cond:3_1))
                        void* eax_12 = &var_40d
                        
                        do
                            j_2 = *(eax_12 + 1)
                            eax_12 += 1
                        while (j_2 != 0)
                        
                        __builtin_strncpy(eax_12, "and ", 5)
                        goto label_4abb4d
                
                void* eax_16 = &var_40d
                
                do
                    j_2 = *(eax_16 + 1)
                    eax_16 += 1
                while (j_2 != 0)
                
                __builtin_strcpy(eax_16, "for Consume phase.\n")
                sub_4c5680(&var_40c)
                int32_t edx_6 = sx.d(*(ebx_2 - 4))
                int32_t esi_4 = sx.d(*(ebx_2 - 2))
                int32_t edi_7 = sx.d(*ebx_2)
                void* ebx_3 = data_27e7a40
                int32_t ecx_20 = (i_3 + (sx.d(*(var_810 + 0x1ec2)) << 2)) * 0x1c0
                void* eax_20 = *(ebx_3 + 0x548) + ecx_20 + 0x2c0c0
                *(eax_20 + 0x124) = 1
                *(eax_20 + 0x128) = esi_4
                int32_t edx_7 = edx_6 - *(*(ebx_3 + 0x548) + ecx_20 + 0x2c1e0)
                *(eax_20 + 0x12c) = edx_7
                *(eax_20 + 0x130) = edi_7
                
                if (esi_4 == 0 && edx_7 == 0 && edi_7 == 0)
                    *(eax_20 + 0x124) = 0
                
                edi = var_810
                ebx_2 = var_814_1
            
            i_2 = i_3 + 1
            ebx_2 += 0xb4
            i_3 = i_2
            var_814_1 = ebx_2
        while (i_2 s< sx.d(edi[0x116].b))
    
    sub_49d660(edi)
    sub_4ae980()
    sub_49d1f0()
    sub_5a6aba(j_5 ^ &__saved_ebp)
    return 1
}
