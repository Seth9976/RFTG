// 函数名称: sub_4c42b0
// 虚拟地址: 0x4c42b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c42b0(char** arg1 @ esi, char* arg2 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_4 = ecx
    
    if (*arg2 == 0)
        *arg1 = &data_83f3d3
        return 
    
    char* eax = arg2
    void* edx = &eax[1]
    
    do
        ecx.b = *eax
        eax = &eax[1]
    while (ecx.b != 0)
    
    char** var_8 = arg1
    sub_4c40c0(eax - edx, edx)
    char* edx_1 = *arg1
    char* ecx_2 = arg2
    char i
    
    do
        i = *ecx_2
        *edx_1 = i
        ecx_2 = &ecx_2[1]
        edx_1 = &edx_1[1]
    while (i != 0)
}
