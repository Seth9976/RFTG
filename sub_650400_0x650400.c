// 函数名称: sub_650400
// 虚拟地址: 0x650400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_650400(int128_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[1].d
    int32_t eax = arg1[1].d
    
    if (eax != 0)
        __free_base(eax)
    
    int32_t eax_1 = *(arg1 + 0x14)
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = *(arg1 + 0x18)
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    int32_t eax_3 = *(arg1 + 0x1c)
    
    if (eax_3 != 0)
        __free_base(eax_3)
    
    int32_t eax_4 = arg1[2].d
    
    if (eax_4 != 0)
        __free_base(eax_4)
    
    return sub_5abfc0(arg1, 0, 0x38)
}
