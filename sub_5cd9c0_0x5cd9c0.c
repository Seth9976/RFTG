// 函数名称: sub_5cd9c0
// 虚拟地址: 0x5cd9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cd9c0(char* arg1, void* arg2, char* arg3, void* arg4)
{
    // 第一条实际指令: char* ecx = arg1
    char* ecx = arg1
    void* eax
    eax.b = *arg3
    char* var_c = ecx
    
    if (eax.b != 0)
        void* edi_1 = arg4
        
        while (true)
            if (eax.b != 0x25)
                if (arg2 u> 1)
                    arg2 -= 1
                    *ecx = eax.b
                
                arg3 = &arg3[1]
                arg1 = &ecx[1]
            else
                void* esi_1 = nullptr
                int32_t var_3c_1 = 0x20
                uint32_t var_40_1 = 0
                int32_t var_2c
                int32_t* var_44_1 = &var_2c
                int32_t i = 0
                int32_t var_8_1 = 0
                sub_5cd100()
                int32_t var_14_1 = 0xa
                int32_t var_10_1 = 0xffffffff
                uint32_t eax_2
                void* ecx_2
                
                while (true)
                    ecx_2 = &arg3[1]
                    arg3 = ecx_2
                    eax_2 = sx.d(*ecx_2) - 0x23
                    
                    if (eax_2 u> 0xd)
                        break
                    
                    switch (eax_2)
                        case 0
                            int32_t var_24_1 = 1
                            continue
                        case 1, 2, 3, 4, 5, 6, 7, 9, 0xb, 0xc
                            break
                        case 8
                            int32_t var_28_1 = 1
                            continue
                        case 0xa
                            var_2c = 1
                            continue
                        case 0xd
                            int32_t var_20_1 = 1
                            continue
                
                eax_2.b = *ecx_2
                
                if (eax_2.b s>= 0x30 && eax_2.b s<= 0x39)
                    int32_t var_3c_2 = 0
                    var_40_1 = &arg3
                    void* var_44_2 = ecx_2
                    uint32_t var_18_1 = sub_5cd580()
                
                char* ecx_3 = arg3
                
                if (*ecx_3 == 0x2e)
                    arg3 = &ecx_3[1]
                    eax_2.b = ecx_3[1]
                    
                    if (eax_2.b s< 0x30 || eax_2.b s> 0x39)
                        int32_t var_10_3 = 0
                    else
                        int32_t var_3c_3 = 0
                        var_40_1 = &arg3
                        char* var_44_3 = &ecx_3[1]
                        int32_t eax_3
                        eax_3, ecx_3 = sub_5cd580()
                        int32_t var_10_2 = eax_3
                
                void* edx_1 = arg3
                
                do
                    char* ecx_4
                    ecx_4.b = *edx_1
                    int32_t var_1c
                    void* eax_14
                    
                    if (sx.d(ecx_4.b) - 0x25 u> 0x53)
                        i = 1
                    else
                        switch (sx.d(ecx_4.b) + &jump_table_5cdd04[3]:3)
                            case &lookup_table_5cdd38
                                i = 1
                                
                                if (arg2 u> 1)
                                    *arg1 = 0x25
                                
                                esi_1 = 1
                            case &lookup_table_5cdd38[1], &lookup_table_5cdd38[2], 
                                    &lookup_table_5cdd38[3], &lookup_table_5cdd38[4], 
                                    &lookup_table_5cdd38[5], &lookup_table_5cdd38[6], 
                                    &lookup_table_5cdd38[7], &lookup_table_5cdd38[8], 
                                    &lookup_table_5cdd38[9], &lookup_table_5cdd38[0xa], 
                                    &lookup_table_5cdd38[0xb], &lookup_table_5cdd38[0xc], 
                                    &lookup_table_5cdd38[0xd], &lookup_table_5cdd38[0xe], 
                                    &lookup_table_5cdd38[0xf], &lookup_table_5cdd38[0x10], 
                                    &lookup_table_5cdd38[0x11], &lookup_table_5cdd38[0x12], 
                                    &lookup_table_5cdd38[0x13], &lookup_table_5cdd38[0x14], 
                                    &lookup_table_5cdd38[0x15], &lookup_table_5cdd38[0x16], 
                                    &lookup_table_5cdd38[0x17], &lookup_table_5cdd38[0x18], 
                                    &lookup_table_5cdd38[0x19], &lookup_table_5cdd38[0x1a], 
                                    &lookup_table_5cdd38[0x1b], &lookup_table_5cdd38[0x1c], 
                                    &lookup_table_5cdd38[0x1d], &lookup_table_5cdd38[0x1e], 
                                    &lookup_table_5cdd38[0x1f], &lookup_table_5cdd38[0x20], 
                                    &lookup_table_5cdd38[0x21], &lookup_table_5cdd38[0x22], 
                                    &lookup_table_5cdd38[0x23], &lookup_table_5cdd38[0x25], 
                                    &lookup_table_5cdd38[0x26], &lookup_table_5cdd38[0x27], 
                                    &lookup_table_5cdd38[0x28], &lookup_table_5cdd38[0x29], 
                                    &lookup_table_5cdd38[0x2a], &lookup_table_5cdd38[0x2b], 
                                    &lookup_table_5cdd38[0x2c], &lookup_table_5cdd38[0x2d], 
                                    &lookup_table_5cdd38[0x2e], &lookup_table_5cdd38[0x2f], 
                                    &lookup_table_5cdd38[0x30], &lookup_table_5cdd38[0x31], 
                                    &lookup_table_5cdd38[0x32], &lookup_table_5cdd38[0x34], 
                                    &lookup_table_5cdd38[0x35], &lookup_table_5cdd38[0x36], 
                                    &lookup_table_5cdd38[0x37], &lookup_table_5cdd38[0x38], 
                                    &lookup_table_5cdd38[0x39], &lookup_table_5cdd38[0x3a], 
                                    &lookup_table_5cdd38[0x3b], &lookup_table_5cdd38[0x3c], 
                                    &lookup_table_5cdd38[0x3d], &lookup_table_5cdd38[0x40], 
                                    &lookup_table_5cdd38[0x42], &lookup_table_5cdd38[0x45], 
                                    &lookup_table_5cdd38[0x46], &lookup_table_5cdd38[0x48], 
                                    &lookup_table_5cdd38[0x49], &lookup_table_5cdd38[0x4c], 
                                    &lookup_table_5cdd38[0x4d], &lookup_table_5cdd38[0x4f], 
                                    &lookup_table_5cdd38[0x51], &lookup_table_5cdd38[0x52]
                                i = 1
                            case &lookup_table_5cdd38[0x24]
                                int32_t var_3c_4 = 3
                                var_40_1 = "I64"
                                void* var_44_4 = edx_1
                                int32_t eax_8
                                eax_8, ecx_4 = sub_5cd5d0()
                                
                                if (eax_8 == 0)
                                    arg3 = &arg3[2]
                                    var_8_1 = 2
                            case &lookup_table_5cdd38[0x33]
                                if (var_1c == 0)
                                    var_1c = 2
                                
                                goto label_5cdbad
                            case &lookup_table_5cdd38[0x3e]
                                i = 1
                                
                                if (arg2 u> 1)
                                    edx_1.b = *edi_1
                                    edi_1 += 4
                                    *arg1 = edx_1.b
                                
                                esi_1 = 1
                            case &lookup_table_5cdd38[0x3f], &lookup_table_5cdd38[0x44]
                                if (var_8_1 == 0)
                                    *edi_1
                                    edi_1 += 4
                                    eax_14, ecx_4 = sub_5cd6c0(&var_2c, arg1, arg2)
                                    esi_1 = eax_14
                                    i = 1
                                else if (var_8_1 == 1)
                                    *edi_1
                                    edi_1 += 4
                                    eax_14, ecx_4 = sub_5cd6c0(&var_2c, arg1, arg2)
                                    esi_1 = eax_14
                                    i = 1
                                else if (var_8_1 != 2)
                                    i = 1
                                else
                                    uint32_t ecx_5 = *(edi_1 + 4)
                                    uint32_t edx_2 = *edi_1
                                    edi_1 += 8
                                    eax_14, ecx_4 = sub_5cd740(&var_2c, arg1, arg2, edx_2, ecx_5)
                                    esi_1 = eax_14
                                    i = 1
                            case &lookup_table_5cdd38[0x41]
                                long double x87_r7_1 = fconvert.t(*edi_1)
                                edi_1 += 8
                                var_40_1.q = fconvert.d(x87_r7_1)
                                int16_t x87control
                                eax_14, ecx_4, x87control =
                                    sub_5cd7e0(arg2, &var_2c, arg1, x87control, &var_2c, var_40_1)
                                esi_1 = eax_14
                                i = 1
                            case &lookup_table_5cdd38[0x47]
                                if (var_8_1 s< 2)
                                    var_8_1 += 1
                            case &lookup_table_5cdd38[0x4a]
                                goto label_5cdbc2
                            case &lookup_table_5cdd38[0x4b], &lookup_table_5cdd38[0x53]
                                var_1c = 1
                            label_5cdbad:
                                
                                if (var_14_1 == 0xa)
                                    var_14_1 = 0x10
                                
                                if (ecx_4.b == 0x70)
                                    var_8_1 = 1
                                
                            label_5cdbc2:
                                
                                if (var_14_1 != 0xa)
                                    goto label_5cdbd5
                                
                                var_14_1 = 8
                            label_5cdbd5:
                                int32_t var_20_2 = 1
                                
                                if (var_8_1 == 0)
                                    edi_1 += 4
                                    *(edi_1 - 4)
                                    eax_14, ecx_4 = sub_5cd700(&var_2c, arg1, arg2)
                                    esi_1 = eax_14
                                    i = 1
                                else if (var_8_1 == 1)
                                    *edi_1
                                    edi_1 += 4
                                    eax_14, ecx_4 = sub_5cd700(&var_2c, arg1, arg2)
                                    esi_1 = eax_14
                                    i = 1
                                else if (var_8_1 != 2)
                                    i = 1
                                else
                                    uint32_t eax_20 = *(edi_1 + 4)
                                    uint32_t ecx_10 = *edi_1
                                    edi_1 += 8
                                    eax_14, ecx_4 = sub_5cd790(&var_2c, arg1, arg2, ecx_10, eax_20)
                                    esi_1 = eax_14
                                    i = 1
                            case &lookup_table_5cdd38[0x4e]
                                char* eax_24 = *edi_1
                                edi_1 += 4
                                eax_14, ecx_4 = sub_5cd600(arg2, edx_1, arg1, &var_2c, eax_24)
                                esi_1 = eax_14
                                i = 1
                            case &lookup_table_5cdd38[0x50]
                                goto label_5cdbd5
                    edx_1 = &arg3[1]
                    arg3 = edx_1
                while (i == 0)
                
                arg1 += esi_1
                
                if (esi_1 u< arg2)
                    arg2 -= esi_1
                else if (arg2 u>= 1)
                    arg2 = 1
            
            eax.b = *arg3
            ecx = arg1
            
            if (eax.b == 0)
                break
    
    if (arg2 u> 0)
        *ecx = 0
    
    return ecx - var_c
}
