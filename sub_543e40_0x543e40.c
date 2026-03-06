// 函数名称: sub_543e40
// 虚拟地址: 0x543e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_543e40(int32_t arg1, int32_t arg2, int32_t arg3 @ esi, int32_t arg4 @ edi)
{
    // 第一条实际指令: int32_t ecx = data_307882c
    int32_t ecx = data_307882c
    
    if (*(ecx + (arg1 << 2) + 0x4028) == arg2 && *(ecx + (arg1 << 2) + 0x402c) == arg4
            && *(ecx + (arg1 << 2) + 0x4030) == arg3)
        arg1.b = 0
        return arg1
    
    *(ecx + (arg1 << 2) + 0x4028) = arg2
    *(ecx + (arg1 << 2) + 0x402c) = arg4
    *(ecx + (arg1 << 2) + 0x4030) = arg3
    arg1.b = 1
    return arg1
}
