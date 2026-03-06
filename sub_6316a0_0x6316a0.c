// 函数名称: sub_6316a0
// 虚拟地址: 0x6316a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6316a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = arg1[7]
    int32_t i = arg1[7]
    void* ecx = *arg1
    int32_t ebx = arg1[6]
    int32_t* esi = arg1[4]
    int32_t edi = arg1[9]
    char* esi_1 = arg1[5]
    int32_t edi_1 = arg1[0xc]
    
    for (; i != 0; i -= 1)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ebx + 7)
        int32_t eax_5 = (eax_3 + (edx_1 & 7)) s>> 3
        
        switch (ebx & 7)
            case 0
                goto label_631703
            case 1
                goto label_6316f4
            case 2
                while (true)
                    uint32_t edx_12
                    edx_12.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_12.b
                    esi_1 = &esi_1[1]
                    ecx += 1
                label_6316f4:
                    uint32_t edx_5
                    edx_5.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_5.b
                    eax_5 -= 1
                    esi_1 = &esi_1[1]
                    ecx += 1
                    
                    if (eax_5 s<= 0)
                        break
                    
                label_631703:
                    uint32_t edx_6
                    edx_6.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_6.b
                    esi_1 = &esi_1[1]
                    ecx += 1
                label_63170d:
                    uint32_t edx_7
                    edx_7.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_7.b
                    esi_1 = &esi_1[1]
                    ecx += 1
                label_631717:
                    uint32_t edx_8
                    edx_8.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_8.b
                    esi_1 = &esi_1[1]
                    ecx += 1
                label_631721:
                    uint32_t edx_9
                    edx_9.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_9.b
                    esi_1 = &esi_1[1]
                    ecx += 1
                label_63172b:
                    uint32_t edx_10
                    edx_10.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_10.b
                    esi_1 = &esi_1[1]
                    ecx += 1
                label_631735:
                    uint32_t edx_11
                    edx_11.b = *(zx.d(*ecx) + edi_1)
                    *esi_1 = edx_11.b
                    esi_1 = &esi_1[1]
                    ecx += 1
            case 3
                goto label_631735
            case 4
                goto label_63172b
            case 5
                goto label_631721
            case 6
                goto label_631717
            case 7
                goto label_63170d
        
        ecx += esi
        esi_1 = &esi_1[edi]
    
    return i
}
