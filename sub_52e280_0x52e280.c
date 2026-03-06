// 函数名称: sub_52e280
// 虚拟地址: 0x52e280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52e280(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void* result
    
    if (data_30da51c s> 0)
        do
            int32_t ecx
            result = sub_530500(ecx, arg1)
            ecx = (&data_30d951c)[i]
            
            if (ecx == *(result + 4))
                result.b = 1
                return result
            
            i += 1
        while (i s< data_30da51c)
    
    result.b = 0
    return result
}
