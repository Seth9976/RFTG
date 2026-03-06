// 函数名称: sub_508bc0
// 虚拟地址: 0x508bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_508bc0(int32_t arg1)
{
    // 第一条实际指令: char* result = sub_5a8f10(arg1, 0x2e)
    char* result = sub_5a8f10(arg1, 0x2e)
    
    if (result == 0)
        return result
    
    void* const esi = &data_840680
    
    while (sub_5a9697(*(esi + 4), &result[1]) != 0)
        esi += 8
        
        if (*(esi + 4) == 0)
            return 0
    
    return *esi
}
