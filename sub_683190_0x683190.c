// 函数名称: sub_683190
// 虚拟地址: 0x683190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683190(int32_t* arg1)
{
    // 第一条实际指令: int32_t* (** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x2c)
    int32_t* (** eax_1)(int32_t* arg1, int32_t arg2) = (*arg1[1])(arg1, 1, 0x2c)
    arg1[0x73] = eax_1
    int32_t* i = nullptr
    *eax_1 = sub_683040
    eax_1[3] = sub_683170
    eax_1[8] = 0
    eax_1[0xa] = 0
    
    if (arg1[0x1e] != 3)
        *(*arg1 + 0x14) = 0x2f
        (**arg1)(arg1)
    
    eax_1[6] = (*arg1[1])(arg1, 1, 0x80)
    int32_t result
    
    do
        result = (*(arg1[1] + 4))(arg1, 1, 0x1000)
        *(i + eax_1[6]) = result
        i = &i[1]
    while (i s< 0x80)
    
    eax_1[7] = 1
    
    if (arg1[0x1b] == 0)
        eax_1[4] = 0
    else
        int32_t ebx = arg1[0x18]
        
        if (ebx s< 8)
            *(*arg1 + 0x14) = 0x38
            *(*arg1 + 0x18) = 8
            (**arg1)(arg1)
        
        if (ebx s> 0x100)
            *(*arg1 + 0x14) = 0x39
            *(*arg1 + 0x18) = 0x100
            (**arg1)(arg1)
        
        result = (*(arg1[1] + 8))(arg1, 1, ebx, 3)
        eax_1[4] = result
        eax_1[5] = ebx
    
    if (arg1[0x16] != 0)
        arg1[0x16] = 2
    
    if (arg1[0x16] != 2)
        return result
    
    eax_1[8] = (*(arg1[1] + 4))(arg1, 1, (arg1[0x1c] + 2) * 6)
    return sub_682f70(arg1) __tailcall
}
