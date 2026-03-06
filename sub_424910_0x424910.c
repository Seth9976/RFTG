// 函数名称: sub_424910
// 虚拟地址: 0x424910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424910(void* arg1)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 4)
    int32_t edi = *(arg1 + 4)
    int32_t eax
    
    if (edi != 0xffffffff)
        eax = sub_46b360(edi)
    else
        eax = arg1 | edi
    
    data_c020d0 -= 1
    
    if (eax == 0xffffffff)
        *((eax << 2) + &data_c02108) += 1
        return eax
    
    int32_t eax_3 = *sub_46b2b0(eax)
    *((eax_3 << 2) + &data_c02108) += 1
    return eax_3
}
