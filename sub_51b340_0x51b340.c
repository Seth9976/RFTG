// 函数名称: sub_51b340
// 虚拟地址: 0x51b340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_51b340()
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 4)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* result = *esi_2
    *esi_2 = *result
    *result = 0
    
    if (result == 0)
        result = nullptr
    else
        *result = &data_83f3d3
    
    bool cond:0 = data_8bc5ff != 0
    data_30785f4 = result
    
    if (cond:0 || data_30785f0 != 0)
        return result
    
    if (sub_4d03e0(*(data_27e7fd0 + 4)) != 0)
        int32_t var_8_3 = *(data_27e7fd0 + 4)
        return sub_4c57f0("Loaded xpack file: '%s'")
    
    int32_t var_8_2 = *(data_27e7fd0 + 4)
    return sub_4c57f0("Can't load xpack file: '%s'")
}
