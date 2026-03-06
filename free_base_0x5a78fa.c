// 函数名称: __free_base
// 虚拟地址: 0x5a78fa
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void__free_base(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0 && HeapFree(data_bed0f8, HEAP_NONE, arg1) == 0)
    if (arg1 != 0 && HeapFree(data_bed0f8, HEAP_NONE, arg1) == 0)
        BOOL* esi_1 = __errno()
        *esi_1 = sub_5abcf1(GetLastError())
}
