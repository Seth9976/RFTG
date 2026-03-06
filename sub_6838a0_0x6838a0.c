// 函数名称: sub_6838a0
// 虚拟地址: 0x6838a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_6838a0(void* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x78)
    void* ecx = *(arg1 + 0x78)
    int32_t j_2 = *(arg1 + 0x70)
    void* edi = *(arg1 + 0x1cc)
    int32_t* result = arg4
    void* var_c = edi
    int32_t j_3 = j_2
    
    if (result s> 0)
        int32_t* esi_1 = arg3
        void** ecx_2 = arg2 - esi_1
        arg4 = esi_1
        int32_t* var_14_1 = result
        int32_t* i
        
        do
            sub_67d220(*esi_1, j_2)
            int32_t eax_1 = *(edi + 0x30)
            int32_t edx_2 = 0
            int32_t var_10_1 = 0
            
            if (ecx s> 0)
                do
                    char* ecx_4 = *esi_1
                    int32_t esi_3 = *(*(edi + 0x18) + (edx_2 << 2))
                    int32_t edi_2 = *(edi + (edx_2 << 2) + 0x34) + (eax_1 << 6)
                    void* eax_5 = *(ecx_2 + esi_1) + edx_2
                    int32_t esi_4 = 0
                    int32_t j_1 = j_2
                    
                    if (j_2 != 0)
                        int32_t j
                        
                        do
                            uint32_t edx_3 = zx.d(*eax_5)
                            eax_5 += ecx
                            int32_t edx_4
                            edx_4.b = (*(edi_2 + (esi_4 << 2)) + edx_3)[esi_3]
                            *ecx_4 += edx_4.b
                            ecx_4 = &ecx_4[1]
                            esi_4 = (esi_4 + 1) & 0xf
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        j_2 = j_3
                        edx_2 = var_10_1
                    
                    edi = var_c
                    esi_1 = arg4
                    edx_2 += 1
                    var_10_1 = edx_2
                while (edx_2 s< ecx)
            
            result = (eax_1 + 1) & 0xf
            esi_1 = &esi_1[1]
            i = var_14_1
            var_14_1 -= 1
            *(edi + 0x30) = result
            arg4 = esi_1
        while (i != 1)
    
    return result
}
