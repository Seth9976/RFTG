// 函数名称: sub_631e50
// 虚拟地址: 0x631e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_631e50(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1[6]
    int32_t* ecx = arg1[6]
    int32_t i = arg1[7]
    int32_t ebx = arg1[0xe]
    int32_t esi = arg1[9]
    int32_t ecx_1 = arg1[4]
    char* edi = *arg1
    char* ecx_2 = arg1[5]
    int32_t esi_1 = arg1[0xc]
    
    for (; i != 0; i -= 1)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ecx + 7)
        int32_t var_8_1 = (eax_4 + (edx_1 & 7)) s>> 3
        
        switch (ecx & 7)
            case nullptr
                goto label_631ee9
            case 1
                goto label_631eb6
            case 2
                while (true)
                    uint32_t edx_26 = zx.d(*edi)
                    
                    if (edx_26 != ebx)
                        uint32_t edx_28 = edx_26 * 4
                        *ecx_2 = *(edx_28 + esi_1)
                        ecx_2[1] = *(edx_28 + esi_1 + 1)
                        edx_28.b = *(edx_28 + esi_1 + 2)
                        ecx_2[2] = edx_28.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                label_631eb6:
                    uint32_t edx_5 = zx.d(*edi)
                    
                    if (edx_5 != ebx)
                        uint32_t edx_7 = edx_5 * 4
                        *ecx_2 = *(edx_7 + esi_1)
                        ecx_2[1] = *(edx_7 + esi_1 + 1)
                        edx_7.b = *(edx_7 + esi_1 + 2)
                        ecx_2[2] = edx_7.b
                    
                    int32_t eax_10 = var_8_1 - 1
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                    var_8_1 = eax_10
                    
                    if (eax_10 s<= 0)
                        break
                    
                label_631ee9:
                    uint32_t edx_8 = zx.d(*edi)
                    
                    if (edx_8 != ebx)
                        uint32_t edx_10 = edx_8 * 4
                        *ecx_2 = *(edx_10 + esi_1)
                        ecx_2[1] = *(edx_10 + esi_1 + 1)
                        edx_10.b = *(edx_10 + esi_1 + 2)
                        ecx_2[2] = edx_10.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                label_631f0d:
                    uint32_t edx_11 = zx.d(*edi)
                    
                    if (edx_11 != ebx)
                        uint32_t edx_13 = edx_11 * 4
                        *ecx_2 = *(edx_13 + esi_1)
                        ecx_2[1] = *(edx_13 + esi_1 + 1)
                        edx_13.b = *(edx_13 + esi_1 + 2)
                        ecx_2[2] = edx_13.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                label_631f31:
                    uint32_t edx_14 = zx.d(*edi)
                    
                    if (edx_14 != ebx)
                        uint32_t edx_16 = edx_14 * 4
                        *ecx_2 = *(edx_16 + esi_1)
                        ecx_2[1] = *(edx_16 + esi_1 + 1)
                        edx_16.b = *(edx_16 + esi_1 + 2)
                        ecx_2[2] = edx_16.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                label_631f55:
                    uint32_t edx_17 = zx.d(*edi)
                    
                    if (edx_17 != ebx)
                        uint32_t edx_19 = edx_17 * 4
                        *ecx_2 = *(edx_19 + esi_1)
                        ecx_2[1] = *(edx_19 + esi_1 + 1)
                        edx_19.b = *(edx_19 + esi_1 + 2)
                        ecx_2[2] = edx_19.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                label_631f79:
                    uint32_t edx_20 = zx.d(*edi)
                    
                    if (edx_20 != ebx)
                        uint32_t edx_22 = edx_20 * 4
                        *ecx_2 = *(edx_22 + esi_1)
                        ecx_2[1] = *(edx_22 + esi_1 + 1)
                        edx_22.b = *(edx_22 + esi_1 + 2)
                        ecx_2[2] = edx_22.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
                label_631f9d:
                    uint32_t edx_23 = zx.d(*edi)
                    
                    if (edx_23 != ebx)
                        uint32_t edx_25 = edx_23 * 4
                        *ecx_2 = *(edx_25 + esi_1)
                        ecx_2[1] = *(edx_25 + esi_1 + 1)
                        edx_25.b = *(edx_25 + esi_1 + 2)
                        ecx_2[2] = edx_25.b
                    
                    edi = &edi[1]
                    ecx_2 = &ecx_2[3]
            case 3
                goto label_631f9d
            case 4
                goto label_631f79
            case 5
                goto label_631f55
            case 6
                goto label_631f31
            case 7
                goto label_631f0d
        
        edi = &edi[ecx_1]
        ecx_2 = &ecx_2[esi]
    
    return i
}
