// 函数名称: sub_564770
// 虚拟地址: 0x564770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_564770(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    esi[1]
    int32_t edx
    int32_t j_1 = sub_554170(*(arg1 + 0x30), edx, *esi)
    int32_t* i = *(arg1 + 0x18)
    int32_t j_2 = j_1
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[5]
        
        if (*esi == *i_1 && esi[1] == i_1[1])
            int32_t* edx_2 = i_1[2]
            int32_t* esi_1 = esi[2]
            int32_t j = j_1
            
            if (j_1 u>= 4)
                do
                    if (*esi_1 != *edx_2)
                        goto label_5647ed
                    
                    j -= 4
                    edx_2 = &edx_2[1]
                    esi_1 = &esi_1[1]
                while (j u>= 4)
            
            if (j == 0)
            label_564806:
                arg2[3] = i_1[3]
                arg2[4] = i_1[4]
                int32_t* eax_1
                eax_1.b = 1
                return eax_1
            
            j_1.b = *edx_2
            
            if (j_1.b == *esi_1)
                if (j u<= 1)
                    goto label_564806
                
                j_1.b = *(edx_2 + 1)
                
                if (j_1.b == *(esi_1 + 1))
                    if (j u<= 2)
                        goto label_564806
                    
                    j.b = *(edx_2 + 2)
                    
                    if (j.b == *(esi_1 + 2))
                        goto label_564806
            
        label_5647ed:
            esi = arg2
            j_1 = j_2
    
    j_1.b = 0
    return j_1
}
