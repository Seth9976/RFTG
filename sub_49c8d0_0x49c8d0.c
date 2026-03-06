// 函数名称: sub_49c8d0
// 虚拟地址: 0x49c8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_49c8d0(void* arg1)
{
    // 第一条实际指令: char eax = *(arg1 + 0x45a)
    char eax = *(arg1 + 0x45a)
    
    if (eax s> 0 && eax s< 4 && *(arg1 + 0x45b) == 0)
        return 1
    
    return 0
}
