// 函数名称: sub_51a670
// 虚拟地址: 0x51a670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_51a670(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx_4 = data_30785e8
    int32_t ecx_4 = data_30785e8
    void* result = nullptr
    
    if (ecx_4 s> 0)
        void* edx_1 = &data_26a6218
        
        while (*edx_1 != arg1)
            result += 1
            edx_1 += 0xc
            
            if (result s>= ecx_4)
                return result
        
        data_30785e8 = ecx_4 - 1
        int32_t ecx_1 = (ecx_4 - 1) * 3
        result = result * 0xc + &data_26a6218
        *result = *((ecx_1 << 2) + &data_26a6218)
        *(result + 4) = (&data_26a621c)[ecx_1]
        *(result + 8) = (&data_26a6220)[ecx_1]
    
    return result
}
