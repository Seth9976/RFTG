// 函数名称: sub_57ca80
// 虚拟地址: 0x57ca80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_57ca80(char* arg1)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    
    if (edi == 0 || *edi == 0)
        edi = &data_83f3d3
    
    void* esi = nullptr
    char* ecx = edi
    int32_t edx
    
    if (*edi != 0)
        do
            char* eax = ecx
            
            do
                edx.b = *eax
                eax = &eax[1]
            while (edx.b != 0)
            
            ecx = ecx + eax - &eax[1] + 1
            esi = ecx - edi
        while (*ecx != edx.b)
    
    int128_t* result
    int32_t ecx_1
    int32_t edx_1
    result, ecx_1, edx_1 = _calloc(esi + 1, edx, ecx, esi + 1, 1)
    
    if (result == 0)
        return _calloc(result, edx_1, ecx_1, 1, 1)
    
    sub_5a6c10(result, edi, esi)
    return result
}
