// 函数名称: sub_5dde90
// 虚拟地址: 0x5dde90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dde90(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax_1 = *(arg1 + 0x34)
    void* eax_1 = *(arg1 + 0x34)
    *arg2 = *(eax_1 + 0x4c)
    arg2[1] = *(eax_1 + 0x50)
    arg2[2] = *(eax_1 + 0xac)
    arg2[3] = *(eax_1 + 0xb0)
    return 0
}
