// 函数名称: sub_508f80
// 虚拟地址: 0x508f80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_508f80()
{
    // 第一条实际指令: int32_t* result = data_30785d8
    int32_t* result = data_30785d8
    
    if (*result != 0)
        sub_50a9e0(result)
        void* esi_2 = (result[1] << 2) + 4
        sub_4f4430(*result, sub_4f4380(esi_2), esi_2)
        *result = 0
    
    return result
}
