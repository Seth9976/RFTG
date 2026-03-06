// 函数名称: sub_67e130
// 虚拟地址: 0x67e130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67e130(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_2
    int32_t __saved_ebp_2
    int32_t __saved_ebp_1 = __saved_ebp_2
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t __saved_esi_1
    int32_t __saved_esi = __saved_esi_1
    void* ecx = *(arg1 + 0x1ac)
    int32_t eax_4 = *(arg1 + 0x140) - 1
    void* var_120
    
    while (*(arg1 + 0x90) s<= *(arg1 + 0x98))
        int32_t* eax_5 = *(arg1 + 0x1b4)
        
        if (eax_5[5] != 0)
            break
        
        if (*(arg1 + 0x90) == *(arg1 + 0x98))
            int32_t edx_1
            edx_1.b = *(arg1 + 0x190) == 0
            
            if (*(arg1 + 0x94) u> edx_1 + *(arg1 + 0x9c))
                break
        
        int32_t eax_6 = *eax_5
        var_120 = arg1
        
        if (eax_6(var_120) == 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
    
    bool cond:0 = *(arg1 + 0x24) s<= 0
    void* ebx
    var_120 = ebx
    void** esp_1 = &var_120
    void* ebx_1 = *(arg1 + 0xd8)
    int32_t i_1 = 0
    void* var_a4 = ebx_1
    
    if (not(cond:0))
        int32_t var_d4_1 = 0
        int32_t* var_a0_1 = ecx + 0x48
        int32_t edi
        int32_t var_124 = edi
        void* esp_2 = &var_124
        int32_t i
        
        do
            if (*(ebx_1 + 0x30) != 0)
                int32_t esi_1 = *(arg1 + 0x9c)
                uint32_t ecx_5 = *(ebx_1 + 0xc)
                int32_t var_e0_1
                uint32_t var_8c_1
                uint32_t eax_10
                
                if (esi_1 u>= eax_4)
                    uint32_t temp1_1 = modu.dp.d(0:(*(ebx_1 + 0x20)), ecx_5)
                    var_8c_1 = temp1_1
                    
                    if (temp1_1 == 0)
                        var_8c_1 = ecx_5
                    
                    eax_10 = var_8c_1
                    var_e0_1 = 1
                else
                    var_8c_1 = ecx_5
                    eax_10 = ecx_5 * 2
                    var_e0_1 = 0
                
                *(esp_2 - 4) = 0
                int32_t var_104_1
                int32_t eax_17
                void* esp_8
                int32_t* esi_4
                
                if (esi_1 == 0)
                    esi_4 = var_a0_1
                    int32_t edx_8 = *esi_4
                    void* ecx_9 = *(arg1 + 4)
                    *(esp_2 - 8) = eax_10
                    int32_t eax_18 = *(ecx_9 + 0x20)
                    *(esp_2 - 0xc) = 0
                    *(esp_2 - 0x10) = edx_8
                    *(esp_2 - 0x14) = arg1
                    eax_17 = eax_18()
                    esp_8 = esp_2 - 4
                    var_104_1 = 1
                else
                    int32_t ecx_8 = *(*(arg1 + 4) + 0x20)
                    *(esp_2 - 8) = eax_10 + ecx_5
                    *(esp_2 - 0xc) = (esi_1 - 1) * ecx_5
                    esi_4 = var_a0_1
                    *(esp_2 - 0x10) = *esi_4
                    *(esp_2 - 0x14) = arg1
                    esp_8 = esp_2 - 4
                    eax_17 = ecx_8() + (*(ebx_1 + 0xc) << 2)
                    var_104_1 = 0
                
                void* eax_20 = *(ecx + 0x70) + var_d4_1
                esp_2 = esp_8 + 0x14
                int16_t* eax_21 = *(ebx_1 + 0x4c)
                uint32_t edx_9 = zx.d(*eax_21)
                uint32_t ecx_11 = zx.d(eax_21[1])
                uint32_t edx_10 = zx.d(eax_21[8])
                uint32_t ecx_12 = zx.d(eax_21[0x10])
                uint32_t edx_11 = zx.d(eax_21[9])
                uint32_t eax_22 = zx.d(eax_21[2])
                int32_t edx_12 = *(*(arg1 + 0x1c0) + 0xffffffb8 - ecx + esi_4 + 4)
                int32_t var_bc_1 = *(arg2 + (i_1 << 2))
                int32_t var_b8_1 = 0
                
                if (var_8c_1 s> 0)
                    int32_t eax_96
                    
                    do
                        int16_t* eax_24 = *(eax_17 + (var_b8_1 << 2))
                        void* var_94_1 = eax_24
                        int16_t* ecx_16
                        
                        if (var_104_1 != 0)
                            ecx_16 = eax_24
                        
                        if (var_104_1 == 0 || var_b8_1 != 0)
                            ecx_16 = *(eax_17 + (var_b8_1 << 2) - 4)
                        
                        if (var_e0_1 == 0 || var_b8_1 != var_8c_1 - 1)
                            eax_24 = *(eax_17 + (var_b8_1 << 2) + 4)
                        
                        int32_t esi_6 = sx.d(*var_94_1)
                        int32_t edx_16 = sx.d(*eax_24)
                        int32_t edi_5 = sx.d(*ecx_16)
                        int32_t var_b0_1 = edx_16
                        int32_t var_a8_1 = edx_16
                        int32_t var_e8_1 = edx_16
                        int32_t edx_18 = *(ebx_1 + 0x1c) - 1
                        int32_t var_c4_1 = edi_5
                        int32_t var_b4_1 = edi_5
                        int32_t var_9c_1 = esi_6
                        int32_t var_c0_1 = esi_6
                        int32_t var_c8_1 = 0
                        int32_t var_d8_1 = 0
                        void* var_dc_1 = ecx_16 + 0x80
                        void* var_d0_1 = eax_24 + 0x80
                        int32_t edx_66
                        int32_t eax_93
                        
                        do
                            *(esp_2 - 4) = 1
                            void var_88
                            *(esp_2 - 8) = &var_88
                            *(esp_2 - 0xc) = var_94_1
                            sub_67d200()
                            
                            if (var_d8_1 u< edx_18)
                                esi_6 = sx.d(*(var_94_1 + 0x80))
                                var_c4_1 = sx.d(*var_dc_1)
                                var_b0_1 = sx.d(*var_d0_1)
                            
                            int32_t ecx_21 = *(eax_20 + 4)
                            int16_t var_86
                            
                            if (ecx_21 != 0 && var_86 == 0)
                                int32_t edx_23 = (var_c0_1 - esi_6) * edx_9 * 0x12
                                uint32_t eax_32 = ecx_11 << 7
                                uint32_t ebx_3 = ecx_11 << 8
                                int32_t edx_24 = edx_23 * 2
                                int32_t eax_35
                                
                                if (edx_23 * 2 s< 0)
                                    int32_t eax_38 = divs.dp.d(sx.q(eax_32 - edx_24), ebx_3)
                                    
                                    if (ecx_21 s> 0)
                                        int32_t edx_30 = 1 << ecx_21.b
                                        
                                        if (eax_38 s>= edx_30)
                                            eax_38 = edx_30 - 1
                                    
                                    eax_35 = neg.d(eax_38)
                                else
                                    eax_35 = divs.dp.d(sx.q(eax_32 + edx_24), ebx_3)
                                    
                                    if (ecx_21 s> 0)
                                        int32_t edx_27 = 1 << ecx_21.b
                                        
                                        if (eax_35 s>= edx_27)
                                            eax_35 = edx_27 - 1
                                
                                ebx_1 = var_a4
                                var_86 = eax_35.w
                            
                            int32_t ecx_22 = *(eax_20 + 8)
                            int16_t var_78
                            
                            if (ecx_22 != 0 && var_78 == 0)
                                int32_t edx_32 = (var_b4_1 - var_a8_1) * edx_9 * 0x12
                                uint32_t eax_44 = edx_10 << 7
                                uint32_t ebx_5 = edx_10 << 8
                                int32_t edx_33 = edx_32 * 2
                                int32_t eax_47
                                
                                if (edx_32 * 2 s< 0)
                                    int32_t eax_50 = divs.dp.d(sx.q(eax_44 - edx_33), ebx_5)
                                    
                                    if (ecx_22 s> 0)
                                        int32_t edx_39 = 1 << ecx_22.b
                                        
                                        if (eax_50 s>= edx_39)
                                            eax_50 = edx_39 - 1
                                    
                                    eax_47 = neg.d(eax_50)
                                else
                                    eax_47 = divs.dp.d(sx.q(eax_44 + edx_33), ebx_5)
                                    
                                    if (ecx_22 s> 0)
                                        int32_t edx_36 = 1 << ecx_22.b
                                        
                                        if (eax_47 s>= edx_36)
                                            eax_47 = edx_36 - 1
                                
                                ebx_1 = var_a4
                                var_78 = eax_47.w
                            
                            int32_t ecx_24 = *(eax_20 + 0xc)
                            int16_t var_68
                            
                            if (ecx_24 != 0 && var_68 == 0)
                                int32_t edx_42 = (var_a8_1 - var_9c_1 * 2 + var_b4_1) * edx_9 * 9
                                uint32_t eax_56 = ecx_12 << 7
                                uint32_t ebx_7 = ecx_12 << 8
                                int32_t eax_59
                                
                                if (edx_42 s< 0)
                                    int32_t eax_62 = divs.dp.d(sx.q(eax_56 - edx_42), ebx_7)
                                    
                                    if (ecx_24 s> 0)
                                        int32_t edx_48 = 1 << ecx_24.b
                                        
                                        if (eax_62 s>= edx_48)
                                            eax_62 = edx_48 - 1
                                    
                                    eax_59 = neg.d(eax_62)
                                else
                                    eax_59 = divs.dp.d(sx.q(eax_56 + edx_42), ebx_7)
                                    
                                    if (ecx_24 s> 0)
                                        int32_t edx_45 = 1 << ecx_24.b
                                        
                                        if (eax_59 s>= edx_45)
                                            eax_59 = edx_45 - 1
                                
                                ebx_1 = var_a4
                                var_68 = eax_59.w
                            
                            int32_t ecx_25 = *(eax_20 + 0x10)
                            int16_t var_76
                            
                            if (ecx_25 != 0 && var_76 == 0)
                                int32_t edx_49 = (var_b0_1 - var_e8_1 - var_c4_1 + edi_5) * edx_9 * 5
                                uint32_t eax_70 = edx_11 << 7
                                uint32_t edi_7 = edx_11 << 8
                                int32_t eax_73
                                
                                if (edx_49 s< 0)
                                    int32_t eax_76 = divs.dp.d(sx.q(eax_70 - edx_49), edi_7)
                                    
                                    if (ecx_25 s> 0)
                                        int32_t edx_55 = 1 << ecx_25.b
                                        
                                        if (eax_76 s>= edx_55)
                                            eax_76 = edx_55 - 1
                                    
                                    eax_73 = neg.d(eax_76)
                                else
                                    eax_73 = divs.dp.d(sx.q(eax_70 + edx_49), edi_7)
                                    
                                    if (ecx_25 s> 0)
                                        int32_t edx_52 = 1 << ecx_25.b
                                        
                                        if (eax_73 s>= edx_52)
                                            eax_73 = edx_52 - 1
                                
                                var_76 = eax_73.w
                            
                            int32_t ecx_27 = *(eax_20 + 0x14)
                            int16_t var_84
                            
                            if (ecx_27 != 0 && var_84 == 0)
                                int32_t edx_58 = (esi_6 - var_9c_1 * 2 + var_c0_1) * edx_9 * 9
                                uint32_t eax_82 = eax_22 << 7
                                uint32_t edi_9 = eax_22 << 8
                                int32_t eax_85
                                
                                if (edx_58 s< 0)
                                    int32_t eax_88 = divs.dp.d(sx.q(eax_82 - edx_58), edi_9)
                                    
                                    if (ecx_27 s> 0)
                                        int32_t edx_64 = 1 << ecx_27.b
                                        
                                        if (eax_88 s>= edx_64)
                                            eax_88 = edx_64 - 1
                                    
                                    eax_85 = neg.d(eax_88)
                                else
                                    eax_85 = divs.dp.d(sx.q(eax_82 + edx_58), edi_9)
                                    
                                    if (ecx_27 s> 0)
                                        int32_t edx_61 = 1 << ecx_27.b
                                        
                                        if (eax_85 s>= edx_61)
                                            eax_85 = edx_61 - 1
                                
                                var_84 = eax_85.w
                            
                            *(esp_2 - 4) = var_c8_1
                            *(esp_2 - 8) = var_bc_1
                            *(esp_2 - 0xc) = &var_88
                            *(esp_2 - 0x10) = ebx_1
                            *(esp_2 - 0x14) = arg1
                            edx_12()
                            edi_5 = var_b4_1
                            var_e8_1 = var_a8_1
                            var_94_1 += 0x80
                            var_dc_1 += 0x80
                            var_d0_1 += 0x80
                            var_c0_1 = var_9c_1
                            edx_66 = *(ebx_1 + 0x24)
                            var_c8_1 += edx_66
                            eax_93 = var_d8_1 + 1
                            var_b4_1 = var_c4_1
                            var_9c_1 = esi_6
                            var_a8_1 = var_b0_1
                            var_d8_1 = eax_93
                        while (eax_93 u<= edx_18)
                        eax_96 = var_b8_1 + 1
                        var_bc_1 += edx_66 << 2
                        var_b8_1 = eax_96
                    while (eax_96 s< var_8c_1)
            
            var_d4_1 += 0x18
            var_a0_1 = &var_a0_1[1]
            i = i_1 + 1
            ebx_1 += 0x54
            i_1 = i
            var_a4 = ebx_1
        while (i s< *(arg1 + 0x24))
        *esp_2
        esp_1 = esp_2 + 4
    
    *(arg1 + 0x9c) += 1
    int32_t eax_98 = *(arg1 + 0x9c)
    *esp_1
    int32_t result = sbb.d(eax_98, eax_98, eax_98 u< *(arg1 + 0x140)) + 4
    esp_1[1]
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
