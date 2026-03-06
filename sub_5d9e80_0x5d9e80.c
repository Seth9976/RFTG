// 函数名称: sub_5d9e80
// 虚拟地址: 0x5d9e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d9e80(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc5)
    if (arg1 == 0 || *arg1 != 0xbf7fc5)
        sub_5cce60("Invalid texture")
        return 0xffffffff
    
    if (arg3 == 0)
        char const* const var_20 = "pixels"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    if (arg4 == 0)
        char const* const var_20_1 = "pitch"
        sub_5cce60("Parameter '%s' is invalid")
        return 0xffffffff
    
    int32_t* edx = arg2
    
    if (edx == 0)
        int32_t var_c_1 = arg1[3]
        int32_t var_8_1 = arg1[4]
        int32_t var_14 = 0
        int32_t var_10_1 = 0
        edx = &var_14
    
    if (arg1[0xa] != 0)
        return sub_5d9c20(arg4, edx, arg3, arg1)
    
    if (arg1[9] != 0)
        return sub_5d9d60(arg4, edx, arg3, edx, arg1, arg3)
    
    void* edi_2 = arg1[8]
    return (*(edi_2 + 0x1c))(edi_2, arg1, edx, arg3, arg4)
}
