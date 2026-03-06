// 函数名称: sub_424520
// 虚拟地址: 0x424520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_424520(void* arg1)
{
    // 第一条实际指令: void* result = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* result = sub_46b2b0(*(data_27e7a40 + 0x74))
    void* ecx_1 = *(data_27e7a40 + 0x548)
    
    if (*(ecx_1 + 0x2c0b8) == 0 && *(ecx_1 + 0x2c098) == 0)
        int32_t ecx_2 = *(result + 0x1c)
        
        if (ecx_2 == 8 || ecx_2 == 0x17 || ecx_2 == 2 || ecx_2 == 3 || ecx_2 == 5 || ecx_2 == 7
                || ecx_2 == 0x1c || ecx_2 == 0xb || ecx_2 == 0x13 || ecx_2 == 0x14)
            int32_t edx_2 = *(result + 0x1a08)
            int32_t ecx_3 = 0
            
            if (edx_2 s> 0)
                result += 0xaa4
                
                do
                    if (*(arg1 + 0xac) == *result)
                        result.b = 1
                        return result
                    
                    ecx_3 += 1
                    result += 4
                while (ecx_3 s< edx_2)
    
    result.b = 0
    return result
}
