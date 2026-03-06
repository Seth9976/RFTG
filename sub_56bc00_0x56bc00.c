// 函数名称: sub_56bc00
// 虚拟地址: 0x56bc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_56bc00()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    
    if (*entry_ebx == 0)
        return 
    
    sub_56be40(entry_ebx)
    void* esi_2 = (entry_ebx[1] << 2) + 4
    sub_4f4430(*entry_ebx, sub_4f4380(esi_2), esi_2)
    *entry_ebx = 0
}
