// 函数名称: sub_64b230
// 虚拟地址: 0x64b230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_64b230(int128_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = *(arg2 + 0x1c)
    int32_t* esi = *(arg2 + 0x1c)
    
    if (esi == 0)
        return esi + 1
    
    char ecx = (esi[0x392]).b
    int128_t* ebx = arg1
    int128_t* eax_2
    int32_t ecx_1
    int32_t edx
    eax_2, ecx_1, edx = sub_5abfc0(ebx, 0, 0x70)
    void* edi = _calloc(eax_2, edx, ecx_1, 1, 0x88)
    *(ebx + 0x68) = edi
    *(ebx + 4) = arg2
    uint32_t i = esi[2]
    int32_t ecx_2 = 0
    
    if (i != 0)
        uint32_t i_14 = i
        i -= 1
        
        if (i_14 != 1)
            do
                ecx_2 += 1
                i u>>= 1
            while (i != 0)
    
    *(edi + 0x2c) = ecx_2
    int32_t* eax_4
    int32_t ecx_3
    int32_t edx_2
    eax_4, ecx_3, edx_2 = _calloc(i, arg2, ecx_2, 1, 4)
    *(edi + 0xc) = eax_4
    int32_t eax_5
    int32_t ecx_4
    int32_t edx_3
    eax_5, ecx_4, edx_3 = _calloc(eax_4, edx_2, ecx_3, 1, 4)
    *(edi + 0x10) = eax_5
    int32_t eax_6
    int32_t edx_4
    eax_6, edx_4 = _calloc(eax_5, edx_3, ecx_4, 1, 0x14)
    *eax_4 = eax_6
    **(edi + 0x10) = _calloc(eax_6, edx_4, eax_4, 1, 0x14)
    sub_656680(**(edi + 0xc), *esi s>> ecx)
    int32_t edx_8
    int80_t st0_1
    st0_1, edx_8 = sub_656680(**(edi + 0x10), esi[1] s>> ecx)
    int16_t top = 0xfffe
    int32_t eax_12 = *esi
    int32_t ecx_10 = 0
    
    if (eax_12 != 0)
        uint32_t i_1 = eax_12 - 1
        
        if (eax_12 != 1)
            do
                ecx_10 += 1
                i_1 u>>= 1
            while (i_1 != 0)
    
    *(edi + 4) = ecx_10 - 6
    int32_t eax_13 = esi[1]
    int32_t ecx_12 = 0
    
    if (eax_13 != 0)
        uint32_t i_2 = eax_13 - 1
        
        if (eax_13 != 1)
            do
                ecx_12 += 1
                i_2 u>>= 1
            while (i_2 != 0)
    
    *(edi + 8) = ecx_12 - 6
    
    if (arg3 != 0)
        sub_6565f0(edi + 0x14, *esi)
        float i_3
        int32_t ecx_15
        int32_t edx_10
        i_3, ecx_15, edx_10 = sub_6565f0(edi + 0x20, esi[1])
        
        if (esi[0x2c8] == 0)
            int32_t eax_16 = esi[6]
            i_3, ecx_15 = _calloc(eax_16, edx_10, ecx_15, eax_16, 0x38)
            bool cond:2_1 = esi[6] s<= 0
            esi[0x2c8] = i_3
            float i_10 = 0f
            
            if (not(cond:2_1))
                int32_t var_10_1 = 0
                void* var_c_1 = &esi[0x1c8]
                
                do
                    ecx_15 = sub_650470(esi[0x2c8] + var_10_1, *var_c_1)
                    var_c_1 += 4
                    var_10_1 += 0x38
                    i_3 = i_10 i+ 1
                    i_10 = i_3
                while (i_3 s< esi[6])
        
        int32_t edx_12 = esi[7]
        *(edi + 0x38) = _calloc(i_3, edx_12, ecx_15, edx_12, 0x34)
        int32_t i_11 = 0
        
        if (esi[7] s> 0)
            int32_t var_10_2 = 0
            void* ebx_1 = &esi[0x2c9]
            int32_t i_4
            
            do
                int32_t* ecx_19 = *ebx_1
                int32_t eax_23
                int32_t edx_14
                edx_14:eax_23 = sx.q(esi[*ecx_19])
                sub_64cc40(*(edi + 0x38) + var_10_2, ecx_19, &esi[0x2cd], (eax_23 - edx_14) s>> 1, 
                    *(arg2 + 8))
                top -= 1
                unimplemented  {call 0x64cc40}
                var_10_2 += 0x34
                i_4 = i_11 + 1
                ebx_1 += 4
                i_11 = i_4
            while (i_4 s< esi[7])
            ebx = arg1
        
        *ebx = 1
    else if (esi[0x2c8] == 0)
        int32_t eax_53 = esi[6]
        int32_t eax_54 = _calloc(eax_53, edx_8, ecx_12 - 6, eax_53, 0x38)
        bool cond:1_1 = esi[6] s<= 0
        esi[0x2c8] = eax_54
        int32_t var_8_1 = 0
        
        if (not(cond:1_1))
            int32_t var_10_3 = 0
            void* ebx_5 = &esi[0x1c8]
            
            while (true)
                int32_t* eax_55 = *ebx_5
                
                if (eax_55 != 0 && sub_650600(esi[0x2c8] + var_10_3, eax_55) == 0)
                    sub_6503a0(*ebx_5)
                    var_10_3 += 0x38
                    *ebx_5 = 0
                    int32_t eax_59 = var_8_1 + 1
                    ebx_5 += 4
                    var_8_1 = eax_59
                    
                    if (eax_59 s< esi[6])
                        continue
                    
                    ebx = arg1
                    break
                
                int32_t i_5 = 0
                
                if (esi[6] s> 0)
                    void* edi_1 = &esi[0x1c8]
                    
                    do
                        void* eax_60 = *edi_1
                        
                        if (eax_60 != 0)
                            sub_6503a0(eax_60)
                            *edi_1 = 0
                        
                        i_5 += 1
                        edi_1 += 4
                    while (i_5 s< esi[6])
                
                sub_649c30(arg1)
                return 0xffffffff
    
    ebx[1].d = esi[1]
    *(ebx + 8) = sub_5a881a(*(arg2 + 4) * 4)
    void* i_6 = arg2
    *(ebx + 0xc) = sub_5a881a(*(arg2 + 4) * 4)
    void* eax_34 = nullptr
    void* i_9 = nullptr
    
    if (*(i_6 + 4) s> 0)
        do
            int32_t edx_17 = ebx[1].d
            *(*(ebx + 8) + (i_9 << 2)) = _calloc(eax_34, edx_17, i_6, edx_17, 4)
            eax_34 = arg2
            i_6 = i_9 + 1
            i_9 = i_6
        while (i_6 s< *(eax_34 + 4))
    
    *(ebx + 0x24) = 0
    *(ebx + 0x28) = 0
    int32_t eax_37
    int32_t edx_19
    edx_19:eax_37 = sx.q(esi[1])
    int32_t eax_39 = (eax_37 - edx_19) s>> 1
    ebx[3].d = eax_39
    *(ebx + 0x14) = eax_39
    int32_t ecx_26 = esi[4]
    int32_t eax_40
    int32_t ecx_27
    eax_40, ecx_27 = _calloc(eax_39, edx_19, ecx_26, ecx_26, 4)
    *(edi + 0x30) = eax_40
    int32_t edx_20 = esi[5]
    *(edi + 0x34) = _calloc(eax_40, edx_20, ecx_27, edx_20, 4)
    int32_t i_12 = 0
    
    if (esi[4] s> 0)
        void* ebx_3 = &esi[0xc8]
        int32_t i_7
        
        do
            *(*(edi + 0x30) + ebx_3 + 0xfffffce0 - esi) =
                (*((&data_825e6c)[*ebx_3] + 8))(arg1, *(ebx_3 + 0x100))
            i_7 = i_12 + 1
            ebx_3 += 4
            i_12 = i_7
        while (i_7 s< esi[4])
    
    int32_t i_13 = 0
    
    if (esi[5] s> 0)
        void* ebx_4 = &esi[0x148]
        int32_t i_8
        
        do
            *(0xfffffae0 - esi + ebx_4 + *(edi + 0x34)) =
                (*((&data_825e74)[*ebx_4] + 8))(arg1, *(ebx_4 + 0x100))
            i_8 = i_13 + 1
            ebx_4 += 4
            i_13 = i_8
        while (i_8 s< esi[5])
    
    return 0
}
