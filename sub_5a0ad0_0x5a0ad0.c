// 函数名称: sub_5a0ad0
// 虚拟地址: 0x5a0ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a0ad0(int32_t arg1, uint32_t* arg2, void* arg3, uint32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_2c = 0
    int32_t var_30 = 0
    int32_t eax_4
    int32_t ecx
    
    if (*(arg3 + 0x10) != 0)
        ecx = *(arg3 + 0xac)
        eax_4 = ecx - *(arg3 + 0xa8)
    
    if (*(arg3 + 0x10) == 0 || eax_4 s>= 0x5c)
        *(arg3 + 0xa8) += 0x5c
    else
        int32_t edx = *(arg3 + 0x1c)
        *(arg3 + 0xa8) = ecx
        (*(arg3 + 0x14))(edx, 0x5c - eax_4)
    
    *arg2 = sub_5959c0(arg3)
    uint32_t eax_7
    int32_t ecx_2
    eax_7, ecx_2 = sub_5959c0(arg3)
    *arg4 = eax_7
    
    if (*(arg3 + 0x10) == 0)
    label_5a0b5d:
        int32_t eax_9 = *(arg3 + 0xa8)
        
        if (sbb.d(eax_9, eax_9, eax_9 u< *(arg3 + 0xac)) == 0xffffffff)
            goto label_5a0b6e
    else
        int32_t eax_8
        eax_8, ecx_2 = (*(arg3 + 0x18))(*(arg3 + 0x1c))
        
        if (eax_8 == 0)
        label_5a0b6e:
            uint32_t edi_1 = *arg2
            int32_t eax_12
            int32_t edx_2
            
            if (edi_1 != 0)
                edx_2:eax_12 = 0x10000000
            
            if (edi_1 == 0 || divs.dp.d(edx_2:eax_12, edi_1) s>= *arg4)
                int32_t eax_16
                
                if (*(arg3 + 0x10) != 0)
                    ecx_2 = *(arg3 + 0xac)
                    eax_16 = ecx_2 - *(arg3 + 0xa8)
                
                if (*(arg3 + 0x10) == 0 || eax_16 s>= 8)
                    *(arg3 + 0xa8) += 8
                else
                    int32_t eax_17 = *(arg3 + 0x1c)
                    *(arg3 + 0xa8) = ecx_2
                    (*(arg3 + 0x14))(eax_17, 8 - eax_16)
                
                void var_28
                void* eax_18 = &var_28
                
                while (true)
                    if (var_30 == 0xa)
                        goto label_5a0b96
                    
                    var_30 += 1
                    char* eax_20 = *(arg3 + 0xa8)
                    uint32_t var_38_1
                    
                    if (eax_20 u< *(arg3 + 0xac))
                        ecx_2.b = *eax_20
                        *(arg3 + 0xa8) = &eax_20[1]
                        var_38_1 = zx.d(ecx_2.b)
                    else if (*(arg3 + 0x20) == 0)
                        var_38_1 = 0
                    else
                        int32_t eax_23
                        eax_23, ecx_2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                        
                        if (eax_23 != 0)
                            *(arg3 + 0xa8) = arg3 + 0x28
                            *(arg3 + 0xac) = arg3 + 0x28 + eax_23
                        else
                            *(arg3 + 0x20) = eax_23
                            char* eax_25 = *(arg3 + 0xac) - 1
                            *(arg3 + 0xa8) = eax_25
                            *eax_25 = 0
                        
                        char* eax_26 = *(arg3 + 0xa8)
                        ecx_2.b = *eax_26
                        *(arg3 + 0xa8) = &eax_26[1]
                        var_38_1 = zx.d(ecx_2.b)
                    
                    char* eax_29 = *(arg3 + 0xa8)
                    char ebx_1
                    
                    if (eax_29 u< *(arg3 + 0xac))
                        ecx_2.b = *eax_29
                        *(arg3 + 0xa8) = &eax_29[1]
                        ebx_1 = ecx_2.b
                    else if (*(arg3 + 0x20) == 0)
                        ebx_1 = 0
                    else
                        int32_t eax_32
                        eax_32, ecx_2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                        
                        if (eax_32 != 0)
                            *(arg3 + 0xa8) = arg3 + 0x28
                            *(arg3 + 0xac) = arg3 + 0x28 + eax_32
                        else
                            *(arg3 + 0x20) = eax_32
                            char* eax_34 = *(arg3 + 0xac) - 1
                            *(arg3 + 0xa8) = eax_34
                            *eax_34 = 0
                        
                        char* eax_35 = *(arg3 + 0xa8)
                        ecx_2.b = *eax_35
                        *(arg3 + 0xa8) = &eax_35[1]
                        ebx_1 = ecx_2.b
                    
                    int32_t eax_37 = *(arg3 + 0xa8)
                    
                    if (eax_37 u< *(arg3 + 0xac))
                        *(arg3 + 0xa8) = eax_37 + 1
                    else if (*(arg3 + 0x20) != 0)
                        int32_t eax_39
                        eax_39, ecx_2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                        
                        if (eax_39 != 0)
                            *(arg3 + 0xa8) = arg3 + 0x28
                            *(arg3 + 0xac) = arg3 + 0x28 + eax_39
                        else
                            *(arg3 + 0x20) = eax_39
                            char* eax_41 = *(arg3 + 0xac) - 1
                            *(arg3 + 0xa8) = eax_41
                            *eax_41 = 0
                        
                        *(arg3 + 0xa8) += 1
                    
                    char* eax_43 = *(arg3 + 0xa8)
                    uint32_t eax_45
                    
                    if (eax_43 u< *(arg3 + 0xac))
                        ecx_2.b = *eax_43
                        *(arg3 + 0xa8) = &eax_43[1]
                        eax_45 = zx.d(ecx_2.b)
                    else if (*(arg3 + 0x20) == 0)
                        eax_45 = 0
                    else
                        int32_t eax_47
                        eax_47, ecx_2 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
                        
                        if (eax_47 != 0)
                            *(arg3 + 0xa8) = arg3 + 0x28
                            *(arg3 + 0xac) = arg3 + 0x28 + eax_47
                        else
                            *(arg3 + 0x20) = eax_47
                            char* eax_49 = *(arg3 + 0xac) - 1
                            *(arg3 + 0xa8) = eax_49
                            *eax_49 = 0
                        
                        char* eax_50 = *(arg3 + 0xa8)
                        ecx_2.b = *eax_50
                        *(arg3 + 0xa8) = &eax_50[1]
                        eax_45 = zx.d(ecx_2.b)
                    
                    var_2c |= zx.d(eax_45.b)
                    
                    if (*(arg3 + 0x10) != 0)
                        eax_45, ecx_2 = (*(arg3 + 0x18))(*(arg3 + 0x1c))
                        
                        if (eax_45 != 0 && (*(arg3 + 0x20) == 0
                                || sbb.d(eax_45, eax_45, *(arg3 + 0xa8) u< *(arg3 + 0xac))
                                != 0xffffffff))
                            goto label_5a0e00
                    else if (sbb.d(eax_45, eax_45, *(arg3 + 0xa8) u< *(arg3 + 0xac)) != 0xffffffff)
                    label_5a0e00:
                        *(arg3 + 0xa8) = *(arg3 + 0xb0)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    if (ebx_1 != 8)
                        break
                    
                    if (var_38_1 == 0)
                        int32_t edx_12
                        edx_12.b = (var_2c.b & 0x10) != 0
                        *arg5 = edx_12 + 3
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 1
                    
                    eax_18 += 3
            
            *(arg3 + 0xa8) = *(arg3 + 0xb0)
        else if (*(arg3 + 0x20) != 0)
            goto label_5a0b5d
    
    label_5a0b96:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
