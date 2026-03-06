// 函数名称: sub_603100
// 虚拟地址: 0x603100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_603100(void* arg1)
{
    // 第一条实际指令: void* eax_2 = *(arg1 + 0xf0)
    void* eax_2 = *(arg1 + 0xf0)
    
    if (eax_2 == 0)
        return 0
    
    return *(*(eax_2 + 0x74) + 4)
}
