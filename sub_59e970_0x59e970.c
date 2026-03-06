// 函数名称: sub_59e970
// 虚拟地址: 0x59e970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59e970(void* arg1, uint32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    
    if (eax u< *(arg1 + 0xac))
    label_59e9d5:
        uint32_t ecx_2 = zx.d(*eax)
        void* eax_6 = &eax[1]
        *(arg1 + 0xa8) = eax_6
        
        if (ecx_2 == 0x47)
            if (eax_6 u< *(arg1 + 0xac))
            label_59ea3b:
                ecx_2.b = *eax_6
                *(arg1 + 0xa8) = eax_6 + 1
                
                if (zx.d(ecx_2.b) == 0x49)
                    char* eax_13 = *(arg1 + 0xa8)
                    
                    if (eax_13 u< *(arg1 + 0xac))
                    label_59eaa9:
                        ecx_2.b = *eax_13
                        void* eax_18 = &eax_13[1]
                        *(arg1 + 0xa8) = eax_18
                        
                        if (zx.d(ecx_2.b) == 0x46)
                            uint32_t ecx_5
                            
                            if (eax_18 u< *(arg1 + 0xac))
                            label_59eb11:
                                ecx_5.b = *eax_18
                                *(arg1 + 0xa8) = eax_18 + 1
                                
                                if (zx.d(ecx_5.b) == 0x38)
                                    char* eax_26 = *(arg1 + 0xa8)
                                    
                                    if (eax_26 u< *(arg1 + 0xac))
                                    label_59eb7f:
                                        ecx_5.b = *eax_26
                                        char ecx_8 = ecx_5.b
                                        void* eax_31 = &eax_26[1]
                                        *(arg1 + 0xa8) = eax_31
                                        
                                        if (ecx_8 == 0x37 || ecx_8 == 0x39)
                                            if (eax_31 u< *(arg1 + 0xac))
                                            label_59ebec:
                                                ecx_8 = *eax_31
                                                *(arg1 + 0xa8) = eax_31 + 1
                                                
                                                if (zx.d(ecx_8) == 0x61)
                                                    data_273ac1c = &data_83f3d3
                                                    uint32_t* edi_7 = arg2
                                                    *edi_7 = sub_595ac0(arg1)
                                                    uint32_t eax_39
                                                    void* ecx_10
                                                    eax_39, ecx_10 = sub_595ac0(arg1)
                                                    edi_7[1] = eax_39
                                                    char* eax_40 = *(arg1 + 0xa8)
                                                    uint32_t eax_42
                                                    
                                                    if (eax_40 u< *(arg1 + 0xac))
                                                        ecx_10.b = *eax_40
                                                        *(arg1 + 0xa8) = &eax_40[1]
                                                        eax_42 = zx.d(ecx_10.b)
                                                    else if (*(arg1 + 0x20) == 0)
                                                        eax_42 = 0
                                                    else
                                                        int32_t eax_44
                                                        eax_44, ecx_10 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                                        
                                                        if (eax_44 != 0)
                                                            *(arg1 + 0xa8) = arg1 + 0x28
                                                            *(arg1 + 0xac) = eax_44 + arg1 + 0x28
                                                        else
                                                            char* eax_46 = *(arg1 + 0xac) - 1
                                                            *(arg1 + 0x20) = 0
                                                            *(arg1 + 0xa8) = eax_46
                                                            *eax_46 = 0
                                                        
                                                        char* eax_48 = *(arg1 + 0xa8)
                                                        ecx_10.b = *eax_48
                                                        edi_7 = arg2
                                                        *(arg1 + 0xa8) = &eax_48[1]
                                                        eax_42 = zx.d(ecx_10.b)
                                                    
                                                    edi_7[3] = eax_42
                                                    char* eax_50 = *(arg1 + 0xa8)
                                                    uint32_t eax_52
                                                    
                                                    if (eax_50 u< *(arg1 + 0xac))
                                                        ecx_10.b = *eax_50
                                                        *(arg1 + 0xa8) = &eax_50[1]
                                                        eax_52 = zx.d(ecx_10.b)
                                                    else if (*(arg1 + 0x20) == 0)
                                                        eax_52 = 0
                                                    else
                                                        int32_t eax_54
                                                        eax_54, ecx_10 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                                        
                                                        if (eax_54 != 0)
                                                            *(arg1 + 0xa8) = arg1 + 0x28
                                                            *(arg1 + 0xac) = eax_54 + arg1 + 0x28
                                                        else
                                                            char* eax_56 = *(arg1 + 0xac) - 1
                                                            *(arg1 + 0x20) = 0
                                                            *(arg1 + 0xa8) = eax_56
                                                            *eax_56 = 0
                                                        
                                                        char* eax_57 = *(arg1 + 0xa8)
                                                        ecx_10.b = *eax_57
                                                        edi_7 = arg2
                                                        *(arg1 + 0xa8) = &eax_57[1]
                                                        eax_52 = zx.d(ecx_10.b)
                                                    
                                                    edi_7[4] = eax_52
                                                    char* eax_59 = *(arg1 + 0xa8)
                                                    uint32_t eax_61
                                                    
                                                    if (eax_59 u< *(arg1 + 0xac))
                                                        ecx_10.b = *eax_59
                                                        *(arg1 + 0xa8) = &eax_59[1]
                                                        eax_61 = zx.d(ecx_10.b)
                                                    else if (*(arg1 + 0x20) == 0)
                                                        eax_61 = 0
                                                    else
                                                        int32_t eax_63 = (*(arg1 + 0x10))(
                                                            *(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                                        
                                                        if (eax_63 != 0)
                                                            *(arg1 + 0xa8) = arg1 + 0x28
                                                            *(arg1 + 0xac) = eax_63 + arg1 + 0x28
                                                        else
                                                            char* eax_65 = *(arg1 + 0xac) - 1
                                                            *(arg1 + 0x20) = 0
                                                            *(arg1 + 0xa8) = eax_65
                                                            *eax_65 = 0
                                                        
                                                        char* eax_66 = *(arg1 + 0xa8)
                                                        char ecx_14 = *eax_66
                                                        edi_7 = arg2
                                                        *(arg1 + 0xa8) = &eax_66[1]
                                                        eax_61 = zx.d(ecx_14)
                                                    
                                                    edi_7[5] = eax_61
                                                    edi_7[6] = 0xffffffff
                                                    
                                                    if (arg3 != 0)
                                                        *arg3 = 4
                                                    
                                                    if (arg4 == 0)
                                                        int32_t ecx_15 = edi_7[3]
                                                        
                                                        if (ecx_15.b s< 0)
                                                            int32_t ecx_16 = ecx_15 & 7
                                                            int32_t var_14_10 = 0xffffffff
                                                            sub_59e7d0(2 << ecx_16.b, &edi_7[8], arg1, 
                                                                ecx_16)
                                                    
                                                    return 1
                                            else if (*(arg1 + 0x20) != 0)
                                                int32_t eax_33 = (*(arg1 + 0x10))(*(arg1 + 0x1c), 
                                                    arg1 + 0x28, *(arg1 + 0x24))
                                                
                                                if (eax_33 != 0)
                                                    *(arg1 + 0xa8) = arg1 + 0x28
                                                    *(arg1 + 0xac) = eax_33 + arg1 + 0x28
                                                else
                                                    char* eax_35 = *(arg1 + 0xac) - 1
                                                    *(arg1 + 0x20) = 0
                                                    *(arg1 + 0xa8) = eax_35
                                                    *eax_35 = 0
                                                
                                                eax_31 = *(arg1 + 0xa8)
                                                goto label_59ebec
                                    else if (*(arg1 + 0x20) != 0)
                                        int32_t eax_28
                                        eax_28, ecx_5 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, 
                                            *(arg1 + 0x24))
                                        
                                        if (eax_28 != 0)
                                            *(arg1 + 0xa8) = arg1 + 0x28
                                            *(arg1 + 0xac) = eax_28 + arg1 + 0x28
                                        else
                                            char* eax_30 = *(arg1 + 0xac) - 1
                                            *(arg1 + 0x20) = 0
                                            *(arg1 + 0xa8) = eax_30
                                            *eax_30 = 0
                                        
                                        eax_26 = *(arg1 + 0xa8)
                                        goto label_59eb7f
                            else if (*(arg1 + 0x20) != 0)
                                int32_t eax_20
                                eax_20, ecx_5 =
                                    (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                
                                if (eax_20 != 0)
                                    *(arg1 + 0xa8) = arg1 + 0x28
                                    *(arg1 + 0xac) = eax_20 + arg1 + 0x28
                                else
                                    char* eax_22 = *(arg1 + 0xac) - 1
                                    *(arg1 + 0x20) = 0
                                    *(arg1 + 0xa8) = eax_22
                                    *eax_22 = 0
                                
                                eax_18 = *(arg1 + 0xa8)
                                goto label_59eb11
                    else if (*(arg1 + 0x20) != 0)
                        int32_t eax_15
                        eax_15, ecx_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                        
                        if (eax_15 != 0)
                            *(arg1 + 0xa8) = arg1 + 0x28
                            *(arg1 + 0xac) = eax_15 + arg1 + 0x28
                        else
                            char* eax_17 = *(arg1 + 0xac) - 1
                            *(arg1 + 0x20) = 0
                            *(arg1 + 0xa8) = eax_17
                            *eax_17 = 0
                        
                        eax_13 = *(arg1 + 0xa8)
                        goto label_59eaa9
            else if (*(arg1 + 0x20) != 0)
                int32_t eax_8
                eax_8, ecx_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_8 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = eax_8 + arg1 + 0x28
                else
                    char* eax_10 = *(arg1 + 0xac) - 1
                    *(arg1 + 0x20) = 0
                    *(arg1 + 0xa8) = eax_10
                    *eax_10 = 0
                
                eax_6 = *(arg1 + 0xa8)
                goto label_59ea3b
    else if (*(arg1 + 0x20) != 0)
        int32_t eax_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_2 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_2 + arg1 + 0x28
        else
            char* eax_4 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_4
            *eax_4 = 0
        
        eax = *(arg1 + 0xa8)
        goto label_59e9d5
    
    data_273ac1c = "not GIF"
    return 0
}
