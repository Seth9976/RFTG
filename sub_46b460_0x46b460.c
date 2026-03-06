// 函数名称: sub_46b460
// 虚拟地址: 0x46b460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46b460(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    
    if (arg1 != 0xffffffff)
        edx = *sub_46b2b0(arg1)
    else
        edx = arg2 | arg1
    
    int32_t eax_1 = data_315fba4
    data_315fba4 = eax_1 + 1
    int32_t var_10 = edx
    int32_t var_c = arg4
    int32_t var_8 = eax_1
    sub_46b1d0(arg3, &var_10)
    return arg3
}
