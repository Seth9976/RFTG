// 函数名称: sub_647620
// 虚拟地址: 0x647620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_647620(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    sub_68ae90(&var_18)
    sub_6472d0(&var_18, arg1)
    *arg2 = sub_5a881a(sub_68b1a0(&var_18))
    void* eax_3 = sub_68b1a0(&var_18)
    int128_t* var_10
    sub_5ab990(*arg2, var_10, eax_3)
    arg2[1] = sub_68b1a0(&var_18)
    arg2[2] = 0
    arg2[3] = 0
    arg2[4] = 0
    arg2[5] = 0
    arg2[6] = 1
    arg2[7] = 0
    sub_68af30(&var_18)
    return 0
}
