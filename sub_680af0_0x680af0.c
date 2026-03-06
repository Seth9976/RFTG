// 函数名称: sub_680af0
// 虚拟地址: 0x680af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_680af0(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int128_t* ecx_1 = *arg4
    int128_t* ecx_1 = *arg4
    void* edx = arg1
    void* eax_1 = *(edx + 0x1c4) + arg2[1]
    uint32_t ecx_4 = zx.d(*(eax_1 + 0x8c))
    uint32_t result = zx.d(*(eax_1 + 0x96))
    arg4 = ecx_4
    uint32_t result_1 = result
    
    if (*(edx + 0x138) s> 0)
        arg2 = arg3
        int32_t i = 0
        
        do
            int128_t* esi_2 = *(ecx_1 + (i << 2))
            char* eax_4 = *arg2
            void* edi_2 = *(edx + 0x70) + esi_2
            
            if (esi_2 u< edi_2)
                do
                    edx.b = *eax_4
                    eax_4 = &eax_4[1]
                    
                    if (ecx_4 s> 0)
                        sub_5abfc0(esi_2, edx.b, ecx_4)
                        ecx_4 = arg4
                        esi_2 += arg4
                while (esi_2 u< edi_2)
                
                edx = arg1
            
            result = result_1
            
            if (result s> 1)
                result = sub_67d1b0(ecx_1, i, ecx_1, i + 1, result - 1, *(edx + 0x70))
                ecx_4 = arg4
            
            i += result_1
            edx = arg1
            arg2 = &arg2[1]
        while (i s< *(edx + 0x138))
    
    return result
}
