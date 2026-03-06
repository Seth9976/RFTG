// 函数名称: sub_5c2c30
// 虚拟地址: 0x5c2c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c2c30(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[9] != 3)
    if (arg1[9] != 3)
        if (arg1[8] u> 0 && zip_source_close(arg1) s< 0)
            return 0xffffffff
        
        if (arg1[9] != 0)
            zip_source_rollback_write(arg1)
        
        int32_t eax_3
        int32_t edx_1
        eax_3, edx_1 = sub_5c2f90(arg1, 0, 0, 0, 0xf)
        
        if (edx_1 s<= 0 && (edx_1 s< 0 || eax_3 u< 0))
            return 0xffffffff
        
        arg1[9] = 3
    
    return 0
}
