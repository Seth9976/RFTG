// 函数名称: sub_6470d0
// 虚拟地址: 0x6470d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6470d0(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg3 == 0)
    if (arg3 == 0)
        return 0xffffff7b
    
    void var_20
    sub_68af60(&var_20, *arg3, arg3[1])
    int32_t* eax_1 = sub_68b0a0(&var_20, 8)
    int32_t var_c = 0
    int16_t var_8 = 0
    int32_t i_1 = 6
    int32_t* edi = &var_c
    int32_t i
    
    do
        *edi = sub_68b0a0(&var_20, 8)
        edi += 1
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (var_c != 0x62726f76 || var_8.b != 0x69 || var_8:1.b != 0x73)
        return 0xffffff7c
    
    if (eax_1 == 1)
        if (arg3[2] != 0 && arg1[2] == 0)
            return sub_646b80(&var_20, arg1)
    else if (eax_1 == 3)
        if (arg1[2] != 0)
            return sub_646c50(arg2, &var_20)
    else if (eax_1 == 5 && arg1[2] != i_1 && arg2[3] != i_1)
        return sub_646d80(&var_20, arg1)
    
    return 0xffffff7b
}
