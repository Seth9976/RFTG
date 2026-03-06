// 函数名称: sub_6096b0
// 虚拟地址: 0x6096b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6096b0(int32_t arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: void* result = *(arg2 + 0x100)
    void* result = *(arg2 + 0x100)
    
    if (result != 0 && arg1 != *(arg2 + 0x20))
        result = sub_645290(result, arg1)
        *(arg2 + 0x20) = arg1
    
    return result
}
