// 函数名称: sub_569a80
// 虚拟地址: 0x569a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_569a80(int32_t** arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_26a44e4
    void* i = 0x70
    void* i_1 = 0x70
    
    do
        int32_t ecx_1 = data_3079210
        
        if (*(i + ecx_1) != 0)
            if (edx == 0)
                sub_4f4250()
                edx = data_26a44e4
            
            int32_t eax = 0
            int32_t* esi_2
            
            while (true)
                if (1 << (eax.b + 4) s>= 0xc)
                    esi_2 = edx + eax * 0x14
                    break
                
                eax += 1
                
                if (eax s>= 7)
                    esi_2 = edx + 0x8c
                    break
            
            esi_2[3] += 1
            
            if (*esi_2 == 0)
                sub_4f4170(esi_2)
                edx = data_26a44e4
            
            int32_t* eax_1 = *esi_2
            *esi_2 = *eax_1
            *eax_1 = 0
            eax_1[1] = 0
            eax_1[2] = 0
            
            if (eax_1 != 0)
                *eax_1 = *(i + ecx_1)
            
            eax_1[1] = 0
            eax_1[2] = arg1[1]
            void* ecx_6 = arg1[1]
            
            if (ecx_6 == 0)
                *arg1 = eax_1
            else
                *(ecx_6 + 4) = eax_1
            
            arg1[2] += 1
            arg1[1] = eax_1
            i = i_1
        
        i += 4
        i_1 = i
    while (i s< 0x7c)
    
    int32_t* result = data_3079210 + 0x80
    
    if (*result == 0)
        return result
    
    return sub_518190(arg1, result)
}
