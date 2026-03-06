// 函数名称: sub_5d3a90
// 虚拟地址: 0x5d3a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5d3a90(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0xa0)
    void* result = *(arg1 + 0xa0)
    void* ecx = *(result + 0x10)
    void* edx = *(result + 0x14)
    void* esi = *(result + 0x18)
    int32_t* ebx = *(result + 4)
    
    if (*(arg1 + 0x84) != 0)
        int32_t var_3c_1 = 0x24
        int32_t var_40_1 = 0
        void var_2c
        void* var_44_1 = &var_2c
        sub_5cd100()
        void* var_28_1 = edx
        void* var_24_1 = esi
        void* var_c_1 = arg1
        void* esi_1
        
        if (esi != ecx)
            esi_1 = ecx
        else
            esi_1 = esi + edx
        
        *(*(arg1 + 0xa0) + 0x18) = esi_1
        result = (*(*ebx + 0x54))(ebx, &var_2c, 0)
        
        if (result != 0)
            result = (*(*ebx + 0x58))(ebx)
            *(arg1 + 0x84) = 0
    
    return result
}
