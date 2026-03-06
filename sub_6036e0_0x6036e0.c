// 函数名称: sub_6036e0
// 虚拟地址: 0x6036e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6036e0(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x74)
    void* ecx = *(arg1 + 0x74)
    BitBlt(*(ecx + 8), 0, 0, *(arg1 + 0x18), *(arg1 + 0x1c), *(ecx + 0xc), 0, 0, SRCCOPY)
    return 0
}
