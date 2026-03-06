// 函数名称: sub_424be0
// 虚拟地址: 0x424be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424be0(void* arg1)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 4)
    int32_t edi = *(arg1 + 4)
    int32_t result
    
    if (edi != 0xffffffff)
        result = sub_46b360(edi)
    else
        result = arg1 | edi
    
    data_c020d0 -= 1
    
    if (*(arg1 + 0x38) != 0)
        if (result == 0xffffffff)
            *((result << 2) + &data_c020d8) += 1
            return result
        
        result = *sub_46b2b0(result)
        *((result << 2) + &data_c020d8) += 1
    
    return result
}
