// 函数名称: sub_5d5880
// 虚拟地址: 0x5d5880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d5880(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t arg_4
    int32_t ebx = arg_4
    sub_5c9bb0(arg4, &arg_4, &var_8)
    
    if (ebx s>= 0 && arg5 s>= 0 && ebx s< arg_4 && arg5 s< var_8)
        if (arg4 != data_bf7f78)
            sub_5d5830(arg4)
            sub_5d5530(data_bf7f74, 0, ebx, arg5)
        
        return 1
    
    if (arg4 == data_bf7f78)
        sub_5d5530(data_bf7f74, 0, ebx, arg5)
        sub_5d5830(nullptr)
    
    return 0
}
