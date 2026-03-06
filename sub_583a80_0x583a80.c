// 函数名称: sub_583a80
// 虚拟地址: 0x583a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_583a80(char* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: char* result_2 = arg2
    char* result_2 = arg2
    char* i = arg1
    char* result = nullptr
    
    if (result_2 != 0 && *result_2 != 0)
        do
            result = &result[1]
        while (*(result + result_2) != 0)
    
    char* result_1 = result
    char* ecx_1
    
    for (; i u< arg3; i = i + ecx_1 + 1)
        ecx_1 = nullptr
        
        if (i == 0)
            ecx_1 = nullptr
        else
            result.b = *i
            
            if (result.b != 0)
                while (result.b != 0x20)
                    result.b = *(ecx_1 + i + 1)
                    ecx_1 = &ecx_1[1]
                    
                    if (result.b == 0)
                        break
            
            result.b = *(ecx_1 + i)
            
            if (result.b != 0 && result.b != 0x20)
                ecx_1 = nullptr
        
        if (result_1 == ecx_1)
            int32_t edi_1 = 0
            
            if (result_2 == 0)
                if (i == 0 && ecx_1 == 0)
                    result.b = 1
                    return result
            else if (i != 0)
                if (ecx_1 != 0)
                    char* edx_2 = i - result_2
                    result = result_2
                    char* var_c_1 = edx_2
                    
                    while (true)
                        result_2.b = *result
                        
                        if (result_2.b == 0)
                            break
                        
                        edx_2.b = *(edx_2 + result)
                        
                        if (edx_2.b == 0)
                            break
                        
                        if (result_2.b != edx_2.b)
                            break
                        
                        edi_1 += 1
                        result = &result[1]
                        
                        if (edi_1 u>= ecx_1)
                            break
                        
                        edx_2 = var_c_1
                    
                    result_2 = arg2
                
                result.b = edi_1 == ecx_1
                
                if (result.b != 0)
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
