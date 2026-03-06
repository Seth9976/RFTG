// 函数名称: sub_5bf2c0
// 虚拟地址: 0x5bf2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5bf2c0(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return arg1
    
    void* eax
    eax.w = *(arg1 + 4)
    return eax
}
