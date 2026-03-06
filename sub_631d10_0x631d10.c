// 函数名称: sub_631d10
// 虚拟地址: 0x631d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_631d10(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t ebx = arg1[0xe]
    int32_t ecx_1 = arg1[4]
    char* esi = *arg1
    int32_t edi = arg1[0xc]
    int16_t* ecx_2 = arg1[5]
    int32_t eax_1 = arg1[9]
    arg1 = arg1[7]
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(eax_1)
    void* result
    
    while (true)
        int32_t* edx_2 = arg1
        result = arg1 - 1
        arg1 = result
        
        if (edx_2 == 0)
            break
        
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = sx.q(ecx + 7)
        int32_t eax_10 = (eax_8 + (edx_3 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_631d95
            case 1
                goto label_631d7a
            case 2
                while (true)
                    uint32_t edx_14 = zx.d(*esi)
                    
                    if (edx_14 != ebx)
                        edx_14.w = *(edi + (edx_14 << 1))
                        *ecx_2 = edx_14.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_631d7a:
                    uint32_t edx_7 = zx.d(*esi)
                    
                    if (edx_7 != ebx)
                        edx_7.w = *(edi + (edx_7 << 1))
                        *ecx_2 = edx_7.w
                    
                    eax_10 -= 1
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                    
                    if (eax_10 s<= 0)
                        break
                    
                label_631d95:
                    uint32_t edx_8 = zx.d(*esi)
                    
                    if (edx_8 != ebx)
                        edx_8.w = *(edi + (edx_8 << 1))
                        *ecx_2 = edx_8.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_631da7:
                    uint32_t edx_9 = zx.d(*esi)
                    
                    if (edx_9 != ebx)
                        edx_9.w = *(edi + (edx_9 << 1))
                        *ecx_2 = edx_9.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_631db9:
                    uint32_t edx_10 = zx.d(*esi)
                    
                    if (edx_10 != ebx)
                        edx_10.w = *(edi + (edx_10 << 1))
                        *ecx_2 = edx_10.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_631dcb:
                    uint32_t edx_11 = zx.d(*esi)
                    
                    if (edx_11 != ebx)
                        edx_11.w = *(edi + (edx_11 << 1))
                        *ecx_2 = edx_11.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_631ddd:
                    uint32_t edx_12 = zx.d(*esi)
                    
                    if (edx_12 != ebx)
                        edx_12.w = *(edi + (edx_12 << 1))
                        *ecx_2 = edx_12.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
                label_631def:
                    uint32_t edx_13 = zx.d(*esi)
                    
                    if (edx_13 != ebx)
                        edx_13.w = *(edi + (edx_13 << 1))
                        *ecx_2 = edx_13.w
                    
                    esi = &esi[1]
                    ecx_2 = &ecx_2[1]
            case 3
                goto label_631def
            case 4
                goto label_631ddd
            case 5
                goto label_631dcb
            case 6
                goto label_631db9
            case 7
                goto label_631da7
        
        esi = &esi[ecx_1]
        ecx_2 = &ecx_2[(eax_2 - edx_1) s>> 1]
    
    return result
}
