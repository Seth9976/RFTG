// 函数名称: zip_error_system_type
// 虚拟地址: 0x5befc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_error_system_type(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_1 = *arg1
    int32_t eax_1 = *arg1
    
    if (eax_1 s>= 0 && eax_1 s< 0x1f)
        return *((eax_1 << 2) + &data_6b2b98)
    
    return 0
}
