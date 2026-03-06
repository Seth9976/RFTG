// 函数名称: sub_536360
// 虚拟地址: 0x536360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_536360(int32_t* arg1 @ esi)
{
    // 第一条实际指令: void var_2f4
    void var_2f4
    int32_t eax_1 = __security_cookie ^ &var_2f4
    int32_t var_20 = 0
    int32_t var_18 = 0
    int32_t* var_1c = arg1
    int128_t var_2f0[0x2d]
    
    if (sub_660df0(&var_2f0, &var_2f0, nullptr, 0, data_8bdf44, data_8bdf48, data_8bdf4c, data_8bdf50)
            s< 0)
        int128_t* result
        result.b = 0
        sub_5a6aba(eax_1 ^ &var_2f4)
        return result
    
    void* eax_2 = sub_660730(&var_2f0, 0xffffffff)
    arg1[1] = 0x10
    arg1[2] = *(eax_2 + 4)
    *arg1 = *(eax_2 + 8)
    arg1[3] = sub_65f810(&var_2f0, 0xffffffff) * *(eax_2 + 4) * 2
    sub_65f700(&var_2f0)
    int32_t eax_7
    eax_7.b = 1
    sub_5a6aba(eax_1 ^ &var_2f4)
    return 1
}
