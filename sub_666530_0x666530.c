// 函数名称: sub_666530
// 虚拟地址: 0x666530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_666530(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    int32_t eax_1 = *(arg1 + 0x268)
    
    if (eax_1 != 0)
        eax_1(arg1, arg2)
        return 
    
    __free_base(arg2)
}
