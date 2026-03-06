// 函数名称: sub_5ce160
// 虚拟地址: 0x5ce160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5ce160(char* arg1, void* arg2)
{
    // 第一条实际指令: char* edx = arg2
    char* edx = arg2
    void arg_c
    void* var_8 = &arg_c
    void* ecx
    ecx.b = *edx
    int32_t var_c = 0
    
    if (ecx.b == 0)
        return 
    
    char* esi_1 = arg1
    
    do
        if (ecx.b == 0x20)
            uint32_t var_54_1 = zx.d(*esi_1)
            int32_t eax_2
            eax_2, ecx = sub_5decf0()
            
            if (eax_2 != 0)
                int32_t i
                
                do
                    uint32_t ecx_2 = zx.d(esi_1[1])
                    esi_1 = &esi_1[1]
                    uint32_t var_54_2 = ecx_2
                    i, ecx = sub_5decf0()
                while (i != 0)
            
            arg2 += 1
        else if (ecx.b != 0x25)
            if (*esi_1 != ecx.b)
                break
            
            esi_1 = &esi_1[1]
            arg2 += 1
        else
            int32_t i_5 = 0
            int32_t var_14_1 = 0
            void* eax_4 = arg2 + 1
            arg2 = eax_4
            eax_4.b = *eax_4
            int32_t i_2 = 0
            void* var_18_1 = 0xa
            int32_t var_10_1 = 1
            
            if (eax_4.b != 0x25)
                if (eax_4.b == 0x2a)
                    arg2 += 1
                    var_14_1 = 1
                
                int32_t* var_54_3 = &i_5
                ecx = arg2 + sub_5cdd90(arg2, edx)
                arg2 = ecx
                
                if (*ecx != 0x63)
                    uint32_t var_54_4 = zx.d(*esi_1)
                    int32_t eax_8
                    eax_8, ecx = sub_5decf0()
                    
                    if (eax_8 != 0)
                        int32_t i_1
                        
                        do
                            uint32_t ecx_6 = zx.d(esi_1[1])
                            esi_1 = &esi_1[1]
                            uint32_t var_54_5 = ecx_6
                            i_1, ecx = sub_5decf0()
                        while (i_1 != 0)
                    
                    do
                        int32_t eax_10 = sx.d(*arg2) - 0x2a
                        
                        if (eax_10 u> 0x4e)
                            i_2 = 1
                        else
                            int32_t* edx_2 = zx.d(lookup_table_5ce648[eax_10])
                            
                            switch (edx_2)
                                case nullptr
                                    var_14_1 = 1
                                case 1
                                    int32_t var_54_6 = 3
                                    char const* const var_58_1 = "I64"
                                    void* var_5c_1 = arg2
                                    
                                    if (sub_5cd5d0() == 0)
                                        arg2 += 2
                                        var_10_1 = 3
                                case 2
                                    if (var_18_1 == 0xa)
                                        var_18_1 = 0x10
                                    
                                    goto label_5ce41a
                                case 3
                                label_5ce335:
                                    
                                    if (var_10_1 != 3)
                                        int16_t var_20
                                        int16_t* var_54_9 = &var_20
                                        esi_1 += sub_5cdd90(esi_1, edx_2)
                                        
                                        if (var_14_1 != 0)
                                            i_2 = 1
                                        else if (var_10_1 == 0)
                                            int16_t* edx_5 = *var_8
                                            var_8 += 4
                                            void* eax_33
                                            eax_33.w = var_20
                                            *edx_5 = eax_33.w
                                            var_c += 1
                                            i_2 = 1
                                        else if (var_10_1 == 1)
                                            void* eax_30 = var_8 + 4
                                            var_c += 1
                                            var_8 = eax_30
                                            **(eax_30 - 4) = var_20.d
                                            i_2 = 1
                                        else if (var_10_1 != 2)
                                            var_c += 1
                                            i_2 = 1
                                        else
                                            int32_t* ecx_9 = *var_8
                                            var_c += 1
                                            var_8 += 4
                                            *ecx_9 = var_20.d
                                            i_2 = 1
                                    else
                                        int32_t var_34
                                        int32_t* var_54_8 = &var_34
                                        void* var_58_2 = var_18_1
                                        esi_1 += sub_5cdef0(esi_1, edx_2, ecx)
                                        
                                        if (var_14_1 != 0)
                                            i_2 = 1
                                        else
                                            void* eax_19 = var_8 + 4
                                            var_c += 1
                                            var_8 = eax_19
                                            int32_t* eax_20 = *(eax_19 - 4)
                                            *eax_20 = var_34
                                            int32_t var_30
                                            eax_20[1] = var_30
                                            i_2 = 1
                                case 4
                                    double var_44
                                    int64_t* var_54_13 = &var_44
                                    int32_t eax_58
                                    int80_t st0_1
                                    st0_1, eax_58 = sub_5ce070(esi_1, edx_2)
                                    esi_1 = &esi_1[eax_58]
                                    
                                    if (var_14_1 == 0)
                                        var_c += 1
                                        **var_8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_44))))
                                        var_8 += 4
                                    
                                    i_2 = 1
                                case 5
                                    if (var_10_1 s> 0)
                                        var_10_1 += 1
                                case 6
                                    char* eax_12 = nullptr
                                    
                                    if (*esi_1 == 0x2d)
                                        eax_12 = 1
                                    
                                    if (*(eax_12 + esi_1) == 0x30)
                                        uint32_t var_54_7 = zx.d(*(eax_12 + esi_1 + 1))
                                        int32_t eax_14
                                        eax_14, edx_2 = sub_5ded00()
                                        int32_t ecx_7
                                        ecx_7.b = eax_14 == 0x78
                                        ecx = (ecx_7 << 3) + 8
                                        var_18_1 = ecx
                                    
                                    goto label_5ce335
                                case 7
                                    if (var_10_1 s< 3)
                                        var_10_1 += 1
                                case 8
                                    if (var_18_1 == 0xa)
                                        var_18_1 = 8
                                    
                                    goto label_5ce41a
                                case 9
                                    int32_t var_28
                                    int32_t* var_54_12 = &var_28
                                    esi_1 += sub_5cde50(esi_1, edx_2)
                                    
                                    if (var_14_1 == 0)
                                        int32_t* edx_10 = *var_8
                                        var_c += 1
                                        var_8 += 4
                                        *edx_10 = var_28
                                    
                                    i_2 = 1
                                case 0xa
                                    if (var_14_1 == 0)
                                        char* ebx_7 = *var_8
                                        uint32_t var_54_16 = zx.d(*esi_1)
                                        var_8 += 4
                                        
                                        if (sub_5decf0() == 0)
                                            int32_t i_7 = i_5
                                            int32_t j
                                            
                                            do
                                                j.b = *esi_1
                                                *ebx_7 = j.b
                                                ebx_7 = &ebx_7[1]
                                                esi_1 = &esi_1[1]
                                                
                                                if (i_7 != 0)
                                                    int32_t i_8 = i_7
                                                    i_7 -= 1
                                                    
                                                    if (i_8 == 1)
                                                        break
                                                
                                                uint32_t var_54_17 = zx.d(*esi_1)
                                                j = sub_5decf0()
                                            while (j == 0)
                                            i_5 = i_7
                                        
                                        var_c += 1
                                        *ebx_7 = 0
                                        i_2 = 1
                                    else
                                        uint32_t var_54_14 = zx.d(*esi_1)
                                        int32_t eax_62
                                        int32_t ecx_14
                                        eax_62, ecx_14 = sub_5decf0()
                                        
                                        if (eax_62 == 0)
                                            int32_t i_6 = i_5
                                            int32_t j_1
                                            
                                            do
                                                esi_1 = &esi_1[1]
                                                
                                                if (i_6 != 0)
                                                    int32_t i_9 = i_6
                                                    i_6 -= 1
                                                    
                                                    if (i_9 == 1)
                                                        break
                                                
                                                uint32_t var_54_15 = zx.d(*esi_1)
                                                j_1 = sub_5decf0()
                                            while (j_1 == 0)
                                            i_5 = i_6
                                        
                                        i_2 = 1
                                case 0xb
                                label_5ce41a:
                                    
                                    if (var_10_1 != 3)
                                        int16_t var_24
                                        int16_t* var_54_11 = &var_24
                                        esi_1 += sub_5cde50(esi_1, edx_2)
                                        
                                        if (var_14_1 != 0)
                                            i_2 = 1
                                        else if (var_10_1 == 0)
                                            int16_t* edx_9 = *var_8
                                            var_8 += 4
                                            void* eax_51
                                            eax_51.w = var_24
                                            *edx_9 = eax_51.w
                                            var_c += 1
                                            i_2 = 1
                                        else if (var_10_1 == 1)
                                            void* eax_48 = var_8 + 4
                                            var_c += 1
                                            var_8 = eax_48
                                            **(eax_48 - 4) = var_24.d
                                            i_2 = 1
                                        else if (var_10_1 != 2)
                                            var_c += 1
                                            i_2 = 1
                                        else
                                            int32_t* ecx_12 = *var_8
                                            var_c += 1
                                            var_8 += 4
                                            *ecx_12 = var_24.d
                                            i_2 = 1
                                    else
                                        int32_t var_3c
                                        int32_t* var_54_10 = &var_3c
                                        void* var_58_3 = var_18_1
                                        esi_1 += sub_5cdfc0(esi_1, var_18_1, ecx)
                                        
                                        if (var_14_1 != 0)
                                            i_2 = 1
                                        else
                                            void* eax_37 = var_8 + 4
                                            var_c += 1
                                            var_8 = eax_37
                                            int32_t* eax_38 = *(eax_37 - 4)
                                            *eax_38 = var_3c
                                            int32_t var_38
                                            eax_38[1] = var_38
                                            i_2 = 1
                                case 0xc
                                    i_2 = 1
                        
                        ecx = 1
                        arg2 += 1
                    while (i_2 == 0)
                else
                    int32_t i_4 = i_5
                    
                    if (i_4 == 0)
                        i_4 = 1
                    
                    if (var_14_1 == 0)
                        void* ecx_5 = var_8 + 4
                        var_8 = ecx_5
                        
                        if (i_4 != 0)
                            ecx = *(ecx_5 - 4) - esi_1
                            int32_t i_3
                            
                            do
                                *(ecx + esi_1) = *esi_1
                                esi_1 = &esi_1[1]
                                i_3 = i_4
                                i_4 -= 1
                            while (i_3 != 1)
                        
                        var_c += 1
                    else if (i_4 != 0)
                        esi_1 = &esi_1[i_4]
            else
                if (*esi_1 != eax_4.b)
                    break
                
                esi_1 = &esi_1[1]
                arg2 += 1
        
        edx = arg2
        ecx.b = *edx
    while (ecx.b != 0)
}
