// 函数名称: sub_424960
// 虚拟地址: 0x424960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_424960(int32_t arg1, int32_t arg2 @ esi, char arg3)
{
    // 第一条实际指令: int32_t var_c = arg2
    int32_t var_c = arg2
    void* entry_ebx
    int32_t edi = *(entry_ebx + 4)
    int32_t esi
    
    if (edi != 0xffffffff)
        arg1 = sub_46b360(edi)
        esi = arg1
    else
        esi = arg2 | edi
    
    if (*(entry_ebx + 0x38) == 0 && *(entry_ebx + 4) == 0)
        return 
    
    if (arg3 == 0)
        if (esi != 0xffffffff)
            arg1 = *sub_46b2b0(esi)
        else
            arg1 |= esi
        
        *((arg1 << 2) + &data_c020d8) -= 1
    
    if (esi == 0xffffffff)
        int32_t eax_1 = arg1 | esi
        *((eax_1 << 2) + &data_c02108) += 1
        return 
    
    arg1 = *sub_46b2b0(esi)
    *((arg1 << 2) + &data_c02108) += 1
}
