// 函数名称: zip_source_stat
// 虚拟地址: 0x5bf490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_stat(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg1[0xa].b != 0)
    if (arg1[0xa].b != 0)
        return 0xffffffff
    
    if (arg2 == 0)
        zip_error_set(&arg1[3], 0x12, arg2)
        return 0xffffffff
    
    zip_stat_init(arg2)
    int32_t eax_2 = *arg1
    int32_t eax_3
    
    if (eax_2 != 0)
        eax_3 = zip_source_stat(eax_2, arg2)
    
    if (eax_2 == 0 || eax_3 s>= 0)
        int32_t eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_5c2f90(arg1, arg2, 0x40, 0, 3)
        
        if (edx_1 s> 0)
            return 0
        
        if (edx_1 s>= 0 && eax_6 u>= 0)
            return 0
    else
        sub_5bf050(&arg1[3], *arg1)
    
    return 0xffffffff
}
