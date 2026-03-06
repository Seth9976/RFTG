// 函数名称: sub_543df0
// 虚拟地址: 0x543df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_543df0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t edx = data_307882c
    int32_t edx = data_307882c
    
    if (*(edx + (arg3 << 2) + 0x4028) == arg1)
        arg1.b = 0
        return arg1
    
    *(edx + (arg3 << 2) + 0x4028) = arg1
    arg1.b = 1
    return arg1
}
