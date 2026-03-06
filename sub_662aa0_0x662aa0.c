// 函数名称: sub_662aa0
// 虚拟地址: 0x662aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_662aa0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax_1 = *arg3
    int32_t eax_1 = *arg3
    void* i
    
    for (i = *arg4; i u< arg2; i += 1)
        int32_t ecx_2 = sx.d(*(i + arg1)) - 0x2b
        
        if (ecx_2 u> 0x3a)
            break
        
        int32_t ecx_3
        
        switch (ecx_2)
            case 0
                ecx_3 = 4
            case 1, 4, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1b, 0x1c, 
                    0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                    0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                    0x39
                break
            case 2
                ecx_3 = 0x84
            case 3
                ecx_3 = 0x10
            case 5
                ecx_3 = 8
            case 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe
                ecx_3 = 0x108
            case 0x1a, 0x3a
                ecx_3 = 0x20
        
        if ((ecx_3 & 0x3c) + (eax_1 & 3) - 4 u> 0x1d)
            break
        
        switch ((ecx_3 & 0x3c) + (eax_1 & 3) + &jump_table_662bec[7])
            case &lookup_table_662c0c
                if ((eax_1.b & 0x3c) != 0)
                    break
                
                eax_1 |= ecx_3
            case &lookup_table_662c0c[1], &lookup_table_662c0c[3], &lookup_table_662c0c[7], 
                    &lookup_table_662c0c[8], &lookup_table_662c0c[9], &lookup_table_662c0c[0xa], 
                    &lookup_table_662c0c[0xb], &lookup_table_662c0c[0xd], &lookup_table_662c0c[0xe], 
                    &lookup_table_662c0c[0xf], &lookup_table_662c0c[0x10], &lookup_table_662c0c[0x11], 
                    &lookup_table_662c0c[0x12], &lookup_table_662c0c[0x13], &lookup_table_662c0c[0x14], 
                    &lookup_table_662c0c[0x15], &lookup_table_662c0c[0x16], &lookup_table_662c0c[0x17], 
                    &lookup_table_662c0c[0x18], &lookup_table_662c0c[0x19], &lookup_table_662c0c[0x1a], 
                    &lookup_table_662c0c[0x1b]
                break
            case &lookup_table_662c0c[2]
                if ((eax_1.b & 0x3c) != 0)
                    break
                
                eax_1 |= 4
            case &lookup_table_662c0c[4]
                if ((eax_1.b & 0x10) != 0)
                    eax_1 = (eax_1 & 0x1c0) | 0x11
                
                eax_1 |= ecx_3 | 0x40
            case &lookup_table_662c0c[5]
                eax_1 |= ecx_3 | 0x40
            case &lookup_table_662c0c[6]
                eax_1 |= 0x48
            case &lookup_table_662c0c[0xc]
                if ((eax_1.b & 0x10) != 0)
                    break
                
                if ((eax_1.b & 8) == 0)
                    eax_1 = (eax_1 & 0x1c0) | ecx_3 | 1
                else
                    eax_1 |= ecx_3
            case &lookup_table_662c0c[0x1c], &lookup_table_662c0c[0x1d]
                if ((eax_1.b & 8) == 0)
                    break
                
                eax_1 = (eax_1 & 0x1c0) | 2
    
    *arg3 = eax_1
    *arg4 = i
    return eax_1 u>> 3 & 1
}
