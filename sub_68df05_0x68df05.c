// 函数名称: sub_68df05
// 虚拟地址: 0x68df05
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_68df05(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 4
    int32_t result = *(arg1 - 0x10) & 4
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffb
    return sub_4c43d0(arg1 - 0x160) __tailcall
}
