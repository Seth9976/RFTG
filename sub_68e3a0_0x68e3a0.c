// 函数名称: sub_68e3a0
// 虚拟地址: 0x68e3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68e3a0(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x18) & 1
    int32_t result = *(arg1 - 0x18) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x18) &= 0xfffffffe
    return sub_4c43d0(*(arg1 + 8)) __tailcall
}
