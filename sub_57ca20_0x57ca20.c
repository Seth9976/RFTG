// 函数名称: sub_57ca20
// 虚拟地址: 0x57ca20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_57ca20(char* arg1)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    
    if (edi == 0 || *edi == 0)
        edi = &data_83f3d3
    
    char* eax = edi
    void* edx = &eax[1]
    int32_t ecx
    
    do
        ecx.b = *eax
        eax = &eax[1]
    while (ecx.b != 0)
    
    int128_t* result
    int32_t ecx_1
    int32_t edx_1
    result, ecx_1, edx_1 = _calloc(eax - edx + 1, edx, ecx, eax - edx + 1, 1)
    
    if (result == 0)
        return _calloc(result, edx_1, ecx_1, 1, 1)
    
    char* eax_4 = edi
    
    do
        ecx_1.b = *eax_4
        eax_4 = &eax_4[1]
    while (ecx_1.b != 0)
    
    sub_5a6c10(result, edi, eax_4 - &eax_4[1])
    return result
}
