// 函数名称: zip_file_replace
// 虚拟地址: 0x5c5e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tzip_file_replace(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t temp0 = *(arg1 + 0x34)
    int32_t temp0 = *(arg1 + 0x34)
    
    if (arg3 u> temp0)
        zip_error_set(arg1 + 8, 0x12, 0)
    else if (arg3 u< temp0)
        if (arg4 != 0)
            goto label_5c5e8b
        
        zip_error_set(arg1 + 8, 0x12, 0)
    else if (arg2 u>= *(arg1 + 0x30) || arg4 == 0)
        zip_error_set(arg1 + 8, 0x12, 0)
    else
    label_5c5e8b:
        int32_t eax_1
        int32_t edx_2
        eax_1, edx_2 = sub_5c5cf0(arg1, arg2, arg3, nullptr, arg4, arg5)
        
        if ((eax_1 & edx_2) != 0xffffffff)
            return 0
    
    return 0xffffffff
}
