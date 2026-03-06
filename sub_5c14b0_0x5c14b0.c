// 函数名称: sub_5c14b0
// 虚拟地址: 0x5c14b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c14b0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* i_4 = arg1
    int32_t* i_4 = arg1
    
    if (i_4 == 0)
        return arg2
    
    int32_t* i = *i_4
    int32_t* i_2 = i_4
    
    for (; i != 0; i = *i)
        i_2 = i
    
    int32_t* i_1 = arg2
    
    if (i_1 != 0)
        int32_t ebx
        int32_t var_18_1 = ebx
        
        do
            int32_t* i_3 = *i_1
            int32_t eax_2
            
            while (true)
                if (i_4[2].w == i_1[2].w)
                    uint32_t j = zx.d(*(i_4 + 0xa))
                    
                    if (j.w == *(i_1 + 0xa))
                        int32_t* ecx_1 = i_1[3]
                        int32_t* esi_1 = i_4[3]
                        
                        while (j u>= 4)
                            if (*esi_1 != *ecx_1)
                                goto label_5c1558
                            
                            j -= 4
                            ecx_1 = &ecx_1[1]
                            esi_1 = &esi_1[1]
                        
                        if (j == 0)
                        label_5c156b:
                            i_4[1] |= i_1[1] & 0x300
                            eax_2 = 1
                            break
                        
                        ebx.b = *ecx_1
                        
                        if (ebx.b == *esi_1)
                            if (j u<= 1)
                                goto label_5c156b
                            
                            ebx.b = *(ecx_1 + 1)
                            
                            if (ebx.b == *(esi_1 + 1))
                                if (j u<= 2)
                                    goto label_5c156b
                                
                                ecx_1.b = *(ecx_1 + 2)
                                
                                if (ecx_1.b == *(esi_1 + 2))
                                    goto label_5c156b
                
            label_5c1558:
                i_4 = *i_4
                
                if (i_4 == 0)
                    eax_2 = 0
                    break
            
            *i_1 = 0
            
            if (eax_2 == 0)
                *i_2 = i_1
                i_2 = i_1
            else
                int32_t* esi_2 = i_1
                int32_t* j_1
                
                do
                    j_1 = *esi_2
                    __free_base(esi_2[3])
                    __free_base(esi_2)
                    esi_2 = j_1
                while (j_1 != 0)
            
            i_1 = i_3
            i_4 = arg1
        while (i_1 != 0)
    
    return i_4
}
