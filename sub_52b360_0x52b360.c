// 函数名称: sub_52b360
// 虚拟地址: 0x52b360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52b360(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    void* result
    int32_t ecx
    
    if (data_30da51c s> 0)
        do
            result = sub_530500(ecx, arg1)
            ecx = (&data_30d951c)[i]
            
            if (ecx == *(result + 4))
                return result
            
            i += 1
        while (i s< data_30da51c)
    
    int32_t edx_3 = *(sub_530500(ecx, arg1) + 4)
    result = data_30da51c
    (&data_30d951c)[result] = edx_3
    data_30da51c += 1
    return result
}
