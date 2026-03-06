// 函数名称: sub_4e88a0
// 虚拟地址: 0x4e88a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e88a0(int32_t* arg1)
{
    // 第一条实际指令: void* eax = sub_4e7210(arg1)
    void* eax = sub_4e7210(arg1)
    int32_t i = 0
    
    if (*(eax + 0x14) s> 0)
        int32_t edi_1 = 0
        
        do
            if (sub_5a7934(*(*(eax + 0x10) + edi_1), "world locator", 0xd) == 0)
                return i
            
            i += 1
            edi_1 += 0x14
        while (i s< *(eax + 0x14))
    
    return 0xffffffff
}
