// 函数名称: sub_59cb90
// 虚拟地址: 0x59cb90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59cb90(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0xa8)
    int32_t eax = *(arg1 + 0xa8)
    void* ecx
    
    if (eax u< *(arg1 + 0xac))
        *(arg1 + 0xa8) = eax + 1
    else if (*(arg1 + 0x20) != 0)
        int32_t eax_3
        eax_3, ecx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_3 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_3 + arg1 + 0x28
        else
            char* eax_5 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_5
            *eax_5 = 0
        
        *(arg1 + 0xa8) += 1
    
    char* eax_11 = *(arg1 + 0xa8)
    
    if (eax_11 u< *(arg1 + 0xac))
    label_59cc4a:
        ecx.b = *eax_11
        *(arg1 + 0xa8) = &eax_11[1]
        
        if (ecx.b u<= 1)
            goto label_59cc60
    else
        if (*(arg1 + 0x20) != 0)
            int32_t eax_8
            eax_8, ecx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_8 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = eax_8 + arg1 + 0x28
            else
                char* eax_10 = *(arg1 + 0xac) - 1
                *(arg1 + 0x20) = 0
                *(arg1 + 0xa8) = eax_10
                *eax_10 = 0
            
            eax_11 = *(arg1 + 0xa8)
            goto label_59cc4a
        
    label_59cc60:
        char* eax_15 = *(arg1 + 0xa8)
        char eax_17
        
        if (eax_15 u< *(arg1 + 0xac))
            ecx.b = *eax_15
            *(arg1 + 0xa8) = &eax_15[1]
            eax_17 = ecx.b
        else if (*(arg1 + 0x20) == 0)
            eax_17 = 0
        else
            int32_t eax_19 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_19 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = eax_19 + arg1 + 0x28
            else
                char* eax_21 = *(arg1 + 0xac) - 1
                *(arg1 + 0x20) = 0
                *(arg1 + 0xa8) = eax_21
                *eax_21 = 0
            
            char* eax_22 = *(arg1 + 0xa8)
            char ecx_4 = *eax_22
            *(arg1 + 0xa8) = &eax_22[1]
            eax_17 = ecx_4
        
        uint32_t eax_24 = zx.d(eax_17)
        
        if (eax_24 == 1 || eax_24 == 2 || eax_24 == 3 || eax_24 == 9 || eax_24 == 0xa || eax_24 == 0xb)
            sub_5959c0(arg1)
            sub_5959c0(arg1)
            int32_t eax_25 = *(arg1 + 0xa8)
            
            if (eax_25 u< *(arg1 + 0xac))
                *(arg1 + 0xa8) = eax_25 + 1
            else if (*(arg1 + 0x20) != 0)
                int32_t eax_28 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_28 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = eax_28 + arg1 + 0x28
                else
                    char* eax_30 = *(arg1 + 0xac) - 1
                    *(arg1 + 0x20) = 0
                    *(arg1 + 0xa8) = eax_30
                    *eax_30 = 0
                
                *(arg1 + 0xa8) += 1
            
            sub_5959c0(arg1)
            sub_5959c0(arg1)
            
            if (sub_5959c0(arg1) s>= 1)
                uint32_t eax_33
                void* ecx_6
                eax_33, ecx_6 = sub_5959c0(arg1)
                
                if (eax_33 s>= 1)
                    char* eax_34 = *(arg1 + 0xa8)
                    
                    if (eax_34 u< *(arg1 + 0xac))
                    label_59cddf:
                        ecx_6.b = *eax_34
                        *(arg1 + 0xa8) = &eax_34[1]
                        uint32_t eax_40 = zx.d(ecx_6.b)
                        
                        if (eax_40 == 8 || eax_40 == 0x10 || eax_40 == 0x18 || eax_40 == 0x20)
                            return 1
                    else if (*(arg1 + 0x20) != 0)
                        int32_t eax_36
                        eax_36, ecx_6 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                        
                        if (eax_36 != 0)
                            *(arg1 + 0xa8) = arg1 + 0x28
                            *(arg1 + 0xac) = eax_36 + arg1 + 0x28
                        else
                            char* eax_38 = *(arg1 + 0xac) - 1
                            *(arg1 + 0x20) = 0
                            *(arg1 + 0xa8) = eax_38
                            *eax_38 = 0
                        
                        eax_34 = *(arg1 + 0xa8)
                        goto label_59cddf
    
    return 0
}
