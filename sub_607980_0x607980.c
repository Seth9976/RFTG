// 函数名称: sub_607980
// 虚拟地址: 0x607980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_607980(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* result = *(arg1 + 0x134)
    int32_t* result = *(arg1 + 0x134)
    
    if (*(arg2 + 0xc) == 6)
        *result = 0
        result[1] = 0
    
    return result
}
