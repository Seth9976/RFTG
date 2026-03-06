// 函数名称: sub_631880
// 虚拟地址: 0x631880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_631880(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[4]
    int32_t ecx = arg1[4]
    int32_t i = arg1[7]
    int32_t* ebx = arg1[6]
    int32_t esi = arg1[9]
    char* edi = *arg1
    void* ecx_1 = arg1[5]
    int32_t esi_1 = arg1[0xc]
    arg1 = ebx
    
    for (; i != 0; i -= 1)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ebx + 7)
        int32_t eax_5 = (eax_3 + (edx_1 & 7)) s>> 3
        
        switch (ebx & 7)
            case nullptr
                goto label_631908
            case 1
                goto label_6318df
            case 2
                while (true)
                    uint32_t edx_28 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_28 + esi_1)
                    *(ecx_1 + 1) = *(edx_28 + esi_1 + 1)
                    edx_28.b = *(edx_28 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_28.b
                    edi = &edi[1]
                    ecx_1 += 3
                label_6318df:
                    uint32_t edx_7 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_7 + esi_1)
                    *(ecx_1 + 1) = *(edx_7 + esi_1 + 1)
                    edx_7.b = *(edx_7 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_7.b
                    eax_5 -= 1
                    edi = &edi[1]
                    ecx_1 += 3
                    
                    if (eax_5 s<= 0)
                        break
                    
                label_631908:
                    uint32_t edx_10 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_10 + esi_1)
                    *(ecx_1 + 1) = *(edx_10 + esi_1 + 1)
                    edx_10.b = *(edx_10 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_10.b
                    edi = &edi[1]
                    ecx_1 += 3
                label_631928:
                    uint32_t edx_13 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_13 + esi_1)
                    *(ecx_1 + 1) = *(edx_13 + esi_1 + 1)
                    edx_13.b = *(edx_13 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_13.b
                    edi = &edi[1]
                    ecx_1 += 3
                label_631948:
                    uint32_t edx_16 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_16 + esi_1)
                    *(ecx_1 + 1) = *(edx_16 + esi_1 + 1)
                    edx_16.b = *(edx_16 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_16.b
                    edi = &edi[1]
                    ecx_1 += 3
                label_631968:
                    uint32_t edx_19 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_19 + esi_1)
                    *(ecx_1 + 1) = *(edx_19 + esi_1 + 1)
                    edx_19.b = *(edx_19 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_19.b
                    edi = &edi[1]
                    ecx_1 += 3
                label_631988:
                    uint32_t edx_22 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_22 + esi_1)
                    *(ecx_1 + 1) = *(edx_22 + esi_1 + 1)
                    edx_22.b = *(edx_22 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_22.b
                    edi = &edi[1]
                    ecx_1 += 3
                label_6319a8:
                    uint32_t edx_25 = zx.d(*edi) * 4
                    *ecx_1 = *(edx_25 + esi_1)
                    *(ecx_1 + 1) = *(edx_25 + esi_1 + 1)
                    edx_25.b = *(edx_25 + esi_1 + 2)
                    *(ecx_1 + 2) = edx_25.b
                    edi = &edi[1]
                    ecx_1 += 3
                
                ebx = arg1
            case 3
                goto label_6319a8
            case 4
                goto label_631988
            case 5
                goto label_631968
            case 6
                goto label_631948
            case 7
                goto label_631928
        
        edi = &edi[ecx]
        ecx_1 += esi
    
    return i
}
