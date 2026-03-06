// 函数名称: sub_5b79b5
// 虚拟地址: 0x5b79b5
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5b79b5(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, char* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    int32_t arg_4
    int32_t* result
    
    if (arg_4 == 0)
        sub_5bb1ab(&arg_4, arg5, arg6)
        result = arg4
        *result = arg_4
    else
        sub_5bb103(&var_c, arg5, arg6)
        result = arg4
        *result = var_c
        result[1] = arg3
    
    return result
}
