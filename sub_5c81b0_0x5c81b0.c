// 函数名称: sub_5c81b0
// 虚拟地址: 0x5c81b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c81b0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* result = sub_5cec90("SDL_GAMECONTROLLERCONFIG")
    
    if (result == 0 || *result == 0)
        return result
    
    void* eax = sub_5cd1b0(result)
    void* var_1c_1 = eax + 1
    void* var_20_1 = eax
    void* i = sub_5d0ac0()
    char* result_1 = result
    void* i_1 = i
    void* i_3 = i
    sub_5cd110()
    char* eax_3
    
    for (; i != 0; i = &eax_3[1])
        int32_t var_18_2 = 0xa
        void* i_2 = i
        eax_3 = sub_5cd400()
        
        if (eax_3 != 0)
            *eax_3 = 0
        
        sub_5c8060(i)
        
        if (eax_3 == 0)
            break
    
    void* i_4 = i_3
    return sub_5d0af0()
}
