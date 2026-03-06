// 函数名称: sub_445560
// 虚拟地址: 0x445560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_445560(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int128_t* ecx = __chkstk(0x1ef4)
    int128_t* ecx = __chkstk(0x1ef4)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int128_t* edi = ecx
    int32_t edx = 0xffffffff
    int32_t i = 0
    int128_t* var_1ef4 = edi
    
    if (0 s< edi[0x46].w)
        void* ecx_1 = edi + 0x465
        
        do
            if (*(*(ecx_1 + 7) + 0xe) == 1)
                if (*ecx_1 != 3)
                    break
                
                edx = sx.d(*(ecx_1 - 1))
            
            i += 1
            ecx_1 += 0x14
        while (i s< sx.d(edi[0x46].w))
    
    char* entry_ebx
    
    if (edx != entry_ebx)
        int32_t eax_19 = sub_4b1ae0(i, edi, entry_ebx, arg2, 1)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return eax_19
    
    int32_t var_1ee8 = 0xfffffff6
    int32_t var_1ef0 = 0
    void* eax_3 = sub_46b2b0(*(data_27e7a40 + 0x74))
    int32_t ecx_2 = *(eax_3 + 0x1f84)
    
    if (ecx_2 != 1 && ecx_2 != 0)
        char ecx_3 = *(edi + 0x1eb4)
        *(edi + 0x1eb4) = *(eax_3 + 0x1f84)
        int32_t eax_5 = sub_4b1ae0(arg2, edi, entry_ebx, arg2, 1)
        *(edi + 0x1eb4) = ecx_3
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return eax_5
    
    void* eax_7 = edi + arg2 * 0x14 + 0x464
    int32_t var_1ee0 = 2
    
    while (true)
        char var_1ec0_1 = 1
        void var_1ed8
        void* var_10_3 = &var_1ed8
        sub_4b1e20(entry_ebx, 
            sub_4ae7d0(sub_5ab990(&var_1ed8, edi, 0x1ec8, arg1), entry_ebx, 0xd, &var_1ed8))
        char var_24_2 = var_1ee0.b
        int32_t eax_12 = sub_4b1ae0(arg2, &var_1ed8, entry_ebx, arg2, 1)
        char var_24_3 = var_1ee0.b
        int16_t var_1e2e[0xf05]
        int32_t ecx_12 = sx.d(var_1e2e[entry_ebx * 0x5a])
        
        if (*(eax_7 + 1) != 3)
            ecx_12 += eax_12
        
        char var_23
        
        if (ecx_12 s> var_1ee8)
            var_1ee8 = ecx_12
            var_1ef0 = eax_12
        else if (ecx_12 == var_1ee8 && var_1ee0 == sx.d(var_23))
            var_1ee8 = ecx_12
            var_1ef0 = eax_12
        int32_t eax_14 = var_1ee0 + 1
        var_1ee0 = eax_14
        
        if (eax_14 s> 5)
            break
        
        edi = var_1ef4
    
    if (*(eax_7 + 1) == 3)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return var_1ef0
    
    int32_t eax_17 = var_1ee8 - sx.d(*(entry_ebx * 0xb4 + var_1ef4 + 0xaa))
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return eax_17
}
