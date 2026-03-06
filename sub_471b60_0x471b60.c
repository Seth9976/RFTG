// 函数名称: sub_471b60
// 虚拟地址: 0x471b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_471b60(void* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t entry_ebx
    int32_t entry_ebx
    int32_t var_18 = entry_ebx
    int32_t ebx
    
    if (arg3 != 0xffffffff)
        ebx = *sub_46b2b0(arg3)
    else
        ebx = entry_ebx | arg3
    
    int32_t ecx = data_315fba4
    int32_t var_c = 0x10
    int32_t var_8 = ecx
    data_315fba4 = ecx + 1
    int32_t var_10 = ebx
    sub_46b1d0(arg1, &var_10)
    int32_t var_24 = 1
    *(arg1 + 0x74) = 3
    sub_469e10(arg4, arg3, 3, 0, arg1 + 0x7c, 1, 0, 0)
    sub_469ff0(arg3)
    return 0
}
