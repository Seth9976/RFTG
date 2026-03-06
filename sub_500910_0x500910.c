// 函数名称: sub_500910
// 虚拟地址: 0x500910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_500910(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax = *(arg1 + 4)
    char* eax = *(arg1 + 4)
    int32_t eax_1
    
    if (eax == 0 || *eax == 0)
        eax_1 = 0
    else
        eax_1 = *(sub_4c4060(arg1 + 4) + 8)
    
    char* result = sub_4cce80(eax_1 + 1)
    *arg2 = result
    char* esi_1 = *(arg1 + 4)
    char* const ecx_1 = &data_83f3d3
    
    if (esi_1 != 0)
        ecx_1 = esi_1
    
    char* result_1 = result
    
    do
        result.b = *ecx_1
        *result_1 = result.b
        ecx_1 = &ecx_1[1]
        result_1 = &result_1[1]
    while (result.b != 0)
    
    result.b = 1
    return result
}
