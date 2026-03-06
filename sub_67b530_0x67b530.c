// 函数名称: sub_67b530
// 虚拟地址: 0x67b530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67b530(void* arg1)
{
    // 第一条实际指令: void* (** eax_1)(void* arg1) = (**(arg1 + 4))(arg1, 0, 0xac)
    void* (** eax_1)(void* arg1) = (**(arg1 + 4))(arg1, 0, 0xac)
    *(arg1 + 0x1b8) = eax_1
    *eax_1 = sub_67b4f0
    eax_1[1] = sub_67ae60
    eax_1[2] = sub_67b230
    eax_1[7] = sub_67abd0
    eax_1[0x18] = 0
    void* ecx_1 = &eax_1[0x19]
    int32_t i_1 = 0x10
    int32_t i
    
    do
        *(ecx_1 - 0x44) = sub_67abd0
        *ecx_1 = 0
        ecx_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    eax_1[8] = sub_67aa50
    eax_1[0x16] = sub_67aa50
    void* result = *(arg1 + 0x1b8)
    *(arg1 + 0xd8) = 0
    *(arg1 + 0x90) = 0
    *(arg1 + 0x1a0) = 0
    *(result + 0xc) = 0
    *(result + 0x10) = 0
    *(result + 0x18) = 0
    *(result + 0xa4) = 0
    return result
}
