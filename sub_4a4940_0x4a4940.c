// 函数名称: sub_4a4940
// 虚拟地址: 0x4a4940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a4940(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ esi, char* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg2
    int32_t edi = arg3
    int32_t ecx = ebx * 5
    int32_t eax_5 = edi * 5
    int32_t var_81c = edi
    int32_t var_820 = ebx
    int32_t result = sub_4a48c0(ebx, arg4, edi)
    
    if (result == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    void* edx_2 = arg4 + (ecx << 2) + 0x464
    
    if (*(edx_2 + 0xe) != 0)
        for (int32_t i = sx.d(*(arg5 * 0xb4 + arg4 + 0x48)); i != 0xffffffff; 
                i = sx.d(*(arg4 + ((i * 5 + 0x11d) << 2))))
            int32_t ecx_5 = i * 5
            
            if (sx.d(*(arg4 + (ecx_5 << 2) + 0x470)) == ebx)
                int32_t var_83c_1 = 1
                sub_49cc30(arg4, i, ecx_5, 0xffffffff)
                
                if (*(arg4 + 0x18) == 0)
                    sub_49bf50(arg5)
                    ebx = var_820
        
        edx_2 = arg4 + (ecx << 2) + 0x464
        edi = var_81c
        *(edx_2 + 0xe) = 0
    
    void* ecx_7 = *(arg4 + (ecx << 2) + 0x46c)
    
    if ((*(ecx_7 + 0x10) & 0x4000) != 0)
        int32_t i_1 = 0
        
        if (0 s< *(arg4 + 0x460))
            void* var_824_1 = arg4 + 0x465
            
            do
                ecx_7 = var_824_1
                
                if (*ecx_7 == 5)
                    int32_t var_83c_3 = 1
                    edx_2 = sub_49cc30(arg4, i_1, ecx_7, 0xffffffff)
                    
                    if (*(arg4 + 0x18) == 0)
                        edx_2 = sub_49c090(arg5)
                        ebx = var_820
                
                var_824_1 += 0x14
                i_1 += 1
            while (i_1 s< sx.d(*(arg4 + 0x460)))
        
        edi = var_81c
    
    if (*(arg4 + 0x18) == 0)
        int32_t var_83c_5 = edi
        sub_49c310(arg5, edx_2)
        int32_t var_83c_6 = **(arg4 + (eax_5 << 2) + 0x46c)
        int32_t var_840_1 = **(arg4 + (ecx << 2) + 0x46c)
        int32_t var_844_1 = *(arg5 * 0xb4 + arg4 + 0x20)
        char var_410[0x404]
        sub_5a733b(&var_410, "%s uses Terraforming Engineers to replace %s with %s.\n")
        char (* var_83c_8)[0x404] = &var_410
        ecx_7 = sub_4591b0(sub_4c5680(&var_410), &var_410, arg4, arg5)
        ebx = var_820
        edi = var_81c
    
    int32_t var_83c_9 = 1
    int32_t edx_13 = sub_49f030(sub_49cc30(arg4, ebx, ecx_7, 0xffffffff), edi, arg4, arg5, 0)
    *(arg5 * 0xb4 + arg4 + 0xa3) += 1
    
    if (*(arg4 + 0x18) == 0)
        int32_t var_83c_10 = 1
        sub_49b990(arg5, edx_13)
        
        if (*(arg4 + 0x18) == 0)
            char const* const var_83c_11 = "Terraforming Engineers"
            int32_t var_840_3 = 1
            int32_t var_844_2 = *(arg5 * 0xb4 + arg4 + 0x20)
            void var_810
            sub_5a733b(&var_810, "%s receives %d prestige from %s.\n")
            char const* const var_83c_12 = "verbose"
            void* var_840_4 = &var_810
            sub_4c5680("%s (%s)")
    
    *(arg5 * 0xb4 + arg4 + 0xa4) = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
