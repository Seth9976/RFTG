// 函数名称: sub_505760
// 虚拟地址: 0x505760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_505760(void* arg1)
{
    // 第一条实际指令: char ecx = *(arg1 + 1)
    char ecx = *(arg1 + 1)
    
    if (ecx != 0)
        if (*(arg1 + 3) != 0 && *(arg1 + 4) != 0)
            return 2
        
        if (ecx != 0 && *(arg1 + 3) == 0)
            return 2
    
    return 0
}
