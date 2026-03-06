// 函数名称: sub_68c780
// 虚拟地址: 0x68c780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68c780(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 + 8) & 1
    int32_t result = *(arg1 + 8) & 1
    
    if (result == 0)
        return result
    
    *(arg1 + 8) &= 0xfffffffe
    return sub_4eb760(*(arg1 + 0xc)) __tailcall
}
