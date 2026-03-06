// 函数名称: sub_4ffac0
// 虚拟地址: 0x4ffac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ffac0(int32_t* arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* ebx = arg1
    int32_t edi
    int32_t var_18 = edi
    
    if (ebx == 0)
        return arg2
    
    int32_t eax_2 = ebx[4]
    
    if (eax_2 s> 0 && eax_2 s< 0x12)
        char* ebx_1 = *ebx
        char* eax_3 = ebx_1
        void* edx_1 = &eax_3[1]
        
        do
            ecx.b = *eax_3
            eax_3 = &eax_3[1]
        while (ecx.b != 0)
        
        void* i_6 = eax_3 - edx_1
        int32_t eax_5 = arg2
        char* edx_2 = ebx_1
        
        if (eax_3 != edx_1)
            void* i
            
            do
                eax_5 = eax_5 u>> 8 ^ *(((zx.d(*edx_2) ^ zx.d(eax_5.b)) << 2) + &data_8c0ca0)
                edx_2 = &edx_2[1]
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        return eax_5
    
    for (int32_t* i_1 = *arg3; i_1 != 0; i_1 = i_1[1])
        if (*i_1 == ebx)
            return arg2
    
    sub_518190(arg3, &arg1)
    
    if (arg4 != 0)
        int32_t var_1c_1 = ebx[3]
        int32_t var_20_1 = *ebx
        sub_4c5680("      def %s size %d")
    
    int32_t eax_7 = arg2
    int32_t i_7 = 4
    void* edx_4 = &ebx[3]
    int32_t i_2
    
    do
        eax_7 = eax_7 u>> 8 ^ *(((zx.d(*edx_4) ^ zx.d(eax_7.b)) << 2) + &data_8c0ca0)
        edx_4 += 1
        i_2 = i_7
        i_7 -= 1
    while (i_2 != 1)
    int32_t i_8 = 4
    void* edx_5 = &ebx[6]
    int32_t i_3
    
    do
        eax_7 = eax_7 u>> 8 ^ *(((zx.d(*edx_5) ^ zx.d(eax_7.b)) << 2) + &data_8c0ca0)
        edx_5 += 1
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)
    int32_t i_9 = 4
    void* edx_6 = &ebx[7]
    int32_t i_4
    
    do
        eax_7 = eax_7 u>> 8 ^ *(((zx.d(*edx_6) ^ zx.d(eax_7.b)) << 2) + &data_8c0ca0)
        edx_6 += 1
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)
    char* esi_13 = *ebx
    char* ecx_3 = esi_13
    
    do
        edx_6.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (edx_6.b != 0)
    
    int32_t eax_11 = sub_519180(eax_7, esi_13, ecx_3 - &ecx_3[1])
    int32_t esi_14 = ebx[2]
    int32_t esi_15 = neg.d(esi_14)
    int32_t i_5 = neg.d(sbb.d(esi_15, esi_15, esi_14 != 0)) - 1
    int32_t edi_6 = eax_11
    
    while (i_5 != 0xffffffff)
        int32_t eax_14 = i_5 * 0xf
        i_5 += 1
        int32_t* ecx_6 = ebx[1] + (eax_14 << 2)
        
        if (i_5 s>= ebx[2])
            i_5 = 0xffffffff
        
        int32_t edx_8 = arg4.d
        edi_6 = sub_4ff840(edi_6, edx_8, ecx_6, arg3, edx_8.b)
        
        if (arg4 != 0)
            int32_t var_1c_3 = edi_6
            int32_t var_20_3 = ecx_6[1]
            int32_t var_24_1 = *ebx
            sub_4c5680("      def %s field %s %x")
    
    return edi_6
}
