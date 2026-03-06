// 函数名称: sub_543d10
// 虚拟地址: 0x543d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_543d10(uint32_t arg1, int32_t arg2 @ esi, int32_t arg3 @ edi)
{
    // 第一条实际指令: if (*(data_307882c + (arg3 << 2) + 0x4028) == arg2)
    if (*(data_307882c + (arg3 << 2) + 0x4028) == arg2)
        return 
    
    if (arg2 != 0)
        glEnable(arg1)
        *(data_307882c + (arg3 << 2) + 0x4028) = arg2
        return 
    
    glDisable(arg1)
    *(data_307882c + (arg3 << 2) + 0x4028) = arg2
}
