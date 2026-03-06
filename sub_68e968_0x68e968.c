// 函数名称: sub_68e968
// 虚拟地址: 0x68e968
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68e968(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0xc) & 1
    int32_t result = *(arg1 + 0xc) & 1
    
    if (result == 0)
        return result
    
    *(arg1 + 0xc) &= 0xfffffffe
    return sub_521920(*(arg1 + 8)) __tailcall
}
