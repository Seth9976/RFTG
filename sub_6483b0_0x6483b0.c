// 函数名称: sub_6483b0
// 虚拟地址: 0x6483b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_6483b0(void* arg1, int32_t, int32_t arg3)
{
    // 第一条实际指令: void* result = *(arg1 + 0x1c)
    void* result = *(arg1 + 0x1c)
    void* ecx = *(result + (arg3 << 2) + 0xb24)
    *(ecx + 4) = fconvert.s(fconvert.t(*(result + 0xda8)))
    *(ecx + 8) = fconvert.s(fconvert.t(*(result + 0xdb0)))
    return result
}
