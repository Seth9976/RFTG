// 函数名称: zip_source_close
// 虚拟地址: 0x5c1d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_close(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[8]
    int32_t eax = arg1[8]
    
    if (eax == 0)
        zip_error_set(&arg1[3], 0x12, eax)
        return 0xffffffff
    
    arg1[8] = eax - 1
    
    if (eax == 1)
        sub_5c2f90(arg1, 0, 0, 0, 2)
        int32_t eax_3 = *arg1
        
        if (eax_3 != 0 && zip_source_close(eax_3) s< 0)
            zip_error_set(&arg1[3], 0x14, 0)
    
    return 0
}
