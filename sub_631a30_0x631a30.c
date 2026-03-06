// 函数名称: sub_631a30
// 虚拟地址: 0x631a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_631a30(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t eax = edi[6]
    int32_t edx = edi[4]
    char* esi = *edi
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(edi[9])
    arg1 = edi[7]
    int32_t* ecx_1 = edi[5]
    int32_t edi_1 = edi[0xc]
    void* result
    
    while (true)
        int32_t* edx_3 = arg1
        result = arg1 - 1
        arg1 = result
        
        if (edx_3 == 0)
            break
        
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(eax + 7)
        int32_t eax_8 = (eax_6 + (edx_4 & 7)) s>> 3
        
        switch (eax & 7)
            case 0
                goto label_631aac
            case 1
                goto label_631a9b
            case 2
                while (true)
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_631a9b:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    eax_8 -= 1
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                    
                    if (eax_8 s<= 0)
                        break
                    
                label_631aac:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_631ab8:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_631ac4:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_631ad0:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_631adc:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
                label_631ae8:
                    *ecx_1 = *(edi_1 + (zx.d(*esi) << 2))
                    ecx_1 = &ecx_1[1]
                    esi = &esi[1]
            case 3
                goto label_631ae8
            case 4
                goto label_631adc
            case 5
                goto label_631ad0
            case 6
                goto label_631ac4
            case 7
                goto label_631ab8
        
        esi = &esi[edx]
        ecx_1 = &ecx_1[((edx_1 & 3) + eax_2) s>> 2]
    
    return result
}
