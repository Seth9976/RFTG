// 函数名称: __strupr
// 虚拟地址: 0x68627e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*__strupr(char* arg1)
{
    // 第一条实际指令: if (data_bec5e8 != 0)
    if (data_bec5e8 != 0)
        sub_686249(arg1, 0xffffffff, nullptr)
        return arg1
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0
    
    char* edx_1 = arg1
    
    if (*arg1 == 0)
        return arg1
    
    do
        char ecx = *edx_1
        
        if (ecx s>= 0x61 && ecx s<= 0x7a)
            *edx_1 = ecx - 0x20
        
        edx_1 = &edx_1[1]
    while (*edx_1 != 0)
    
    return arg1
}
