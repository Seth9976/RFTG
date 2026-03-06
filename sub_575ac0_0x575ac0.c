// 函数名称: sub_575ac0
// 虚拟地址: 0x575ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_575ac0()
{
    // 第一条实际指令: char* ecx
    char* ecx
    char* var_4 = ecx
    
    if (data_27bc434 s<= 1)
        return 
    
    sub_536c00(ecx)
    int32_t eax_2 = data_27bc434 - 1
    data_27bc434 = eax_2
    sub_5ab990(&data_273ac28, &(&data_273ac24)[eax_2 * 0x404], 0x100c)
    **(eax_2 * 0x1010 + &data_273bc30)
    sub_4ff3b0(**data_273ac20, data_30d7440)
    sub_540c30(data_273ac20)
    sub_57c6a0()
}
