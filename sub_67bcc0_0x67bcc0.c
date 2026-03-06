// 函数名称: sub_67bcc0
// 虚拟地址: 0x67bcc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67bcc0(void*** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx = arg3
    int32_t* edi = arg1
    void* eax = edi[1]
    
    if (ebx u> 0x3b9ac9f0)
        *(*edi + 0x14) = 0x36
        *(*edi + 0x18) = 1
        (**edi)(edi)
    
    int32_t eax_3 = ebx & 7
    
    if (eax_3 u> 0)
        ebx += 8 - eax_3
        arg3 = ebx
    
    if (arg2 s< 0 || arg2 s>= 2)
        *(*edi + 0x14) = 0xe
        *(*edi + 0x18) = arg2
        (**edi)(edi)
    
    void** i = *(eax + (arg2 << 2) + 0x34)
    arg1 = nullptr
    
    for (; i != 0; i = *i)
        if (i[2] u>= ebx)
            goto label_67bdf5
        
        arg1 = i
    
    uint32_t esi_1
    
    if (arg1 != 0)
        esi_1 = *((arg2 << 2) + &data_835794)
    else
        esi_1 = *((arg2 << 2) + &data_83578c)
    
    if (esi_1 u> 0x3b9aca00 - (ebx + 0x10))
        esi_1 = 0x3b9aca00 - (ebx + 0x10)
    
    int32_t var_18_3 = esi_1 + ebx + 0x10
    
    for (i = std::_Pocma<class std::allocator<char> >(edi); i == 0; 
            i = std::_Pocma<class std::allocator<char> >(edi))
        esi_1 u>>= 1
        
        if (esi_1 u< 0x32)
            *(*edi + 0x14) = 0x36
            *(*edi + 0x18) = 2
            (**edi)(edi)
        
        int32_t var_18_5 = esi_1 + ebx + 0x10
    
    *(eax + 0x4c) += esi_1 + ebx + 0x10
    ebx = arg3
    *i = nullptr
    i[1] = 0
    i[2] = esi_1 + arg3
    
    if (arg1 != 0)
        *arg1 = i
    else
        *(eax + (arg2 << 2) + 0x34) = i
    
    label_67bdf5:
    int32_t ecx_8 = i[1]
    i[2] -= ebx
    i[1] = ecx_8 + ebx
    return ecx_8 + i + 0x10
}
