// 函数名称: sub_57e800
// 虚拟地址: 0x57e800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_57e800(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = arg1
    int32_t* var_110 = edi
    sub_5abfc0(0x31602e0, 0, 0x30c)
    char var_10c = 0
    int128_t var_10b[0x10]
    sub_5abfc0(&var_10b, 0, 0x103)
    void* esi = edi[2]
    char j
    
    if (*esi != 0)
        char* i = &var_10c
        void var_9
        
        while (i u< &var_9)
            void* eax_2 = esi
            void* edx_1 = eax_2 + 1
            
            do
                j = *eax_2
                eax_2 += 1
            while (j != 0)
            
            void* eax_3 = eax_2 - edx_1
            sub_5a6c10(i, esi, eax_3)
            void* ebx_1 = i + eax_3
            *ebx_1 = 9
            esi = esi + eax_3 + 1
            edi = var_110
            i = ebx_1 + 1
            
            if (*esi == 0)
                break
    
    void* edx_2 = edi[3]
    char* eax_4 = edx_2
    
    do
        j = *eax_4
        eax_4 = &eax_4[1]
    while (j != 0)
    
    void* const var_110_1 = edx_2
    
    if (eax_4 == &eax_4[1])
        var_110_1 = &data_85ce4c
    
    char* eax_6 = &var_10c
    
    do
        j = *eax_6
        eax_6 = &eax_6[1]
    while (j != 0)
    
    char* ebx_2 = &var_10c
    
    if (eax_6 == &var_10b)
        ebx_2 = &data_85ce4c
    
    void* const edx_3 = edi[1]
    char* eax_8 = edx_3
    
    do
        j = *eax_8
        eax_8 = &eax_8[1]
    while (j != 0)
    
    if (eax_8 == &eax_8[1])
        edx_3 = &data_85ce4c
    
    void* edi_2 = *edi
    char* eax_10 = edi_2
    
    do
        j = *eax_10
        eax_10 = &eax_10[1]
    while (j != 0)
    
    void* const eax_11 = edi_2
    
    if (eax_10 == &eax_10[1])
        eax_11 = &data_85ce4c
    
    void* const var_124_2 = var_110_1
    char* var_128_2 = ebx_2
    void* const var_12c_2 = edx_3
    void* const var_130 = eax_11
    _swprintf(0x31602e0, 0x30c, "Title: %s\r\nPath: %s\r\nFilter: %s\r\nDefault Extension: %3s")
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0x31602e0
}
