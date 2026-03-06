// 函数名称: sub_693e63
// 虚拟地址: 0x693e63
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_693e63(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 0x2000
    int32_t result = *(arg1 - 0x10) & 0x2000
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xffffdfff
    return sub_4c43d0(arg1 - 0x40) __tailcall
}
