// 函数名称: sub_60b010
// 虚拟地址: 0x60b010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_60b010(int32_t arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x134)
    void* ebx = *(arg1 + 0x134)
    sub_609b10(arg1)
    sub_6096d0(*(arg1 + 0x12f), *(arg1 + 0x12d), *(arg1 + 0x12c), ebx, *(arg1 + 0x12e))
    sub_609760(ebx, *(arg1 + 0x130))
    return sub_6096b0(1, ebx)
}
