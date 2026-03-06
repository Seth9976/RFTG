// 函数名称: sub_543e10
// 虚拟地址: 0x543e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_543e10(int32_t arg1, int32_t arg2, int32_t arg3 @ esi)
{
    // 第一条实际指令: int32_t ecx = data_307882c
    int32_t ecx = data_307882c
    
    if (*(ecx + (arg1 << 2) + 0x4028) == arg3 && *(ecx + (arg1 << 2) + 0x402c) == arg2)
        arg1.b = 0
        return arg1
    
    *(ecx + (arg1 << 2) + 0x4028) = arg3
    *(ecx + (arg1 << 2) + 0x402c) = arg2
    arg1.b = 1
    return arg1
}
