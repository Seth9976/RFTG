// 函数名称: sub_5020c0
// 虚拟地址: 0x5020c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_5020c0(void* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* esi_1
    int32_t* esi_1
    
    if (arg1 != 0)
        esi_1 = *(arg1 + 4)
    
    int32_t* result
    
    if (arg1 == 0 || esi_1 == 0)
    label_5020fb:
        result = nullptr
    else
        while (true)
            int32_t* result_3 = *esi_1
            char* const eax = *result_3
            esi_1 = esi_1[1]
            
            if (eax == 0)
                eax = &data_83f3d3
            
            if (sub_5a9697(eax, arg2) == 0)
                result = result_3
                break
            
            if (esi_1 == 0)
                goto label_5020fb
    
    if (result == 0)
        int32_t* esi_2 = data_30785c8
        esi_2[3] += 1
        
        if (*esi_2 == 0)
            sub_5043e0(esi_2)
        
        int32_t* result_2 = *esi_2
        *esi_2 = *result_2
        __builtin_memset(result_2, 0, 0x14)
        
        if (result_2 != 0)
            *result_2 = &data_83f3d3
            result_2[1] = &data_83f3d3
        
        result = result_2
        int32_t* result_1 = result
        sub_518190(arg1 + 4, &result_1)
    else
        sub_4c4590(&data_83f3d3)
        
        if (result[2] != 0)
            sub_500770(result[2])
            result[2] = 0
            sub_4c4590(arg2)
            return result
    
    sub_4c4590(arg2)
    return result
}
