// 函数名称: sub_683800
// 虚拟地址: 0x683800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_683800(void* arg1, int32_t arg2, void* arg3, char* arg4)
{
    // 第一条实际指令: int32_t* eax_1 = *(*(arg1 + 0x1cc) + 0x18)
    int32_t* eax_1 = *(*(arg1 + 0x1cc) + 0x18)
    int32_t edx = *eax_1
    int32_t edx_1 = eax_1[1]
    int32_t eax_2 = eax_1[2]
    char* result = arg4
    int32_t j_1 = *(arg1 + 0x70)
    int32_t j_2 = j_1
    
    if (result s> 0)
        void* ecx_1 = arg3
        void* edi_2 = arg2 - ecx_1
        arg1 = ecx_1
        void* var_18_1 = edi_2
        arg4 = result
        char* i
        
        do
            result = *(edi_2 + ecx_1)
            char* edx_2 = *ecx_1
            
            if (j_1 != 0)
                int32_t j
                
                do
                    *edx_2 =
                        *(zx.d(*result) + edx) + *(zx.d(result[1]) + edx_1) + *(zx.d(result[2]) + eax_2)
                    result = &result[3]
                    edx_2 = &edx_2[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                j_1 = j_2
                ecx_1 = arg1
                edi_2 = var_18_1
            
            ecx_1 += 4
            i = arg4
            arg4 -= 1
            arg1 = ecx_1
        while (i != 1)
    
    return result
}
