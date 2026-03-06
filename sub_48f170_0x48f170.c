// 函数名称: sub_48f170
// 虚拟地址: 0x48f170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_48f170(int32_t arg1, char arg2, void* arg3, char arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t i_5 = sx.d(*(arg3 + 0x460))
    int32_t eax_2 = 0
    void var_410
    
    if (i_5 s> 0)
        void* esi_1 = arg3 + 0x465
        int32_t i_4 = i_5
        int32_t i
        
        do
            i_5.b = *esi_1
            *(&var_410 + eax_2) = i_5.b
            eax_2 += 1
            
            if (i_5.b != 0 && i_5.b != 1)
                *(&var_410 + eax_2) = *(esi_1 - 1)
                eax_2 += 1
            
            if (i_5.b == 4)
                i_5.b = *(esi_1 + 0xb)
                *(&var_410 + eax_2) = i_5.b
                eax_2 += 1
            
            esi_1 += 0x14
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t i_6 = sx.d(*(arg3 + 0x458))
    void var_40f
    void var_40e
    void var_40d
    
    if (i_6 s> 0)
        i_5 = arg3 + 0x68
        int32_t i_3 = i_6
        int32_t i_1
        
        do
            *(&var_410 + eax_2) = *(i_5 + 0x3e)
            *(&var_40f + eax_2) = *(i_5 + 0x3b)
            *(&var_40e + eax_2) = *(i_5 - 0x2c)
            *(&var_40d + eax_2) = *(i_5 + 0x4a)
            void var_40c
            *(&var_40c + eax_2) = *(i_5 + 0x46)
            void var_40b
            *(&var_40b + eax_2) = *(i_5 + 0x48)
            void var_40a
            *(&var_40a + eax_2) = *(i_5 + 0x4b)
            char var_409[0x3fd]
            var_409[eax_2] = *(i_5 + 0x4c)
            eax_2 += 8
            int32_t j = 0
            void* edi_1 = arg3 + 0x1e08
            
            do
                if (*(edi_1 - 2) != 0)
                    *(&var_410 + eax_2) = *(i_5 + j - 1)
                    eax_2 += 1
                
                if (*edi_1 != 0)
                    *(&var_410 + eax_2) = *(i_5 + j)
                    eax_2 += 1
                
                if (*(edi_1 + 2) != 0)
                    *(&var_410 + eax_2) = *(i_5 + j + 1)
                    eax_2 += 1
                
                if (*(edi_1 + 4) != 0)
                    *(&var_410 + eax_2) = *(i_5 + j + 2)
                    eax_2 += 1
                
                if (*(edi_1 + 6) != 0)
                    *(&var_410 + eax_2) = *(i_5 + j + 3)
                    eax_2 += 1
                
                j += 5
                edi_1 += 0xa
            while (j s< 0x14)
            
            i_5 += 0xb4
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    i_5.b = arg4
    char edx_8 = *(arg3 + 0x19)
    *(&var_410 + eax_2) = i_5.b
    char ecx = *(arg3 + 0x1ec0)
    *(&var_40f + eax_2) = edx_8
    uint32_t edx_9 = zx.d(*(arg3 + 0x1ec3))
    *(&var_40e + eax_2) = ecx
    *(&var_40d + eax_2) = edx_9.b
    void* var_424 = &var_410
    int32_t eax_4
    int32_t edx_10
    eax_4, edx_10 = sub_48eac0(eax_2 + 4, edx_9)
    uint32_t edx_12 = zx.d(eax_4.w)
    int32_t* i_2 = *((edx_12 << 2) + &data_2649940)
    void* edi_2 = (edx_12 << 2) + &data_2649940
    
    for (; i_2 != 0; i_2 = i_2[4])
        if (*i_2 == eax_4 && i_2[1] == edx_10)
            goto label_48f362
    
    i_2 = sub_48f000()
    *(i_2 + 8) = fconvert.d(fconvert.t(-1.0))
    *i_2 = eax_4
    i_2[1] = edx_10
    i_2[4] = *edi_2
    *edi_2 = i_2
    label_48f362:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i_2
}
