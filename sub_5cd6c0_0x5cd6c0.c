// 函数名称: sub_5cd6c0
// 虚拟地址: 0x5cd6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cd6c0(void* arg1 @ esi, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (arg1 == 0)
        eax = 0xa
    else
        eax = *(arg1 + 0x18)
    
    int32_t var_8c = eax
    void var_88
    void* var_90 = &var_88
    int32_t ecx
    int32_t var_94 = ecx
    sub_5cd420()
    return sub_5cd600(arg3, &var_88, arg2, arg1, &var_88)
}
