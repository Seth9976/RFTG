// 函数名称: sub_5c8b00
// 虚拟地址: 0x5c8b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c8b00(void* arg1)
{
    // 第一条实际指令: uint32_t eax = zx.d(*(arg1 + 4))
    uint32_t eax = zx.d(*(arg1 + 4))
    *(arg1 + 7) = ((eax != 8) - 1) & 0x80
    int32_t result = (eax u>> 3 & 0x1f) * zx.d(*(arg1 + 8)) * zx.d(*(arg1 + 6))
    *(arg1 + 0xc) = result
    return result
}
