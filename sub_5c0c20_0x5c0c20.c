// 函数名称: sub_5c0c20
// 虚拟地址: 0x5c0c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c0c20(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if (*(arg1 + 1) != 0)
        __free_base(*(arg1 + 4))
    
    __free_base(arg1)
}
