// 函数名称: sub_607bb0
// 虚拟地址: 0x607bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607bb0(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* eax_1 = *(arg1 + 0x134)
    int32_t* eax_1 = *(arg1 + 0x134)
    
    if (arg2 == 0)
        *eax_1 = eax_1[1]
        return 0
    
    *eax_1 = *(arg2 + 0x44)
    return 0
}
