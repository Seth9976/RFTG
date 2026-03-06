// 函数名称: sub_5c3500
// 虚拟地址: 0x5c3500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c3500(void* arg1, void* arg2)
{
    // 第一条实际指令: *(arg1 + 0x2c) = arg2
    *(arg1 + 0x2c) = arg2
    int32_t eax = *(arg2 + 0x48)
    
    if (*(arg2 + 0x44) + 1 u>= eax)
        int32_t eax_2 = _realloc(*(arg2 + 0x4c), (eax + 0xa) << 2)
        
        if (eax_2 == 0)
            zip_error_set(arg2 + 8, 0xe, eax_2)
            return 0xffffffff
        
        *(arg2 + 0x48) = eax + 0xa
        *(arg2 + 0x4c) = eax_2
    
    *(*(arg2 + 0x4c) + (*(arg2 + 0x44) << 2)) = arg1
    *(arg2 + 0x44) += 1
    return 0
}
