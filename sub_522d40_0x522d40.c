// 函数名称: sub_522d40
// 虚拟地址: 0x522d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_522d40(int32_t* arg1, int32_t* arg2 @ esi, void* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* const eax = *arg1
    int32_t var_8_1 = 0
    
    if (eax == 0)
        eax = &data_83f3d3
    
    float var_8_2 = fconvert.s(__ismbcupper(eax))
    void* eax_1 = sub_5218c0(0, arg3)
    *(eax_1 + 4) = fconvert.s(fconvert.t(var_8_2))
    *eax_1 = 2
    sub_5225d0(arg2, arg3, eax_1)
    return arg2
}
