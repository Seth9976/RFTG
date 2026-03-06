// 函数名称: sub_67ae60
// 虚拟地址: 0x67ae60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67ae60(int32_t* arg1)
{
    // 第一条实际指令: while (true)
    while (true)
        if (arg1[0x68] == 0)
            int32_t eax_2
            
            if (*(arg1[0x6e] + 0xc) != 0)
                eax_2 = sub_67ac90(arg1)
            else
                eax_2 = sub_67adb0(arg1)
            
            if (eax_2 == 0)
                break
        
        int32_t eax_3 = arg1[0x68]
        
        if (eax_3 - 1 u> 0xfd)
        label_67b06f:
            *(*arg1 + 0x14) = 0x44
            *(*arg1 + 0x18) = arg1[0x68]
            (**arg1)(arg1)
            arg1[0x68] = 0
        else
            switch (eax_3 + &jump_table_67b0e8[0xf]:3)
                case &lookup_table_67b128, &lookup_table_67b128[0xcf], &lookup_table_67b128[0xd0], 
                        &lookup_table_67b128[0xd1], &lookup_table_67b128[0xd2], 
                        &lookup_table_67b128[0xd3], &lookup_table_67b128[0xd4], 
                        &lookup_table_67b128[0xd5], &lookup_table_67b128[0xd6]
                    *(*arg1 + 0x14) = 0x5c
                    *(*arg1 + 0x18) = arg1[0x68]
                    (*(*arg1 + 4))(arg1, 1)
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[1], &lookup_table_67b128[2], &lookup_table_67b128[3], 
                        &lookup_table_67b128[4], &lookup_table_67b128[5], &lookup_table_67b128[6], 
                        &lookup_table_67b128[7], &lookup_table_67b128[8], &lookup_table_67b128[9], 
                        &lookup_table_67b128[0xa], &lookup_table_67b128[0xb], 
                        &lookup_table_67b128[0xc], &lookup_table_67b128[0xd], 
                        &lookup_table_67b128[0xe], &lookup_table_67b128[0xf], 
                        &lookup_table_67b128[0x10], &lookup_table_67b128[0x11], 
                        &lookup_table_67b128[0x12], &lookup_table_67b128[0x13], 
                        &lookup_table_67b128[0x14], &lookup_table_67b128[0x15], 
                        &lookup_table_67b128[0x16], &lookup_table_67b128[0x17], 
                        &lookup_table_67b128[0x18], &lookup_table_67b128[0x19], 
                        &lookup_table_67b128[0x1a], &lookup_table_67b128[0x1b], 
                        &lookup_table_67b128[0x1c], &lookup_table_67b128[0x1d], 
                        &lookup_table_67b128[0x1e], &lookup_table_67b128[0x1f], 
                        &lookup_table_67b128[0x20], &lookup_table_67b128[0x21], 
                        &lookup_table_67b128[0x22], &lookup_table_67b128[0x23], 
                        &lookup_table_67b128[0x24], &lookup_table_67b128[0x25], 
                        &lookup_table_67b128[0x26], &lookup_table_67b128[0x27], 
                        &lookup_table_67b128[0x28], &lookup_table_67b128[0x29], 
                        &lookup_table_67b128[0x2a], &lookup_table_67b128[0x2b], 
                        &lookup_table_67b128[0x2c], &lookup_table_67b128[0x2d], 
                        &lookup_table_67b128[0x2e], &lookup_table_67b128[0x2f], 
                        &lookup_table_67b128[0x30], &lookup_table_67b128[0x31], 
                        &lookup_table_67b128[0x32], &lookup_table_67b128[0x33], 
                        &lookup_table_67b128[0x34], &lookup_table_67b128[0x35], 
                        &lookup_table_67b128[0x36], &lookup_table_67b128[0x37], 
                        &lookup_table_67b128[0x38], &lookup_table_67b128[0x39], 
                        &lookup_table_67b128[0x3a], &lookup_table_67b128[0x3b], 
                        &lookup_table_67b128[0x3c], &lookup_table_67b128[0x3d], 
                        &lookup_table_67b128[0x3e], &lookup_table_67b128[0x3f], 
                        &lookup_table_67b128[0x40], &lookup_table_67b128[0x41], 
                        &lookup_table_67b128[0x42], &lookup_table_67b128[0x43], 
                        &lookup_table_67b128[0x44], &lookup_table_67b128[0x45], 
                        &lookup_table_67b128[0x46], &lookup_table_67b128[0x47], 
                        &lookup_table_67b128[0x48], &lookup_table_67b128[0x49], 
                        &lookup_table_67b128[0x4a], &lookup_table_67b128[0x4b], 
                        &lookup_table_67b128[0x4c], &lookup_table_67b128[0x4d], 
                        &lookup_table_67b128[0x4e], &lookup_table_67b128[0x4f], 
                        &lookup_table_67b128[0x50], &lookup_table_67b128[0x51], 
                        &lookup_table_67b128[0x52], &lookup_table_67b128[0x53], 
                        &lookup_table_67b128[0x54], &lookup_table_67b128[0x55], 
                        &lookup_table_67b128[0x56], &lookup_table_67b128[0x57], 
                        &lookup_table_67b128[0x58], &lookup_table_67b128[0x59], 
                        &lookup_table_67b128[0x5a], &lookup_table_67b128[0x5b], 
                        &lookup_table_67b128[0x5c], &lookup_table_67b128[0x5d], 
                        &lookup_table_67b128[0x5e], &lookup_table_67b128[0x5f], 
                        &lookup_table_67b128[0x60], &lookup_table_67b128[0x61], 
                        &lookup_table_67b128[0x62], &lookup_table_67b128[0x63], 
                        &lookup_table_67b128[0x64], &lookup_table_67b128[0x65], 
                        &lookup_table_67b128[0x66], &lookup_table_67b128[0x67], 
                        &lookup_table_67b128[0x68], &lookup_table_67b128[0x69], 
                        &lookup_table_67b128[0x6a], &lookup_table_67b128[0x6b], 
                        &lookup_table_67b128[0x6c], &lookup_table_67b128[0x6d], 
                        &lookup_table_67b128[0x6e], &lookup_table_67b128[0x6f], 
                        &lookup_table_67b128[0x70], &lookup_table_67b128[0x71], 
                        &lookup_table_67b128[0x72], &lookup_table_67b128[0x73], 
                        &lookup_table_67b128[0x74], &lookup_table_67b128[0x75], 
                        &lookup_table_67b128[0x76], &lookup_table_67b128[0x77], 
                        &lookup_table_67b128[0x78], &lookup_table_67b128[0x79], 
                        &lookup_table_67b128[0x7a], &lookup_table_67b128[0x7b], 
                        &lookup_table_67b128[0x7c], &lookup_table_67b128[0x7d], 
                        &lookup_table_67b128[0x7e], &lookup_table_67b128[0x7f], 
                        &lookup_table_67b128[0x80], &lookup_table_67b128[0x81], 
                        &lookup_table_67b128[0x82], &lookup_table_67b128[0x83], 
                        &lookup_table_67b128[0x84], &lookup_table_67b128[0x85], 
                        &lookup_table_67b128[0x86], &lookup_table_67b128[0x87], 
                        &lookup_table_67b128[0x88], &lookup_table_67b128[0x89], 
                        &lookup_table_67b128[0x8a], &lookup_table_67b128[0x8b], 
                        &lookup_table_67b128[0x8c], &lookup_table_67b128[0x8d], 
                        &lookup_table_67b128[0x8e], &lookup_table_67b128[0x8f], 
                        &lookup_table_67b128[0x90], &lookup_table_67b128[0x91], 
                        &lookup_table_67b128[0x92], &lookup_table_67b128[0x93], 
                        &lookup_table_67b128[0x94], &lookup_table_67b128[0x95], 
                        &lookup_table_67b128[0x96], &lookup_table_67b128[0x97], 
                        &lookup_table_67b128[0x98], &lookup_table_67b128[0x99], 
                        &lookup_table_67b128[0x9a], &lookup_table_67b128[0x9b], 
                        &lookup_table_67b128[0x9c], &lookup_table_67b128[0x9d], 
                        &lookup_table_67b128[0x9e], &lookup_table_67b128[0x9f], 
                        &lookup_table_67b128[0xa0], &lookup_table_67b128[0xa1], 
                        &lookup_table_67b128[0xa2], &lookup_table_67b128[0xa3], 
                        &lookup_table_67b128[0xa4], &lookup_table_67b128[0xa5], 
                        &lookup_table_67b128[0xa6], &lookup_table_67b128[0xa7], 
                        &lookup_table_67b128[0xa8], &lookup_table_67b128[0xa9], 
                        &lookup_table_67b128[0xaa], &lookup_table_67b128[0xab], 
                        &lookup_table_67b128[0xac], &lookup_table_67b128[0xad], 
                        &lookup_table_67b128[0xae], &lookup_table_67b128[0xaf], 
                        &lookup_table_67b128[0xb0], &lookup_table_67b128[0xb1], 
                        &lookup_table_67b128[0xb2], &lookup_table_67b128[0xb3], 
                        &lookup_table_67b128[0xb4], &lookup_table_67b128[0xb5], 
                        &lookup_table_67b128[0xb6], &lookup_table_67b128[0xb7], 
                        &lookup_table_67b128[0xb8], &lookup_table_67b128[0xb9], 
                        &lookup_table_67b128[0xba], &lookup_table_67b128[0xbb], 
                        &lookup_table_67b128[0xbc], &lookup_table_67b128[0xbd], 
                        &lookup_table_67b128[0xbe], &lookup_table_67b128[0xdd], 
                        &lookup_table_67b128[0xde], &lookup_table_67b128[0xef], 
                        &lookup_table_67b128[0xf0], &lookup_table_67b128[0xf1], 
                        &lookup_table_67b128[0xf2], &lookup_table_67b128[0xf3], 
                        &lookup_table_67b128[0xf4], &lookup_table_67b128[0xf5], 
                        &lookup_table_67b128[0xf6], &lookup_table_67b128[0xf7], 
                        &lookup_table_67b128[0xf8], &lookup_table_67b128[0xf9], 
                        &lookup_table_67b128[0xfa], &lookup_table_67b128[0xfb], 
                        &lookup_table_67b128[0xfc]
                    goto label_67b06f
                case &lookup_table_67b128[0xbf], &lookup_table_67b128[0xc0]
                    if (sub_679a30(0, 0, arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xc1]
                    if (sub_679a30(1, 0, arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xc2], &lookup_table_67b128[0xc4], 
                        &lookup_table_67b128[0xc5], &lookup_table_67b128[0xc6], 
                        &lookup_table_67b128[0xc7], &lookup_table_67b128[0xca], 
                        &lookup_table_67b128[0xcc], &lookup_table_67b128[0xcd], 
                        &lookup_table_67b128[0xce]
                    *(*arg1 + 0x14) = 0x3c
                    *(*arg1 + 0x18) = arg1[0x68]
                    (**arg1)(arg1)
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xc3]
                    if (sub_67a030() == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xc8]
                    if (sub_679a30(0, 1, arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xc9]
                    if (sub_679a30(1, 1, arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xcb], &lookup_table_67b128[0xdb]
                    if (sub_67abd0(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xd7]
                    if (sub_679990(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xd8]
                    *(*arg1 + 0x14) = 0x55
                    (*(*arg1 + 4))(arg1, 1)
                    arg1[0x68] = 0
                    return 2
                case &lookup_table_67b128[0xd9]
                    if (sub_679d40(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    return 1
                case &lookup_table_67b128[0xda]
                    if (sub_67a3b0(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xdc]
                    if (sub_67a630(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xdf], &lookup_table_67b128[0xe0], 
                        &lookup_table_67b128[0xe1], &lookup_table_67b128[0xe2], 
                        &lookup_table_67b128[0xe3], &lookup_table_67b128[0xe4], 
                        &lookup_table_67b128[0xe5], &lookup_table_67b128[0xe6], 
                        &lookup_table_67b128[0xe7], &lookup_table_67b128[0xe8], 
                        &lookup_table_67b128[0xe9], &lookup_table_67b128[0xea], 
                        &lookup_table_67b128[0xeb], &lookup_table_67b128[0xec], 
                        &lookup_table_67b128[0xed], &lookup_table_67b128[0xee]
                    if ((*(arg1[0x6e] + (eax_3 << 2) - 0x360))(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
                case &lookup_table_67b128[0xfd]
                    if ((*(arg1[0x6e] + 0x1c))(arg1) == 0)
                        break
                    
                    arg1[0x68] = 0
                    continue
    
    return 0
}
