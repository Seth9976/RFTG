// 函数名称: __unlock_file
// 虚拟地址: 0x5a87af
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unlock_file(void* arg1)
{
    // 第一条实际指令: if (arg1 u< &data_8b8090 || arg1 u> 0x8b82f0)
    if (arg1 u< &data_8b8090 || arg1 u> 0x8b82f0)
        return LeaveCriticalSection(arg1 + 0x20)
    
    *(arg1 + 0xc) &= 0xffff7fff
    return __unlock(((arg1 - &data_8b8090) s>> 5) + 0x10)
}
