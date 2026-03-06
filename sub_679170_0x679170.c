// 函数名称: sub_679170
// 虚拟地址: 0x679170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_679170(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_16 = arg1[9]
    int32_t eax_16 = arg1[9]
    int32_t ebx = 1
    
    if (eax_16 == 1)
        arg1[0xa] = 1
        arg1[0xb] = 1
    else if (eax_16 == 3)
        if (arg1[0x46] != 0)
            arg1[0xa] = 3
            arg1[0xb] = 2
        else if (arg1[0x49] == 0)
            int32_t* eax_13 = arg1[0x36]
            int32_t ecx_4 = *eax_13
            int32_t edx_4 = eax_13[0x15]
            int32_t edi_1 = eax_13[0x2a]
            
            if (ecx_4 == 1)
                if (edx_4 != 2 || edi_1 != 3)
                    goto label_6792c0
                
                arg1[0xa] = 3
                ebx = ecx_4
                arg1[0xb] = edx_4
            else if (ecx_4 != 0x52 || edx_4 != 0x47 || edi_1 != 0x42)
            label_6792c0:
                void* eax_14 = *arg1
                *(eax_14 + 0x18) = ecx_4
                *(eax_14 + 0x1c) = edx_4
                *(eax_14 + 0x20) = edi_1
                *(*arg1 + 0x14) = 0x6f
                (*(*arg1 + 4))(arg1, 1)
                arg1[0xa] = 3
                ebx = 1
                arg1[0xb] = 2
            else
                arg1[0xa] = 2
                ebx = ecx_4 - 0x51
                arg1[0xb] = 2
        else
            uint32_t eax_8 = zx.d(arg1[0x4a].b)
            
            if (eax_8 == 0)
                arg1[0xa] = 2
                arg1[0xb] = 2
            else if (eax_8 == 1)
                arg1[0xa] = 3
                arg1[0xb] = 2
            else
                *(*arg1 + 0x14) = 0x72
                *(*arg1 + 0x18) = zx.d(arg1[0x4a].b)
                (*(*arg1 + 4))(arg1, 0xffffffff)
                arg1[0xa] = 3
                arg1[0xb] = 2
    else if (eax_16 == 4)
        uint32_t eax_3
        
        if (arg1[0x49] != 0)
            eax_3 = zx.d(arg1[0x4a].b)
        
        if (arg1[0x49] == 0 || eax_3 == 0)
            arg1[0xa] = 4
            arg1[0xb] = 4
        else
            if (eax_3 != 2)
                *(*arg1 + 0x14) = 0x72
                *(*arg1 + 0x18) = zx.d(arg1[0x4a].b)
                (*(*arg1 + 4))(arg1, 0xffffffff)
            
            arg1[0xa] = 5
            arg1[0xb] = 4
    else
        arg1[0xa] = 0
        arg1[0xb] = 0
    
    arg1[0xc] = ebx
    *(arg1 + 0x38) = fconvert.d(float.t(1))
    arg1[0xd] = ebx
    arg1[0x13] = ebx
    arg1[0x14] = ebx
    arg1[0x17] = ebx
    arg1[0x10] = 0
    arg1[0x11] = 0
    arg1[0x12] = 0
    arg1[0x15] = 0
    arg1[0x16] = 2
    arg1[0x18] = 0x100
    arg1[0x22] = 0
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0
    return 0
}
