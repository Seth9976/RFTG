// 函数名称: sub_693d75
// 虚拟地址: 0x693d75
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_693d75(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 0x20
    int32_t result = *(arg1 - 0x10) & 0x20
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xffffffdf
    return sub_4c43d0(arg1 - 0x3c) __tailcall
}
