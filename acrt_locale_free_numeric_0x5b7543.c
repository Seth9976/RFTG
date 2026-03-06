// 函数名称: ___acrt_locale_free_numeric
// 虚拟地址: 0x5b7543
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void___acrt_locale_free_numeric(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t eax_1 = *arg1
    
    if (eax_1 != data_8b84b8)
        __free_base(eax_1)
    
    int32_t eax_2 = arg1[1]
    
    if (eax_2 != data_8b84bc)
        __free_base(eax_2)
    
    int32_t eax_3 = arg1[2]
    
    if (eax_3 != data_8b84c0)
        __free_base(eax_3)
    
    int32_t eax = arg1[0xc]
    
    if (eax != data_8b84e8)
        __free_base(eax)
    
    int32_t esi_1 = arg1[0xd]
    
    if (esi_1 != data_8b84ec)
        __free_base(esi_1)
}
