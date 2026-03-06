// 函数名称: __unlock
// 虚拟地址: 0x5aee04
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unlock(int32_t arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(*((arg1 << 3) + &data_8b8ca8))
    return LeaveCriticalSection(*((arg1 << 3) + &data_8b8ca8))
}
