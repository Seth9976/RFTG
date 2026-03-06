// 函数名称: sub_4476f0
// 虚拟地址: 0x4476f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4476f0()
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    
    if (sub_419400(&var_8) != 0)
        int32_t eax_1 = *var_8
        
        if (eax_1 == 0x2d || eax_1 == 0x4a)
            sub_419340()
    
    void* result = nullptr
    *(*(data_27e7a40 + 0x548) + 0xbfac) = 0
    void* entry_ebx
    *(entry_ebx + 0x78) = fconvert.s(float.t(0))
    bool cond:0 = *entry_ebx != 6
    *(entry_ebx + 0x94) = 2
    __builtin_memcpy(entry_ebx + 0x2c, entry_ebx + 0xc, 0x20)
    *(entry_ebx + 0x50) = 0xffffffff
    *(entry_ebx + 0x98) = 0
    
    if (not(cond:0))
        sub_46b410(sub_418870(*(entry_ebx + 0x8c)))
        result = sub_418870(*(entry_ebx + 0x90))
        sub_46b410(result)
    
    return result
}
