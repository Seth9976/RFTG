// 函数名称: sub_679d40
// 虚拟地址: 0x679d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679d40(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t* ecx = arg1[6]
    int32_t* ecx = arg1[6]
    char* ebx = *ecx
    int32_t edi = ecx[1]
    int32_t* var_c = ecx
    
    if (*(arg1[0x6e] + 0x10) == 0)
        *(*arg1 + 0x14) = 0x3e
        (**arg1)(arg1)
        ecx = var_c
    
    if (edi != 0)
        goto label_679d9d
    
    if (ecx[3](arg1) != 0)
        ebx = *var_c
        edi = var_c[1]
        ecx = var_c
    label_679d9d:
        uint32_t eax_6 = zx.d(*ebx) << 8
        void* ebx_1 = &ebx[1]
        int32_t edi_1 = edi - 1
        
        if (edi != 1)
            goto label_679dc6
        
        if (ecx[3](arg1) != 0)
            ebx_1 = *var_c
            edi_1 = var_c[1]
            ecx = var_c
        label_679dc6:
            uint32_t eax_10 = eax_6 + zx.d(*ebx_1)
            void* ebx_2 = ebx_1 + 1
            int32_t edi_2 = edi_1 - 1
            
            if (edi_1 != 1)
                goto label_679de6
            
            if (ecx[3](arg1) != 0)
                ebx_2 = *var_c
                edi_2 = var_c[1]
            label_679de6:
                uint32_t eax_14 = zx.d(*ebx_2)
                *(*arg1 + 0x14) = 0x67
                *(*arg1 + 0x18) = eax_14
                int32_t edi_3 = edi_2 - 1
                void* ebx_3 = ebx_2 + 1
                (*(*arg1 + 4))(arg1, 1)
                uint32_t eax_16 = eax_14
                
                if (eax_10 != eax_16 * 2 + 6 || eax_16 s< 1 || eax_16 s> 4)
                    *(*arg1 + 0x14) = 0xb
                    (**arg1)(arg1)
                    eax_16 = eax_14
                
                arg1[0x52] = eax_16
                int32_t var_1c_1 = 0
                
                if (eax_16 s> 0)
                    void* var_14_1 = &arg1[0x53]
                    int32_t eax_29
                    
                    do
                        if (edi_3 == 0)
                            if (var_c[3](arg1) == 0)
                                return 0
                            
                            ebx_3 = *var_c
                            edi_3 = var_c[1]
                        
                        uint32_t i = zx.d(*ebx_3)
                        void* ebx_4 = ebx_3 + 1
                        int32_t edi_5 = edi_3 - 1
                        
                        if (edi_3 == 1)
                            if (var_c[3](arg1) == 0)
                                return 0
                            
                            ebx_4 = *var_c
                            edi_5 = var_c[1]
                        
                        uint32_t eax_24 = zx.d(*ebx_4)
                        int32_t ecx_10 = 0
                        ebx_3 = ebx_4 + 1
                        int32_t* edi_8 = arg1[0x36]
                        
                        if (arg1[9] s<= 0)
                        label_679ec5:
                            *(*arg1 + 0x14) = 5
                            *(*arg1 + 0x18) = i
                            (**arg1)(arg1)
                        else
                            while (i != *edi_8)
                                ecx_10 += 1
                                edi_8 = &edi_8[0x15]
                                
                                if (ecx_10 s>= arg1[9])
                                    goto label_679ec5
                        
                        *var_14_1 = edi_8
                        edi_8[5] = eax_24 s>> 4 & 0xf
                        edi_8[6] = eax_24 & 0xf
                        void* eax_26 = *arg1
                        *(eax_26 + 0x18) = i
                        *(eax_26 + 0x1c) = edi_8[5]
                        *(eax_26 + 0x20) = edi_8[6]
                        *(*arg1 + 0x14) = 0x68
                        (*(*arg1 + 4))(arg1, 1)
                        var_14_1 += 4
                        edi_3 = edi_5 - 1
                        eax_29 = var_1c_1 + 1
                        var_1c_1 = eax_29
                    while (eax_29 s< eax_14)
                
                if (edi_3 != 0)
                    goto label_679f57
                
                if (var_c[3](arg1) != 0)
                    ebx_3 = *var_c
                    edi_3 = var_c[1]
                label_679f57:
                    void* ebx_5 = ebx_3 + 1
                    int32_t edi_10 = edi_3 - 1
                    arg1[0x64] = zx.d(*ebx_3)
                    
                    if (edi_3 != 1)
                        goto label_679f7f
                    
                    void** edi_11 = var_c
                    
                    if (edi_11[3](arg1) != 0)
                        ebx_5 = *edi_11
                        edi_10 = edi_11[1]
                    label_679f7f:
                        void* ebx_6 = ebx_5 + 1
                        int32_t edi_12 = edi_10 - 1
                        arg1[0x65] = zx.d(*ebx_5)
                        
                        if (edi_10 != 1)
                            goto label_679fa4
                        
                        void** edi_13 = var_c
                        
                        if (edi_13[3](arg1) != 0)
                            ebx_6 = *edi_13
                            edi_12 = edi_13[1]
                        label_679fa4:
                            uint32_t eax_37 = zx.d(*ebx_6)
                            int32_t edx_16 = arg1[0x64]
                            arg1[0x67] = eax_37 & 0xf
                            void* eax_39 = *arg1
                            arg1[0x66] = eax_37 s>> 4 & 0xf
                            *(eax_39 + 0x18) = edx_16
                            *(eax_39 + 0x1c) = arg1[0x65]
                            *(eax_39 + 0x20) = arg1[0x66]
                            *(eax_39 + 0x24) = arg1[0x67]
                            *(*arg1 + 0x14) = 0x69
                            (*(*arg1 + 4))(arg1, 1)
                            void** eax_41 = var_c
                            *(arg1[0x6e] + 0x14) = 0
                            arg1[0x24] += 1
                            eax_41[1] = edi_12 - 1
                            *eax_41 = ebx_6 + 1
                            return 1
    
    return 0
}
