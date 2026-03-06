// 函数名称: sub_60cc40
// 虚拟地址: 0x60cc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_60cc40(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 0xc) == 6)
    if (*(arg2 + 0xc) == 6)
        *(*(arg1 + 0x134) + 0x48) = 1
    
    return arg2
}
