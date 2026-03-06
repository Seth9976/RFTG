// 函数名称: zip_source_begin_write
// 虚拟地址: 0x5c2be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_begin_write(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[9] != 1)
    if (arg1[9] != 1)
        int32_t eax_2
        int32_t edx_1
        eax_2, edx_1 = sub_5c2f90(arg1, 0, 0, 0, 8)
        
        if (edx_1 s> 0)
            arg1[9] = 1
            return 0
        
        if (edx_1 s>= 0 && eax_2 u>= 0)
            arg1[9] = 1
            return 0
    else
        zip_error_set(&arg1[3], 0x12, 0)
    
    return 0xffffffff
}
