// 函数名称: sub_4d3ed0
// 虚拟地址: 0x4d3ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d3ed0(int32_t arg1, int32_t** arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    sub_4d3b90(esi)
    int32_t* eax_1 = *esi
    int32_t i = 0
    
    if (*eax_1 s> 0)
        int32_t ebx_1 = 0
        
        do
            int32_t* esi_1 = eax_1[1] + ebx_1 + 0x3c
            sub_51ea30(esi_1)
            __builtin_memset(esi_1, 0, 0x1c)
            eax_1 = *arg2
            i += 1
            ebx_1 += 0x140
        while (i s< *eax_1)
    
    void* result = data_27e7fcc
    
    if (result != 0)
        int32_t* ebx_2 = *(result + 4)
        int32_t ecx_2 = ebx_2[1]
        result = nullptr
        int32_t i_2
        
        if (ecx_2 == 0)
        label_4d3f51:
            i_2 = 0
        else
            void* edx_1 = *ebx_2
            
            while ((*(edx_1 + 0x68) & 0xffff0000) == 0)
                result += 1
                edx_1 += 0x6c
                
                if (result u>= ecx_2)
                    goto label_4d3f51
            
            i_2 = *(edx_1 + 0x68)
        
        int32_t i_1 = i_2
        
        if (i_2 != 0)
            do
                int32_t edi = *ebx_2
                void* esi_2 = i_1 & 0xffff
                result = esi_2 + 1
                int32_t ecx_5 = esi_2 * 0x6c
                int32_t esi_3 = ebx_2[1]
                
                if (result u>= esi_3)
                label_4d3f91:
                    i_1 = 0
                else
                    void* edx_4 = result * 0x6c + edi
                    
                    while ((*(edx_4 + 0x68) & 0xffff0000) == 0)
                        result += 1
                        edx_4 += 0x6c
                        
                        if (result u>= esi_3)
                            goto label_4d3f91
                    
                    i_1 = *(edx_4 + 0x68)
                
                if (*(ecx_5 + edi + 4) == arg1)
                    result = sub_4d3c40(*(ecx_5 + edi + 0x68))
            while (i_1 != 0)
    
    return result
}
