// 函数名称: sub_469540
// 虚拟地址: 0x469540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_469540(int32_t arg1, void* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = nullptr
    int128_t* ebx_2
    
    while (true)
        void* ecx = data_27e7a44
        
        if (esi != 0)
            esi += 0x200
        else
            esi = *(ecx + 0x38)
        
        int32_t eax_5 = (*(ecx + 0x3c) << 9) + *(ecx + 0x38)
        
        if (esi u>= eax_5)
        label_4695a2:
            ebx_2 = sub_469180()
            break
        
        while ((*(esi + 0x1f8) & 0xffff0000) == 0)
            esi += 0x200
            
            if (esi u>= eax_5)
                goto label_4695a2
        
        int32_t ecx_9 = *(esi + 0x140)
        int32_t eax_18 = 0
        
        if (ecx_9 s> 0)
            arg2 = esi
            
            while (*arg2 != *(arg4 + 4))
                eax_18 += 1
                arg2 += 0x50
                
                if (eax_18 s>= ecx_9)
                    goto label_469705
            
            if (eax_18 * 0x50 != neg.d(esi))
                continue
        
    label_469705:
        char eax_23
        eax_23, arg2 = sub_4690f0(esi, arg2, arg3)
        
        if (eax_23 != 0)
            ebx_2 = esi
            break
    
    int32_t eax_7 = ebx_2[0x14].d
    ebx_2[0x14].d = eax_7 + 1
    void* esi_3 = &ebx_2[eax_7 * 5]
    *esi_3 = *(arg4 + 4)
    _strncpy(esi_3 + 0xc, arg4 + 0x10, 0x20)
    *(esi_3 + 0x2b) = 0
    *(esi_3 + 0x2c) = *(arg4 + 0x30)
    *(esi_3 + 0x30) = 0
    int32_t i = sub_469460(ebx_2)
    
    if (i.b != 0)
        i = sub_469260()
    
    int32_t i_1 = 0
    
    if (ebx_2[0x14].d s> 0)
        int128_t* edi_1 = ebx_2
        
        do
            int32_t ecx_3 = *(edi_1 + 0x48)
            int32_t* eax_13
            
            if (ecx_3 != 0)
                void* edx_1 = data_27e7a44
                uint32_t eax_11 = zx.d(ecx_3.w)
                
                if (eax_11 u>= *(edx_1 + 0x20))
                    goto label_46963f
                
                eax_13 = eax_11 * 0x1c4 + *(edx_1 + 0x1c)
                
                if (eax_13[0x70] != ecx_3 || eax_13[1] != *edi_1)
                    goto label_46963f
                
                goto label_469651
            
        label_46963f:
            eax_13 = sub_4b7170(*edi_1)
            
            if (eax_13 != 0)
                *(edi_1 + 0x48) = eax_13[0x70]
            label_469651:
                
                if (eax_13 != 0)
                    void* ecx_5 = *eax_13
                    
                    if (ecx_5 != 0)
                        int32_t** edx_3 = data_27e7bb8
                        uint32_t eax_14 = zx.d(ecx_5.w)
                        
                        if (eax_14 u< edx_3[1])
                            void* eax_16 = &(*edx_3)[eax_14 * 0x13]
                            
                            if (*(eax_16 + 0x48) == ecx_5)
                                int32_t var_14
                                int32_t* var_2c_1 = &var_14
                                void* var_30_1 = eax_16 + 0x3c
                                int32_t var_10_1 = 0x1f8
                                int32_t var_c_1 = 0xf4249
                                var_14 = 0xfeedface
                                void* ecx_6
                                int32_t** edx_4
                                ecx_6, edx_4 = sub_4c72b0(0xc, edx_3, ecx_5)
                                int128_t* var_34_1 = ebx_2
                                void* var_38_1 = eax_16 + 0x3c
                                sub_4c72b0(0x1f8, edx_4, ecx_6)
            
            i = i_1 + 1
            edi_1 = &edi_1[5]
            i_1 = i
        while (i s< ebx_2[0x14].d)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
