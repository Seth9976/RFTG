// 函数名称: sub_555280
// 虚拟地址: 0x555280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_555280(void* arg1 @ esi, char* arg2)
{
    // 第一条实际指令: char* result
    char* result
    
    if (*(arg1 + 4) == 3)
        result = sub_5551f0(arg1)
    
    if ((*(arg1 + 4) != 3 || result.b != 0) && *(arg1 + 4) == 1
            && sub_5a9f0b(arg2, *(arg1 + 0xc), *(arg1 + 0x10)) == 0)
        return sub_5551f0(arg1) != 0
    
    result.b = 0
    return result
}
