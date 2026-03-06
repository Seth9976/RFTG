// 函数名称: sub_5598e0
// 虚拟地址: 0x5598e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5598e0(int128_t* arg1 @ esi)
{
    // 第一条实际指令: sub_5abfc0(arg1, 0, 0x38)
    sub_5abfc0(arg1, 0, 0x38)
    void* result = data_27e7fd0
    arg1[3].d = 0
    
    if (*(result + 0x22) == 0)
        arg1[2].d = 1
        *(arg1 + 8) = 0
    else
        arg1[2].d = 0
        *(arg1 + 8) = 0x16
    
    *(arg1 + 0x18) = 1
    *arg1 = *(result + 0x14)
    *(arg1 + 4) = *(result + 0x18)
    int32_t ecx_1 = *(result + 0x1c)
    void* edx_1 = data_3079200
    *(arg1 + 0x14) = 0
    arg1[1].d = ecx_1
    *(arg1 + 0x1c) = *(edx_1 + 0x70)
    bool cond:1 = *(result + 0x20) != 0
    *(arg1 + 0x28) = 0x50
    int32_t edx_2
    edx_2.b = cond:1
    *(arg1 + 0x24) = edx_2
    
    if (*(result + 0x26) == 0)
        *(arg1 + 0x34) = 0x80000000
        return 0x80000000
    
    *(arg1 + 0x34) = 1
    *(arg1 + 0x34) = 0x80000000
    return result
}
