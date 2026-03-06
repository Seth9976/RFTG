// 函数名称: sub_5368c0
// 虚拟地址: 0x5368c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_5368c0(void* arg1, int32_t arg2, char** arg3)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    
    if (arg1 == 0)
        sub_4c42b0(arg3, &data_83f3d3)
        return arg3
    
    char* const eax_1 = *(arg1 + 0x20)
    
    if (eax_1 == 0)
        eax_1 = &data_83f3d3
    
    sub_51ece0(eax_1, arg2, eax_1, arg3)
    return arg3
}
