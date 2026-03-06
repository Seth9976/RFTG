// 函数名称: sub_500c80
// 虚拟地址: 0x500c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_500c80(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char* const eax = *(arg1 + 4)
    char* const eax = *(arg1 + 4)
    
    if (eax == 0)
        eax = &data_83f3d3
    
    int32_t var_4 = arg3 + 0xc
    int32_t var_8 = arg3 + 8
    int32_t var_c = arg3 + 4
    int32_t var_10 = arg3
    int32_t result
    result.b = sub_5a957c(eax, "%d %d %d %d") == 4
    return result
}
