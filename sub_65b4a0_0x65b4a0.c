// 函数名称: sub_65b4a0
// 虚拟地址: 0x65b4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65b4a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t esi = edi[0xd2]
    int32_t var_18 = 0
    int32_t var_14 = esi
    int32_t var_c = 0xffffffff
    sub_68b1d0(arg2, *edi, 5)
    int32_t i_6 = 0
    
    if (*edi s> 0)
        void* esi_1 = &edi[1]
        int32_t i
        
        do
            sub_68b1d0(arg2, *esi_1, 4)
            int32_t eax_1 = *esi_1
            
            if (var_c s< eax_1)
                var_c = eax_1
            
            i = i_6 + 1
            esi_1 += 4
            i_6 = i
        while (i s< *edi)
        esi = var_14
    
    if (var_c + 1 s> 0)
        void* var_8 = &edi[0x50]
        void* esi_2 = &edi[0x30]
        int32_t i_5 = var_c + 1
        int32_t i_1
        
        do
            sub_68b1d0(arg2, *(esi_2 - 0x40) - 1, 3)
            sub_68b1d0(arg2, *esi_2, 2)
            
            if (*esi_2 != 0)
                sub_68b1d0(arg2, *(esi_2 + 0x40), 8)
            
            int32_t j = 0
            
            if (1 << (*esi_2).b s> 0)
                void* var_c_1 = var_8
                
                do
                    sub_68b1d0(arg2, *var_c_1 + 1, 8)
                    var_c_1 += 4
                    j += 1
                while (j s< 1 << (*esi_2).b)
            
            var_8 += 0x20
            esi_2 += 4
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        edi = arg1
        esi = var_14
    
    sub_68b1d0(arg2, edi[0xd0] - 1, 2)
    int32_t eax_12 = 0
    
    if (esi != 0)
        for (uint32_t i_2 = esi - 1; i_2 != 0; i_2 u>>= 1)
            eax_12 += 1
    
    sub_68b1d0(arg2, eax_12, 4)
    int32_t eax_13 = 0
    int32_t var_14_1 = 0
    
    if (esi != 0)
        uint32_t i_3 = esi - 1
        
        if (esi != 1)
            do
                eax_13 += 1
                i_3 u>>= 1
            while (i_3 != 0)
            
            var_14_1 = eax_13
    
    int32_t result = 0
    int32_t i_7 = 0
    
    if (*edi s> 0)
        void* var_c_2 = &edi[1]
        int32_t i_4
        
        do
            int32_t esi_4 = var_18 + edi[*var_c_2 + 0x20]
            var_18 = esi_4
            
            if (result s< esi_4)
                int32_t j_2 = esi_4 - result
                void* edi_1 = &edi[result + 0xd3]
                int32_t result_1 = result + j_2
                int32_t j_1
                
                do
                    sub_68b1d0(arg2, *edi_1, var_14_1)
                    edi_1 += 4
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                result = result_1
                edi = arg1
            
            var_c_2 += 4
            i_4 = i_7 + 1
            i_7 = i_4
        while (i_4 s< *edi)
    
    return result
}
