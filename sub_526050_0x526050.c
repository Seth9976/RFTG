// 函数名称: sub_526050
// 虚拟地址: 0x526050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*** __convention("regparm")sub_526050(int32_t arg1, int32_t arg2, void*** arg3 @ esi, float* arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    if (arg2 != 0)
        sub_525df0(arg3, sub_530500(ecx, arg2), 0xff, arg4)
        return arg3
    
    *arg3 = &data_88d38c
    arg3[1] = data_be1f00
    arg3[2] = data_be1f04
    arg3[3] = data_be1f08
    return arg3
}
