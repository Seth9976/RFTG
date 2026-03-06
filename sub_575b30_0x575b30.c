// 函数名称: sub_575b30
// 虚拟地址: 0x575b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_575b30()
{
    // 第一条实际指令: char* ecx
    char* ecx
    char* var_4 = ecx
    LRESULT result = data_27bc434
    
    if (result s>= data_27bc438)
        return result
    
    sub_536c00(ecx)
    int32_t eax_1 = data_27bc434 + 1
    data_27bc434 = eax_1
    sub_5ab990(&data_273ac28, &(&data_273ac24)[eax_1 * 0x404], 0x100c)
    **(eax_1 * 0x1010 + &data_273bc30)
    sub_4ff3b0(**data_273ac20, data_30d7440)
    sub_540c30(data_273ac20)
    return sub_57c6a0()
}
