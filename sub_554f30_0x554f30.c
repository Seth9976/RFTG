// 函数名称: sub_554f30
// 虚拟地址: 0x554f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_554f30(void* arg1 @ esi)
{
    // 第一条实际指令: char* result = *(arg1 + 8)
    char* result = *(arg1 + 8)
    
    if (*result == 0x26)
        *(arg1 + 8) = &result[1]
        
        if (result[1] == 0xa)
            *(arg1 + 0x118) += 1
        
        *(arg1 + 8) = &result[2]
        
        if (sub_5a9f0b("amp;", &result[2], 4) == 0)
            result.b = 1
            return result
        
        if (sub_5a9f0b("lt;", *(arg1 + 8), 3) == 0)
            result.b = 1
            return result
        
        if (sub_5a9f0b("gt;", *(arg1 + 8), 3) == 0)
            result.b = 1
            return result
        
        if (sub_5a9f0b("quot;", *(arg1 + 8), 5) == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
