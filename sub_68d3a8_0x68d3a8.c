// 函数名称: sub_68d3a8
// 虚拟地址: 0x68d3a8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_68d3a8(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t* result = *(arg1 - 0x5c) & 1
    int32_t* result = *(arg1 - 0x5c) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x5c) &= 0xfffffffe
    return sub_524580(*(arg1 - 0x58))
}
