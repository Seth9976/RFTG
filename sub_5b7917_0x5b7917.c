// 函数名称: sub_5b7917
// 虚拟地址: 0x5b7917
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5b7917(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_14
    void* var_14
    sub_5a73dd(&var_14, arg2)
    char* eax = arg1
    char i = *eax
    void* esi = var_14
    
    if (i != 0)
        char* edx_2
        edx_2.b = ***(esi + 0xbc)
        
        while (i != edx_2.b)
            eax = &eax[1]
            i = *eax
            
            if (i == 0)
                break
    
    void* result = &eax[1]
    
    if (*eax != 0)
        while (true)
            i = *result
            
            if (i == 0)
                break
            
            if (i == 0x65)
                break
            
            if (i == 0x45)
                break
            
            result += 1
        
        void* result_2 = result
        
        do
            result -= 1
        while (*result == 0x30)
        
        int32_t ebx
        ebx.b = *result
        
        if (ebx.b == ***(esi + 0xbc))
            result -= 1
        
        int32_t ecx_2
        
        do
            ecx_2.b = *result_2
            result += 1
            result_2 += 1
            *result = ecx_2.b
        while (ecx_2.b != 0)
    
    char var_8
    
    if (var_8 != 0)
        void* result_1
        result = result_1
        *(result + 0x70) &= 0xfffffffd
    
    return result
}
