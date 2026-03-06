// 函数名称: sub_5d0f40
// 虚拟地址: 0x5d0f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d0f40(char* arg1)
{
    // 第一条实际指令: char eax = *arg1
    char eax = *arg1
    
    if (eax u< 0x20 || eax == 0x7f)
        return 0
    
    if (sub_5c7830(0x303, 0xffffffff) != 1)
        return 0
    
    void* eax_2 = data_bedd68
    int32_t var_3c = 0x303
    
    if (eax_2 == 0)
        int32_t var_34_2 = 0
    else
        int32_t var_34_1 = *(eax_2 + 4)
    
    void var_30
    sub_5cd2b0(&var_30, arg1, 0x20)
    int32_t result
    result.b = sub_5c76a0(&var_3c) s> 0
    return result
}
