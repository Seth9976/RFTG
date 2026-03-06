// 函数名称: sub_683760
// 虚拟地址: 0x683760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_683760(void* arg1, int32_t arg2, void** arg3, void* arg4)
{
    // 第一条实际指令: int32_t edx = *(*(arg1 + 0x1cc) + 0x18)
    int32_t edx = *(*(arg1 + 0x1cc) + 0x18)
    int32_t esi = *(arg1 + 0x78)
    void* edi = *(arg1 + 0x70)
    void* result = arg4
    void* var_18 = edi
    
    if (result s> 0)
        void** edx_1 = arg3
        int32_t* ebx_2 = arg2 - arg3
        void** var_8_1 = edx_1
        int32_t* var_14_1 = ebx_2
        void* var_c_1 = result
        void* i
        
        do
            result = *edx_1
            char* ecx_2 = *(ebx_2 + edx_1)
            arg1 = result
            arg4 = edi
            
            if (edi != 0)
                void* j
                
                do
                    int32_t edx_2 = 0
                    int32_t eax_1 = 0
                    
                    if (esi s> 0)
                        do
                            uint32_t edi_2 = zx.d(*(*(edx + (eax_1 << 2)) + zx.d(*ecx_2)))
                            eax_1 += 1
                            edx_2 += edi_2
                            ecx_2 = &ecx_2[1]
                        while (eax_1 s< esi)
                    
                    *arg1 = edx_2.b
                    result = arg1 + 1
                    j = arg4
                    arg4 -= 1
                    arg1 = result
                while (j != 1)
                ebx_2 = var_14_1
                edx_1 = var_8_1
                edi = var_18
            
            edx_1 = &edx_1[1]
            i = var_c_1
            var_c_1 -= 1
            var_8_1 = edx_1
        while (i != 1)
    
    return result
}
