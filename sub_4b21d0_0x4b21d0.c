// 函数名称: sub_4b21d0
// 虚拟地址: 0x4b21d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b21d0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i = 0
    int32_t var_410 = 0xffffffff
    int32_t var_418 = 0xffffffff
    int32_t var_41c = 0xffffffff
    int32_t var_414 = 0
    
    if (*(arg1 + 0x18) == 0)
        void* const var_430_1 = &data_8752c0
        char const* const var_434_1 = "=== End of game ===\n"
        sub_4c5680("%s (%s)")
    
    sub_4b2040()
    int32_t edx = sx.d(*(arg1 + 0x460))
    int32_t ecx_1 = 0
    
    if (edx s> 0)
        void* eax_2 = arg1 + 0x465
        
        do
            if (*(*(eax_2 + 7) + 0xe) == 1)
                if (*eax_2 != 3)
                    break
                
                var_410 = sx.d(*(eax_2 - 1))
            
            ecx_1 += 1
            eax_2 += 0x14
        while (ecx_1 s< edx)
    
    char var_40c[0x404]
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_4 = arg1 + 0xaa
        
        do
            int32_t eax_3 = sx.d(*edi_4)
            
            if (eax_3 s> var_418)
                var_418 = eax_3
            
            if (*(arg1 + 0x18) == 0 && i == var_410)
                int32_t var_430_2 = (&data_8c6740)[sx.d(*(arg1 + 0x1eb5))]
                int32_t var_434_2 = *(edi_4 - 0x8a)
                sub_5a733b(&var_40c, "%s changes Alien Oort Cloud Refinery's kind to %s.\n")
                char const* const var_440_1 = "verbose"
                char (* var_444_1)[0x404] = &var_40c
                sub_4c5680("%s (%s)")
            
            i += 1
            edi_4 += 0xb4
        while (i s< sx.d(*(arg1 + 0x458)))
    
    int32_t result = sx.d(*(arg1 + 0x458))
    int32_t edi_5 = 0
    
    if (result s> 0)
        void* ebx = arg1 + 0x44
        
        do
            if (sx.d(*(ebx + 0x66)) s>= var_418)
                var_414 += 1
                
                if (edi_5 s< 0)
                label_4b255f:
                    sub_49b2a0()
                    noreturn
                
                int32_t i_1 = sx.d(*ebx)
                int32_t edx_3 = 0
                
                if (i_1 s< 0xffffffff)
                    goto label_4b255f
                
                while (i_1 != 0xffffffff)
                    i_1 = sx.d(*(arg1 + ((i_1 * 5 + 0x11d) << 2)))
                    edx_3 += 1
                
                int32_t i_2 = sx.d(*(ebx + 4))
                int32_t ecx_4 = 0
                
                if (i_2 s< 0xffffffff)
                    goto label_4b255f
                
                while (i_2 != 0xffffffff)
                    i_2 = sx.d(*(arg1 + ((i_2 * 5 + 0x11d) << 2)))
                    ecx_4 += 1
                
                int32_t eax_7 = ecx_4 + edx_3
                
                if (eax_7 s> var_41c)
                    var_41c = eax_7
            
            result = sx.d(*(arg1 + 0x458))
            edi_5 += 1
            ebx += 0xb4
        while (edi_5 s< result)
    
    int32_t ebx_1 = 0
    int32_t var_420_1 = 0
    
    if (result s> 0)
        void* edi_6 = arg1 + 0xaa
        void* var_410_1 = edi_6
        
        do
            if (*(arg1 + 0x18) == 0)
                int16_t ecx_5 = *edi_6
                char* const eax_8 = &data_83f3d3
                
                if (ecx_5 != 1)
                    eax_8 = &data_85f840
                
                char* const var_430_3 = eax_8
                int32_t var_434_3 = sx.d(ecx_5)
                int32_t var_438_1 = *(edi_6 - 0x8a)
                sub_5a733b(&var_40c, "%s ends with %d VP%s.\n")
                sub_4c5680(&var_40c)
            
            if (sx.d(*edi_6) s>= var_418)
                if (ebx_1 s< 0)
                    goto label_4b255f
                
                int32_t i_3 = sx.d(*(edi_6 - 0x66))
                int32_t ebx_2 = 0
                
                if (i_3 s< 0xffffffff)
                    goto label_4b255f
                
                while (i_3 != 0xffffffff)
                    i_3 = sx.d(*(arg1 + ((i_3 * 5 + 0x11d) << 2)))
                    ebx_2 += 1
                
                int32_t i_4 = sx.d(*(var_410_1 - 0x62))
                int32_t edi_7 = 0
                
                if (i_4 s< 0xffffffff)
                    goto label_4b255f
                
                while (i_4 != 0xffffffff)
                    i_4 = sx.d(*(arg1 + ((i_4 * 5 + 0x11d) << 2)))
                    edi_7 += 1
                
                if (*(arg1 + 0x18) == 0 && var_414 s> 1)
                    char* const ecx_8 = &data_83f3d3
                    
                    if (edi_7 != 1)
                        ecx_8 = &data_85f840
                    
                    char* const eax_10 = &data_83f3d3
                    
                    if (ebx_2 != 1)
                        eax_10 = &data_85f840
                    
                    char* const var_430_5 = ecx_8
                    int32_t var_434_4 = edi_7
                    char* const var_438_2 = eax_10
                    int32_t var_43c_2 = ebx_2
                    int32_t var_440_3 = *(var_410_1 - 0x8a)
                    sub_5a733b(&var_40c, "%s has %d card%s in hand and %d good%s on worlds.\n")
                    sub_4c5680(&var_40c)
                
                edi_6 = var_410_1
                
                if (edi_7 + ebx_2 s>= var_41c)
                    *(edi_6 + 2) = 1
            
            result = sx.d(*(arg1 + 0x458))
            ebx_1 = var_420_1 + 1
            edi_6 += 0xb4
            var_420_1 = ebx_1
            var_410_1 = edi_6
        while (ebx_1 s< result)
    
    if (*(arg1 + 0x18) == 0)
        int32_t i_5 = 0
        
        if (*(arg1 + 0x458) s> 0)
            void* edi_9 = arg1 + 0xaa
            
            do
                if (*(edi_9 + 2) != 0)
                    int16_t ecx_9 = *edi_9
                    char* const eax_11 = &data_83f3d3
                    
                    if (var_414 s<= 1)
                        if (ecx_9 != 1)
                            eax_11 = &data_85f840
                        
                        char* const var_430_8 = eax_11
                        int32_t var_434_6 = sx.d(ecx_9)
                        int32_t var_438_4 = *(edi_9 - 0x8a)
                        sub_5a733b(&var_40c, "%s wins with %d VP%s.\n")
                    else
                        if (ecx_9 != 1)
                            eax_11 = &data_85f840
                        
                        int32_t var_430_7 = var_41c
                        char* const var_434_5 = eax_11
                        int32_t var_438_3 = sx.d(ecx_9)
                        int32_t var_43c_3 = *(edi_9 - 0x8a)
                        sub_5a733b(&var_40c, "%s wins with %d VP%s and %d as tie breaker.\n")
                    
                    void* const var_430_9 = &data_8752c0
                    char (* var_434_7)[0x404] = &var_40c
                    result = sub_4c5680("%s (%s)")
                
                i_5 += 1
                edi_9 += 0xb4
            while (i_5 s< sx.d(*(arg1 + 0x458)))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
