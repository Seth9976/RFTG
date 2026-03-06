// 函数名称: sub_59c8f0
// 虚拟地址: 0x59c8f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59c8f0(void* arg1, uint32_t* arg2, uint32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* ecx
    void* ecx
    void* var_8 = ecx
    int32_t eax = *(arg1 + 0xa8)
    
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
    label_59c9b1:
        ecx.b = *eax_11
        *(arg1 + 0xa8) = &eax_11[1]
        
        if (ecx.b u<= 1)
            goto label_59c9d6
        
        *(arg1 + 0xa8) = *(arg1 + 0xb0)
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
            goto label_59c9b1
        
    label_59c9d6:
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
            
            char* eax_23 = *(arg1 + 0xa8)
            char ecx_4 = *eax_23
            *(arg1 + 0xa8) = &eax_23[1]
            eax_17 = ecx_4
        
        uint32_t eax_25 = zx.d(eax_17)
        
        if (eax_25 == 1 || eax_25 == 2 || eax_25 == 3 || eax_25 == 9 || eax_25 == 0xa || eax_25 == 0xb)
            int32_t eax_27
            int32_t ecx_5
            
            if (*(arg1 + 0x10) != 0)
                ecx_5 = *(arg1 + 0xac)
                eax_27 = ecx_5 - *(arg1 + 0xa8)
            
            if (*(arg1 + 0x10) == 0 || eax_27 s>= 9)
                *(arg1 + 0xa8) += 9
            else
                int32_t edx_5 = *(arg1 + 0x1c)
                *(arg1 + 0xa8) = ecx_5
                (*(arg1 + 0x14))(edx_5, 9 - eax_27)
            
            uint32_t eax_29 = sub_595ac0(arg1)
            
            if (eax_29 s< 1)
                *(arg1 + 0xa8) = *(arg1 + 0xb0)
                return 0
            
            uint32_t edx_6 = sub_595ac0(arg1)
            
            if (edx_6 s>= 1)
                char* eax_32 = *(arg1 + 0xa8)
                
                if (eax_32 u< *(arg1 + 0xac))
                label_59cb38:
                    char ecx_8 = *eax_32
                    *(arg1 + 0xa8) = &eax_32[1]
                    uint32_t eax_39 = zx.d(ecx_8)
                    
                    if (eax_39 == 8 || eax_39 == 0x10 || eax_39 == 0x18 || eax_39 == 0x20)
                        if (arg2 != 0)
                            *arg2 = eax_29
                        
                        if (arg3 != 0)
                            *arg3 = edx_6
                        
                        if (arg4 != 0)
                            int32_t eax_40
                            int32_t edx_8
                            edx_8:eax_40 = sx.q(eax_39)
                            *arg4 = (eax_40 + (edx_8 & 7)) s>> 3
                        
                        return 1
                else if (*(arg1 + 0x20) != 0)
                    int32_t eax_34 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                    
                    if (eax_34 != 0)
                        *(arg1 + 0xa8) = arg1 + 0x28
                        *(arg1 + 0xac) = eax_34 + arg1 + 0x28
                    else
                        *(arg1 + 0x20) = eax_34
                        char* eax_36 = *(arg1 + 0xac) - 1
                        *(arg1 + 0xa8) = eax_36
                        *eax_36 = 0
                    
                    eax_32 = *(arg1 + 0xa8)
                    goto label_59cb38
                
                *(arg1 + 0xa8) = *(arg1 + 0xb0)
                return 0
            
            *(arg1 + 0xa8) = *(arg1 + 0xb0)
    
    return 0
}
