// 函数名称: sub_6469a0
// 虚拟地址: 0x6469a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6469a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1 = *(arg1 + 0x1c)
    int32_t eax_1 = *(arg1 + 0x1c)
    
    if (eax_1 == 0)
        return 0xffffffff
    
    return *(eax_1 + (arg2 << 2))
}
