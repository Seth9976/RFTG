// 函数名称: sub_620a40
// 虚拟地址: 0x620a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_620a40(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t eax = edi[6]
    int32_t* esi = *edi
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(edi[4])
    int32_t edx_2 = edi[9]
    arg1 = edi[7]
    uint8_t* ecx_1 = edi[5]
    int32_t edi_1 = edi[0xc]
    int32_t ebx_1 = ((edx & 3) + eax_2) s>> 2
    int32_t var_10 = ebx_1
    void* result
    
    if (edi_1 != 0)
        while (true)
            int32_t* edx_24 = arg1
            result = arg1 - 1
            arg1 = result
            
            if (edx_24 == 0)
                break
            
            int32_t eax_11
            int32_t edx_25
            edx_25:eax_11 = sx.q(eax + 7)
            int32_t var_c_1 = (eax_11 + (edx_25 & 7)) s>> 3
            
            switch (eax & 7)
                case 0
                    goto label_620c4f
                case 1
                    goto label_620c19
                case 2
                    while (true)
                        int32_t eax_41 = *esi
                        int32_t eax_43
                        eax_43.b = ((eax_41 u>> 0x16 & 0xe0) | (eax_41 u>> 0xf & 0x1c)
                            | (eax_41 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_43.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    label_620c19:
                        int32_t edx_27 = *esi
                        int32_t edx_29
                        edx_29.b = ((edx_27 u>> 0x16 & 0xe0) | (edx_27 u>> 0xf & 0x1c)
                            | (edx_27 u>> 8 & 3))[edi_1]
                        int32_t eax_22 = var_c_1 - 1
                        *ecx_1 = edx_29.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                        var_c_1 = eax_22
                        
                        if (eax_22 s<= 0)
                            break
                        
                    label_620c4f:
                        int32_t eax_23 = *esi
                        int32_t eax_25
                        eax_25.b = ((eax_23 u>> 0x16 & 0xe0) | (eax_23 u>> 0xf & 0x1c)
                            | (eax_23 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_25.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    label_620c77:
                        int32_t eax_26 = *esi
                        int32_t eax_28
                        eax_28.b = ((eax_26 u>> 0x16 & 0xe0) | (eax_26 u>> 0xf & 0x1c)
                            | (eax_26 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_28.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    label_620c9f:
                        int32_t eax_29 = *esi
                        int32_t eax_31
                        eax_31.b = ((eax_29 u>> 0x16 & 0xe0) | (eax_29 u>> 0xf & 0x1c)
                            | (eax_29 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_31.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    label_620cc7:
                        int32_t eax_32 = *esi
                        int32_t eax_34
                        eax_34.b = ((eax_32 u>> 0x16 & 0xe0) | (eax_32 u>> 0xf & 0x1c)
                            | (eax_32 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_34.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    label_620cef:
                        int32_t eax_35 = *esi
                        int32_t eax_37
                        eax_37.b = ((eax_35 u>> 0x16 & 0xe0) | (eax_35 u>> 0xf & 0x1c)
                            | (eax_35 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_37.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    label_620d17:
                        int32_t eax_38 = *esi
                        int32_t eax_40
                        eax_40.b = ((eax_38 u>> 0x16 & 0xe0) | (eax_38 u>> 0xf & 0x1c)
                            | (eax_38 u>> 8 & 3))[edi_1]
                        *ecx_1 = eax_40.b
                        ecx_1 = &ecx_1[1]
                        esi = &esi[1]
                    
                    ebx_1 = var_10
                case 3
                    goto label_620d17
                case 4
                    goto label_620cef
                case 5
                    goto label_620cc7
                case 6
                    goto label_620c9f
                case 7
                    goto label_620c77
            
            ecx_1 = &ecx_1[edx_2]
            esi = &esi[ebx_1]
    else
        while (true)
            int32_t* edx_3 = arg1
            result = arg1 - 1
            arg1 = result
            
            if (edx_3 == 0)
                break
            
            int32_t eax_5
            int32_t edx_4
            edx_4:eax_5 = sx.q(eax + 7)
            int32_t eax_7 = (eax_5 + (edx_4 & 7)) s>> 3
            
            switch (eax & 7)
                case 0
                    goto label_620adf
                case 1
                    goto label_620ab5
                case 2
                    while (true)
                        int32_t edi_11 = *esi
                        *ecx_1 = ((edi_11 u>> 0x16).b & 0xe0) | ((edi_11 u>> 0xf).b & 0x1c)
                            | ((edi_11 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    label_620ab5:
                        int32_t edi_4 = *esi
                        *ecx_1 = ((edi_4 u>> 0x16).b & 0xe0) | ((edi_4 u>> 0xf).b & 0x1c)
                            | ((edi_4 u>> 8).b & 3)
                        eax_7 -= 1
                        ecx_1 = &ecx_1[1]
                        
                        if (eax_7 s<= 0)
                            break
                        
                    label_620adf:
                        int32_t edi_5 = *esi
                        *ecx_1 = ((edi_5 u>> 0x16).b & 0xe0) | ((edi_5 u>> 0xf).b & 0x1c)
                            | ((edi_5 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    label_620b00:
                        int32_t edi_6 = *esi
                        *ecx_1 = ((edi_6 u>> 0x16).b & 0xe0) | ((edi_6 u>> 0xf).b & 0x1c)
                            | ((edi_6 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    label_620b21:
                        int32_t edi_7 = *esi
                        *ecx_1 = ((edi_7 u>> 0x16).b & 0xe0) | ((edi_7 u>> 0xf).b & 0x1c)
                            | ((edi_7 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    label_620b42:
                        int32_t edi_8 = *esi
                        *ecx_1 = ((edi_8 u>> 0x16).b & 0xe0) | ((edi_8 u>> 0xf).b & 0x1c)
                            | ((edi_8 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    label_620b63:
                        int32_t edi_9 = *esi
                        *ecx_1 = ((edi_9 u>> 0x16).b & 0xe0) | ((edi_9 u>> 0xf).b & 0x1c)
                            | ((edi_9 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    label_620b84:
                        int32_t edi_10 = *esi
                        *ecx_1 = ((edi_10 u>> 0x16).b & 0xe0) | ((edi_10 u>> 0xf).b & 0x1c)
                            | ((edi_10 u>> 8).b & 3)
                        ecx_1 = &ecx_1[1]
                    
                    ebx_1 = var_10
                case 3
                    goto label_620b84
                case 4
                    goto label_620b63
                case 5
                    goto label_620b42
                case 6
                    goto label_620b21
                case 7
                    goto label_620b00
            
            ecx_1 = &ecx_1[edx_2]
            esi = &esi[ebx_1]
    
    return result
}
