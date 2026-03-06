// 函数名称: sub_5b78a3
// 虚拟地址: 0x5b78a3
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b78a3(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, arg2)
    char* esi = arg1
    
    for (bool cond:0 = sub_5aa073(sx.d(*esi)) != 0x65; cond:0; cond:0 = sub_5a8426(zx.d(*esi)) != 0)
        esi = &esi[1]
    
    if (sub_5aa073(sx.d(*esi)) == 0x78)
        esi = &esi[2]
    
    uint32_t result
    result.b = *esi
    char* ecx_5
    ecx_5.b = ***(var_14 + 0xbc)
    *esi = ecx_5.b
    void* esi_1 = &esi[1]
    
    do
        ecx_5.b = *esi_1
        *esi_1 = result.b
        result.b = ecx_5.b
        ecx_5.b = *esi_1
        esi_1 += 1
    while (ecx_5.b != 0)
    
    char var_8
    
    if (var_8 != ecx_5.b)
        uint32_t result_1
        result = result_1
        *(result + 0x70) &= 0xfffffffd
    
    return result
}
