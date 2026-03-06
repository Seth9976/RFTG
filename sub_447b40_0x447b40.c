// 函数名称: sub_447b40
// 虚拟地址: 0x447b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_447b40()
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    void* eax_2 = data_27e7a40
    void* edi = *(eax_2 + 0x548)
    int32_t esi = *(edi + 0xbfac)
    *(edi + 0x2c0ac) = 0xffffffff
    void* eax_3
    
    if (esi != 0)
        if (*sub_463f60(*(eax_2 + 0x548) + 0x43960, esi) == 6)
            *(edi + 0x60) = 0
        
        sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(edi + 0xbfac))
        eax_3 = sub_4476f0()
    else
        if (*(edi + 0xbfb0) != 0xffffffff)
            *(edi + 0xbfb0) = 0xffffffff
            sub_4d6480(data_307bf80)
            void var_3c
            sub_4d66f0(&var_3c)
        
        int32_t* var_40
        eax_3 = sub_419400(&var_40)
        
        if (eax_3.b != 0)
            eax_3 = *var_40
            
            if (eax_3 == 0x4a || eax_3 == 0x2e)
                void* eax_4 = sub_419340()
                sub_5a6aba(eax_1 ^ &var_44)
                return eax_4
    
    sub_5a6aba(eax_1 ^ &var_44)
    return eax_3
}
