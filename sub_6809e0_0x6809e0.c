// 函数名称: sub_6809e0
// 虚拟地址: 0x6809e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6809e0(void* arg1)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x1c4)
    void* ecx = *(arg1 + 0x1c4)
    *(ecx + 0x5c) = *(arg1 + 0x138)
    int32_t result = *(arg1 + 0x74)
    *(ecx + 0x60) = result
    return result
}
