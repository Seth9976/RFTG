// 函数名称: sub_650b00
// 虚拟地址: 0x650b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_650b00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax_1 = *(arg1 + 0xc)
    void* eax_1 = *(arg1 + 0xc)
    
    if (eax_1 == 0)
        return 0xffffffff
    
    return *(*(eax_1 + 8) + (arg2 << 2))
}
