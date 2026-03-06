// 函数名称: sub_49d1b0
// 虚拟地址: 0x49d1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49d1b0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    char* entry_ebx
    int32_t eax_1 = entry_ebx * 0xb4
    *(eax_1 + arg1 + 0xa3) -= 1
    int32_t result
    int32_t edx_1
    result, edx_1 = sub_4ae7d0(ecx, entry_ebx, 0x12, arg1)
    
    if (*(arg1 + 0x18) != 0)
        return result
    
    int32_t var_10_1 = 1
    return sub_49ba20(entry_ebx, edx_1)
}
