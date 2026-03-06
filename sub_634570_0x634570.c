// 函数名称: sub_634570
// 虚拟地址: 0x634570
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_634570(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t ebx = ecx[0xc]
    int32_t i = ecx[7]
    int32_t eax_1 = ecx[9]
    char* esi = ecx[5]
    arg1 = *ecx
    int32_t edx_1 = ecx[0xe]
    int32_t edi = ecx[6]
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(edi + 7)
    void* result = (eax_3 + (edx_2 & 7)) s>> 3
    void* ecx_3 = ecx[4] - result + edi
    void* var_10 = ecx_3
    int32_t edx_3
    
    if (ebx == 0)
        while (i != 0)
            i -= 1
            edx_3.b = 0
            int32_t ebx_2 = 0
            
            if (edi s> 0)
                do
                    if ((ebx_2.b & 7) == 0)
                        char* eax_6 = arg1
                        edx_3.b = *eax_6
                        arg1 = &eax_6[1]
                    
                    result.b = edx_3.b
                    result.b u>>= 7
                    
                    if (zx.d(result.b) != edx_1)
                        *esi = result.b
                    
                    ebx_2 += 1
                    esi = &esi[1]
                    edx_3.b *= 2
                while (ebx_2 s< edi)
                
                ecx_3 = var_10
            
            arg1 += ecx_3
            esi = &esi[eax_1]
    else if (i != 0)
        do
            i -= 1
            edx_3.b = 0
            int32_t ebx_1 = 0
            
            if (edi s> 0)
                do
                    if ((ebx_1.b & 7) == 0)
                        edx_3.b = *arg1
                        arg1 += 1
                    
                    result.b = edx_3.b
                    result.b u>>= 7
                    result = zx.d(result.b)
                    
                    if (result != edx_1)
                        result.b = *(result + ebx)
                        *esi = result.b
                    
                    ebx_1 += 1
                    esi = &esi[1]
                    edx_3.b *= 2
                while (ebx_1 s< edi)
                
                ecx_3 = var_10
            
            arg1 += ecx_3
            esi = &esi[eax_1]
        while (i != 0)
    return result
}
