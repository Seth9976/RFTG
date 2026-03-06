// 函数名称: __heap_init
// 虚拟地址: 0x5af80a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__heap_init()
{
    // 第一条实际指令: HANDLE eax = HeapCreate(HEAP_NONE, 0x1000, 0)
    HANDLE eax = HeapCreate(HEAP_NONE, 0x1000, 0)
    int32_t result
    result.b = eax != 0
    data_bed0f8 = eax
    return result
}
