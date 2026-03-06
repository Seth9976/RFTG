// 函数名称: sub_4bdc70
// 虚拟地址: 0x4bdc70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_4bdc70(char** arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t var_8_1 = 0
    
    if (arg3 == 0xffffffff)
        sub_4c42b0(arg1, &data_83f3d3)
        return arg1
    
    if (arg3 == 0xfffffc18)
        sub_4c42b0(arg1, U"-")
        return arg1
    
    if (arg4 == 0)
        sub_4c4ab0(arg1)
        return arg1
    
    int32_t var_14 = arg3 s% 0xa
    int32_t var_18 = arg3 s/ 0xa
    sub_4c4a50(arg1, "%d.%d")
    return arg1
}
