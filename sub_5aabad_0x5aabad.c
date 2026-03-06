// 函数名称: sub_5aabad
// 虚拟地址: 0x5aabad
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aabad()
{
    // 第一条实际指令: uint32_t* eax_2 = __getptd()
    uint32_t* eax_2 = __getptd()
    void* eax = eax_2[0x1b]
    
    if (eax != data_8b8c98 && (eax_2[0x1c] & data_8b8a50) == 0)
        eax = sub_5aebe7()
    
    return *(eax + 4)
}
