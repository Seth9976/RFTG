// 函数名称: sub_4f43d0
// 虚拟地址: 0x4f43d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f43d0()
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t* eax = sub_4f4380(entry_ebx)
    eax[3] += 1
    
    if (entry_ebx s> 0x400 && eax[4] == 0xffffffff)
        int128_t* eax_2 = sub_4cce80(entry_ebx)
        sub_5abfc0(eax_2, 0, entry_ebx)
        return eax_2
    
    if (*eax == 0)
        sub_4f4170(eax)
    
    int32_t* edi = *eax
    *eax = *edi
    sub_5abfc0(edi, 0, entry_ebx)
    return edi
}
