// 函数名称: sub_40ac00
// 虚拟地址: 0x40ac00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_40ac00(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    sub_40ad10(arg1)
    int32_t eax = *arg1
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(arg1, 0, 0x14)
    arg1[6] = 0
}
