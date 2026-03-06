// 函数名称: sub_67cfa0
// 虚拟地址: 0x67cfa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67cfa0(int32_t* arg1)
{
    // 第一条实际指令: void* edi = arg1[0x69]
    void* edi = arg1[0x69]
    
    if (*(edi + 8) == 0)
        if (arg1[0x15] != 0 && arg1[0x22] == 0)
            if (arg1[0x17] != 0 && arg1[0x1b] != 0)
                arg1[0x73] = *(edi + 0x18)
                *(edi + 8) = 1
            else if (arg1[0x19] == 0)
                *(*arg1 + 0x14) = 0x2e
                (**arg1)(arg1)
            else
                arg1[0x73] = *(edi + 0x14)
        
        (*arg1[0x70])(arg1)
        (*(arg1[0x6b] + 8))(arg1)
        
        if (arg1[0x11] == 0)
            if (*(edi + 0x10) == 0)
                (*arg1[0x72])(arg1)
            
            (*arg1[0x71])(arg1)
            
            if (arg1[0x15] != 0)
                (*arg1[0x73])(arg1, *(edi + 8))
            
            int32_t edx_8 = *(edi + 8)
            int32_t edx_9 = neg.d(edx_8)
            (*arg1[0x6c])(arg1, sbb.d(edx_9, edx_9, edx_8 != 0) & 3)
            (*arg1[0x6a])(arg1, 0)
    else
        *(edi + 8) = 0
        (*arg1[0x73])(arg1, 0)
        (*arg1[0x6c])(arg1, 2)
        (*arg1[0x6a])(arg1, 2)
    
    void* result = arg1[2]
    
    if (result != 0)
        *(result + 0xc) = *(edi + 0xc)
        result = arg1[2]
        int32_t edx_13
        edx_13.b = *(edi + 8) != 0
        *(result + 0x10) = edx_13 + 1 + *(edi + 0xc)
        
        if (arg1[0x10] != 0 && *(arg1[0x6d] + 0x14) == 0)
            result = arg1[2]
            int32_t edx_16
            edx_16.b = arg1[0x1b] != 0
            *(result + 0x10) += edx_16 + 1
    
    return result
}
