// 函数名称: sub_62c4a0
// 虚拟地址: 0x62c4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62c4a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t result = arg1[7]
    int32_t* esi = arg1[5]
    int32_t ecx_2 = arg1[4] s>> 2
    int32_t ebx_1 = arg1[9] s>> 2
    int32_t* edi = *arg1
    int32_t var_18 = ecx_2
    int32_t var_1c = ebx_1
    
    while (true)
        arg1 = edi
        
        if (result == 0)
            break
        
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ecx + 3)
        int32_t var_10_1 = (eax_4 + (edx_1 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_62c5a1
            case 1
                goto label_62c505
            case 2
                while (true)
                    int32_t ecx_24 = *edi
                    uint32_t ebx_30 = ecx_24 u>> 0x18
                    
                    if (ebx_30 == 0)
                        goto label_62c74f
                    
                    if (ebx_30 != 0xff)
                        int32_t edx_9 = *esi
                        int32_t eax_18 = edx_9 & 0xff00ff
                        int32_t edx_10 = edx_9 & 0xff00
                        edi = arg1
                        int32_t ebx_37 = ((((ebx_30 ^ 0xff) * (edx_9 u>> 0x18)) & 0xffffff00)
                            + (ebx_30 << 8)) << 0x10
                            | ((((((ecx_24 & 0xff00ff) - eax_18) * ebx_30) u>> 8) + eax_18) & 0xff00ff)
                            | ((((((ecx_24 & 0xff00) - edx_10) * ebx_30) u>> 8) + edx_10) & 0xff00)
                        int32_t var_14_4 = eax_18
                        *esi = ebx_37
                    label_62c74f:
                        edi = &edi[1]
                        arg1 = edi
                        esi = &esi[1]
                    else
                        edi = &edi[1]
                        *esi = ecx_24
                        arg1 = edi
                        esi = &esi[1]
                    
                label_62c505:
                    int32_t ecx_3 = *edi
                    uint32_t ebx_3 = ecx_3 u>> 0x18
                    
                    if (ebx_3 != 0)
                        if (ebx_3 != 0xff)
                            int32_t eax_9 = *esi
                            int32_t edx_4 = eax_9 & 0xff00ff
                            int32_t eax_10 = eax_9 & 0xff00
                            edi = arg1
                            int32_t ebx_10 = ((((ebx_3 ^ 0xff) * (eax_9 u>> 0x18)) & 0xffffff00)
                                + (ebx_3 << 8)) << 0x10
                                | ((((((ecx_3 & 0xff00ff) - edx_4) * ebx_3) u>> 8) + edx_4) & 0xff00ff)
                                | ((((((ecx_3 & 0xff00) - eax_10) * ebx_3) u>> 8) + eax_10) & 0xff00)
                            int32_t var_14_1 = edx_4
                            *esi = ebx_10
                        else
                            *esi = ecx_3
                    
                    int32_t eax_12 = var_10_1 - 1
                    edi = &edi[1]
                    esi = &esi[1]
                    arg1 = edi
                    var_10_1 = eax_12
                    
                    if (eax_12 s<= 0)
                        break
                    
                label_62c5a1:
                    int32_t ecx_10 = *edi
                    uint32_t ebx_12 = ecx_10 u>> 0x18
                    
                    if (ebx_12 != 0)
                        if (ebx_12 != 0xff)
                            int32_t eax_13 = *esi
                            int32_t edx_6 = eax_13 & 0xff00ff
                            int32_t eax_14 = eax_13 & 0xff00
                            edi = arg1
                            int32_t ebx_19 = ((((ebx_12 ^ 0xff) * (eax_13 u>> 0x18)) & 0xffffff00)
                                + (ebx_12 << 8)) << 0x10 | ((((((ecx_10 & 0xff00ff) - edx_6) * ebx_12)
                                u>> 8) + edx_6) & 0xff00ff)
                                | ((((((ecx_10 & 0xff00) - eax_14) * ebx_12) u>> 8) + eax_14) & 0xff00)
                            int32_t var_14_2 = edx_6
                            *esi = ebx_19
                        else
                            *esi = ecx_10
                    
                    edi = &edi[1]
                    arg1 = edi
                    esi = &esi[1]
                label_62c62e:
                    int32_t ecx_17 = *edi
                    uint32_t ebx_21 = ecx_17 u>> 0x18
                    
                    if (ebx_21 != 0)
                        if (ebx_21 != 0xff)
                            int32_t edx_7 = *esi
                            int32_t eax_16 = edx_7 & 0xff00ff
                            int32_t edx_8 = edx_7 & 0xff00
                            edi = arg1
                            int32_t ebx_28 = ((((ebx_21 ^ 0xff) * (edx_7 u>> 0x18)) & 0xffffff00)
                                + (ebx_21 << 8)) << 0x10 | ((((((ecx_17 & 0xff00ff) - eax_16) * ebx_21)
                                u>> 8) + eax_16) & 0xff00ff)
                                | ((((((ecx_17 & 0xff00) - edx_8) * ebx_21) u>> 8) + edx_8) & 0xff00)
                            int32_t var_14_3 = eax_16
                            *esi = ebx_28
                        else
                            *esi = ecx_17
                    
                    edi = &edi[1]
                    arg1 = edi
                    esi = &esi[1]
                
                ecx_2 = var_18
                ebx_1 = var_1c
            case 3
                goto label_62c62e
        
        result -= 1
        edi = &edi[ecx_2]
        esi = &esi[ebx_1]
    
    return result
}
