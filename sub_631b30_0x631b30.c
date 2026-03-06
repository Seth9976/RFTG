// 函数名称: sub_631b30
// 虚拟地址: 0x631b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_631b30(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1[6]
    int32_t* ecx = arg1[6]
    int32_t result_1 = arg1[7]
    int32_t ebx = arg1[0xe]
    int32_t esi = arg1[4]
    int32_t edi = arg1[9]
    int32_t edi_1 = arg1[0xc]
    char* ecx_1 = *arg1
    char* esi_1 = arg1[5]
    int32_t result
    
    if (edi_1 == 0)
        while (true)
            result = result_1
            
            if (result == 0)
                break
            
            int32_t eax_8
            int32_t edx_14
            edx_14:eax_8 = sx.q(ecx + 7)
            int32_t eax_10 = (eax_8 + (edx_14 & 7)) s>> 3
            
            switch (ecx & 7)
                case nullptr
                    goto label_631c59
                case 1
                    goto label_631c47
                case 2
                    while (true)
                        void* edx_17
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631c47:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        eax_10 -= 1
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                        
                        if (eax_10 s<= 0)
                            break
                        
                    label_631c59:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631c66:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631c73:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631c80:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631c8d:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631c9a:
                        edx_17.b = *ecx_1
                        
                        if (zx.d(edx_17.b) != ebx)
                            *esi_1 = edx_17.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                case 3
                    goto label_631c9a
                case 4
                    goto label_631c8d
                case 5
                    goto label_631c80
                case 6
                    goto label_631c73
                case 7
                    goto label_631c66
            
            ecx_1 = &ecx_1[esi]
            esi_1 = &esi_1[edi]
            result_1 -= 1
    else
        while (true)
            result = result_1
            
            if (result == 0)
                break
            
            int32_t eax_3
            int32_t edx_1
            edx_1:eax_3 = sx.q(ecx + 7)
            int32_t eax_5 = (eax_3 + (edx_1 & 7)) s>> 3
            
            switch (ecx & 7)
                case nullptr
                    goto label_631ba6
                case 1
                    goto label_631b93
                case 2
                    while (true)
                        uint32_t edx_12 = zx.d(*ecx_1)
                        
                        if (edx_12 != ebx)
                            edx_12.b = *(edx_12 + edi_1)
                            *esi_1 = edx_12.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631b93:
                        uint32_t edx_5 = zx.d(*ecx_1)
                        
                        if (edx_5 != ebx)
                            edx_5.b = *(edx_5 + edi_1)
                            *esi_1 = edx_5.b
                        
                        eax_5 -= 1
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                        
                        if (eax_5 s<= 0)
                            break
                        
                    label_631ba6:
                        uint32_t edx_6 = zx.d(*ecx_1)
                        
                        if (edx_6 != ebx)
                            edx_6.b = *(edx_6 + edi_1)
                            *esi_1 = edx_6.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631bb4:
                        uint32_t edx_7 = zx.d(*ecx_1)
                        
                        if (edx_7 != ebx)
                            edx_7.b = *(edx_7 + edi_1)
                            *esi_1 = edx_7.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631bc2:
                        uint32_t edx_8 = zx.d(*ecx_1)
                        
                        if (edx_8 != ebx)
                            edx_8.b = *(edx_8 + edi_1)
                            *esi_1 = edx_8.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631bd0:
                        uint32_t edx_9 = zx.d(*ecx_1)
                        
                        if (edx_9 != ebx)
                            edx_9.b = *(edx_9 + edi_1)
                            *esi_1 = edx_9.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631bde:
                        uint32_t edx_10 = zx.d(*ecx_1)
                        
                        if (edx_10 != ebx)
                            edx_10.b = *(edx_10 + edi_1)
                            *esi_1 = edx_10.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                    label_631bec:
                        uint32_t edx_11 = zx.d(*ecx_1)
                        
                        if (edx_11 != ebx)
                            edx_11.b = *(edx_11 + edi_1)
                            *esi_1 = edx_11.b
                        
                        esi_1 = &esi_1[1]
                        ecx_1 = &ecx_1[1]
                case 3
                    goto label_631bec
                case 4
                    goto label_631bde
                case 5
                    goto label_631bd0
                case 6
                    goto label_631bc2
                case 7
                    goto label_631bb4
            
            ecx_1 = &ecx_1[esi]
            esi_1 = &esi_1[edi]
            result_1 -= 1
    
    return result
}
