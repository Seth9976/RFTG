// 函数名称: zip_source_commit_write
// 虚拟地址: 0x5c2720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_source_commit_write(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[9] == 1)
    if (arg1[9] == 1)
        int32_t eax_2 = arg1[8]
        
        if (eax_2 u> 1)
            zip_error_set(&arg1[3], 0x1d, 0)
            return 0xffffffff
        
        int32_t eax_4
        
        if (eax_2 != 0)
            eax_4 = zip_source_close(arg1)
        
        if (eax_2 == 0 || eax_4 s>= 0)
            int32_t eax_5
            int32_t edx
            eax_5, edx = sub_5c2f90(arg1, 0, 0, 0, 9)
            
            if (edx s<= 0 && (edx s< 0 || eax_5 u< 0))
                arg1[9] = 2
                return 0xffffffff
            
            arg1[9] = 0
            return 0
    else
        zip_error_set(&arg1[3], 0x12, 0)
    
    return 0xffffffff
}
