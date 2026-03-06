// 函数名称: sub_40cae0
// 虚拟地址: 0x40cae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_40cae0(char* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: void* result = sub_40c7a0(arg1)
    void* result = sub_40c7a0(arg1)
    
    if (arg2 != 0)
        int32_t edx_1 = *(arg1 + 0x374)
        
        if (edx_1 != 2)
            if (edx_1 == 0)
                int32_t edx_4 = *(result + arg2 * 0xc + 0x50) - 2
                int32_t edx_5 = neg.d(edx_4)
                *(result + arg2 * 0xc + 0x50) = sbb.d(edx_5, edx_5, edx_4 != 0) & 2
            else if (edx_1 == 1)
                int32_t edx_7
                edx_7.b = *(result + arg2 * 0xc + 0x50) != 1
                *(result + arg2 * 0xc + 0x50) = edx_7
        else if (*(result + arg2 * 0xc + 0x50) != 0)
            *(result + arg2 * 0xc + 0x50) = 0
        else
            void* edx_2 = data_27e7fd0
            *(arg1 + 0x3c) = arg2
            *(arg1 + 0x30) = 0
            *(arg1 + 0x40) = 0
            
            if (*(edx_2 + 0x27) == 0)
                arg1[0x2c] = 1
                *arg1 = 0
            else
                data_30d6f38 = data_307c1c0
        
        if (arg2 s>= 2)
            *(result + 0x44) = 0
    
    return result
}
