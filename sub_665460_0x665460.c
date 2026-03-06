// 函数名称: sub_665460
// 虚拟地址: 0x665460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_665460(void* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0)
    if (arg1 == 0 || arg2 == 0)
        return 
    
    int32_t eax = *(arg2 + 0xe8)
    
    if (eax != 0 && eax != arg3)
        sub_6622f0(arg1, arg2, 0x40, 0)
    
    *(arg2 + 0xe8) = arg3
    
    if (arg3 != 0)
        *(arg2 + 8) |= 0x8000
}
