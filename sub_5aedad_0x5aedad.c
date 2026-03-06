// 函数名称: sub_5aedad
// 虚拟地址: 0x5aedad
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

CRITICAL_SECTION*sub_5aedad()
{
    // 第一条实际指令: void* i = &data_8b8ca8
    void* i = &data_8b8ca8
    int32_t edi
    int32_t var_c = edi
    
    do
        CRITICAL_SECTION* lpCriticalSection_1 = *i
        
        if (lpCriticalSection_1 != 0 && *(i + 4) != 1)
            DeleteCriticalSection(lpCriticalSection_1)
            __free_base(lpCriticalSection_1)
            *i = 0
        
        i += 8
    while (i s< &data_8b8dc8)
    
    CRITICAL_SECTION* lpCriticalSection
    
    for (void* i_1 = &data_8b8ca8; i_1 s< &data_8b8dc8; i_1 += 8)
        lpCriticalSection = *i_1
        
        if (lpCriticalSection != 0 && *(i_1 + 4) == 1)
            lpCriticalSection = DeleteCriticalSection(lpCriticalSection)
    
    return lpCriticalSection
}
