// 函数名称: sub_673380
// 虚拟地址: 0x673380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_673380(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x4c)
    int32_t ecx = *(arg1 + 0x4c)
    int32_t edx = *(arg1 + 0x44)
    *(arg1 + 0x3c) = *(arg1 + 0x2c) * 2
    *(edx + (ecx << 1) - 2) = 0
    sub_5abfc0(*(arg1 + 0x44), 0, *(arg1 + 0x4c) * 2 - 2)
    void* eax_4 = *(arg1 + 0x84) * 6
    void* eax_5 = eax_4 * 2
    *(arg1 + 0x80) = zx.d(*(eax_4 * 2 + 0x832e52))
    *(arg1 + 0x8c) = zx.d(*(eax_5 + 0x832e50))
    *(arg1 + 0x90) = zx.d(*(eax_5 + 0x832e54))
    uint32_t edx_3 = zx.d(*(eax_5 + 0x832e56))
    *(arg1 + 0x6c) = 0
    *(arg1 + 0x5c) = 0
    *(arg1 + 0x74) = 0
    *(arg1 + 0x16b4) = 0
    *(arg1 + 0x68) = 0
    *(arg1 + 0x48) = 0
    *(arg1 + 0x7c) = edx_3
    *(arg1 + 0x78) = 2
    *(arg1 + 0x60) = 2
    return 2
}
