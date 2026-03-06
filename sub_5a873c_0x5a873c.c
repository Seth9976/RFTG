// 函数名称: sub_5a873c
// 虚拟地址: 0x5a873c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a873c(void* arg1)
{
    // 第一条实际指令: if (arg1 u< &data_8b8090 || arg1 u> 0x8b82f0)
    if (arg1 u< &data_8b8090 || arg1 u> 0x8b82f0)
        return EnterCriticalSection(arg1 + 0x20)
    
    int32_t result = sub_5aeedd(((arg1 - &data_8b8090) s>> 5) + 0x10)
    *(arg1 + 0xc) |= 0x8000
    return result
}
