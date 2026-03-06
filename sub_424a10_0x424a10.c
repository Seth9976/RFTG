// 函数名称: sub_424a10
// 虚拟地址: 0x424a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424a10(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int32_t edi = *(entry_ebx + 4)
    int32_t result
    
    if (edi != 0xffffffff)
        result = sub_46b360(edi)
    else
        result = arg1 | edi
    
    int32_t ecx_1 = *(arg2 + 0x74)
    
    if (ecx_1 == 0 || ecx_1 == 7)
        if (result != 0xffffffff)
            result = *sub_46b2b0(result)
        
        *((result << 2) + &data_c020d8) -= 1
    
    if (*(entry_ebx + 0x38) != 0)
        data_c020d4 += 1
    
    return result
}
