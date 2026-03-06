// 函数名称: sub_5c3060
// 虚拟地址: 0x5c3060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c3060(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x28) = 1
    *(arg1 + 0x28) = 1
    int32_t* result = zip_error_code_zip(arg1 + 0xc)
    
    if (result != 0)
        return result
    
    return zip_error_set(arg1 + 0xc, 8, result)
}
