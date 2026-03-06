// 函数名称: sub_66eb30
// 虚拟地址: 0x66eb30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_66eb30(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: if (*(arg1 + 9) != 0x10)
    if (*(arg1 + 9) != 0x10)
        return 
    
    int32_t i_2 = zx.d(*(arg1 + 0xa)) * *arg1
    char* eax = arg2
    
    if (i_2 == 0)
        return 
    
    int32_t i_1 = i_2
    int32_t i
    
    do
        char ecx_2 = *eax
        int32_t* edx
        edx.b = eax[1]
        *eax = edx.b
        eax[1] = ecx_2
        eax = &eax[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
}
