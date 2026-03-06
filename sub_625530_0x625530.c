// 函数名称: sub_625530
// 虚拟地址: 0x625530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_625530(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t eax = edi[6]
    int16_t* esi = edi[5]
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(edi[4])
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(edi[9])
    arg1 = edi[7]
    int16_t* ecx_1 = *edi
    int32_t ebx_1 = not.d(*(edi[0xa] + 0x18))
    int32_t edi_2 = edi[0xe] & ebx_1
    void* result
    
    while (true)
        int32_t* edx_3 = arg1
        result = arg1 - 1
        arg1 = result
        
        if (edx_3 == 0)
            break
        
        int32_t eax_12
        int32_t edx_4
        edx_4:eax_12 = sx.q(eax + 7)
        int32_t var_c_1 = (eax_12 + (edx_4 & 7)) s>> 3
        
        switch (eax & 7)
            case 0
                goto label_6255cc
            case 1
                goto label_6255a9
            case 2
                while (true)
                    uint32_t edx_19 = zx.d(*ecx_1)
                    
                    if ((edx_19 & ebx_1) != edi_2)
                        *esi = edx_19.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                label_6255a9:
                    uint32_t edx_6 = zx.d(*ecx_1)
                    
                    if ((edx_6 & ebx_1) != edi_2)
                        *esi = edx_6.w
                    
                    int32_t eax_20 = var_c_1 - 1
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                    var_c_1 = eax_20
                    
                    if (eax_20 s<= 0)
                        break
                    
                label_6255cc:
                    uint32_t eax_21 = zx.d(*ecx_1)
                    
                    if ((eax_21 & ebx_1) != edi_2)
                        *esi = eax_21.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                label_6255e0:
                    uint32_t eax_22 = zx.d(*ecx_1)
                    
                    if ((eax_22 & ebx_1) != edi_2)
                        *esi = eax_22.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                label_6255f4:
                    uint32_t eax_23 = zx.d(*ecx_1)
                    
                    if ((eax_23 & ebx_1) != edi_2)
                        *esi = eax_23.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                label_625608:
                    uint32_t eax_24 = zx.d(*ecx_1)
                    
                    if ((eax_24 & ebx_1) != edi_2)
                        *esi = eax_24.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                label_62561c:
                    uint32_t eax_25 = zx.d(*ecx_1)
                    
                    if ((eax_25 & ebx_1) != edi_2)
                        *esi = eax_25.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
                label_625630:
                    uint32_t eax_26 = zx.d(*ecx_1)
                    
                    if ((eax_26 & ebx_1) != edi_2)
                        *esi = eax_26.w
                    
                    esi = &esi[1]
                    ecx_1 = &ecx_1[1]
            case 3
                goto label_625630
            case 4
                goto label_62561c
            case 5
                goto label_625608
            case 6
                goto label_6255f4
            case 7
                goto label_6255e0
        
        ecx_1 = &ecx_1[(eax_2 - edx_1) s>> 1]
        esi = &esi[(eax_6 - edx_2) s>> 1]
    
    return result
}
