// 函数名称: sub_607b70
// 虚拟地址: 0x607b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607b70(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* eax_1 = *(arg1 + 0x44)
    void* eax_1 = *(arg1 + 0x44)
    *arg3 = zx.d(*(*(eax_1 + 4) + 9)) * *arg2 + arg2[1] * *(eax_1 + 0x10) + *(eax_1 + 0x14)
    *arg4 = *(eax_1 + 0x10)
    return 0
}
