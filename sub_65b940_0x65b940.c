// 函数名称: sub_65b940
// 虚拟地址: 0x65b940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_65b940(int32_t* arg1)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t edi = 0
    int32_t eax
    int32_t ecx
    int32_t edx
    void* result = _calloc(eax, edx, ecx, 1, 0x520)
    int32_t eax_2 = 0
    *(result + 0x508) = arg1[0xd2]
    int32_t ecx_2 = *arg1
    int32_t var_c = 0
    *(result + 0x510) = arg1
    int32_t var_8 = 0
    
    if (ecx_2 s>= 2)
        int32_t i_7 = ((ecx_2 - 2) u>> 1) + 1
        void* eax_3 = &arg1[2]
        var_8 = i_7 * 2
        int32_t i
        
        do
            esi += arg1[*(eax_3 - 4) + 0x20]
            edi += arg1[*eax_3 + 0x20]
            eax_3 += 8
            i = i_7
            i_7 -= 1
        while (i != 1)
        eax_2 = var_c
    
    if (var_8 s< *arg1)
        eax_2 = arg1[arg1[var_8 + 1] + 0x20]
    
    int32_t i_1 = 0
    *(result + 0x504) = eax_2 + edi + esi + 2
    int32_t var_128[0x41]
    
    if (eax_2 + edi + esi + 2 s> 0)
        void* ecx_6 = &arg1[0xd1]
        
        do
            var_128[i_1] = ecx_6
            i_1 += 1
            ecx_6 += 4
        while (i_1 s< eax_2 + edi + esi + 2)
    
    sub_5a7ac0(&var_128, eax_2 + edi + esi + 2, 4, sub_65b670)
    int32_t i_2 = 0
    
    if (eax_2 + edi + esi + 2 s> 0)
        void* ecx_7 = result + 0x104
        
        do
            void* edx_3 = var_128[i_2] - arg1
            i_2 += 1
            *ecx_7 = (edx_3 - 0x344) s>> 2
            ecx_7 += 4
        while (i_2 s< eax_2 + edi + esi + 2)
    
    int32_t i_3 = 0
    
    if (eax_2 + edi + esi + 2 s> 0)
        void* ecx_8 = result + 0x104
        
        do
            *(result + (*ecx_8 << 2) + 0x208) = i_3
            i_3 += 1
            ecx_8 += 4
        while (i_3 s< eax_2 + edi + esi + 2)
    
    int32_t i_4 = 0
    
    if (eax_2 + edi + esi + 2 s> 0)
        do
            *(result + (i_4 << 2)) = arg1[*(result + (i_4 << 2) + 0x104) + 0xd1]
            i_4 += 1
        while (i_4 s< eax_2 + edi + esi + 2)
    
    int32_t* edi_2 = arg1
    
    switch (edi_2[0xd0] - 1)
        case 0
            *(result + 0x50c) = 0x100
        case 1
            *(result + 0x50c) = 0x80
        case 2
            *(result + 0x50c) = 0x56
        case 3
            *(result + 0x50c) = 0x40
    
    if (eax_2 + edi + esi s> 0)
        void* eax_7 = result + 0x30c
        int32_t edx_8 = 2
        void* var_c_1 = eax_7
        void* var_8_1 = &edi_2[0xd3]
        int32_t i_6 = eax_2 + edi + esi
        int32_t i_5
        
        do
            int32_t var_1c_1 = *(result + 0x508)
            int32_t ecx_14 = *var_8_1
            int32_t esi_3 = 0
            int32_t ecx_15 = 0
            int32_t var_18_1 = 0
            int32_t var_24_1 = 1
            
            if (edx_8 s> 0)
                void* var_14_1 = &edi_2[0xd1]
                
                do
                    int32_t eax_9 = *var_14_1
                    
                    if (eax_9 s> esi_3 && eax_9 s< ecx_14)
                        var_18_1 = ecx_15
                        esi_3 = eax_9
                    
                    if (eax_9 s< var_1c_1 && eax_9 s> ecx_14)
                        var_24_1 = ecx_15
                        var_1c_1 = eax_9
                    
                    var_14_1 += 4
                    ecx_15 += 1
                while (ecx_15 s< edx_8)
                
                eax_7 = var_c_1
                edi_2 = arg1
            
            var_8_1 += 4
            *(eax_7 + 0xfc) = var_18_1
            *eax_7 = var_24_1
            eax_7 += 4
            edx_8 += 1
            i_5 = i_6
            i_6 -= 1
            var_c_1 = eax_7
        while (i_5 != 1)
    
    return result
}
