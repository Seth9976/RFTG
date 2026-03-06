// 函数名称: sub_5c7fe0
// 虚拟地址: 0x5c7fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c7fe0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = data_bed770
    for (int32_t* i = data_bed770; i != 0; i = i[0xe0])
        if (sub_5cd130(&i[3], arg1, 0x10) == 0)
            int32_t* eax_1 = *i
            int32_t var_3c = 0x655
            int32_t var_34_1 = *eax_1
            sub_5c76a0(&var_3c)
            sub_5c7df0(&i[3], *arg1, arg1[1], arg1[2], arg1[3], arg1[4], arg1[5])
}
