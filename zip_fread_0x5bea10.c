// 函数名称: zip_fread
// 虚拟地址: 0x5bea10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_fread(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0xffffffff
    
    if (*(arg1 + 4) == 0)
        if (arg4 u>= 0x7fffffff && (arg4 u> 0x7fffffff || arg3 u> 0xffffffff))
            zip_error_set(arg1 + 4, 0x12, 0)
            return 0xffffffff
        
        if (*(arg1 + 0x10) != 0 || (arg3 | arg4) == 0)
            return 0
        
        int32_t result
        int32_t edx_5
        result, edx_5 = zip_source_read(*(arg1 + 0x14), arg2, arg3, arg4)
        
        if (edx_5 s> 0)
            return result
        
        if (edx_5 s>= 0 && result u>= 0)
            return result
        
        sub_5bf050(arg1 + 4, *(arg1 + 0x14))
    
    return 0xffffffff
}
