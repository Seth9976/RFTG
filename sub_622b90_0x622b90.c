// 函数名称: sub_622b90
// 虚拟地址: 0x622b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_622b90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = eax[6]
    arg1 = eax[7]
    int32_t edx_1 = eax[9]
    void* ebx = eax[0xa]
    int32_t* esi = *eax
    void* edx_2 = eax[0xb]
    int32_t ecx_1 = eax[4]
    int32_t* edi = eax[5]
    int32_t* result
    
    if (*(edx_2 + 0x18) == 0)
        int32_t ecx_17 = *(ebx + 0x14) | *(ebx + 0x10) | *(ebx + 0xc)
        
        while (true)
            int32_t* edx_13 = arg1
            result = arg1 - 1
            arg1 = result
            
            if (edx_13 == 0)
                break
            
            int32_t eax_10
            int32_t edx_14
            edx_14:eax_10 = sx.q(ecx + 7)
            int32_t eax_12 = (eax_10 + (edx_14 & 7)) s>> 3
            
            switch (ecx & 7)
                case 0
                    goto label_622cd7
                case 1
                    goto label_622cc6
                case 2
                    while (true)
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622cc6:
                        *edi = *esi & ecx_17
                        eax_12 -= 1
                        edi = &edi[1]
                        esi = &esi[1]
                        
                        if (eax_12 s<= 0)
                            break
                        
                    label_622cd7:
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622ce3:
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622cef:
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622cfb:
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622d07:
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622d13:
                        *edi = *esi & ecx_17
                        edi = &edi[1]
                        esi = &esi[1]
                case 3
                    goto label_622d13
                case 4
                    goto label_622d07
                case 5
                    goto label_622cfb
                case 6
                    goto label_622cef
                case 7
                    goto label_622ce3
            
            esi += ecx_1
            edi += edx_1
    else
        uint32_t ebx_3 = zx.d(*(eax + 0x3f)) u>> *(edx_2 + 0x1f) << *(edx_2 + 0x23)
        
        while (true)
            int32_t* ecx_4 = arg1
            result = arg1 - 1
            arg1 = result
            
            if (ecx_4 == 0)
                break
            
            int32_t eax_4
            int32_t edx_3
            edx_3:eax_4 = sx.q(ecx + 7)
            int32_t eax_6 = (eax_4 + (edx_3 & 7)) s>> 3
            
            switch (ecx & 7)
                case 0
                    goto label_622c27
                case 1
                    goto label_622c16
                case 2
                    while (true)
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622c16:
                        *edi = *esi | ebx_3
                        eax_6 -= 1
                        edi = &edi[1]
                        esi = &esi[1]
                        
                        if (eax_6 s<= 0)
                            break
                        
                    label_622c27:
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622c33:
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622c3f:
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622c4b:
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622c57:
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                    label_622c63:
                        *edi = *esi | ebx_3
                        edi = &edi[1]
                        esi = &esi[1]
                case 3
                    goto label_622c63
                case 4
                    goto label_622c57
                case 5
                    goto label_622c4b
                case 6
                    goto label_622c3f
                case 7
                    goto label_622c33
            
            esi += ecx_1
            edi += edx_1
    
    return result
}
