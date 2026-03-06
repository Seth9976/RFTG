// 函数名称: sub_631780
// 虚拟地址: 0x631780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_631780(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = arg1[7]
    int32_t i = arg1[7]
    void* ecx = *arg1
    int32_t ebx = arg1[6]
    int32_t* esi = arg1[4]
    int32_t edi = arg1[9]
    int16_t* esi_1 = arg1[5]
    int32_t edi_1 = arg1[0xc]
    
    for (; i != 0; i -= 1)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ebx + 7)
        int32_t eax_5 = (eax_3 + (edx_1 & 7)) s>> 3
        
        switch (ebx & 7)
            case 0
                goto label_6317e7
            case 1
                goto label_6317d4
            case 2
                while (true)
                    uint32_t edx_12
                    edx_12.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_12.w
                    ecx += 1
                    esi_1 = &esi_1[1]
                label_6317d4:
                    uint32_t edx_5
                    edx_5.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_5.w
                    eax_5 -= 1
                    ecx += 1
                    esi_1 = &esi_1[1]
                    
                    if (eax_5 s<= 0)
                        break
                    
                label_6317e7:
                    uint32_t edx_6
                    edx_6.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_6.w
                    ecx += 1
                    esi_1 = &esi_1[1]
                label_6317f5:
                    uint32_t edx_7
                    edx_7.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_7.w
                    ecx += 1
                    esi_1 = &esi_1[1]
                label_631803:
                    uint32_t edx_8
                    edx_8.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_8.w
                    ecx += 1
                    esi_1 = &esi_1[1]
                label_631811:
                    uint32_t edx_9
                    edx_9.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_9.w
                    ecx += 1
                    esi_1 = &esi_1[1]
                label_63181f:
                    uint32_t edx_10
                    edx_10.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_10.w
                    ecx += 1
                    esi_1 = &esi_1[1]
                label_63182d:
                    uint32_t edx_11
                    edx_11.w = *(edi_1 + (zx.d(*ecx) << 1))
                    *esi_1 = edx_11.w
                    ecx += 1
                    esi_1 = &esi_1[1]
            case 3
                goto label_63182d
            case 4
                goto label_63181f
            case 5
                goto label_631811
            case 6
                goto label_631803
            case 7
                goto label_6317f5
        
        ecx += esi
        esi_1 += edi
    
    return i
}
