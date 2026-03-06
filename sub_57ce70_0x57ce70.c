// 函数名称: sub_57ce70
// 虚拟地址: 0x57ce70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_57ce70(char* arg1 @ esi)
{
    // 第一条实际指令: char* eax = arg1
    char* eax = arg1
    int32_t var_8 = 0
    int32_t var_c = 0
    int32_t var_10 = 0
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    
    if (eax != &eax[1])
        int32_t* var_18_1 = &var_8
        int32_t* var_1c_1 = &var_c
        int32_t* var_20_1 = &var_10
        
        if (sub_5a957c(arg1, "#%02x%02x%02x") == 0)
            int32_t* var_18_2 = &var_8
            int32_t* var_1c_3 = &var_c
            int32_t* var_20_2 = &var_10
            char const* const var_24_1
            
            if (sub_5a9450(arg1, 0x2c) == 0)
                var_24_1 = "%d %d %d"
            else
                var_24_1 = "%d,%d,%d"
            
            sub_5a957c(arg1, var_24_1)
    
    return (zx.d(var_8.b) << 8 | zx.d(var_c.b)) << 8 | zx.d(var_10.b)
}
