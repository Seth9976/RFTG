// 函数名称: sub_42f650
// 虚拟地址: 0x42f650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_42f650(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* result = *(data_27e7a40 + 0x548)
    int32_t* result = *(data_27e7a40 + 0x548)
    int32_t esi = result[0x2feb]
    
    if (esi != 0)
        if (arg1[0x2b] == esi)
            result.b = 1
            return result
        
        if (*arg1 == 0)
            result = sub_463f60(&result[0x10e58], esi)
            
            if (*result == 6)
                int32_t ecx_2 = arg1[0x1f]
                
                if (ecx_2 == result[0x23] || ecx_2 == result[0x24])
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
