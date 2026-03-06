// 函数名称: sub_5d0fc0
// 虚拟地址: 0x5d0fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d0fc0(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (sub_5c7830(0x302, 0xffffffff) != 1)
    if (sub_5c7830(0x302, 0xffffffff) != 1)
        return 0
    
    void* eax_1 = data_bedd68
    int32_t var_3c = 0x302
    
    if (eax_1 == 0)
        int32_t var_34_1 = 0
    else
        int32_t var_34 = *(eax_1 + 4)
    
    int32_t var_10 = arg2
    int32_t var_c = arg3
    void var_30
    sub_5cd2b0(&var_30, arg1, 0x20)
    int32_t result
    result.b = sub_5c76a0(&var_3c) s> 0
    return result
}
