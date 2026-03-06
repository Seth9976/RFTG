// 函数名称: sub_67be10
// 虚拟地址: 0x67be10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67be10(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebx = arg3
    int32_t ebx = arg3
    int32_t* eax = arg1[1]
    
    if (ebx u> 0x3b9ac9f0)
        *(*arg1 + 0x14) = 0x36
        *(*arg1 + 0x18) = 3
        (**arg1)(arg1)
    
    int32_t eax_3 = ebx & 7
    
    if (eax_3 u> 0)
        ebx += 8 - eax_3
    
    if (arg2 s< 0 || arg2 s>= 2)
        *(*arg1 + 0x14) = 0xe
        *(*arg1 + 0x18) = arg2
        (**arg1)(arg1)
    
    int32_t var_14_3 = ebx + 0x10
    int32_t* eax_6 = std::_Pocma<class std::allocator<char> >(arg1)
    
    if (eax_6 == 0)
        *(*arg1 + 0x14) = 0x36
        *(*arg1 + 0x18) = 4
        (**arg1)(arg1)
    
    eax[0x13] += ebx + 0x10
    int32_t edx_6 = eax[arg2 + 0xf]
    eax_6[1] = ebx
    *eax_6 = edx_6
    eax_6[2] = 0
    eax[arg2 + 0xf] = eax_6
    return &eax_6[4]
}
