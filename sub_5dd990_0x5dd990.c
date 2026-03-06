// 函数名称: sub_5dd990
// 虚拟地址: 0x5dd990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t (**sub_5dd990(int32_t arg1, int32_t arg2))(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        void* const __saved_edi = &data_6b6fcc
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    if (arg2 == 0)
        char const* const var_10 = "size"
        sub_5cce60("Parameter '%s' is invalid")
        return 0
    
    int32_t (** result)(void* arg1) = sub_5dd820()
    
    if (result != 0)
        result[6] = arg1
        result[7] = arg1
        *result = sub_5dd700
        result[1] = sub_5dd710
        result[2] = sub_5dd770
        result[3] = sub_5dd7d0
        result[4] = sub_5dd8e0
        result[8] = arg1 + arg2
        result[5] = 4
    
    return result
}
