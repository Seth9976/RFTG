// 函数名称: sub_500c00
// 虚拟地址: 0x500c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_500c00(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: char* const ecx = *(arg3 + 4)
    char* const ecx = *(arg3 + 4)
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    int32_t var_4 = arg1 + 0x14
    int32_t var_8 = arg1 + 0x10
    int32_t var_c = arg1 + 0xc
    int32_t var_10 = arg1 + 8
    int32_t var_14 = arg1 + 4
    int32_t var_18 = arg1
    int32_t result
    result.b = sub_5a957c(ecx, "%f %f %f %f %f %f") == 6
    return result
}
