// 函数名称: sub_5dd160
// 虚拟地址: 0x5dd160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dd160(char* arg1, char* arg2)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    char* edi = arg2
    int32_t* eax = sub_5dc700(esi, edi)
    int32_t* var_8 = eax
    
    if (eax == 0xffffffff)
        if (esi == 0 || *esi == 0)
            esi = "UTF-8"
        
        if (edi == 0 || *edi == 0)
            edi = "UTF-8"
        
        int32_t* eax_1 = sub_5dc700(esi, edi)
        var_8 = eax_1
        
        if (eax_1 == 0xffffffff)
            return 0
    
    int32_t i
    int32_t i_1 = i
    int32_t i_2 = i_1
    
    if (i_1 u<= 4)
        i_2 = 4
    
    int32_t i_3 = i_2
    int32_t result = sub_5d0ac0()
    
    if (result == 0)
    label_5dd27d:
        sub_5dd140(var_8)
        return 0
    
    int32_t var_20_2 = 4
    int32_t var_24_1 = 0
    int32_t result_1 = result
    int32_t result_3 = result
    int32_t i_5 = i_2
    sub_5cd100()
    
    if (i_1 != 0)
        int32_t arg_c
        
        do
            switch (sub_5dc7e0(var_8, &arg_c, &i, &result_3, &i_5) + 4)
                case 0, 3
                    break
                case 1
                    arg_c += 1
                    i -= 1
                case 2
                    i_2 *= 2
                    int32_t i_4 = i_2
                    int32_t result_2 = result
                    int32_t result_4 = result
                    result = sub_5d0ae0()
                    
                    if (result == 0)
                        goto label_5dd27d
                    
                    int32_t result_5 = result_3 + result - result_4
                    int32_t var_20_4 = 4
                    int32_t var_24_3 = 0
                    int32_t result_6 = result_5
                    result_3 = result_5
                    i_5 = result - result_5 + i_2
                    sub_5cd100()
        while (i u> 0)
    
    sub_5dd140(var_8)
    return result
}
