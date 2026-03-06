// 函数名称: sub_68f50a
// 虚拟地址: 0x68f50a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68f50a(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x54) & 1
    int32_t result = *(arg1 - 0x54) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x54) &= 0xfffffffe
    return sub_5224b0(*(arg1 - 0x58)) __tailcall
}
