// 函数名称: sub_59fb10
// 虚拟地址: 0x59fb10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59fb10(void* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* eax = *(arg1 + 0xa8)
    void* var_8_1 = nullptr
    char eax_2
    
    if (eax u< *(arg1 + 0xac))
        ecx.b = *eax
        *(arg1 + 0xa8) = &eax[1]
        eax_2 = ecx.b
        goto label_59fb8e
    
    if (*(arg1 + 0x20) != 0)
        int32_t eax_4 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_4 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_4 + arg1 + 0x28
        else
            char* eax_6 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_6
            *eax_6 = 0
        
    label_59fb78:
        char* eax_8 = *(arg1 + 0xa8)
        char ecx_2 = *eax_8
        *(arg1 + 0xa8) = &eax_8[1]
        eax_2 = ecx_2
        goto label_59fb8e
    
    void* eax_15
    
    while (true)
        eax_2 = 0
    label_59fb8e:
        
        if (*(arg1 + 0x10) == 0)
        label_59fbb0:
            int32_t eax_11 = *(arg1 + 0xa8)
            
            if (sbb.d(eax_11, eax_11, eax_11 u< *(arg1 + 0xac)) != 0xffffffff)
                goto label_59fce5
        else if ((*(arg1 + 0x18))(*(arg1 + 0x1c)) != 0)
            if (*(arg1 + 0x20) == 0)
                goto label_59fce5
            
            goto label_59fbb0
        
        if (eax_2 == 0xa)
            goto label_59fce5
        
        char* eax_14 = var_8_1
        eax_14[arg2] = eax_2
        eax_15 = &eax_14[1]
        var_8_1 = eax_15
        
        if (eax_15 == 0x3ff)
            break
        
        char* eax_16 = *(arg1 + 0xa8)
        
        if (eax_16 u< *(arg1 + 0xac))
            int32_t ecx_4
            ecx_4.b = *eax_16
            *(arg1 + 0xa8) = &eax_16[1]
            eax_2 = ecx_4.b
            goto label_59fb8e
        
        if (*(arg1 + 0x20) != 0)
            int32_t eax_19 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            
            if (eax_19 != 0)
                *(arg1 + 0xa8) = arg1 + 0x28
                *(arg1 + 0xac) = arg1 + 0x28 + eax_19
                goto label_59fb78
            
            *(arg1 + 0x20) = eax_19
            char* eax_21 = *(arg1 + 0xac) - 1
            *(arg1 + 0xa8) = eax_21
            *eax_21 = 0
            goto label_59fb78
    
    label_59fc47:
    
    if (*(arg1 + 0x10) == 0)
    label_59fc71:
        
        if (sbb.d(eax_15, eax_15, *(arg1 + 0xa8) u< *(arg1 + 0xac)) == 0xffffffff)
            goto label_59fc74
    else
        int32_t ecx_6
        eax_15, ecx_6 = (*(arg1 + 0x18))(*(arg1 + 0x1c))
        
        if (eax_15 == 0)
        label_59fc74:
            eax_15 = *(arg1 + 0xa8)
            
            if (eax_15 u< *(arg1 + 0xac))
                goto label_59fcc9
            
            if (*(arg1 + 0x20) != 0)
                int32_t eax_26
                eax_26, ecx_6 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_26 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = arg1 + 0x28 + eax_26
                else
                    *(arg1 + 0x20) = eax_26
                    char* eax_28 = *(arg1 + 0xac) - 1
                    *(arg1 + 0xa8) = eax_28
                    *eax_28 = 0
                
                eax_15 = *(arg1 + 0xa8)
            label_59fcc9:
                ecx_6.b = *eax_15
                *(arg1 + 0xa8) = eax_15 + 1
        else if (*(arg1 + 0x20) != 0)
            goto label_59fc71
    
    label_59fce5:
    *(var_8_1 + arg2) = 0
    return arg2
}
