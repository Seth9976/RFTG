// 函数名称: sub_51a630
// 虚拟地址: 0x51a630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_51a630(int32_t* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t edx_1 = data_30785e8
    int32_t edx_1 = data_30785e8
    int32_t result = 0
    
    if (edx_1 s> 0)
        void* ecx_1 = &data_26a6218
        
        while (*ecx_1 != arg2)
            result += 1
            ecx_1 += 0xc
            
            if (result s>= edx_1)
                return result
        
        int32_t edx = arg1[1]
        result *= 3
        (&data_26a621c)[result] = *arg1
        (&data_26a6220)[result] = edx
    
    return result
}
