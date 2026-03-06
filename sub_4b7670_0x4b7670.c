// 函数名称: sub_4b7670
// 虚拟地址: 0x4b7670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b7670(char* arg1 @ esi)
{
    // 第一条实际指令: char* eax = arg1
    char* eax = arg1
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    
    void* result = eax - &eax[1]
    char* edx_1 = nullptr
    
    if (result s> 0)
        do
            i = *(edx_1 + arg1)
            
            if ((i s< 0x41 || i s> 0x5a) && (i s< 0x30 || i s> 0x39))
                result.b = 0
                return result
            
            edx_1 = &edx_1[1]
        while (edx_1 s< result)
    
    result.b = 1
    return result
}
