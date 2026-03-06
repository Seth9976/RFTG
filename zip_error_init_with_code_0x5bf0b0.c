// 函数名称: zip_error_init_with_code
// 虚拟地址: 0x5bf0b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_error_init_with_code(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: arg1[1] = 0
    arg1[1] = 0
    arg1[2] = 0
    *arg1 = arg2
    int32_t eax_1
    
    if (arg2 s< 0 || arg2 s>= 0x1f)
        eax_1 = 0
    else
        eax_1 = *((arg2 << 2) + &data_6b2b98)
    
    if (eax_1 != 1)
        arg1[1] = 0
        return eax_1 - 1
    
    int32_t result = *__errno()
    arg1[1] = result
    return result
}
