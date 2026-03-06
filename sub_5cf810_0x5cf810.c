// 函数名称: sub_5cf810
// 虚拟地址: 0x5cf810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cf810(void* arg1 @ edi)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x28)
    void* eax = *(arg1 + 0x28)
    int32_t (* var_18)(int32_t* arg1, int32_t* arg2) = sub_5cf7f0
    int32_t var_1c = 0xc
    int32_t var_20 = *(eax + 0xc44)
    int32_t ebx = 0
    void* var_24 = eax + 0x44
    int32_t var_8 = 0
    int32_t var_c = 0
    void* result = sub_5d4d10()
    int32_t i = 0
    
    if (*(*(arg1 + 0x28) + 0xc44) s> 0)
        result = eax + 0x4c
        
        do
            int32_t ecx_2 = *(result - 4)
            
            if (ecx_2 == 0)
                *result = ebx.b
                ebx += 1
            else if (ecx_2 == 1)
                *result = var_c.b
                var_c += 1
            else if (ecx_2 == 2)
                *result = var_8.b
                var_8 += 1
            
            i += 1
            result += 0xc
        while (i s< *(*(arg1 + 0x28) + 0xc44))
    
    return result
}
