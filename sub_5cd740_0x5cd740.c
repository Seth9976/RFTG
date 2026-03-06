// 函数名称: sub_5cd740
// 虚拟地址: 0x5cd740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cd740(void* arg1 @ esi, char* arg2, void* arg3, int32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (arg1 == 0)
        eax = 0xa
    else
        eax = *(arg1 + 0x18)
    
    void var_88
    return sub_5cd600(arg3, sub_5cd440(arg4, arg5, &var_88, eax), arg2, arg1, &var_88)
}
