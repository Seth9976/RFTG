// 函数名称: sub_528c70
// 虚拟地址: 0x528c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_528c70(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    int32_t var_810 = 0
    int128_t var_80c[0x3f]
    sub_5abfc0(&var_80c, 0, 0x3fc)
    int128_t var_410[0x40]
    sub_5abfc0(&var_410, 0, 0x400)
    int32_t ebx = arg3[1]
    int32_t i = 0
    
    if (ebx s> 0)
        void* edx = *arg3
        int128_t (* eax_2)[0x40] = &var_410
        
        do
            *eax_2 -= 1
            
            if (esi == arg4)
                int32_t result = (&var_810)[i]
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
            
            int32_t edi_1 = *(edx + 8)
            i += 1
            eax_2 = &(&__saved_ebp)[i - 0x103]
            *eax_2 = edi_1
            (&var_810)[i] = edx
            
            if (edi_1 == 0)
                while (i s> 0)
                    i -= 1
                    eax_2 = &(&__saved_ebp)[i - 0x103]
                    
                    if (*(&var_410 + (i << 2)) != 0)
                        break
            
            esi += 1
            edx += 0xc
        while (esi s< ebx)
        
        if (i != 0)
            sub_4c5870("indent == 0", &data_83f3d3, "UI2.cpp", 0xe5f, "AttribTreeFindParent")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}
