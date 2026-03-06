// 函数名称: sub_4d2c70
// 虚拟地址: 0x4d2c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d2c70(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi_1 = *(sub_4c92a0(*arg1) + 0x14)
    void* result_1 = nullptr
    int32_t edx_1 = data_be1a60 + data_be1a64 * 0x24
    void* result
    
    while (true)
        result = data_be1a60
        
        if (result_1 != 0)
            result = result_1 + 0x24
        
        if (result u>= edx_1)
            return 0
        
        while ((*(result + 0x20) & 0xffff0000) == 0)
            result += 0x24
            
            if (result u>= edx_1)
                return 0
        
        result_1 = result
        
        if (esi_1 != 0)
            if (*(result + 4) == *arg1)
                return result
        else
            ebx.w = *(arg1 + 0xfe6)
            
            if (ebx.w == *(result + 0xe))
                if (arg1[0x3fa] == *(result + 0x10))
                    break
    
    return result
}
