// 函数名称: sub_4fe300
// 虚拟地址: 0x4fe300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4fe300(char* arg1, int32_t arg2, char* arg3)
{
    // 第一条实际指令: char* const esi = arg3
    char* const esi = arg3
    
    if (esi == 0)
        esi = &data_83f3d3
    
    if (arg1 == 0)
        if (*esi == arg1.b)
            return 
        
        if (arg1 == 0)
            arg1 = sub_508bc0(esi)
    
    return sub_509140(arg1, esi) __tailcall
}
