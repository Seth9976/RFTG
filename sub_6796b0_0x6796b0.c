// 函数名称: sub_6796b0
// 虚拟地址: 0x6796b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_6796b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x18) == 0)
    if (*(arg1 + 0x18) == 0)
        void* eax_2 = (**(arg1 + 4))(arg1, 0, 0x28)
        int32_t* edx_1 = *(arg1 + 4)
        *(arg1 + 0x18) = eax_2
        *(eax_2 + 0x20) = (*edx_1)(arg1, 0, 0x1000)
    
    int32_t* result = *(arg1 + 0x18)
    result[2] = sub_679560
    result[3] = sub_679580
    result[4] = sub_679600
    result[5] = sub_67b2d0
    result[6] = sub_4d35a0
    result[7] = arg2
    result[1] = 0
    *result = 0
    return result
}
