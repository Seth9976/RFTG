// 函数名称: sub_5bca90
// 虚拟地址: 0x5bca90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5bca90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_44
    int32_t var_44
    zip_stat_init(&var_44)
    
    if (zip_source_stat(arg1, &var_44) == 0)
        int32_t var_2c
        int32_t var_28
        
        if ((var_44 & 4) != 0 && (var_2c | var_28) == 0)
            return 1
        
        return 2
    
    int32_t* eax_1 = zip_source_error(arg1)
    
    if (zip_error_code_zip(eax_1) == 5 && zip_error_code_system(eax_1) == 2)
        return 0
    
    sub_5bf010(arg2, eax_1)
    return 0xffffffff
}
