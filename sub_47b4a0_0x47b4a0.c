// 函数名称: sub_47b4a0
// 虚拟地址: 0x47b4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_47b4a0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: char var_8 = arg1.b
    char var_8 = arg1.b
    int32_t esi_1 = *arg2 - 1
    uint32_t eax
    
    switch (esi_1)
        case 0, 2, 4, 6, 0xb, 0x10, 0x12, 0x14, 0x16, 0x18
            eax.b = 1
            goto label_47b4cc
        case 1, 3, 5, 7, 0xa, 0xf, 0x11, 0x13, 0x15, 0x17
            eax.b = 0
        label_47b4cc:
            var_8 = eax.b
            
            switch (esi_1)
                case 0, 1
                    switch (arg2[1] - 9)
                        case 0
                            arg1[5] = eax.b
                        case 4
                            arg1[3] = eax.b
                        case 0x12
                            arg1[4] = eax.b
                        case 0x17
                            arg1[2] = eax.b
                        case 0x1c
                            arg1[6] = eax.b
                        case 0x1e
                            arg1[7] = eax.b
                case 2, 3
                    *arg1 = eax.b
                case 6, 7
                    arg1[1] = eax.b
                case 0xa, 0xb
                    int32_t edx_24 = arg2[1]
                    
                    if (edx_24 s<= 0x200)
                        if (edx_24 == 0x200)
                            arg1[0x11] = eax.b
                            return 
                        
                        if (edx_24 - 4 u<= 0xfc)
                            switch (edx_24 + &jump_table_47b8a4[5])
                                case &lookup_table_47b8bc
                                    arg1[0xe] = eax.b
                                case &lookup_table_47b8bc[4]
                                    arg1[0x10] = eax.b
                                case &lookup_table_47b8bc[0xc]
                                    arg1[0xd] = eax.b
                                case &lookup_table_47b8bc[0x1c]
                                    arg1[0xc] = eax.b
                                case &lookup_table_47b8bc[0xfc]
                                    arg1[0xf] = eax.b
                    else
                        if (edx_24 == 0x4000)
                            arg1[0xa] = eax.b
                            return 
                        
                        if (edx_24 == 0x1000)
                            arg1[8] = eax.b
                            return 
                        
                        if (edx_24 == 0x2000)
                            arg1[9] = eax.b
                        
                        if (edx_24 == 0x8000)
                            arg1[0xb] = eax.b
                case 0xc, 0xd
                    eax.b = arg2[3] != 0
                    
                    switch (arg2[1] - 2)
                        case 0
                            sub_47b420(0x23, var_8, arg1, eax, var_8)
                        case 2
                            sub_47b420(0x21, var_8, arg1, eax, var_8)
                        case 6
                            sub_47b420(0x22, var_8, arg1, eax, var_8)
                        case 0xe
                            sub_47b420(0x20, var_8, arg1, eax, var_8)
                case 0xf, 0x10
                    switch (arg2[1])
                        case 0x10000
                            arg1[0x14] = eax.b
                        case 0x20000
                            arg1[0x15] = eax.b
                        case 0x40000
                            arg1[0x16] = eax.b
                        case 0x80000
                            arg1[0x17] = eax.b
                        case 0x100000
                            arg1[0x12] = eax.b
                        case 0x200000
                            arg1[0x13] = eax.b
                case 0x11, 0x12
                    int32_t edx_5 = arg2[1]
                    
                    if (edx_5 == 1)
                        sub_47b420(0x1d, var_8, arg1, 1, var_8)
                        return 
                    
                    if (edx_5 == 2)
                        sub_47b420(0x1e, (edx_5 - 2).b, arg1, 1, var_8)
                        return 
                    
                    if (edx_5 == 0x10)
                        sub_47b420(0x1f, var_8, arg1, 1, var_8)
                case 0x13, 0x14
                    int32_t edx_3 = arg2[1]
                    
                    if (edx_3 == 0x100)
                        sub_47b420(0x1d, edx_3.b, arg1, 0, var_8)
                        return 
                    
                    if (edx_3 == 0x200)
                        sub_47b420(0x1e, var_8, arg1, 0, var_8)
                        return 
                    
                    if (edx_3 == 0x1000)
                        sub_47b420(0x1f, edx_3.b, arg1, 0, var_8)
                case 0x15, 0x16
                    int32_t edx_18 = arg2[1]
                    
                    if (edx_18 == 1)
                        arg1[0x18] = eax.b
                        return 
                    
                    if (edx_18 == 0x100000)
                        arg1[0x19] = eax.b
                        return 
                    
                    if (edx_18 == 0x200000)
                        arg1[0x1a] = eax.b
                case 0x17, 0x18
                    int32_t edx_22 = arg2[1]
                    
                    if (edx_22 == 0x100000)
                        arg1[0x1b] = eax.b
                        return 
                    
                    if (edx_22 == 0x200000)
                        arg1[0x1c] = eax.b
}
