// 函数名称: sub_543e80
// 虚拟地址: 0x543e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_543e80(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx = data_307882c
    int32_t ecx = data_307882c
    int32_t result
    int32_t entry_ebx
    
    if (*(ecx + (arg5 << 2) + 0x4028) == arg2 && *(ecx + (arg5 << 2) + 0x402c) == entry_ebx
            && *(ecx + (arg5 << 2) + 0x4030) == arg4 && *(ecx + (arg5 << 2) + 0x4034) == arg3)
        result.b = 0
        return result
    
    *(ecx + (arg5 << 2) + 0x4028) = arg2
    *(ecx + (arg5 << 2) + 0x402c) = entry_ebx
    *(ecx + (arg5 << 2) + 0x4030) = arg4
    *(ecx + (arg5 << 2) + 0x4034) = arg3
    result.b = 1
    return result
}
