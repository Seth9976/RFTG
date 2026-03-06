// 函数名称: sub_6794e0
// 虚拟地址: 0x6794e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6794e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = arg1[5]
    int32_t eax = arg1[5]
    
    if (eax != 0xc8 && eax != 0xc9)
        *(*arg1 + 0x14) = 0x14
        *(*arg1 + 0x18) = arg1[5]
        (**arg1)(arg1)
    
    int32_t result = sub_679340(arg1)
    
    if (result == 1)
        return 1
    
    if (result != 2)
        return result
    
    if (arg2 != result - 2)
        *(*arg1 + 0x14) = 0x33
        (**arg1)(arg1)
    
    sub_67b5d0(arg1)
    return 2
}
