// 函数名称: sub_673250
// 虚拟地址: 0x673250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_673250(void* arg1 @ edi)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1c)
    void* ebx = *(arg1 + 0x1c)
    sub_6780d0(ebx)
    int128_t* result_1 = *(ebx + 0x14)
    int128_t* result = *(arg1 + 0x10)
    
    if (result_1 u> result)
        result_1 = result
    
    if (result_1 != 0)
        result = sub_5ab990(*(arg1 + 0xc), *(ebx + 0x10), result_1)
        *(arg1 + 0xc) += result_1
        *(ebx + 0x10) += result_1
        *(arg1 + 0x14) += result_1
        *(arg1 + 0x10) -= result_1
        int32_t temp0_1 = *(ebx + 0x14)
        *(ebx + 0x14) -= result_1
        
        if (temp0_1 == result_1)
            *(ebx + 0x10) = *(ebx + 8)
    
    return result
}
