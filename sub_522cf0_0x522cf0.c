// 函数名称: sub_522cf0
// 虚拟地址: 0x522cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_522cf0(int32_t* arg1, int32_t* arg2 @ edi, void* arg3)
{
    // 第一条实际指令: char* const eax = *arg1
    char* const eax = *arg1
    int32_t var_8 = 0
    
    if (eax == 0)
        eax = &data_83f3d3
    
    char* const var_14 = eax
    int32_t eax_1
    int32_t ecx
    eax_1, ecx = sub_5a710b()
    void* eax_2 = sub_5218c0(ecx, arg3)
    *eax_2 = 1
    *(eax_2 + 4) = eax_1
    sub_5225d0(arg2, arg3, eax_2)
    return arg2
}
