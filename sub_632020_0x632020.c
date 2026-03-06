// 函数名称: sub_632020
// 虚拟地址: 0x632020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_632020(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t ebx = arg1[0xe]
    int32_t ecx_1 = arg1[4]
    char* esi = *arg1
    int32_t edi = arg1[0xc]
    int32_t* ecx_2 = arg1[5]
    int32_t eax_1 = arg1[9]
    arg1 = arg1[7]
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(eax_1)
    void* result
    
    while (true)
        int32_t* edx_3 = arg1
        result = arg1 - 1
        arg1 = result
        
        if (edx_3 == 0)
            break
        
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = sx.q(ecx + 7)
        int32_t eax_10 = (eax_8 + (edx_4 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_6320a3
            case 1
                goto label_63208e
            case 2
                while (true)
                    uint32_t edx_22 = zx.d(*esi)
                    
                    if (edx_22 != ebx)
                        *ecx_2 = *(edi + (edx_22 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_63208e:
                    uint32_t edx_8 = zx.d(*esi)
                    
                    if (edx_8 != ebx)
                        *ecx_2 = *(edi + (edx_8 << 2))
                    
                    eax_10 -= 1
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                    
                    if (eax_10 s<= 0)
                        break
                    
                label_6320a3:
                    uint32_t edx_10 = zx.d(*esi)
                    
                    if (edx_10 != ebx)
                        *ecx_2 = *(edi + (edx_10 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_6320b3:
                    uint32_t edx_12 = zx.d(*esi)
                    
                    if (edx_12 != ebx)
                        *ecx_2 = *(edi + (edx_12 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_6320c3:
                    uint32_t edx_14 = zx.d(*esi)
                    
                    if (edx_14 != ebx)
                        *ecx_2 = *(edi + (edx_14 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_6320d3:
                    uint32_t edx_16 = zx.d(*esi)
                    
                    if (edx_16 != ebx)
                        *ecx_2 = *(edi + (edx_16 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_6320e3:
                    uint32_t edx_18 = zx.d(*esi)
                    
                    if (edx_18 != ebx)
                        *ecx_2 = *(edi + (edx_18 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_6320f3:
                    uint32_t edx_20 = zx.d(*esi)
                    
                    if (edx_20 != ebx)
                        *ecx_2 = *(edi + (edx_20 << 2))
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
            case 3
                goto label_6320f3
            case 4
                goto label_6320e3
            case 5
                goto label_6320d3
            case 6
                goto label_6320c3
            case 7
                goto label_6320b3
        
        esi = &esi[ecx_1]
        ecx_2 = &ecx_2[(eax_2 + (edx_1 & 3)) s>> 2]
    
    return result
}
