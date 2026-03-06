// 函数名称: sub_5c9e50
// 虚拟地址: 0x5c9e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c9e50(void* arg1 @ esi)
{
    // 第一条实际指令: void* ecx = data_bed820
    void* ecx = data_bed820
    int32_t eax = *(ecx + 0x68)
    int32_t var_24
    uint32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (eax != 0 && *(ecx + 0x6c) != 0 && eax(ecx, arg1, &var_8, &var_24, &var_1c) s>= 0
            && sub_5d7350(var_8, &var_20, &var_18, &var_14, &var_10, &var_c) != 0)
        return sub_5d6810(var_24, *(arg1 + 0x18), *(arg1 + 0x1c), var_20, var_1c, var_18, var_14, 
            var_10, var_c)
    
    return 0
}
