// 函数名称: sub_52b3b0
// 虚拟地址: 0x52b3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_52b3b0(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t ecx
    
    if (data_30da51c s> 0)
        do
            void* eax_1 = sub_530500(ecx, arg1)
            ecx = (&data_30d951c)[i]
            
            if (ecx == *(eax_1 + 4))
                int32_t result = data_30da51c - 1
                data_30da51c = result
                (&data_30d951c)[i] = (&data_30d951c)[result]
                return result
            
            i += 1
        while (i s< data_30da51c)
    
    int32_t eax_3 = *(sub_530500(ecx, arg1) + 4)
    (&data_30d951c)[data_30da51c] = eax_3
    int32_t edx_3 = data_315b330
    data_30da51c += 1
    data_30da520 = eax_3
    return sub_5ab990(&(&data_30d9514)[edx_3 * 0x407], &data_30d9518, 0x1018)
}
