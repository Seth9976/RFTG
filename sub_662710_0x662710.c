// 函数名称: sub_662710
// 虚拟地址: 0x662710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_662710(void* arg1, int128_t* arg2)
{
    // 第一条实际指令: int128_t* result = sub_6622f0(arg1, arg2, 0x7fff, 0xffffffff)
    int128_t* result = sub_6622f0(arg1, arg2, 0x7fff, 0xffffffff)
    
    if (*(arg1 + 0x248) != 0)
        result = sub_666530(arg1, *(arg1 + 0x24c))
        *(arg1 + 0x24c) = 0
        *(arg1 + 0x248) = 0
    
    if (arg2 == 0)
        return result
    
    return sub_5abfc0(arg2, 0, 0xec)
}
