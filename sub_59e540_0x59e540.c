// 函数名称: sub_59e540
// 虚拟地址: 0x59e540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59e540(void* arg1 @ esi)
{
    // 第一条实际指令: char* eax_5 = *(arg1 + 0xa8)
    char* eax_5 = *(arg1 + 0xa8)
    
    if (eax_5 u< *(arg1 + 0xac))
    label_59e59f:
        uint32_t ecx_2 = zx.d(*eax_5)
        void* eax_6 = &eax_5[1]
        *(arg1 + 0xa8) = eax_6
        
        if (ecx_2 == 0x47)
            if (eax_6 u< *(arg1 + 0xac))
            label_59e605:
                ecx_2.b = *eax_6
                *(arg1 + 0xa8) = eax_6 + 1
                
                if (zx.d(ecx_2.b) == 0x49)
                    char* eax_13 = *(arg1 + 0xa8)
                    
                    if (eax_13 u< *(arg1 + 0xac))
                    label_59e673:
                        ecx_2.b = *eax_13
                        void* eax_18 = &eax_13[1]
                        *(arg1 + 0xa8) = eax_18
                        
                        if (zx.d(ecx_2.b) == 0x46)
                            uint32_t ecx_5
                            
                            if (eax_18 u< *(arg1 + 0xac))
                            label_59e6db:
                                ecx_5.b = *eax_18
                                *(arg1 + 0xa8) = eax_18 + 1
                                
                                if (zx.d(ecx_5.b) == 0x38)
                                    char* eax_26 = *(arg1 + 0xa8)
                                    
                                    if (eax_26 u< *(arg1 + 0xac))
                                    label_59e749:
                                        ecx_5.b = *eax_26
                                        uint32_t ecx_8 = zx.d(ecx_5.b)
                                        char* eax_31 = &eax_26[1]
                                        *(arg1 + 0xa8) = eax_31
                                        
                                        if (ecx_8 == 0x39 || ecx_8 == 0x37)
                                            if (eax_31 u< *(arg1 + 0xac))
                                            label_59e7ae:
                                                ecx_8.b = *eax_31
                                                *(arg1 + 0xa8) = &eax_31[1]
                                                
                                                if (zx.d(ecx_8.b) == 0x61)
                                                    return 1
                                            else if (*(arg1 + 0x20) != 0)
                                                int32_t eax_33
                                                eax_33, ecx_8 = (*(arg1 + 0x10))(*(arg1 + 0x1c), 
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
                                                goto label_59e7ae
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
                                        goto label_59e749
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
                                goto label_59e6db
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
                        goto label_59e673
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
                goto label_59e605
    else if (*(arg1 + 0x20) != 0)
        int32_t eax_1 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_1 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_1 + arg1 + 0x28
        else
            char* eax_3 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_3
            *eax_3 = 0
        
        eax_5 = *(arg1 + 0xa8)
        goto label_59e59f
    
    return 0
}
