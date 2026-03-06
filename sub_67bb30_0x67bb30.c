// 函数名称: sub_67bb30
// 虚拟地址: 0x67bb30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67bb30(int32_t* arg1)
{
    // 第一条实际指令: void* edi = arg1[0x6d]
    void* edi = arg1[0x6d]
    
    if (*(edi + 0x14) != 0)
        return 2
    
    int32_t result = (*(arg1[0x6e] + 4))(arg1)
    
    if (result == 1)
        if (*(edi + 0x18) != 0)
            sub_67b6a0(arg1)
            *(edi + 0x18) = 0
            return result
        
        if (*(edi + 0x10) == 0)
            *(*arg1 + 0x14) = 0x23
            (**arg1)(arg1)
        
        sub_67bae0(arg1)
    else if (result == 2)
        *(edi + 0x14) = 1
        
        if (*(edi + 0x18) == result - 2)
            int32_t eax_6 = arg1[0x24]
            
            if (arg1[0x26] s> eax_6)
                arg1[0x26] = eax_6
        else if (*(arg1[0x6e] + 0x10) != result - 2)
            *(*arg1 + 0x14) = 0x3b
            (**arg1)(arg1)
    
    return result
}
