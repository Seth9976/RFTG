// 函数名称: sub_62d630
// 虚拟地址: 0x62d630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62d630(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t result = arg1[7]
    int16_t* esi = arg1[5]
    int32_t edi_1 = arg1[4] s>> 2
    int32_t ebx_1 = arg1[9] s>> 1
    int32_t* ecx_1 = *arg1
    int32_t var_10 = edi_1
    int32_t var_14 = ebx_1
    
    while (true)
        arg1 = ecx_1
        
        if (result == 0)
            break
        
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ecx + 3)
        int32_t var_c_1 = (eax_4 + (edx_1 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_62d72d
            case 1
                goto label_62d694
            case 2
                while (true)
                    int32_t edx_27 = *ecx_1
                    uint32_t eax_33 = edx_27 u>> 0x1b
                    
                    if (eax_33 == 0)
                        goto label_62d8d2
                    
                    if (eax_33 != 0x1f)
                        uint32_t ecx_35 = zx.d(*esi)
                        int32_t edi_29 = (ecx_35 << 0x10 | ecx_35) & 0x7e0f81f
                        int32_t ecx_45 = (((((edx_27 u>> 8 & 0xf800) + ((edx_27 & 0xfc00) << 0xb)
                            + (edx_27 u>> 3 & 0x1f) - edi_29) * eax_33) u>> 5) + edi_29) & 0x7e0f81f
                        ecx_1 = arg1
                        *esi = (ecx_45 u>> 0x10).w | ecx_45.w
                    label_62d8d2:
                        ecx_1 = &ecx_1[1]
                        arg1 = ecx_1
                        esi = &esi[1]
                    else
                        ecx_1 = &ecx_1[1]
                        *esi = ((edx_27 u>> 8).w & 0xf800) + ((edx_27 u>> 5).w & 0x7e0)
                            + ((edx_27 u>> 3).w & 0x1f)
                        arg1 = ecx_1
                        esi = &esi[1]
                    
                label_62d694:
                    int32_t edx_3 = *ecx_1
                    uint32_t eax_10 = edx_3 u>> 0x1b
                    
                    if (eax_10 != 0)
                        if (eax_10 != 0x1f)
                            uint32_t ecx_2 = zx.d(*esi)
                            int32_t edi_8 = (ecx_2 << 0x10 | ecx_2) & 0x7e0f81f
                            int32_t ecx_12 = (((((edx_3 u>> 8 & 0xf800) + ((edx_3 & 0xfc00) << 0xb)
                                + (edx_3 u>> 3 & 0x1f) - edi_8) * eax_10) u>> 5) + edi_8) & 0x7e0f81f
                            ecx_1 = arg1
                            *esi = (ecx_12 u>> 0x10).w | ecx_12.w
                        else
                            *esi = ((edx_3 u>> 8).w & 0xf800) + ((edx_3 u>> 5).w & 0x7e0)
                                + ((edx_3 u>> 3).w & 0x1f)
                    
                    int32_t eax_17 = var_c_1 - 1
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                    arg1 = ecx_1
                    var_c_1 = eax_17
                    
                    if (eax_17 s<= 0)
                        break
                    
                label_62d72d:
                    int32_t edx_11 = *ecx_1
                    uint32_t eax_19 = edx_11 u>> 0x1b
                    
                    if (eax_19 != 0)
                        if (eax_19 != 0x1f)
                            uint32_t ecx_13 = zx.d(*esi)
                            int32_t edi_15 = (ecx_13 << 0x10 | ecx_13) & 0x7e0f81f
                            int32_t ecx_23 = (((((edx_11 u>> 8 & 0xf800) + ((edx_11 & 0xfc00) << 0xb)
                                + (edx_11 u>> 3 & 0x1f) - edi_15) * eax_19) u>> 5) + edi_15) & 0x7e0f81f
                            ecx_1 = arg1
                            *esi = (ecx_23 u>> 0x10).w | ecx_23.w
                        else
                            *esi = ((edx_11 u>> 8).w & 0xf800) + ((edx_11 u>> 5).w & 0x7e0)
                                + ((edx_11 u>> 3).w & 0x1f)
                    
                    ecx_1 = &ecx_1[1]
                    arg1 = ecx_1
                    esi = &esi[1]
                label_62d7b7:
                    int32_t edx_19 = *ecx_1
                    uint32_t eax_26 = edx_19 u>> 0x1b
                    
                    if (eax_26 != 0)
                        if (eax_26 != 0x1f)
                            uint32_t ecx_24 = zx.d(*esi)
                            int32_t edi_22 = (ecx_24 << 0x10 | ecx_24) & 0x7e0f81f
                            int32_t ecx_34 = (((((edx_19 u>> 8 & 0xf800) + ((edx_19 & 0xfc00) << 0xb)
                                + (edx_19 u>> 3 & 0x1f) - edi_22) * eax_26) u>> 5) + edi_22) & 0x7e0f81f
                            ecx_1 = arg1
                            *esi = (ecx_34 u>> 0x10).w | ecx_34.w
                        else
                            *esi = ((edx_19 u>> 8).w & 0xf800) + ((edx_19 u>> 5).w & 0x7e0)
                                + ((edx_19 u>> 3).w & 0x1f)
                    
                    ecx_1 = &ecx_1[1]
                    arg1 = ecx_1
                    esi = &esi[1]
                
                edi_1 = var_10
                ebx_1 = var_14
            case 3
                goto label_62d7b7
        
        result -= 1
        ecx_1 = &ecx_1[edi_1]
        esi = &esi[ebx_1]
    
    return result
}
