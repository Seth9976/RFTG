// 函数名称: sub_649530
// 虚拟地址: 0x649530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649530(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t result = sub_6493f0(arg1, arg2, arg3, arg4, arg5, arg6)
    int32_t result = sub_6493f0(arg1, arg2, arg3, arg4, arg5, arg6)
    
    if (result != 0)
        sub_646a00(arg1)
    else
        result = sub_648b60(arg1)
        
        if (result != 0)
            sub_646a00(arg1)
    
    return result
}
