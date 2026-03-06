// 函数名称: sub_5a8e2d
// 虚拟地址: 0x5a8e2d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*sub_5a8e2d(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 - 0x14)
    int32_t* eax_1 = *(arg1 - 0x14)
    int32_t ecx_1 = **eax_1
    *(arg1 - 0x24) = ecx_1
    return sub_5b20f0(ecx_1, eax_1)
}
