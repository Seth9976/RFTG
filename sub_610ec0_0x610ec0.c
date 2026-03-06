// 函数名称: sub_610ec0
// 虚拟地址: 0x610ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_610ec0(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return arg1
    
    int32_t ecx
    ecx.b = *(arg1 + 0x6c) != 0
    return ecx
}
